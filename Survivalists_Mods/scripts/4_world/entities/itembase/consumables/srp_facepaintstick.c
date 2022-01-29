class SRP_FacePaintStick: Inventory_Base
{
  int m_facepaintType = 0;

	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionFacePaintStickSwitch);		
    AddAction(ActionPaintFace);
	}
	
	override void OnApply(PlayerBase player)
	{
		// Print("on apply");
    player.SetCamoTexture();
    player.SetSynchDirty();
    // Print("After: Before: Face Paint On Apply: player state: " + player.m_facepaintState + " my state: " + m_facepaintType);
	}
};
