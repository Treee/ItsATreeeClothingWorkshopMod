class SRP_PostBoxKeys_ColorBase extends ItemBase
{
  static ref ScriptInvoker SyncEvent_OnPostBoxKeysInfoUpdate = new ScriptInvoker();

  protected string m_KeyOwnerSteamIDHash;
  protected string m_KeyOwnerName;

  override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionUnlockPostBox);
		AddAction(ActionLockPostBox);
	}
  override void OnStoreSave(ParamsWriteContext ctx)
  {
    // Print(string.Format("OnStoreSave %1 %2 %3", GetType(), m_KeyOwnerName, m_KeyOwnerSteamIDHash));
    super.OnStoreSave(ctx);
    ctx.Write(m_KeyOwnerName);
    ctx.Write(m_KeyOwnerSteamIDHash);
  }
  override bool OnStoreLoad(ParamsReadContext ctx, int version)
  {
    if (!super.OnStoreLoad(ctx, version))
      return false;
    if (!ctx.Read(m_KeyOwnerName))
      return false;
    if (!ctx.Read(m_KeyOwnerSteamIDHash))
      return false;
    // Print(string.Format("OnStoreLoad %1 %2 %3", GetType(), m_KeyOwnerName, m_KeyOwnerSteamIDHash));
    return true;
  }
  override void OnRPC( PlayerIdentity sender, int rpc_type,ParamsReadContext ctx ) 
	{
    switch (rpc_type)
    {
      case SRP_PB_ERPCs.RPC_UPDATE_POSTBOXKEY_OWNER:
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
      rpc.Write(GetKeyOwnerName());
      rpc.Write(GetKeyOwnerSteamIDHash());
      rpc.Send(this, SRP_PB_ERPCs.RPC_UPDATE_POSTBOXKEY_OWNER, true, sender);
      return;
    }
    HandleOnClientRPCRead(ctx);
    SyncEvent_OnPostBoxKeysInfoUpdate.Invoke(this);
  }
  void HandleOnClientRPCRead(ParamsReadContext ctx)
  {
    string encodedOwnerName;
    string encodedOwnerSteamIDHash;
    if ( !ctx.Read(encodedOwnerName) )
      return;
    if ( !ctx.Read(encodedOwnerSteamIDHash) )
      return;

    SetKeyOwnerName(encodedOwnerName);      
    SetKeyOwnerID(encodedOwnerSteamIDHash);
  }
  override bool NameOverride(out string output)
	{
    if (GetKeyOwnerName() == "")
      return false;
    output = string.Format("%1's Post Box Keys", GetKeyOwnerName());
		return true;
	}
	override bool DescriptionOverride(out string output)
	{
    if (GetKeyOwnerName() == "")
      return false;
    output = string.Format("Used to lock and unlock post boxes owned by %1.", GetKeyOwnerName());
		return true;
	}
  void TryFetchKeyOwnerInfo()
  {
    if (!GetGame().IsDedicatedServer())
    {
      if (m_KeyOwnerSteamIDHash && m_KeyOwnerName)      
        return;            
      
      ScriptRPC rpc = new ScriptRPC();
      rpc.Send(this, SRP_PB_ERPCs.RPC_UPDATE_POSTBOXKEY_OWNER, true, null);
    }
  }
  void SetKeyOwnerID(string id)
  {
    m_KeyOwnerSteamIDHash = id;
  }
  string GetKeyOwnerName()
  {
    return m_KeyOwnerName;
  }
  void SetKeyOwnerName(string name)
  {
    m_KeyOwnerName = name;
  }
  string GetKeyOwnerSteamIDHash()
  {
    return m_KeyOwnerSteamIDHash;
  }
  bool CanSecurePostBox(string boxId)
  {
    return GetKeyOwnerSteamIDHash() == boxId;
  }    
};

class SRP_PostBoxKeys_User extends SRP_PostBoxKeys_ColorBase{};

class SRP_PostBoxKeys_Admin extends SRP_PostBoxKeys_ColorBase
{
  override bool NameOverride(out string output)
	{
		return false;
	}
  override bool DescriptionOverride(out string output)
	{
    return false;
	}
  override bool CanSecurePostBox(string boxId)
  {
    return true;
  }
};