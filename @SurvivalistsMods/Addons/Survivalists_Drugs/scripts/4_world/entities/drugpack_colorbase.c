class SRP_DrugPack_ColorBase extends ItemBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(SRP_UnPackDrugPack);
	}
}
class SRP_DrugPack_ZWeed extends SRP_DrugPack_ColorBase {};
class SRP_DrugPack_Cigarette extends SRP_DrugPack_ColorBase {};
