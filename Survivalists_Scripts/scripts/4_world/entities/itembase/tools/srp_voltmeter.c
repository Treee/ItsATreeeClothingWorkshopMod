class BatteryCharger_VoltMeter extends Inventory_Base
{
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionCheckJammerCurrent);
		AddAction(ActionCheckOilRigCurrent);
	}
};
