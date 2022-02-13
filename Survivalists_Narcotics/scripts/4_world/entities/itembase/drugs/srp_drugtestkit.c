class SRP_DrugTestKit: Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionTestDrugsTarget);
		AddAction(ActionTestDrugsSelf);
	}
};
