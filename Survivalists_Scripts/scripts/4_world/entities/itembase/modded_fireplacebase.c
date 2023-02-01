modded class FireplaceBase
{
	const float FUEL_BURN_RATE_DEFAULT				= 0.5; // 1 by default; 50% reduction
	const float FUEL_BURN_RATE_STONES				= 0.35; // 0.92 by default; 60% reduction
	const float FUEL_BURN_RATE_OVEN					= 0.20; // 0.85 by default; 75% reduction

  int m_IrradiatedFuelCount = 0;

	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached( item, slot_name );

    if (item.GetType().Contains("_Irradiated"))
    {
      PARTICLE_SMALL_FIRE = ParticleList.FLAREPROJ_ACTIVATE_GREEN;
      PARTICLE_NORMAL_FIRE = ParticleList.FLAREPROJ_ACTIVATE_GREEN;
      PARTICLE_OVEN_FIRE = ParticleList.FLAREPROJ_ACTIVATE_GREEN;
      PARTICLE_SMALL_SMOKE 			= ParticleList.GRENADE_M18_GREEN_START;
      PARTICLE_NORMAL_SMOKE			= ParticleList.GRENADE_M18_GREEN_LOOP;

      RefreshFireParticlesAndSounds(true);		
    }
	}   
  override void RefreshFireplaceVisuals()
  {
    super.RefreshFireplaceVisuals();

    if (GetItemOnSlot("SRP_FuelCoal"))
    {
      // Print("Fuel is attached");
      SetFuelBurnRateMP(0.1);
    }
  }
  override protected FireConsumable GetItemToConsume()
	{
    m_UTSource.SetIsRadioactiveSource(false);
    m_UTSource.SetIsComfortHeatSource(false);
    // Print("[FireplaceBase] - [FireConsumable] - [GetItemToConsume]");
    if (m_ItemToConsume && m_ItemToConsume.GetItem() && m_ItemToConsume.GetItem().GetType().Contains("_Irradiated"))
    {
      // Print("[FireplaceBase] - [FireConsumable] - [GetItemToConsume]=====================IRADIATED!!");
      m_UTSource.SetIsRadioactiveSource(true);
    }
    if (m_ItemToConsume && m_ItemToConsume.GetItem())
    {
      m_UTSource.SetIsComfortHeatSource(true);
    }
    return super.GetItemToConsume();		
	}
  override protected void SpendFireConsumable( float amount )
	{
    ItemBase coal;
    if (Class.CastTo(coal, GetItemOnSlot("SRP_FuelCoal")))
    {
      coal.AddHealth(-0.05);
      // Print(string.Format("Coal HP: %1 Modified: %2", coal.GetHealth(), 0.1));
      if (coal.GetHealth() < 0.01)
      {
        coal.Delete();
      }
    }
    super.SpendFireConsumable(amount);
	}
  override protected bool IsKindling( ItemBase item )
	{
    bool isKindling = super.IsKindling(item);
		if ( item.GetType() == "Bark_Oak_Irradiated" || item.GetType() == "Bark_Birch_Irradiated" )
		{
			isKindling = true;
		}
		return isKindling;
	}
	//returns if item attached to fireplace is fuel
	override protected bool IsFuel( ItemBase item )
	{
		bool isFuel = super.IsFuel(item);
		if ( item.GetType() == "Firewood_Irradiated" || item.GetType() == "WoodenStick_Irradiated" )
		{
			isFuel = true;
		}
    if (item.GetType() == "SRP_Mining_RawOre_Coal")
    {
      isFuel = true;
    }
		return isFuel;
	}
	override protected float GetFireConsumableTypeEnergy( ItemBase item )
	{
		float energy = super.GetFireConsumableTypeEnergy(item);
    if (energy == 0)
    {
      if (item.GetType() == "WoodenStick_Irradiated")
      {
        energy = 40;
      }
      else if (item.GetType() == "Firewood_Irradiated")
      {
        energy = 100;
      }
      else if (item.GetType() == "Bark_Oak_Irradiated")
      {
        energy = 20;
      }
      else if (item.GetType() == "Bark_Birch_Irradiated")
      {
        energy = 14;
      }
    }
    return energy;
	}
};

class SRP_FireplaceBase extends FireplaceBase
{
  void SRP_FireplaceBase()
  {
    // Print("Create SRP fireplace");
		ProcessInvulnerabilityCheck(GetInvulnerabilityTypeString());
    m_LightDistance = 10;
    // Print("Create SRP done");
  }
  // Undestroyable
  override string GetInvulnerabilityTypeString()
	{
		return "disableBaseDamage";
	}
  // false here because we do not want the ability to destroy the forge when nothing is attached (unlike a fire)
  override bool IsPrepareToDelete()
	{
		return false;
	}
  override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
  override bool CanPutIntoHands( EntityAI parent )
  {
    return false;
  }
  override bool CanDisplayAttachmentCategory( string category_name )
	{
		return true;
	}
  override bool HasFlammableMaterial()
	{
		return true;
	}
  override bool CanBeIgnitedBy( EntityAI igniter = NULL )
	{
		if ( HasAnyKindling() && !GetHierarchyParent() )
		{
			return true;
		}
			
		return false;
	}
	override bool CanIgniteItem( EntityAI ignite_target = NULL )
	{
		if ( IsBurning() )
		{
			return true;
		}
		
		return false;
	}
  override bool IsIgnited()
	{
		return IsBurning();
	}
  override void OnIgnitedThis( EntityAI fire_source )
	{	
		//start fire
		StartFire(); 
	}
  override bool IsThisIgnitionSuccessful( EntityAI item_source = NULL )
	{
		SetIgniteFailure( false );
		Param1<bool> failure;
		
		//check kindling
		if ( !HasAnyKindling() )
		{
			return false;
		}
		
		//check wetness
		if ( IsWet() )
		{
			SetIgniteFailure( true );
			
			failure = new Param1<bool>( GetIgniteFailure() );
			GetGame().RPCSingleParam( this, FirePlaceFailure.WET, failure, true );
			return false;
		}
		
		return true;	
	}
  override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);
		
		ItemBase item_base = ItemBase.Cast(item);
		if ( IsKindling(item_base) || IsFuel(item_base))
		{
			AddToFireConsumables(item_base);
		}
		
		// direct cooking slots, smoking slots
		bool edible_base_attached = false;
		switch ( slot_name )
		{
		case "DirectCookingA":
			m_DirectCookingSlots[0] = item_base;
			edible_base_attached = true;
		break;
		case "DirectCookingB":
			m_DirectCookingSlots[1] = item_base;
			edible_base_attached = true;
		break;
		case "DirectCookingC":
			m_DirectCookingSlots[2] = item_base;
			edible_base_attached = true;
		break;

		case "SmokingA":
			m_SmokingSlots[0] = item_base;
			edible_base_attached = true;
		break;
		case "SmokingB":
			m_SmokingSlots[1] = item_base;
			edible_base_attached = true;
		break;
		case "SmokingC":
			m_SmokingSlots[2] = item_base;
			edible_base_attached = true;
		break;
		case "SmokingD":
			m_SmokingSlots[3] = item_base;
			edible_base_attached = true;
		break;
		}
		
		// reset cooking time (to prevent the cooking exploit)
		if (GetGame().IsServer() && edible_base_attached)
		{
			Edible_Base edBase = Edible_Base.Cast(item_base);
			if (edBase)
			{
				if (edBase.GetFoodStage())
				{
					edBase.SetCookingTime(0);
				}
			}
		}

		RefreshFireplaceVisuals();
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);
		
		ItemBase item_base = ItemBase.Cast(item);
		
		if (IsKindling(item_base) || IsFuel(item_base))
		{
			RemoveFromFireConsumables(GetFireConsumableByItem(item_base));
		}
		
		CheckForDestroy();
		
		// direct cooking/smoking slots
		switch (slot_name)
		{
		case "DirectCookingA":
			m_DirectCookingSlots[0] = null;
		break;
		case "DirectCookingB":
			m_DirectCookingSlots[1] = null;
		break;
		case "DirectCookingC":
			m_DirectCookingSlots[2] = null;
		break;

		case "SmokingA":
			m_SmokingSlots[0] = null;
		break;
		case "SmokingB":
			m_SmokingSlots[1] = null;
		break;
		case "SmokingC":
			m_SmokingSlots[2] = null;
		break;
		case "SmokingD":
			m_SmokingSlots[3] = null;
		break;
		}

		// cookware-specifics (remove audio visuals)
		if (item_base.Type() == ATTACHMENT_COOKING_POT)
		{	
			ClearCookingEquipment(item_base);
			Bottle_Base cooking_pot = Bottle_Base.Cast(item);
			cooking_pot.RemoveAudioVisualsOnClient();	
		}
		if (item_base.Type() == ATTACHMENT_CAULDRON)
		{
			ClearCookingEquipment(item_base);
			Bottle_Base cauldron = Bottle_Base.Cast(item);
			cauldron.RemoveAudioVisualsOnClient();	
		}
		if (item_base.Type() == ATTACHMENT_FRYING_PAN)
		{
			ClearCookingEquipment(item_base);
			FryingPan frying_pan = FryingPan.Cast(item);
			frying_pan.RemoveAudioVisualsOnClient();
		}
		
		RefreshFireplaceVisuals();
	}
};
class SRP_Fireplace_Transformer extends SRP_FireplaceBase
{
  void SRP_Fireplace_Transformer()
  {
		ProcessInvulnerabilityCheck(GetInvulnerabilityTypeString());
    m_LightDistance = 10;
  }
  override void EECargoOut(EntityAI item)
	{
		super.EECargoOut(item);
    ItemBase heatedItem = ItemBase.Cast(item);
    if (heatedItem && heatedItem.IsTransformedByHeat())
    {
      heatedItem.ResetHeatTimer();
    }
	}
  override protected void AddTemperatureToItemByFire( ItemBase item )
	{
    super.AddTemperatureToItemByFire(item);

    if (item && item.IsTransformedByHeat())
    {
      item.IncrementHeatTimer(1);
      item.HandleHeatTransformation();
    }
	}
  override protected void AddDamageToItemByFireEx(ItemBase item, bool can_be_ruined, bool pAttachment)
  {    
    if (!item)
      return;
    
    if (item.IsForgeHardened())
      return;
    
    if (item.IsSmeltable() && item.GetHealthLevel() == GameConstants.STATE_BADLY_DAMAGED)
    {      
      ItemBase new_item = ItemBase.Cast(GetInventory().CreateInInventory(item.GetSmeltableOutput()));
      int randomQuantity = item.GetSmeltableYield();
      if (randomQuantity > 0)
      {
        new_item.SetQuantity(randomQuantity);
      }
      item.Delete();
    }
    super.AddDamageToItemByFireEx(item, can_be_ruined, pAttachment);
  }
};