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
