class SRP_OwnedItem_Base extends ItemBase
{
  const int RPC_SRP_UPDATE_OWNER_INFO = 891756;
  static ref ScriptInvoker SyncEvent_OnSRPOwnerInfoUpdate = new ScriptInvoker();

  protected string m_SRPOwnerSteamIDHash;
  protected string m_SRPOwnerName;
  override void OnStoreSave(ParamsWriteContext ctx)
  {
    // Print(string.Format("OnStoreSave %1 %2 %3", GetType(), m_SRPOwnerName, m_SRPOwnerSteamIDHash));
    super.OnStoreSave(ctx);
    ctx.Write(m_SRPOwnerName);
    ctx.Write(m_SRPOwnerSteamIDHash);
  }
  override bool OnStoreLoad(ParamsReadContext ctx, int version)
  {
    if (!super.OnStoreLoad(ctx, version))
      return false;
    if (!ctx.Read(m_SRPOwnerName))
      return false;
    if (!ctx.Read(m_SRPOwnerSteamIDHash))
      return false;
    // Print(string.Format("OnStoreLoad %1 %2 %3", GetType(), m_SRPOwnerName, m_SRPOwnerSteamIDHash));
    return true;
  }
  override void OnRPC( PlayerIdentity sender, int rpc_type,ParamsReadContext ctx ) 
	{
    switch (rpc_type)
    {
      case RPC_SRP_UPDATE_OWNER_INFO:
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
      rpc.Write(GetSRPOwnerName());
      rpc.Write(GetSRPOwnerSteamIDHash());
      rpc.Send(this, RPC_SRP_UPDATE_OWNER_INFO, true, sender);
      return;
    }
    HandleOnClientRPCRead(ctx);
    SyncEvent_OnSRPOwnerInfoUpdate.Invoke(this);
  }
  void HandleOnClientRPCRead(ParamsReadContext ctx)
  {
    string encodedOwnerName;
    string encodedOwnerSteamIDHash;
    if ( !ctx.Read(encodedOwnerName) )
      return;
    if ( !ctx.Read(encodedOwnerSteamIDHash) )
      return;

    SetSRPOwnerName(encodedOwnerName);      
    SetSRPOwnerID(encodedOwnerSteamIDHash);
  }
  void TryFetchKeyOwnerInfo()
  {
    if (!GetGame().IsDedicatedServer())
    {
      if (m_SRPOwnerSteamIDHash && m_SRPOwnerName)      
        return;            
      
      ScriptRPC rpc = new ScriptRPC();
      rpc.Send(this, RPC_SRP_UPDATE_OWNER_INFO, true, null);
    }
  }
  void SetSRPOwnerID(string id)
  {
    m_SRPOwnerSteamIDHash = id;
  }
  string GetSRPOwnerName()
  {
    return m_SRPOwnerName;
  }
  void SetSRPOwnerName(string name)
  {
    m_SRPOwnerName = name;
  }
  string GetSRPOwnerSteamIDHash()
  {
    return m_SRPOwnerSteamIDHash;
  }
  bool HasOwner()
  {
    return GetSRPOwnerName() != "";
  }
};