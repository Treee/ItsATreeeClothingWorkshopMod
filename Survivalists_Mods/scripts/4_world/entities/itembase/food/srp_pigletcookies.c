class SRP_Guts_PigletCookiesAcid extends Guts
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
    EntityAI suitAttachment = consumer.FindAttachmentBySlotName("Extra");
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
      consumer.InsertAgent(eAgents.CHEMICAL_POISON, 100);
    }
	}
};
class SRP_Guts_PigletCookiesMetal extends Guts
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
    EntityAI suitAttachment = consumer.FindAttachmentBySlotName("Extra");
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
      consumer.InsertAgent(eAgents.CHEMICAL_POISON, 100);
    }
	}
};
class SRP_Guts_PigletCookiesBrains extends Guts
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
    EntityAI suitAttachment = consumer.FindAttachmentBySlotName("Extra");
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
      consumer.InsertAgent(eAgents.CHEMICAL_POISON, 100);
    }
	}
};

class SRP_Marmalade_Gluttony extends Guts
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
    EntityAI suitAttachment = consumer.FindAttachmentBySlotName("Extra");
    bool isSuitBuff = (suitAttachment && (suitAttachment.GetType() == "DUB_Monsterv2" || suitAttachment.IsInherited(DUB_Monsterv2)));
    bool isMutant = (consumer && consumer.GetSingleAgentCount(DUB_MutantAgent.MUTANT_AGENT) >= 9600);

	  if (isSuitBuff || isMutant)
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
      consumer.InsertAgent(eAgents.CHEMICAL_POISON, 100);
    }
	}
};
class SRP_Marmalade_PigletPudding extends Guts
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
    EntityAI suitAttachment = consumer.FindAttachmentBySlotName("Extra");
    bool isSuitBuff = (suitAttachment && (suitAttachment.GetType() == "DUB_Monsterv2" || suitAttachment.IsInherited(DUB_Monsterv2)));
    bool isMutant = (consumer && consumer.GetSingleAgentCount(DUB_MutantAgent.MUTANT_AGENT) >= 9600);

	  if (isSuitBuff || isMutant)
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
      consumer.InsertAgent(eAgents.CHEMICAL_POISON, 100);
    }
	}
};