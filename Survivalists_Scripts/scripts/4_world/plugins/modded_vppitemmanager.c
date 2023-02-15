modded class VPPItemManager
{
  void VPPItemManager()
	{
		GetRPCManager().AddRPC("RPC_VPPItemManager", "GetAdminBulkData", this);
		GetRPCManager().AddRPC("RPC_VPPItemManager", "DeleteAdminBulkData", this);
		GetRPCManager().AddRPC("RPC_VPPItemManager", "SpawnAdminBulkData", this);
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
  void DeleteAdminBulkData(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
	{
		Param1<int> data; //timestamp
		if(type == CallType.Server)
		{
			if (!ctx.Read(data)) return;
			if (!GetPermissionManager().VerifyPermission(sender.GetPlainId(), "AdminBulkComp")) return;
			
      if (GetDayZGame().GetAdminHelper().DeleteBulkCompRecordByTimestamp(data.param1))
      {
				GetPermissionManager().NotifyPlayer(sender.GetPlainId(),"Successfully deleted bulk comp: "+data.param1,NotifyTypes.NOTIFY);
				GetSimpleLogger().Log(string.Format("\"%1\" (steamid=%2) deleted the bulk comp: (%3)", sender.GetName(), sender.GetPlainId(), data.param1));
				GetWebHooksManager().PostData(AdminActivityMessage, new AdminActivityMessage(sender.GetPlainId(), sender.GetName(), "[ItemManager] Delete bulk comp: " + data.param1));
        GetRPCManager().VSendRPC( "RPC_AdminBulkComp", "HandleAdminBulkData", new Param1<ref array<ref SRP_BulkCompRecord>>(GetDayZGame().GetAdminHelper().m_BulkCompItems), true, sender);
      }
		}
	}
  void SpawnAdminBulkData(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
	{
		Param1<int> data; //timestamp
		if(type == CallType.Server)
		{
			if (!ctx.Read(data)) return;
			if (!GetPermissionManager().VerifyPermission(sender.GetPlainId(), "AdminBulkComp")) return;
			
			PlayerBase targetPlayer = GetPermissionManager().GetPlayerBaseByID(sender.GetPlainId());
      if (targetPlayer == NULL)
      {
        GetSimpleLogger().Log("[VPPItemManager]:: RPC SpawnAdminBulkData(): FAILED TO SPAWN ITEM BY SENDER: "+sender.GetPlainId()+" PLAYERBASE IS NULL!");
        return;
      }
      SRP_BulkCompRecord bulkRequest = GetDayZGame().GetAdminHelper().GetBulkCompRecordByTimeStamp(data.param1);
      // Print(string.Format("bulk request stuff: %1", bulkRequest.GetRawCompText()));

      TStringArray items = new TStringArray;
      bulkRequest.GetRawCompText().Split(",", items);
      int quantity = -1;
      string itemType;
      TStringArray itemQuantity;
      foreach(string s : items)
      {
        // Print(string.Format("Spawning: %1", s));
        if (s == "")
          continue;
        if (s == "DUB_Mutation1_Empty")
          continue;
        if (s == "DUB_Mutation2_Empty")
          continue;
        
        itemType = s;
        itemQuantity = new TStringArray;
        s.Split(":", itemQuantity);
        // Print("quant: " + itemQuantity.Count() + " s " + s);
        if (itemQuantity.Count() > 0)
        {
          itemType = itemQuantity[0];
          quantity = itemQuantity[1].ToInt();
        }
        // Print(string.Format("ItemType: %1 Quantity: %2 Raw: %3", itemType, quantity, s));
        CreateEntity(itemType, targetPlayer.GetPosition(), -1, quantity);        
      }      

      GetWebHooksManager().PostData(AdminActivityMessage, new AdminActivityMessage(sender.GetPlainId(), sender.GetName(), "[ItemManager] spawn object on self. item: " + data.param1));
			GetSimpleLogger().Log(string.Format("\"%1\" (steamid=%2) Spawned Item: (%3)", sender.GetName(), sender.GetPlainId(), data.param1));
      GetRPCManager().VSendRPC( "RPC_AdminBulkComp", "HandleAdminBulkData", new Param1<ref array<ref SRP_BulkCompRecord>>(GetDayZGame().GetAdminHelper().m_BulkCompItems), true, sender);
		}
	}
};