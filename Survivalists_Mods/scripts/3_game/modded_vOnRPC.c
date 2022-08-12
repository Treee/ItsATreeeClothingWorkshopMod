// THIS IS FOR OVERRIDING VPP+ RPCs
modded class RPCManager
{
	override void VOnRPC(PlayerIdentity sender, Object target, int rpc_type, ParamsReadContext ctx)
	{
    super.VOnRPC(sender, target, rpc_type, ctx);
		
    if (rpc_type != VPPAT_FRAMEWORK_RPC_ID)
			return;
		
		string modName  = string.Empty;
		string funcName = string.Empty;

		string recievedFrom = "server";

		if (GetGame().IsDedicatedServer())
		{
			if (!sender)
				return; //dip out, all RPCs coming from client must have a valid sender.

			recievedFrom = string.Format("%1 %2", sender.GetPlainId(), sender.GetName());

			Param3<string, string, string> serverMetaData;
			if (!ctx.Read(serverMetaData))
				return;

			string pw = serverMetaData.param1;
			modName   = serverMetaData.param2;
			funcName  = serverMetaData.param3;

      WriteToLogs(string.Format("Mod: %1 || RPC sent from %2 trying to execute: %3", modName, recievedFrom, funcName));
		}
	}

	override void VSendRPC(string modName, string funcName, Param params = NULL, bool guaranteed = false, PlayerIdentity sendToIdentity = NULL, Object sendToTarget = NULL)
	{
    super.VSendRPC(modName, funcName, params, guaranteed, sendToIdentity, sendToTarget);
		if ( GetGame().IsServer() && GetGame().IsMultiplayer() )
		{
      string sendTo = "server";
      if ( sendToIdentity == NULL )
			{
				sendTo = "everyone";
			}else 
			{
				sendTo = string.Format("%1 %2", sendToIdentity.GetPlainId(), sendToIdentity.GetName());
			}
      WriteToLogs(string.Format("Mod: %1 || Player %2 executing RPC Function: %3", modName, sendTo, funcName));
		}
	}
};