class SRP_PostBox_KitBase extends ItemBase 
{
  override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);

    if (GetGame().IsDedicatedServer())
		{
      PlayerBase playerPB = PlayerBase.Cast(player);
      if (player)
      {
        SRP_PostBox_Base postBox = SRP_PostBox_Base.Cast( GetGame().CreateObjectEx( GetPostBoxItemName(), position, ECE_PLACE_ON_SURFACE ) );
        postBox.OnPlacementComplete(player, position, orientation);
      }
		}
	}

	override bool IsDeployable() 
  {
    return true;
  }

  override bool IsBasebuildingKit()
  {
    return true;
  }

  override bool CanAssignAttachmentsToQuickbar()
	{
		return false;
	}

  override bool IsTwoHandedBehaviour()
	{
		return true;
	}

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
	}

  string GetPostBoxItemName()
  {
    return string.Format("%1", GetType().Substring(0, GetType().Length() - 4));
  }
};

class SRP_PostBox_Kit extends SRP_PostBox_KitBase{};
class SRP_PostBoxBlue_Kit extends SRP_PostBox_KitBase{};
class SRP_PostBoxWooden_Kit extends SRP_PostBox_KitBase{};


class SRP_PostBox_Base extends SRP_OwnedItem_Base
{
  protected bool m_IsPostBoxLocked = true;  
  protected bool m_HasBeenChecked = false;
  
  void SRP_PostBox_Base()
  {
    RegisterNetSyncVariableBool("m_IsPostBoxLocked");
    ProcessInvulnerabilityCheck(GetInvulnerabilityTypeString());
  }
  override void EEInit() 
  {
		super.EEInit();
    m_IsPostBoxLocked = true;
    m_HasBeenChecked = false;
  }
  override void SetActions()
	{
		super.SetActions();
    AddAction(ActionCheckPostBoxOwner);
		RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);
	}
  override bool CanDisplayAttachmentSlot( string slot_name )
	{
    return CanViewBoxContents();
	}
  override bool CanDisplayCargo()
	{
    return CanViewBoxContents();
	}
  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  override bool CanPutIntoHands (EntityAI parent)
  {
    return false;
  }
  override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
    // Print("SRP_PostBox_Base pre");
		super.OnPlacementComplete(player, position, orientation);
    SetPosition(position);
    SetOrientation(orientation);

    PlayerBase placing_Player;
    if (Class.CastTo(placing_Player, player))
    {
      PlayerIdentity identity = placing_Player.GetIdentity();
      // Print("SRP_PostBox_Base player");
      if (identity)
      {
        // Print("SRP_PostBox_Base identity exists");
        SetSRPOwnerName(identity.GetName());
        SetSRPOwnerID(identity.GetId());
        TryFetchKeyOwnerInfo();
      }
    }
  };
  override void OnVariablesSynchronized()
  {
    super.OnVariablesSynchronized();
	}
  override bool IsContainer()
	{
		return true;
	}
  override string GetInvulnerabilityTypeString()
	{
		return "disableContainerDamage";
	}
  override string GetDisplayName()
  {
    string name = super.GetDisplayName();
    if (GetSRPOwnerName() == "")
      return string.Format("Unowned %1", name);
    return string.Format("%1's %2", GetSRPOwnerName(), name);
  }
  void SetIsPostBoxLocked(bool locked)
  {
    m_IsPostBoxLocked = locked;
  }
  bool IsPostBoxLocked()
  {
    return m_IsPostBoxLocked;
  }
  bool HasBeenChecked()
  {
    return m_HasBeenChecked;
  }
  void SetHasBeenChecked(bool checked)
  {
    m_HasBeenChecked = checked;
  }
  bool IsPlayerOwner(string steamIdHash)
  {
    return GetSRPOwnerSteamIDHash() == steamIdHash;
  }
  bool CanViewBoxContents()
  {
    PlayerBase player;
    if (GetSRPOwnerSteamIDHash() != "" && Class.CastTo(player, GetGame().GetPlayer()))
    {
      // Print("test: " + player.GetIdentity().GetId() + " against " + GetSRPOwnerSteamIDHash());      
      if (IsPlayerOwner(player.GetIdentity().GetId()))
      {
        return true;
      }
    }
    else if (!IsPostBoxLocked())
    {
      // Print("not locked, show cargo");
      return true;
    }    
    return false;
  }
  bool CanDepositLetter()
  {
    return GetInventory().AttachmentCount() < 10;
  }
  bool IsEmpty()
  {
    return GetInventory().AttachmentCount() == 0;
  }
};

class SRP_PostBox extends SRP_PostBox_Base{};
class SRP_PostBoxBlue extends SRP_PostBox_Base{};
class SRP_PostBoxWooden extends SRP_PostBox_Base{};
