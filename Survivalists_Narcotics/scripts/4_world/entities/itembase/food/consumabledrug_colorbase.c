class SRP_Naloxone extends Epinephrine 
{
  override void OnApply(PlayerBase player)
	{
    player.DisableAllMyModifiers();
    player.RemoveAllSymptoms();
	}
};

class SRP_ConsumableDrug_Colorbase extends Edible_Base
{
	void SRP_ConsumableDrug_ColorBase(){}

	override void SetActions()
	{
		super.SetActions();
    AddAction(ActionForceFeed);
		AddAction(ActionEatBig);
	}
};

class SRP_ConsumableDrug_SmileyAcid extends SRP_ConsumableDrug_Colorbase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ACIDSMILE ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ACIDSMILE );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_ACIDSMILE );
	}	
};
class SRP_ConsumableDrug_SmileyAcidTainted extends SRP_ConsumableDrug_Colorbase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ACIDSMILE ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ACIDSMILE );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_ACIDSMILE );
    consumer.GetStatToxicity().Add(300);
	}	
};
class SRP_ConsumableDrug_SkullAcid extends SRP_ConsumableDrug_Colorbase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ACIDSKULL ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ACIDSKULL );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_ACIDSKULL );
	}	
};
class SRP_ConsumableDrug_SkullAcidTainted extends SRP_ConsumableDrug_Colorbase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_ACIDSKULL ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_ACIDSKULL );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_ACIDSKULL );
    consumer.GetStatToxicity().Add(300);
	}	
};

class SRP_ConsumableDrug_MethSmall extends SRP_ConsumableDrug_Colorbase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_METH ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_METH );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_METH );
	}	
};
class SRP_ConsumableDrug_MethSmallTainted extends SRP_ConsumableDrug_Colorbase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_METH ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_METH );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_METH );
    consumer.GetStatToxicity().Add(100);
	}
};
class SRP_ConsumableDrug_MethMedium extends SRP_ConsumableDrug_Colorbase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_METH ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_METH );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_METH );
	}
};
class SRP_ConsumableDrug_MethLarge extends SRP_ConsumableDrug_Colorbase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_METH ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_METH );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_METH );
	}
};

class SRP_ConsumableDrug_BathSalts extends SRP_ConsumableDrug_Colorbase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_BATHSALTS ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_BATHSALTS );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_BATHSALTS );
	}	
};
class SRP_ConsumableDrug_BathSaltsTainted extends SRP_ConsumableDrug_BathSalts
{
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_BATHSALTS ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_BATHSALTS );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_BATHSALTS );
    consumer.GetStatToxicity().Add(300);
	}
};

class SRP_ConsumableDrug_Cocaine extends SRP_ConsumableDrug_Colorbase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_COCAINE ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_COCAINE );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_COCAINE );
	}	
};
class SRP_ConsumableDrug_CocaineTainted extends SRP_ConsumableDrug_Cocaine
{
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_COCAINE ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_COCAINE );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_COCAINE );
    consumer.GetStatToxicity().Add(300);
	}	
};

class SRP_ConsumableDrug_CocainePaste extends SRP_ConsumableDrug_Colorbase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{	
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_COCAINE ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_COCAINE );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_COCAINE );
    consumer.GetStatToxicity().Add(500);
	}	
};