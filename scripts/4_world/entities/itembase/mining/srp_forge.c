class SRP_StoneForgeWorkbench extends FireplaceBase
{
  void SRP_StoneForgeWorkbench()
  {
		//Particles - default for FireplaceBase
		PARTICLE_FIRE_START 	= ParticleList.BARREL_FIRE_START;
		PARTICLE_SMALL_FIRE 	= ParticleList.BARREL_SMALL_FIRE;
		PARTICLE_NORMAL_FIRE	= ParticleList.BARREL_NORMAL_FIRE;
		PARTICLE_SMALL_SMOKE 	= ParticleList.BARREL_SMALL_SMOKE;
		PARTICLE_NORMAL_SMOKE	= ParticleList.BARREL_NORMAL_SMOKE;
		PARTICLE_FIRE_END 		= ParticleList.BARREL_FIRE_END;
		PARTICLE_STEAM_END		= ParticleList.BARREL_FIRE_STEAM_2END;

		ProcessInvulnerabilityCheck(GetInvulnerabilityTypeString());
    m_LightDistance = 10;
  }

  // Undestroyable
  override string GetInvulnerabilityTypeString()
	{
		return "disableBaseDamage";
	}

  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( !IsBeingPlaced() )
		{
			//Refresh particles and sounds
			RefreshFireParticlesAndSounds( false );					
		}
	}

  override void EECargoOut(EntityAI item)
	{
		super.EECargoOut(item);
    SRP_MetalBucket_Mortar mortarBucket = SRP_MetalBucket_Mortar.Cast(item);
    if (mortarBucket)
    {
      mortarBucket.ResetCounter();
    };
    SRP_ForgeIngotMold_Mortar mortarIngotMold = SRP_ForgeIngotMold_Mortar.Cast(item);
    if (mortarIngotMold)
    {
      mortarIngotMold.ResetCounter();
    };
    SRP_ForgeCrucible_Empty crucible = SRP_ForgeCrucible_Empty.Cast(item);
    if (crucible)
    {
      crucible.ResetCounter();
    };
	}

  override void EEItemAttached ( EntityAI item, string slot_name ) 
	{
		super.EEItemAttached( item, slot_name );
		
		ItemBase item_base = ItemBase.Cast( item );
		
		//kindling / fuel
		if ( IsKindling ( item_base ) || IsFuel ( item_base ) )
		{
			//add to consumables
			AddToFireConsumables ( item_base );
		}

		//refresh fireplace visuals
		RefreshFireplaceVisuals();
	}

	override void EEItemDetached ( EntityAI item, string slot_name ) 
	{
		super.EEItemDetached ( item, slot_name );
		
		ItemBase item_base = ItemBase.Cast( item );
		
		//kindling / fuel
		if ( IsKindling ( item_base ) || IsFuel ( item_base ) )
		{
			//remove from consumables
			RemoveFromFireConsumables ( GetFireConsumableByItem( item_base ) );
		}
		//refresh fireplace visuals
		RefreshFireplaceVisuals();
	}

  override bool CanBeIgnitedBy( EntityAI igniter = NULL )
	{
		if ( HasAnyKindling() && !IsBurning() && !GetHierarchyParent() )
		{
      return true;
    }			
		return false;
	}

  override void OnIgnitedThis( EntityAI fire_source )
	{	
		//remove grass
		Object cc_object = GetGame().CreateObjectEx( OBJECT_CLUTTER_CUTTER , GetPosition(), ECE_PLACE_ON_SURFACE );
		cc_object.SetOrientation ( GetOrientation() );
		GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( DestroyClutterCutter, 0.2, false, cc_object );
		
		//start fire
		StartFire(); 
	}

  override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		ItemBase item = ItemBase.Cast( attachment );
		
		if ( GetHealthLevel() == GameConstants.STATE_RUINED || GetHierarchyRootPlayer() != null )
			return false;

		//direct cooking slots
    if ( IsKindling( item ) || IsFuel( item ) )
    {
      return super.CanReceiveAttachment(attachment, slotId);
    }

    // tool attachments
    if (item && item.GetType() == "SRP_AdvancedStoneForgeWorkbench_Bellows")
    {
      return super.CanReceiveAttachment(attachment, slotId);
    }

		return false;
	}
	
	override bool CanLoadAttachment( EntityAI attachment )
	{
		ItemBase item = ItemBase.Cast( attachment );
		
		if ( GetHealthLevel() == GameConstants.STATE_RUINED )
			return false;

		if ( IsKindling( item ) || IsFuel( item ) )
    {
      return super.CanLoadAttachment(attachment);
    }

		return false;
	}

	override bool CanReleaseAttachment( EntityAI attachment )
	{
		if( !super.CanReleaseAttachment( attachment ) )
			return false;
		
		ItemBase item = ItemBase.Cast( attachment );
		//kindling items
		if ( IsKindling ( item ) && !IsBurning() )
		{
			if ( HasLastFuelKindlingAttached() )
			{
				if ( HasLastAttachment() )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return true;
			}
		}
		
		//fuel items
		if ( IsFuel ( item ) && !IsBurning() )
		{
			if ( HasLastFuelKindlingAttached() )
			{	
				if ( HasLastAttachment() )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return true;
			}
		}
		
		return false;
	}

  override bool HasFlammableMaterial()
	{
		return true;
	}

  override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }

  override bool CanPutIntoHands( EntityAI parent )
  {
    return false;
  }
  
  void DestroyClutterCutter( Object clutter_cutter )
	{
		GetGame().ObjectDelete( clutter_cutter );
	}

  override protected void AddTemperatureToItemByFire( ItemBase item )
	{
    super.AddTemperatureToItemByFire(item);
    
    SRP_MetalBucket_Mortar mortarBucket = SRP_MetalBucket_Mortar.Cast(item);
    float temperature = 0;
    if (mortarBucket)
    {
      mortarBucket.AddHealth( PARAM_BURN_DAMAGE_COEF );
      mortarBucket.IncrementHeatTimer(1);
      mortarBucket.HandleHardenEvent();
      if ( mortarBucket.GetTemperatureMax() >= PARAM_ITEM_HEAT_MIN_TEMP )
      {
        temperature = mortarBucket.GetTemperature() + PARAM_ITEM_HEAT_TEMP_INCREASE_COEF;
        temperature = Math.Clamp ( temperature, PARAM_ITEM_HEAT_MIN_TEMP, 1500 );
        mortarBucket.SetTemperature( temperature );
      }
    }
    SRP_ForgeIngotMold_Mortar mortarIngotMold = SRP_ForgeIngotMold_Mortar.Cast(item);
    if (mortarIngotMold)
    {
      mortarIngotMold.AddHealth( PARAM_BURN_DAMAGE_COEF );
      mortarIngotMold.IncrementHeatTimer(1);
      mortarIngotMold.HandleHardenEvent();
      if ( mortarIngotMold.GetTemperatureMax() >= PARAM_ITEM_HEAT_MIN_TEMP )
      {
        temperature = mortarIngotMold.GetTemperature() + PARAM_ITEM_HEAT_TEMP_INCREASE_COEF;
        temperature = Math.Clamp ( temperature, PARAM_ITEM_HEAT_MIN_TEMP, 1500 );
        mortarIngotMold.SetTemperature( temperature );
      }
    }
    SRP_ForgeCrucible_Empty crucible = SRP_ForgeCrucible_Empty.Cast(item);
    if (crucible)
    {
      crucible.AddHealth( PARAM_BURN_DAMAGE_COEF );
      crucible.IncrementHeatTimer(1);
      crucible.HandleHardenEvent();
      if ( crucible.GetTemperatureMax() >= PARAM_ITEM_HEAT_MIN_TEMP )
      {
        temperature = crucible.GetTemperature() + PARAM_ITEM_HEAT_TEMP_INCREASE_COEF;
        temperature = Math.Clamp ( temperature, PARAM_ITEM_HEAT_MIN_TEMP, 1500 );
        crucible.SetTemperature( temperature );
      }
    }
    SRP_ForgeCrucible_ColorBase filledCrucible = SRP_ForgeCrucible_ColorBase.Cast(item);
    if (filledCrucible && filledCrucible.GetType() != "SRP_ForgeCrucible_Empty")
    {
      Print("filled crucible: " + item.GetType() + " max temp: " + item.GetTemperatureMax() + " min heat min temp: " + PARAM_ITEM_HEAT_MIN_TEMP);
      item.AddHealth( PARAM_BURN_DAMAGE_COEF );
      if ( item.GetTemperatureMax() >= PARAM_ITEM_HEAT_MIN_TEMP )
      {
        temperature = item.GetTemperature() + PARAM_ITEM_HEAT_TEMP_INCREASE_COEF;
        Print("pre clamp: " + temperature);
        temperature = Math.Clamp ( temperature, PARAM_ITEM_HEAT_MIN_TEMP, 1500 );
        Print("post clamp: " + temperature);
        item.SetTemperature( temperature );
        Print("temperature: " + temperature);
      }
    }
	}

  override protected void AddTemperatureToFireplace( float amount )
	{
		float temperature = GetTemperature();
		temperature = temperature + amount;
		SetTemperature( temperature );
	}	
};

class SRP_AdvancedStoneForgeWorkbench extends SRP_StoneForgeWorkbench{};