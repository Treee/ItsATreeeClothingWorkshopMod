modded class Edible_Base
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
    if (IsAlcohol())
    {
      if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ALCOHOL ) )
      {
        consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
      }
      consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_ALCOHOL );
    }
	}
};
