class Winebottle extends Bottle_Base
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_ALCOHOL ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ALCOHOL );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_ALCOHOL );
	}
};
class Winebottle_two extends Winebottle{};

class SRP_AlcoholBase extends Bottle_Base
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_ALCOHOL ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ALCOHOL );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_ALCOHOL );
	}
};