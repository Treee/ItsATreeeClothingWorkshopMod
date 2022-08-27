modded class Edible_Base
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
    super.OnConsume(amount, consumer);

    if (HasAlcoholEffect())
    {
      if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ALCOHOL ) )
      {
        consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
      }
      consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
    }
    if (HasCharcoalEffect())
    {
      if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_CHARCOAL ) )
      {
        consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CHARCOAL );
      }
      consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_CHARCOAL );
    }
    if (HasEpinephrineEffect())
    {
      if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )
      {
        consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
      }
      consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
    }
    if (HasAntibioticEffect())
    {
      if( consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_ANTIBIOTICS ) )//effectively resets the timer
      {
        consumer.GetModifiersManager().DeactivateModifier( eModifiers.MDF_ANTIBIOTICS );
      }
      consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_ANTIBIOTICS );
    }
    if (HasBloodRegenEffect() && consumer)
    {
      consumer.AddHealth("","Blood", GetBloodRegenEffectTotal());
    }
    if (HasHealthRegenEffect() && consumer)
    {
      consumer.AddHealth(GetHealthRegenEffectTotal());
    }
    if (HasShockRegenEffect() && consumer)
    {
			consumer.AddHealth("","Shock", GetShockRegenEffectTotal());
    }
    if (HasRadioactiveEffect())
    {
      if (!consumer.IsAlpha())
      {
        consumer.InsertAgent(eAgents.CHEMICAL_POISON, 100);
      }
    }    
	}
};
