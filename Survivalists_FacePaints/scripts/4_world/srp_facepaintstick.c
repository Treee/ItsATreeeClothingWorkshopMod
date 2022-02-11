class SRP_FacePaintStick: Inventory_Base
{
  int camoIndex = 0;

	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionFacePaintStickSwitch);		
    AddAction(ActionPaintFace);
    AddAction(ActionPaintFaceTarget);
	}
	
	override void OnApply(PlayerBase player)
	{
    // Print("PaintStick::OnApply() " + camoIndex);
    player.SetFacePaint(camoIndex);    
	}
};


modded class Rag
{
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionWashFace);		
    AddAction(ActionWashFaceTarget);
	}
};