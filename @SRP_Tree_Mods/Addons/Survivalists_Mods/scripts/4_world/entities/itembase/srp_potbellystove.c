class SRP_Potbelly_Stove extends BarrelHoles_ColorBase
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTakeFireplaceFromBarrel);
	}
}