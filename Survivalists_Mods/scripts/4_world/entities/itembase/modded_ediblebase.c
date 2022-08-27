modded class Edible_Base
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
    super.OnConsume(amount, consumer);

    if (IsAlcoholDrink())
    {
      if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ALCOHOL ) )
      {
        consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
      }
      consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
    }
    if (IsCharcoalFood())
    {
      if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_CHARCOAL ) )
      {
        consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CHARCOAL );
      }
      consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_CHARCOAL );
    }
    if (IsAdrenalineFood() || IsCaffeinatedDrink())
    {
      if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )
      {
        consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
      }
      consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
    }
    if (IsAntibioticDrink())
    {
      if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_ANTIBIOTICS ) )//effectively resets the timer
      {
        consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_ANTIBIOTICS );
      }
      consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_ANTIBIOTICS );
    }
    if (IsBloodRegenDrink() && consumer)
    {
      consumer.AddHealth("","Blood", GetHealthRegenDrinkTotal());
    }
    if (IsHealthRegenDrink() && consumer)
    {
      consumer.AddHealth(GetHealthRegenDrinkTotal());
    }
    if (IsShockRegenDrink() && consumer)
    {
			consumer.AddHealth("","Shock", GetShockRegenDrinkTotal());
    }
    if (IsRadioactiveFood())
    {
      if (!consumer.IsAlpha())
      {
        consumer.InsertAgent(eAgents.CHEMICAL_POISON, 100);
      }
    }    
	}
};
