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
		// Print("Before: Face Paint On Apply: player state: " + player.m_facepaintState + " my state: " + m_facepaintType);
    player.m_facepaintState = m_facepaintType;
    player.SetSynchDirty();
    // Print("After: Before: Face Paint On Apply: player state: " + player.m_facepaintState + " my state: " + m_facepaintType);
	}
};
