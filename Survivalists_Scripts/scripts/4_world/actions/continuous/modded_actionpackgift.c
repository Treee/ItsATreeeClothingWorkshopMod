modded class ActionPackGift
{	
	override void OnFinishProgressServer( ActionData action_data )
	{
		ItemBase item_to_pack = ItemBase.Cast(action_data.m_Target.GetObject());
		ItemBase item = action_data.m_MainItem;
		PlayerBase player = action_data.m_Player;
		string typeName;
		
		if (item_to_pack)
		{
			int x,y;
			GetGame().GetInventoryItemSize( item_to_pack, x, y );
			int rnd = Math.RandomIntInclusive(2, 4);
			
			ReplaceWithNewReciveCargoLambda lambda;
			
			if( x <= 2 && y <= 2 )
			{
				typeName = "GiftBox_Small_" + rnd;
			}
			else if( x <= 3 && y <= 3 )
			{
				typeName = "GiftBox_Medium_" + rnd;
			}
			else if( x <= 5 && y <= 5 )
			{
				typeName = "GiftBox_Large_" + rnd;
			}
			else return;
			
			
			if(!GetGame().IsDedicatedServer())
				player.RemoveQuickBarEntityShortcut(item_to_pack);
			
			lambda = new ReplaceWithNewReciveCargoLambda( item, typeName, player,item_to_pack);
			player.ServerReplaceItemWithNew(lambda);
		}
	}
};

modded class ActionUnpackGift
{	
	override void OnFinishProgressServer( ActionData action_data )
	{
		ItemBase item = ItemBase.Cast(action_data.m_MainItem);
		
		CargoBase cargo = item.GetInventory().GetCargo();
		
		InventoryLocation il_dst = new InventoryLocation;
		InventoryLocation il_src = new InventoryLocation;
		
		float dmg = item.GetHealth01("","");
		
		if( dmg > 0.25 )
		{
			Object paper = GetGame().CreateObjectEx("GiftWrapPaper",action_data.m_Player.GetPosition(),ECE_PLACE_ON_SURFACE,RF_DEFAULT);
			paper.SetHealth01("","", dmg - 0.05 );
		}
		
		for(int i = cargo.GetItemCount() - 1; i >= 0 ; i--)
		{
			EntityAI cargo_item = cargo.GetItem(i);

			GameInventory.SetGroundPosByOwner(action_data.m_Player,cargo_item,il_dst);
			cargo_item.GetInventory().GetCurrentInventoryLocation(il_src);

			if(GetGame().IsDedicatedServer())
				action_data.m_Player.ServerTakeToDst( il_src, il_dst );
			else
				action_data.m_Player.LocalTakeToDst( il_src, il_dst );
		}

		item.DeleteSafe();
	}
};