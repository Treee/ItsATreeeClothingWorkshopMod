modded class PlayerBase extends ManBase
{
  string selectedCraftingBench = "";
  Object guiCraftingBench = null;

  override void SetMapOpen(bool state)
	{
    super.SetMapOpen(state);
    // this forces the map to stay open instead of normally forcing it to close
    m_MapCloseRequestProcessed = state;
	}
  
	override void CommandHandler(float pDt, int pCurrentCommandID, bool pCurrentCommandFinished)	
	{
    super.CommandHandler(pDt,pCurrentCommandID,pCurrentCommandFinished);

		if ( (!GetGame().IsMultiplayer() || GetGame().IsClient()) && IsMapOpen())
		{
      HumanInputController hic = GetInputController();
      // close the map if we click while the map is open
			if (hic.IsUseButtonDown()) 
			{
        CloseMap();
        // manually set the request processed to true
        m_MapCloseRequestProcessed = m_MapCloseRequestProcessed;
			}
		}
  }

  override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
  {
    super.OnRPC(sender, rpc_type, ctx);

    switch(rpc_type)
    {
      case SRP_RPC.CHECK_SRP_CONFIG: // this case is for grabbing SRP's config from the server
      {
        Param1<SRPConfig> configParams;
        if(!ctx.Read(configParams)) return;        
        GetDayZGame().SetSRPConfigGlobal(configParams.param1);
        break;
      }
    }
  }
}