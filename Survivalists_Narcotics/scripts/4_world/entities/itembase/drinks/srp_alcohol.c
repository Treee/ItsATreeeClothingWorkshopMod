class Winebottle extends Bottle_Base
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ALCOHOL ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
	}
};
class Winebottle_two extends Winebottle{};

class SRP_AlcoholBase extends Bottle_Base
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ALCOHOL ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
	}
};

modded class Vodka
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ALCOHOL ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
	}
};