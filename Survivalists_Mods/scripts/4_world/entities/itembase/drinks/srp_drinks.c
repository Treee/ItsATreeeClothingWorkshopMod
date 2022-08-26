modded class SRP_BeerBottle_DoublTap
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

modded class SRP_BeerBottle_Electric
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer)
    {
			consumer.AddHealth("","Blood", 10);
    }
	}
};

modded class SRP_BeerBottle_Juggernaut
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer)
    {
			consumer.AddHealth("","Shock", 10);
    }
	}
};

modded class SRP_BeerBottle_Reviver
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if (consumer)
    {
      consumer.AddHealth(10);
    }
	}	
};


modded class SRP_BeerBottle_Speedy
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
modded class SodaCan_DeadBull
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
modded class SodaCan_5HrEnergy
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