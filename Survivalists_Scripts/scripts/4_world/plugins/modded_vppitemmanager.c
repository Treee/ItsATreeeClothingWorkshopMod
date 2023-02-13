modded class VPPItemManager
{
	void SpawnAdminBulk(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
	{
		Param1<ref ItemSpawnParams> data;
		if(type == CallType.Server)
		{
			if (!ctx.Read(data)) return;
			if (!GetPermissionManager().VerifyPermission(sender.GetPlainId(), "AdminBulkComp")) return;
			
			SpawnItemAdminBulk(data.param1,sender.GetPlainId());
			GetSimpleLogger().Log(string.Format("\"%1\" (steamid=%2) spawned AdminBulkComp: (%3)", sender.GetName(), sender.GetPlainId(), data.param1.presetName));
			GetWebHooksManager().PostData(AdminActivityMessage, new AdminActivityMessage(sender.GetPlainId(), sender.GetName(), "[ItemManager] Spawn AdminBulkComp: " + data.param1.presetName));
		}
	}

  private void SpawnItemAdminBulk(ItemSpawnParams params, string senderID)
	{
		// PresetItemData ToSpawn = GetPresetByName(params.presetName);
    // comma separated list
    string bulkCompText = params.presetName;
		if (bulkCompText == "") 
		{
			GetSimpleLogger().Log(string.Format("(steamid=%1) Spawned AdminBulkComp empty.", senderID));
			return;
		}
		
		PlayerBase targetPlayer;
    targetPlayer = GetPermissionManager().GetPlayerBaseByID(senderID);
    if (targetPlayer == null)
    {
      GetSimpleLogger().Log("[VPPItemManager]:: SpawnItemPreset(): FAILED TO SPAWN ITEM BY SENDER: "+senderID+" PLAYERBASE IS NULL!");
      return;
    }

    array<string> items;
    array<string> itemQuantitys;
    params.presetName.Split(",", items);

    foreach(string item : items)
    {
      if (item == "")
        continue;
      item.Split("||", itemQuantitys);
      if (itemQuantitys.Count() > 1)
      {
        Print(string.Format("item: %1 with quantity: %2", itemQuantitys[0], itemQuantitys[1]))
		    // CreateEntity(itemQuantitys[0], targetPlayer.GetPosition(), params.condition, itemQuantitys[1]);
      }
      else
      {
        Print("regular item: " + item)
		    // CreateEntity(item, targetPlayer.GetPosition());
      }
    }
	}
};