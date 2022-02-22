class jmc_dungeon_Door06_Double_Lever extends House
{
  jmc_dungeon_Door06_Double linkedDoor;
  
  override void EEInit() 
  {
		super.EEInit();
		InitializeDoor(GetPosition() + Vector(50,0,0), Vector(0,0,0));
	}

  void InitializeDoor(vector doorPosition, vector doorOrientation)
  {
    jmc_dungeon_Door06_Double newItem = jmc_dungeon_Door06_Double.Cast(GetGame().CreateObjectEx("jmc_dungeon_Door06_Double", doorPosition, ECE_PLACE_ON_SURFACE|ECE_LOCAL));
    if (newItem)
    {
      newItem.SetOrientation(doorOrientation);
    }
    linkedDoor = newItem;
  }

  override void SetActions()
	{
    super.SetActions();

    AddAction(ActionOpenCryptoDoor);
	}

  bool IsLinkedDoorOpen()
  {
    return linkedDoor.IsCryptoDoorOpen();
  }

  bool CanLinkedDoorState() 
  {
		return linkedDoor.CanChangeDoorState();
	}
  
  void PullLever()
  {
    OpenDoor(0);
    linkedDoor.StartOpenDoors();
  }
};

class jmc_dungeon_Door06_Double extends House
{
  bool cryptodoor_state_changing = false;
	bool last_cryptodoor_state_checked = false;
	
	void jmc_dungeon_Door06_Double()
  {
		RegisterNetSyncVariableBool("cryptodoor_state_changing");
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(CheckLastState, 500, false);
	}
	
	override void EEInit() 
  {
		super.EEInit();
		CheckLastState();
	}
	
	void CheckLastState() {
		if (last_cryptodoor_state_checked)
			return;
		last_cryptodoor_state_checked = true;

    // replace with crypto
		// if (GetSecurityConfig().last_cryptodoor_state_checked)
		// 	OpenCryptoDoors();
		// else
			CloseCryptoDoors();
	}
	
	void StartOpenDoors() 
  {
		cryptodoor_state_changing = true;
		SetSynchDirty();
		int time = GetSecurityConfig().door_open_cooldown * 1000;
		//Print("Starting to open Security Doors. Time: " + time + "ms delay");
		
		// Start sirens...
		// StartSirens();
		
		// Start delay for door opening...
		// GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(OpenCryptoDoors, time, false);
		OpenCryptoDoors();

		// Setup auto closing time + warning sirens
		// int warningtime = GetSecurityConfig().siren_doorclosing_warning_delay * 1000;
		// int closedelay = GetSecurityConfig().door_close_cooldown * 1000;
		// int prewarning = closedelay - warningtime;
		
	
		// GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(StartSpawnZombies, 1000, false);
		// GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(StartSirens, prewarning, false);
		// GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(StartCloseDoors, closedelay, false);			
	}

	
	// void StartSirens(){
	// 	GetSireneManager().StartSireneSounds();
	// }
	
	void StartCloseDoors() 
  {
		cryptodoor_state_changing = true;
		SetSynchDirty();
		// int time = GetSecurityConfig().door_close_cooldown * 1000;
		int time = 1 * 1000;
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(CloseCryptoDoors, time, false);
	}
	
	void OpenCryptoDoors() 
  {
		cryptodoor_state_changing = false;
		SetSynchDirty();
    // Print("open server door");
		OpenDoor(0);
		if (GetSecurityConfig().save_door_state) {
			GetSecurityConfig().last_door_state_open = true;
			JsonFileLoader<ref SecurityConfig>.JsonSaveFile("$profile:Deerisle/SecurityDoorConfig.json", GetSecurityConfig());
		}
	}
	
	void CloseCryptoDoors() 
  {
		cryptodoor_state_changing = false;
		SetSynchDirty();
		CloseDoor(0);
		if (GetSecurityConfig().save_door_state) {
			GetSecurityConfig().last_door_state_open = false;
			JsonFileLoader<ref SecurityConfig>.JsonSaveFile("$profile:Deerisle/SecurityDoorConfig.json", GetSecurityConfig());
		}
	}
	
	bool CanChangeDoorState() 
  {
		return !cryptodoor_state_changing;
	}
	
	bool IsCryptoDoorOpen() 
  {
		return IsDoorOpen(0);
	}
};
