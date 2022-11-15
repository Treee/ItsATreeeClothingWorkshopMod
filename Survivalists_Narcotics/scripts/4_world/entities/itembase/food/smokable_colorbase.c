class SRP_SwitchAndIgniteLambda extends TurnItemIntoItemLambda
{
  bool m_IsIgnited;
	void SRP_SwitchAndIgniteLambda(EntityAI old_item, string new_item_type, PlayerBase player, bool isIgnited=false) 
  { 
    m_IsIgnited = isIgnited;
  }

	override void CopyOldPropertiesToNew (notnull EntityAI old_item, EntityAI new_item)
	{
		super.CopyOldPropertiesToNew(old_item, new_item);
	}
	
	override void OnSuccess (EntityAI new_item)
	{
		super.OnSuccess(new_item);
		SRP_Smokable_ColorBase smokable;
		if ( SRP_Smokable_ColorBase.CastTo(smokable, new_item) ) 
		{	
      if (m_IsIgnited)
      {
        smokable.LightSmokable();
      };
		}
    SRP_SmokableWearable_ColorBase wearableSmokable;
		if ( SRP_SmokableWearable_ColorBase.CastTo(wearableSmokable, new_item) ) 
		{	
      if (m_IsIgnited)
      {
        wearableSmokable.LightSmokable();
      };
		}
	}
};

class SRP_Smokable_ColorBase extends Edible_Base 
{
	protected Particle m_SmokeParticle;
  protected bool m_IsIgnited = false;

	void SRP_Smokable_ColorBase()
  {
    RegisterNetSyncVariableBool( "m_IsIgnited" );
  }

	void ~SRP_Smokable_ColorBase()
	{
		ExtinguishSmokable();
	}

  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
    if (m_IsIgnited)
    {
      LightSmokable();
    }
    else
    {
      ExtinguishSmokable();
    }
	}

  override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached(parent, slot_id);
    PlayerBase player;
    if (GetGame().IsDedicatedServer() && Class.CastTo(player, parent))
    {
      SRP_SwitchAndIgniteLambda lambda = new SRP_SwitchAndIgniteLambda(this, GetSmokableType(), player, IsLit());
		  MiscGameplayFunctions.TurnItemIntoItemEx(player, lambda);
    }
	}

	void ExtinguishSmokable()
	{
    if (GetGame() && GetGame().IsDedicatedServer())
    {
      SetLit(false);
      SetSynchDirty();
      return;
    }
		if ( m_SmokeParticle && GetGame() && !GetGame().IsDedicatedServer() )
		{
			m_SmokeParticle.Stop();
      m_SmokeParticle = null;
		}    
	}

  void LightSmokable()
  {    
    if (GetGame().IsDedicatedServer())
    {
      SetLit(true);
      SetSynchDirty();
      return;
    }
		if ( !m_SmokeParticle && GetGame() && !GetGame().IsDedicatedServer() )
    {
      m_SmokeParticle = ParticleManager.GetInstance().PlayOnObject( ParticleList.CAMP_NORMAL_SMOKE, this, GetSmokeEffectPosition() );
      m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 0.001);
      m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY, 0.001);
      m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY_RND, 0.001);
    }
  }

  void SetLit(bool isLit) 
  {
    m_IsIgnited = isLit;
  }

  bool IsLit() 
  {
    return m_IsIgnited;
  }

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionLightSmokableInHands);
		AddAction(ActionExtinguishSmokeSRPSmokableSelf);
		AddAction(ActionSmokeSRPSmokableSelf);
		AddAction(ActionForceSmokeSRPSmokable);
	}

  string GetSmokableType()
  {
    return string.Format("SRP_SmokableWearable_%1", ConfigGetString("color"));
  }
  vector GetSmokeEffectPosition()
  {
    return Vector(0, 0.11, 0);
  }
};

class SRP_SmokingPipe extends SRP_Smokable_ColorBase{};

class SRP_Smokable_Cigarette extends SRP_Smokable_ColorBase 
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_TOBACCO ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_TOBACCO );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_TOBACCO );
	}	
};
class SRP_Smokable_Cigar extends SRP_Smokable_ColorBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_TOBACCO ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_TOBACCO );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_TOBACCO );
	}
};

class SRP_Smokable_ZWeed extends SRP_Smokable_ColorBase 
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_STONED ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_STONED );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_STONED );
	}
};
class SRP_Smokable_ZWeedIrradiated extends SRP_Smokable_ColorBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_STONEDIRRADIATED ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_STONEDIRRADIATED );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_STONEDIRRADIATED );
	}
};
class SRP_Smokable_Test extends SRP_Smokable_ColorBase
{
  override void OnConsume(float amount, PlayerBase consumer)
	{
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eDrugModifiers.MDF_TEST ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eDrugModifiers.MDF_TEST );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eDrugModifiers.MDF_TEST );
	}
};
