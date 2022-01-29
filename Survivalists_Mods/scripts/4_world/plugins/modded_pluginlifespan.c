modded class PluginLifespan
{
  const string FACEPAINT_PATH = "Survivalists_Mods\\characters\\heads\\";

  override protected void SetPlayerLifespanLevel( PlayerBase player, LifespanLevel level )
	{
		int slot_id = InventorySlots.GetSlotIdFromString("Head");	
		EntityAI players_head = player.GetInventory().FindPlaceholderForSlot( slot_id );

    if (players_head && player.m_facepaintState > 0)
    {
      // Print("server or client??");
      players_head.SetObjectTexture( 0, "");
      players_head.SetObjectMaterial( 0, "");

      player.SetFaceTexture( level.GetTextureName() );
      player.SetFaceMaterial( GetModifiedFaceMaterial(player, level) );
    }
    else
    {
      super.SetPlayerLifespanLevel(player, level);
    }
	}

  string GetModifiedFaceMaterial(PlayerBase player, LifespanLevel level)
  {
    string modifiedMaterial = level.GetMaterialName();
    TStringArray parts = new TStringArray;
    modifiedMaterial.Split("\\", parts);
    // Print("these are parts " + parts[5]);
    modifiedMaterial = FACEPAINT_PATH + player.GetSelectedCamoName() + "\\" + parts[5];
    // Print("facepaint path: " + modifiedMaterial);
    return modifiedMaterial;
  }
};
