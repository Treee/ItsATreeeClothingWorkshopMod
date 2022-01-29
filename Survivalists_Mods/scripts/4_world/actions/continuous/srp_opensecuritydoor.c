modded class Jmc_Security_Door
{
  bool m_IsHackingSoundActivated = false;
  int m_CurrentHackingAttempts = 0;
  int m_MaxHackingAttemps = 2;  

  override void StartSirens()
  {
    super.StartSirens();
    m_IsHackingSoundActivated = true;
  }

  override void StartOpenDoors() 
  {
    super.StartOpenDoors();
    m_IsHackingSoundActivated = false;
  }

  void HackDoor()
  {
    m_CurrentHackingAttempts += 1;
  }

  bool CanHack()
  {
    return m_CurrentHackingAttempts < m_MaxHackingAttemps;
  }
};

modded class ElectronicRepairKit
{
  override void SetActions()
  {
    super.SetActions();
    AddAction(ActionSRPHackSecurityDoor);
  }
};

class ActionSRPHackSecurityDoorCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(300);
	}
};

class ActionSRPHackSecurityDoor: ActionContinuousBase
{
	void ActionSRPHackSecurityDoor()
	{
		m_CallbackClass = ActionSRPHackSecurityDoorCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor;
	}
	
	override bool HasProneException()
	{
		return false;
	}

	override bool HasTarget()
	{
		return true;
	}
		
	override string GetText()
	{
		return "Hack Security Door";
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target || !player) return false;
		if( !IsBuilding(target) ) return false;

		Jmc_Security_Door door;
		ElectronicRepairKit hackingKit;
		EntityAI handsItem = player.GetItemInHands();
		if( Class.CastTo(door, target.GetObject()) && Class.CastTo(hackingKit, handsItem))
		{
			if(hackingKit.IsDamageDestroyed())
        return false;
      if (!door.CanHack())
				return false;
			if (GetGame().IsServer() && GetGame().IsMultiplayer())
				return true;
			string name = door.GetActionComponentName(target.GetComponentIndex());
			name.ToLower();
			if (name == "component05" || name == "component06")
				return ( !door.IsSecDoorOpen() && door.CanChangeDoorState());
		}
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
		Jmc_Security_Door door;
		ElectronicRepairKit kit;
		EntityAI handsItem = action_data.m_Player.GetItemInHands();
		if( Class.CastTo(door, action_data.m_Target.GetObject()) && Class.CastTo(kit, handsItem))
		{
      if (!door.m_IsHackingSoundActivated)
      {
			  door.StartSirens();
      }
		}
	}

  override void OnFinishProgressServer(ActionData action_data)
	{
		Jmc_Security_Door door;
		ElectronicRepairKit kit;
    EntityAI handsItem = action_data.m_Player.GetItemInHands();
		if( Class.CastTo(door, action_data.m_Target.GetObject()) && Class.CastTo(kit, handsItem))
		{
			door.StartOpenDoors();
      door.HackDoor();
      kit.AddHealth("", "", -100);
		}
	}
};
