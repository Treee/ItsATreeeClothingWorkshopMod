modded class PlayerBase
{
  protected EffectSound m_SleepSounds;

  protected PlayerStat<float> m_StatTiredness;
  protected PlayerStat<float> m_StatAlcoholism;
  protected PlayerStat<float> m_StatSanity;
  protected PlayerStat<float> m_StatDrugDependency;

  ItemBook currentBookInHands;

  protected bool m_IsInBioZone = false;
  protected bool m_IsNearComfortHeatSource = false;
  protected bool m_HeavyItemInHandsSprintDisable = false;
  protected bool m_HeavyItemEquippedSprintDisable = false;
  protected bool m_IsPlayerMutant = false;
  protected bool m_IsPlayerCyborg = false;
  protected bool m_CanYieldSkinnedProducts = true;
  bool m_IsSoftSurrendered = false;

  protected float m_TotalContaminationProtection = 0;

  override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
  {
    super.OnRPC(sender, rpc_type, ctx);

    switch(rpc_type)
    {
      case SRP_RPC.CHECK_SRP_CONFIG: // this case is for grabbing SRP's config from the server
      {
        Param1<SRPConfig> configParams;
        if(!ctx.Read(configParams)) return;        
        GetDayZGame().SetSRPConfigGlobal(configParams.param1);
        break;
      }
    }
  }
	
  override void EEItemIntoHands(EntityAI item)
	{
		super.EEItemIntoHands( item );
    // Print("Item going into hands: " + item.GetType());
    if (item)
    {
      ItemBase ibCast = ItemBase.Cast(item);
      if (ibCast.IsSprintRemoved())
      {
        SetIsSprintDisabledByHeavyItemInHands(true);
      }
      if (ibCast.IsContainerFilledToRemoveSprint(80))
      {
        SetIsSprintDisabledByHeavyItemInHands(true);
      }
    }
	}	
	override void EEItemOutOfHands(EntityAI item)
	{
		super.EEItemOutOfHands( item );
    // Print("Item going out of hands: " + item.GetType());
		if (item)
    {      
      // always clear this bool when things get out of hand. haha
      SetIsSprintDisabledByHeavyItemInHands(false);
    }
	}
  override void EEKilled( Object killer )
	{
    if ( m_AdminLog )
      m_AdminLog.DirectAdminLogPrint(string.Format("ADMIN HELPER::||%1", GetEquippedItems()));
    
    if (GetGame().IsDedicatedServer())
    {
      CF_Date time = CF_Date.Now(true);
      // Print("timestamp?: " + time.DateToString());
      GetDayZGame().GetAdminHelper().InsertBulkCompItem(time.DateToString(), GetIdentity().GetId(), GetIdentity().GetPlainId(), GetIdentity().GetName(), GetEquippedItems());
      if (GetDayZGame().GetSRPMeatFarmingConfigGlobal().IsBlockedFromGivingMeat(GetIdentity().GetId()))
        SetCanYieldSkinnedProducts(false);
      
      GetDayZGame().GetSRPMeatFarmingConfigGlobal().AddIDToBlockedMeatFarmers(GetIdentity().GetId());
    }

		super.EEKilled( killer );
	};
	override bool HandleRemoteItemManipulation(int userDataType, ParamsReadContext ctx)
	{
    if( userDataType == SRP_INPUT_UDT_ITEM_MANIPULATION )
    {
      ItemBase itemToSplit = NULL;
      InventoryLocation destination = new InventoryLocation;
      if (!ctx.Read(itemToSplit))
        return false;
      if (destination.ReadFromContext(ctx))
      {
        itemToSplit.SplitSingleItemToInventoryLocation(destination);
        return true;
      }
      return false;
    }
    else	
      return super.HandleRemoteItemManipulation(userDataType, ctx);
  }
  override void Init()
  {
    super.Init();
    SetIsSoftSurrendered(false);
    RegisterNetSyncVariableBool("m_IsSoftSurrendered");
  }
  override bool CanManipulateInventory()
	{
    if (IsSoftSurrendered())		
		  return true;
    return super.CanManipulateInventory();
	}
  override bool CanReleaseAttachment (EntityAI attachment)
	{
		if(IsSoftSurrendered())
			return false;
		return super.CanReleaseAttachment(attachment);
	}
	
	override bool CanReleaseCargo (EntityAI cargo)
	{
		if(IsSoftSurrendered())
			return false;
		return super.CanReleaseCargo(cargo);
	}

  void SetIsSoftSurrendered(bool state)
  {
    m_IsSoftSurrendered = state;
    SetSynchDirty();
  }
  override bool IsRestrained()
	{
		return m_IsRestrained || IsSoftSurrendered();
	}
  bool IsSoftSurrendered()
  {
    return m_IsSoftSurrendered;
  }
  void AutoCloseSoftSurrender()
  {
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater( SetIsSoftSurrendered, 15000, false, false );
  }
  void SetCanYieldSkinnedProducts(bool state)
  {
    m_CanYieldSkinnedProducts = state;
  }
  bool CanYieldSkinnedProducts()
  {
    return m_CanYieldSkinnedProducts;
  }
  override bool CanSprint()
  {    
    if (IsSprintDisabledByHeavyItemInHands())
      return false;

    if (IsSprintDisabledByHeavyItemEquipped())
      return false;

    return super.CanSprint();
  }
  override bool IsSprinting()
	{
    return ( super.IsSprinting() || m_MovementState.m_iMovement == DayZPlayerConstants.MOVEMENTIDX_SPRINT );				
	}
  bool HasNavigationItem()
  {
    if (GetMapNavigationBehaviour())
    {
      return GetMapNavigationBehaviour().PlayerHasNavigationItem();
    }
    return false;
  }
  string GetEquippedItems()
  {
    array<EntityAI> itemsArray = new array<EntityAI>;
		ItemBase item;
		GetInventory().EnumerateInventory(InventoryTraversalType.PREORDER, itemsArray);
		
    bool ruinItems = false;
    Clothing eventArmbands;
    if (Class.CastTo(eventArmbands, FindAttachmentBySlotName("Armband")))
    {
      ruinItems = eventArmbands.IsEventArmband();
    }

    string itemString = "";
		for (int i = 0; i < itemsArray.Count(); i++)
		{
			Class.CastTo(item, itemsArray.Get(i));
      
			if (item && !item.IsInherited(SurvivorBase))
      {
        if (item.HasQuantity())
        {
          itemString = string.Format("%1,%2:%3", itemString, item.GetType(),item.GetQuantity());
        }
        else
        {
          itemString = string.Format("%1,%2", itemString, item.GetType());
        }
        if (ruinItems)
          item.AddHealth(-9999999);
      }
		}
    return itemString;
  }
  bool IsRunning()
	{
    return ( m_MovementState.m_iMovement == DayZPlayerConstants.MOVEMENTIDX_RUN );				
	}
  bool IsWalking()
	{
    return ( m_MovementState.m_iMovement == DayZPlayerConstants.MOVEMENTIDX_WALK );				
	}
  void SetBioZoneStatus(bool isInZone)
  {
    m_IsInBioZone = isInZone;
  }
  bool IsInBioZone()
  {
    return m_IsInBioZone;
  }
  bool SRPIgnoreContaminatedArea()
  {
    if (GetPlayerRadiationProtection() > 5)
    {
      return true;
    }
    return false;
  }
  void SetIsPlayerMutant(bool isMutant)
  {
    m_IsPlayerMutant = isMutant;
  }
  bool IsPlayerMutant()
  {
    return m_IsPlayerMutant;
  }
  bool IsPlayerPreMutant()
  {
    if (IsAlive() && m_FliesEff)
    {
      return true;
    }
    return false;
  }
  void SetIsPlayerCyborg(bool isCyborg)
  {
    m_IsPlayerCyborg = isCyborg;
  }
  bool IsPlayerCyborg()
  {
    return m_IsPlayerCyborg;
  }
  void ModifyContaminationProtection(float amount)
  {
    m_TotalContaminationProtection += amount;
  }
  float GetPlayerRadiationProtection()
  {
    return m_TotalContaminationProtection;
  }
  bool IsSprintDisabledByHeavyItemInHands()
  {
    return m_HeavyItemInHandsSprintDisable;
  }
  void SetIsSprintDisabledByHeavyItemInHands(bool isDisabled)
  {
    m_HeavyItemInHandsSprintDisable = isDisabled;
  }

  bool IsSprintDisabledByHeavyItemEquipped()
  {
    return m_HeavyItemEquippedSprintDisable;
  }
  void SetIsSprintDisabledByHeavyItemEquipped(bool isDisabled)
  {
    m_HeavyItemEquippedSprintDisable = isDisabled;
  }
  void SetIsNearComfortHeatSource(bool isNearComfort)
  {
    m_IsNearComfortHeatSource = isNearComfort;
  }
  bool IsNearComfortHeatSource()
  {
    return m_IsNearComfortHeatSource;
  }
  override void ProcessFeetDamageServer(int pUserInt)
	{    
    if (SRP_IgnoreShoeDamage())
    {
      return;
    }
    super.ProcessFeetDamageServer(pUserInt);
  };

  // overrides weight limit checks for stamina
  override float GetPlayerLoad()
	{
		return 0;
	}

  float GetAimingLR()
  {
    HumanCommandWeapons    hcw = GetCommandModifier_Weapons();
    if (hcw != null)
    {
        return hcw.GetBaseAimingAngleLR();
    }        
    return 0.0;
  };
  float GetAimingUD()
  {
    HumanCommandWeapons    hcw = GetCommandModifier_Weapons();
    if (hcw != null)
    {
        return hcw.GetBaseAimingAngleUD();
    }        
    return 0.0;
  };

  // turn this into onwasattached and onwasdetached
  bool SRP_IgnoreShoeDamage()
  {
    EntityAI shoes = FindAttachmentBySlotName("Feet");
    if (shoes && shoes.GetType() == "Sneakers_Skylar_Biozone")
    {
      return true;
    }
    return false;
  }
//================================================================= SLEEPING STUFF
  bool IsAwake()
  {
    return !( GetEmoteManager().m_IsLayDown || IsUnconscious() );
  }

  void SRP_SetUnconscious(int modifierAmount=1)
  {
    SetHealth("", "Shock", PlayerConstants.UNCONSCIOUS_THRESHOLD - modifierAmount);
    GetModifiersManager().ActivateModifier(eModifiers.MDF_UNCONSCIOUSNESS);
  }

  void TryYawn()
  {
    // Print("SRP Modded Playerbase:: TryYawn chance to yawn: " + chance);
    if (IsMale()) {
      PlaySoundSet(m_SleepSounds, GetMaleYawns().GetRandomElement(), 0, 0);
    } else {
      PlaySoundSet(m_SleepSounds, GetFemaleYawns().GetRandomElement(), 0, 0);
    }
  }

  TStringArray GetMaleYawns()
  {
    return {
      "Survivalists_Mods_Yawn_Male_SoundSet1",
      "Survivalists_Mods_Yawn_Male_SoundSet2",
      "Survivalists_Mods_Yawn_Male_SoundSet3",
      "Survivalists_Mods_Yawn_Male_SoundSet4"
    };
  }

  TStringArray GetFemaleYawns()
  {
    return {
      "Survivalists_Mods_Yawn_Female_SoundSet1",
      "Survivalists_Mods_Yawn_Female_SoundSet2",
      "Survivalists_Mods_Yawn_Female_SoundSet3",
      "Survivalists_Mods_Yawn_Female_SoundSet4",
      "Survivalists_Mods_Yawn_Female_SoundSet5",
    };
  }

  override void SetActions(out TInputActionMap InputActionMap)
  {
    super.SetActions(InputActionMap);
    AddAction(ActionFlipPlayingCard, InputActionMap);      
    AddAction(ActionTriggerDecontaminationShower, InputActionMap);      
    AddAction(ActionForageBush, InputActionMap);      
    AddAction(ActionPackLadder, InputActionMap);      
    AddAction(ActionPackSRPSleepingBag, InputActionMap);          
    AddAction(ActionSearchChickenCoop, InputActionMap); 

    // AddAction(ActionTurnRubixCubeClockwise_Row1, InputActionMap);      
    // AddAction(ActionTurnRubixCubeClockwise_Row2, InputActionMap);      
    // AddAction(ActionTurnRubixCubeClockwise_Col1, InputActionMap);      
    // AddAction(ActionTurnRubixCubeClockwise_Col2, InputActionMap);      
    // AddAction(ActionTurnRubixCubeClockwise_Z1, InputActionMap);      
    // AddAction(ActionTurnRubixCubeClockwise_Z2, InputActionMap);    
  }
//=========================================================== PLAYER STATS
  PlayerStat<float> GetStatTiredness()
	{
		if( !m_StatTiredness && GetPlayerStats() ) 
		{
			m_StatTiredness = PlayerStat<float>.Cast(GetPlayerStats().GetStatObject(SRP_EPlayerStats_current.TIREDNESS));
		}
		return m_StatTiredness;
	}
  PlayerStat<float> GetStatAlcoholism()
	{
		if( !m_StatAlcoholism && GetPlayerStats() ) 
		{
			m_StatAlcoholism = PlayerStat<float>.Cast(GetPlayerStats().GetStatObject(SRP_EPlayerStats_current.ALCOHOLISM));
		}
		return m_StatAlcoholism;
	}
  PlayerStat<float> GetStatSanity()
	{
		if( !m_StatSanity && GetPlayerStats() ) 
		{
			m_StatSanity = PlayerStat<float>.Cast(GetPlayerStats().GetStatObject(SRP_EPlayerStats_current.SANITY));
		}
		return m_StatSanity;
	}
  PlayerStat<float> GetStatDrugDependency()
	{
		if( !m_StatDrugDependency && GetPlayerStats() ) 
		{
			m_StatDrugDependency = PlayerStat<float>.Cast(GetPlayerStats().GetStatObject(SRP_EPlayerStats_current.DRUGDEPENDENCY));
		}
		return m_StatDrugDependency;
	}

  EStatLevels GetStatLevelTiredness()
	{
		float tiredness = GetStatTiredness().Get();
		return GetStatLevel(tiredness, PlayerConstants.SL_TIREDNESS_CRITICAL, PlayerConstants.SL_TIREDNESS_LOW, PlayerConstants.SL_TIREDNESS_NORMAL, PlayerConstants.SL_TIREDNESS_HIGH);
	}
  EStatLevels GetStatLevelAlcoholism()
	{
		float alcoholism = GetStatAlcoholism().Get();
		return GetStatLevel(alcoholism, PlayerConstants.SL_ALCOHOLISM_CRITICAL, PlayerConstants.SL_ALCOHOLISM_LOW, PlayerConstants.SL_ALCOHOLISM_NORMAL, PlayerConstants.SL_ALCOHOLISM_HIGH);
	}
  EStatLevels GetStatLevelSanity()
	{
		float sanity = GetStatSanity().Get();
		return GetStatLevel(sanity, PlayerConstants.SL_SANITY_CRITICAL, PlayerConstants.SL_SANITY_LOW, PlayerConstants.SL_SANITY_NORMAL, PlayerConstants.SL_SANITY_HIGH);
	}
  EStatLevels GetStatLevelDrugDependency()
	{
		float drugDependency = GetStatDrugDependency().Get();
		return GetStatLevel(drugDependency, PlayerConstants.SL_DRUGDEPENDENCY_CRITICAL, PlayerConstants.SL_DRUGDEPENDENCY_LOW, PlayerConstants.SL_DRUGDEPENDENCY_NORMAL, PlayerConstants.SL_DRUGDEPENDENCY_HIGH);
	}
//=========================================================== END
};
