modded class VPPItemManager
{
  void VPPItemManager()
	{
		GetRPCManager().AddRPC("RPC_VPPItemManager", "GetAdminBulkData", this);
	}
  void GetAdminBulkData(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
	{
		if(type == CallType.Server)
		{
			if (!GetPermissionManager().VerifyPermission(sender.GetPlainId(), "AdminBulkComp", "", false)) return;
			GetRPCManager().VSendRPC( "RPC_AdminBulkComp", "HandleAdminBulkData", new Param1<ref array<ref SRP_BulkCompRecord>>(GetDayZGame().GetAdminHelper().m_BulkCompItems), true, sender);
			GetWebHooksManager().PostData(AdminActivityMessage, new AdminActivityMessage(sender.GetPlainId(), sender.GetName(), "[ItemManager] Sent saved presets data."));
		}
	}
};