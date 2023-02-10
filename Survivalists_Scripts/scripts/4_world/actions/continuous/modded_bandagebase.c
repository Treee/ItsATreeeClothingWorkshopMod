modded class ActionBandageBase
{	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    bool canAction = super.ActionCondition(player, target, item);
    return canAction || item.IsInherited(SRP_BandageDressing);	
	}
	
	override void ApplyBandage( ItemBase item, PlayerBase player )
	{	
    if (item)
    {
      if (item.GetType() == "SRP_BandageDressing_Healing")
      {
        if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_PAINKILLERS ) )//effectively resets the timer
        {
          player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_PAINKILLERS, false );
        }
        player.GetModifiersManager().ActivateModifier( eModifiers.MDF_PAINKILLERS );

        if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_IMMUNITYBOOST ) )//effectively resets the timer
        {
          player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_IMMUNITYBOOST );
        }
        player.GetModifiersManager().ActivateModifier( eModifiers.MDF_IMMUNITYBOOST );
      }
      else if (item.GetType() == "SRP_BandageDressing_Shock")
      {
        if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )//effectively resets the timer
        {
          player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
        }
        player.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
      }
      else if (item.GetType() == "SRP_BandageDressing_Antibiotic")
      {
        if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_ANTIBIOTICS))//effectively resets the timer
        {
          player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_ANTIBIOTICS );
        }
        player.GetModifiersManager().ActivateModifier( eModifiers.MDF_ANTIBIOTICS );
      }
    }
    super.ApplyBandage(item, player);
	}
};