modded class EmoteLyingDown
{
	// override void OnBeforeStandardCallbackCreated(int callback_ID, int stancemask, bool is_fullbody)
	// {
  //   Print("callbackid " + callback_ID);
	// 	if (callback_ID > -1)
	// 	{
  //     Print("if callback > -1 "+callback_ID);
	// 		PPEffects.Init();
	// 		PPEffects.EnableBurlapSackBlindness();			
	// 		m_Player.SetMasterAttenuation("BurlapSackAttenuation");
  //     // SetInvisibleRecursive(true,m_Player,{InventorySlots.MASK,InventorySlots.EYEWEAR});
	// 	}
	// }

  // override bool DetermineOverride(out int callback_ID, out int stancemask, out bool is_fullbody)
	// {
  //   Print("if callback < 0 "+callback_ID);
  //   PPEffects.Init();
  //   PPEffects.DisableBurlapSackBlindness();			
  //   m_Player.SetInventorySoftLock(false);
  //   m_Player.SetMasterAttenuation("");

  //   Print("override");
	// 	return true;
	// }
}