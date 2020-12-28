class MyMeth: Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDrugOthers1);
		AddAction(ActionDrugSelf1);
		//AddAction(ActionHealOtherSyringe);
		//AddAction(ActionHealSelfSyringe);
	}	
	
	void OnConsume(PlayerBase player)
	{
		player.GiveShock(1000);
		player.GetStaminaHandler().SetStamina(100);

		player.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
		player.GetModifiersManager().ActivateModifier( eModifiers.MDF_MORPHINE );	
		player.GetModifiersManager().ActivateModifier( eModifiers.MDF_PAINKILLERS );
	}	
}