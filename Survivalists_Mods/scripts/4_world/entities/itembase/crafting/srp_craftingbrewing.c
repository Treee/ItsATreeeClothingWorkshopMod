class SRP_BrewingWorkbench extends FireplaceBase
{
  void SRP_BrewingWorkbench()
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

  // false here because we do not want the ability to destroy the forge when nothing is attached (unlike a fire)
  override bool IsPrepareToDelete()
	{
		return false;
	}

  override void EECargoOut(EntityAI item)
	{
		super.EECargoOut(item);
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
    // if (item && item.GetType() == "SRP_AdvancedStoneForgeWorkbench_Bellows")
    // {
    //   return super.CanReceiveAttachment(attachment, slotId);
    // }

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
    
    if (item.IsTransformedByHeat())
    {
      // handle heat transformation event
    }

	}
};
class SRP_BrewingWorkbench_Alchemy extends SRP_BrewingWorkbench{};
class SRP_BrewingWorkbench_Ceramic extends SRP_BrewingWorkbench{};
class SRP_BrewingWorkbench_Copper extends SRP_BrewingWorkbench{};
