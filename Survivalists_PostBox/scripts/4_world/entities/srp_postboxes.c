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


class SRP_PostBox_Base extends DeployableContainer_Base
{
  protected string m_OwnerName;
  protected string m_OwnerSteamIDHash;

  protected bool m_IsPostBoxLocked = true;  
  protected bool m_HasBeenChecked = false;
  
  void SRP_PostBox_Base()
  {
    RegisterNetSyncVariableBool("m_IsPostBoxLocked");
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
  override bool CanDisplayCargo()
	{
    PlayerBase player;
    if (GetOwnerSteamIDHash() != "" && Class.CastTo(player, GetGame().GetPlayer()))
    {
      // Print("test: " + player.GetIdentity().GetId() + " against " + GetOwnerSteamIDHash());      
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
        SetOwnerName(identity.GetName());
        SetOwnerID(identity.GetId());
        TryFetchKeyOwnerInfo();
      }
    }
  };
  override void OnVariablesSynchronized()
  {
    super.OnVariablesSynchronized();
	}
  override void OnStoreSave(ParamsWriteContext ctx)
  {
    // Print(string.Format("OnStoreSave %1 %2 %3", GetType(), m_OwnerName, m_OwnerSteamIDHash));
    super.OnStoreSave(ctx);
    ctx.Write(m_OwnerName);
    ctx.Write(m_OwnerSteamIDHash);
  }
  override bool OnStoreLoad(ParamsReadContext ctx, int version)
  {
    if (!super.OnStoreLoad(ctx, version))
      return false;
    if (!ctx.Read(m_OwnerName))
      return false;
    if (!ctx.Read(m_OwnerSteamIDHash))
      return false;
    // Print(string.Format("OnStoreLoad %1 %2 %3", GetType(), m_OwnerName, m_OwnerSteamIDHash));
    return true;
  }
  override void OnRPC( PlayerIdentity sender, int rpc_type,ParamsReadContext ctx ) 
	{
    switch(rpc_type)
    {
      case SRP_PB_ERPCs.RPC_UPDATE_POSTBOX_OWNER:
        HandleClientServerRPC(sender, ctx);
      break;
    }
    super.OnRPC(sender, rpc_type, ctx);
	}
  void HandleClientServerRPC(PlayerIdentity sender, ParamsReadContext ctx)
  {
    if (GetGame().IsDedicatedServer())
    {
      ScriptRPC rpc = new ScriptRPC();
      rpc.Write(GetOwnerName());
      rpc.Write(GetOwnerSteamIDHash());
      rpc.Send(this, SRP_PB_ERPCs.RPC_UPDATE_POSTBOX_OWNER, true, sender);
      return;
    }
    HandleOnClientRPCRead(ctx);
    SyncEvent_OnPostBoxInfoUpdate.Invoke(this);
  }
  void HandleOnClientRPCRead(ParamsReadContext ctx)
  {
    string encodedOwnerName;
    string encodedOwnerSteamIDHash;
    if ( !ctx.Read(encodedOwnerName) )
      return;
    if ( !ctx.Read(encodedOwnerSteamIDHash) )
      return;

    SetOwnerName(encodedOwnerName);      
    SetOwnerID(encodedOwnerSteamIDHash);
  }
  override string GetDisplayName()
  {
    string name = super.GetDisplayName();
    if (GetOwnerName() == "")
      return string.Format("Unowned %1", name);
    return string.Format("%1's %2", GetOwnerName(), name);
  }
  void TryFetchKeyOwnerInfo()
  {
    if (!GetGame().IsDedicatedServer())
    {
      if (m_OwnerName && m_OwnerSteamIDHash)      
        return;            
      
      ScriptRPC rpc = new ScriptRPC();
      rpc.Send(this, SRP_PB_ERPCs.RPC_UPDATE_POSTBOX_OWNER, true, null);
    }
  }
  void SetOwnerName(string owner)
  {
    m_OwnerName = owner;
  }
  void SetOwnerID(string id)
  {
    m_OwnerSteamIDHash = id;
  }
  void SetIsPostBoxLocked(bool locked)
  {
    m_IsPostBoxLocked = locked;
  }
  bool IsPostBoxLocked()
  {
    return m_IsPostBoxLocked;
  }
  string GetOwnerName()
  {
    return m_OwnerName;
  }
  string GetOwnerSteamIDHash()
  {
    return m_OwnerSteamIDHash;
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
    return GetOwnerSteamIDHash() == steamIdHash;
  }
};

class SRP_PostBox extends SRP_PostBox_Base{};
class SRP_PostBoxBlue extends SRP_PostBox_Base{};
class SRP_PostBoxWooden extends SRP_PostBox_Base{};
