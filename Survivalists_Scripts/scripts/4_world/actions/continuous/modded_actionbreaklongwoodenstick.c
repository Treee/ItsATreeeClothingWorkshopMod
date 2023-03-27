modded class ActionBreakLongWoodenStick
{
	override void OnFinishProgressServer( ActionData action_data )
	{
		ItemBase startingItem = action_data.m_MainItem;
		
    string newItemName = "WoodenStick";

    if (startingItem && startingItem.GetType().Contains("_Irradiated"))
      newItemName = string.Format("%1_Irradiated", newItemName);

		BreakLongWoodenStick lambda = new BreakLongWoodenStick(action_data.m_MainItem, newItemName, action_data.m_Player, 3);
		action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);
		
		if (LongWoodenStick.Cast(startingItem) == null) // case if it is a broom
		{
			EntityAI longStick = action_data.m_Player.SpawnEntityOnGroundPos("LongWoodenStick", action_data.m_Player.GetPosition());
			
			ItemBase item_result;
			Class.CastTo(item_result, longStick);
			
			MiscGameplayFunctions.TransferItemProperties(action_data.m_MainItem, item_result);
		}
	}
};