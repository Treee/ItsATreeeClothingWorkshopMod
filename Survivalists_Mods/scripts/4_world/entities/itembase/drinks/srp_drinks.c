class SRP_SodaCanBase extends SodaCan_ColorBase{};

class SRP_SodaCanBaltika0 extends SRP_SodaCanBase{};
class SRP_SodaCanBaltika7 extends SRP_SodaCanBase{};
class SRP_SodaCanBaltika9 extends SRP_SodaCanBase{};
class SRP_SodaCanTarhun extends SRP_SodaCanBase{};
class SRP_SodaCanElionVodka extends SRP_SodaCanBase{};
class SRP_SodaCanCocktail extends SRP_SodaCanBase{};
class SRP_SodaCanLemonade extends SRP_SodaCanBase{};
class SRP_SodaCan_Medium_FreshWater extends SRP_SodaCanBase{};
class SRP_SodaCan_Large_Saltika extends SRP_SodaCanBase{};
class SRP_SodaCanCherryCola extends SRP_SodaCanBase{};
class SRP_SodaCanAKDigital extends SRP_SodaCanBase{};


class SRP_SodaBottle_DoublTap extends SRP_SodaCanBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_ANTIBIOTICS ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_ANTIBIOTICS );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_ANTIBIOTICS );
	}
};

class SRP_SodaBottle_Electric extends SRP_SodaCanBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer)
    {
			consumer.AddHealth("","Blood", 10);
    }
	}
};

class SRP_SodaBottle_Juggernaut extends SRP_SodaCanBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer)
    {
			consumer.AddHealth("","Shock", 10);
    }
	}
};

class SRP_SodaBottle_Reviver extends SRP_SodaCanBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer)
    {
      consumer.AddHealth(10);
    }
	}	
};


class SRP_SodaCan_Slim_DeadBull extends SRP_SodaCanBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
	}	
};
class SRP_SodaBottle_Speedy extends SRP_SodaCanBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
	}	
};
class SRP_SodaCan5HrEnergy extends SRP_SodaCanBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )//effectively resets the timer
		{
			consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
		}
		consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
	}	
};