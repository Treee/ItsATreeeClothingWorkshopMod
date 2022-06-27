class SRP_Guts_PigletCookiesAcid extends Guts
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
    EntityAI suitAttachment = consumer.GetInventory().FindAttachmentBySlotName("Extra");
	  if (suitAttachment && (suitAttachment.GetType() == "DUB_Monsterv2" || suitAttachment.IsInherited(DUB_Monsterv2)))
		{
      if( !consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_CHARCOAL ) )
      {
        consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_CHARCOAL );	
      }
      if( !consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )
      {
		    consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );        
      }
		}
    else
    {
      consumer.InsertAgent(eAgents.CHEMICAL_POISON, 25);
    }
	}
};
class SRP_Guts_PigletCookiesMetal extends Guts
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
    EntityAI suitAttachment = consumer.GetInventory().FindAttachmentBySlotName("Extra");
	  if (suitAttachment && (suitAttachment.GetType() == "DUB_Monsterv2" || suitAttachment.IsInherited(DUB_Monsterv2)))
		{
      if( !consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_CHARCOAL ) )
      {
        consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_CHARCOAL );	
      }
      if( !consumer.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )
      {
		    consumer.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );        
      }
		}
    else
    {
      consumer.InsertAgent(eAgents.CHEMICAL_POISON, 25);
    }
	}
};
