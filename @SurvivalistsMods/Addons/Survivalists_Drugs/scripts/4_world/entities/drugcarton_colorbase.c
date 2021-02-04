class SRP_DrugCarton_ColorBase extends ItemBase {
  override void SetActions()
	{
		super.SetActions();
		AddAction(SRP_UnPackDrugCarton);
	}
};

class SRP_DrugCarton_ZWeed extends SRP_DrugCarton_ColorBase {};
class SRP_DrugCarton_Cigarette extends SRP_DrugCarton_ColorBase {};
