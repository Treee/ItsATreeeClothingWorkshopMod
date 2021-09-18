class SRP_FacePaintStick: Inventory_Base
{
  int m_facepaintType = 0;
  const string FACEPAINT_PATH = "Survivalists_Mods\\characters\\heads";

	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionFacePaintStickSwitch);		
    AddAction(ActionPaintFace);
	}
	
	override void OnApply(PlayerBase player)
	{
    player.m_facepaintState = m_facepaintType;
    if (!player.IsMale())
    {
      int slot_id = InventorySlots.GetSlotIdFromString("Head");	
      EntityAI players_head = player.GetInventory().FindPlaceholderForSlot( slot_id );
      players_head.SetObjectMaterial( 0, "");
      
      string playerType = player.GetType();
      playerType.Replace("SurvivorF_", "");
      string filepath = "hhl_f_" + playerType + "_body.rvmat";
      string materialPath = FACEPAINT_PATH + player.GetSelectedCamoName() + "\\" + filepath
      player.SetFaceMaterial( materialPath );
    }
    else 
    {
      PluginLifespan module_lifespan = PluginLifespan.Cast( GetPlugin( PluginLifespan ) );
		  module_lifespan.UpdateLifespan( player, true );
    }
		// Print("Face Paint On Apply: player state: " + player.m_facepaintState + " my state: " + m_facepaintType);
	}
};
