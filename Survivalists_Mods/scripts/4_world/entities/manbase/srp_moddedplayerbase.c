modded class PlayerBase
{
  protected EffectSound m_SleepSounds;
  protected float m_TotalTiredness = 0;
  
  ItemBook currentBookInHands;

  protected bool m_IsInBioZone = false;
  protected bool m_IsNearComfortHeatSource = false;
  protected bool m_TirednessSprintOverride = false;
  protected int m_DisableSprint = 0;
  protected bool m_HeavyItemInHandsSprintDisable = false;
  protected bool m_HeavyItemEquippedSprintDisable = false;

  protected float m_TotalAlcoholInStomach = 0;
  protected float m_AccumulatedAlcoholCheck = 0;

  protected float m_TotalContaminationProtection = 0;

  override void Init()
  {
    super.Init();
    RegisterNetSyncVariableFloat("m_TotalTiredness", 0, 65536);
    RegisterNetSyncVariableBool("m_TirednessSprintOverride");
  }

  override void OnVariablesSynchronized()
  {
    super.OnVariablesSynchronized();
    ProcessPlayerSleep();
  }

  void SendMessageToClient( Object reciever, string message ) //sends given string to client, don't use if not nescessary
	{
		PlayerBase man;
    Param1<string> m_MessageParam = new Param1<string>(message);
		if( GetGame().IsServer() && Class.CastTo(man, reciever) && m_MessageParam && reciever.IsAlive() && message != "" )
		{
			GetGame().RPCSingleParam(man, ERPCs.RPC_USER_ACTION_MESSAGE, m_MessageParam, true, man.GetIdentity());
		}
	}

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

  override void OnScheduledTick(float deltaTime)
	{
    super.OnScheduledTick(deltaTime);
    // always be degenerating alcohol in the system
    if (m_TotalAlcoholInStomach > 0)
    {
      AddAlcoholConsuption(-deltaTime);
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
		{
      m_AdminLog.DirectAdminLogPrint(string.Format("ADMIN HELPER::||%1", GetEquippedItems()));
		}
		super.EEKilled( killer );
	};

  override bool CanSprint()
  {    
    if (GetTotalTiredness() > 23000 && !IsTirednessSprintOverriden()) // roughly 75% tiredness
    {
      return false;
    }

    if (IsSprintDisabledByHeavyItemInHands())
    {
      // Print("heavy item in hands");
      return false;
    }

    if (IsSprintDisabledByHeavyItemEquipped())
    {
      // Print("heavy item equipped");
      return false;
    }

    return super.CanSprint();
  }

  override bool IsSprinting()
	{
    return ( super.IsSprinting() || m_MovementState.m_iMovement == DayZPlayerConstants.MOVEMENTIDX_SPRINT );				
	}

  string GetEquippedItems()
  {
    array<EntityAI> itemsArray = new array<EntityAI>;
		ItemBase item;
		GetInventory().EnumerateInventory(InventoryTraversalType.PREORDER, itemsArray);
		
    string itemString = "";
		for (int i = 0; i < itemsArray.Count(); i++)
		{
			Class.CastTo(item, itemsArray.Get(i));
			if (item && !item.IsInherited(SurvivorBase))
      {
        if (item.HasQuantity())
        {
          itemString = string.Format("%1,%2x%3", itemString, item.GetType(),item.GetQuantity());
        }
        else
        {
          itemString = string.Format("%1,%2", itemString, item.GetType());
        }
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
    if (IsPlayerMutant())
    {
      return true;
    }
    // if (IsAlpha())
    // {
    //   return true;
    // }
    if (GetPlayerRadiationProtection() > 5)
    {
      return true;
    }
    return false;
  }

  bool IsPlayerMutant()
  {
    int slot_id = InventorySlots.GetSlotIdFromString("Head");
    Head_Default tempHead = Head_Default.Cast(GetInventory().FindPlaceholderForSlot( slot_id ));
    if (tempHead && (tempHead.GetType() == "DUB_Muthead_M" || tempHead.GetType() == "DUB_Muthead_F" || tempHead.GetType() == "DUB_Muthead_M_2" || tempHead.GetType() == "DUB_Muthead_F_2" || tempHead.GetType() == "DUB_Carlhead"))
    {
      return true;
    }
    return false;
  }

  bool IsPlayerPreMutant()
  {
    if (IsAlive() && m_FliesEff)
    {
      return true;
    }
    return false;
  }

  void ModifyContaminationProtection(float amount)
  {
    m_TotalContaminationProtection += amount;
  }

  float GetPlayerRadiationProtection()
  {
    if (IsPlayerMutant())
    {
      return 8.0;
    }

    return m_TotalContaminationProtection;
    
    // float protection = 0;
    // ItemBase wornItem;
    // wornItem = GetItemOnSlot("Headgear");
    // if (wornItem)
    // {
    //   protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    // }
    // wornItem = GetItemOnSlot("Gloves");
    // if (wornItem)
    // {
    //   protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    // }
    // wornItem = GetItemOnSlot("Body");
    // if (wornItem)
    // {
    //   protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    // }
    // wornItem = GetItemOnSlot("Bottom");
    // if (wornItem)
    // {
    //   protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    // }
    // wornItem = GetItemOnSlot("Feet");
    // if (wornItem)
    // {
    //   protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    // }
    // wornItem = GetItemOnSlot("Mask");
    // if (wornItem)
    // {
    //   protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL, true);
    // }
    // wornItem = GetItemOnSlot("Armband");
    // if (wornItem)
    // {
    //   protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    // }
    // wornItem = GetItemOnSlot("Backpack");
    // if (wornItem)
    // {
    //   protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    // }
    // wornItem = GetItemOnSlot("Extra");
    // if (wornItem)
    // {
    //   protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    // }
    // if (IsPlayerMutant())
    // {
    //   protection += 8.0;
    // }
    // return protection;
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

  bool IsDrunkIncapacitated()
  {
    return m_TotalAlcoholInStomach > 1000;
  }

  void AddAlcoholConsuption(float alcoholToAdd)
  {
    // never go below 0 drinks had
    m_TotalAlcoholInStomach = Math.Max(0, (m_TotalAlcoholInStomach + alcoholToAdd));    
    // should we cap a ceiling?
    // Print("total alcohol in stomach: " + m_TotalAlcoholInStomach + " added " + alcoholToAdd);
    if (IsDrunkIncapacitated() && !IsUnconscious())
    {
      SRP_SetUnconscious(10);
    }
  }

  float SRPAIVisionModifier()
  {
    float vision = 1.0;
    EntityAI suitAttachment = FindAttachmentBySlotName("Extra");
    EntityAI armbandAttachment = GetInventory().FindAttachment(InventorySlots.ARMBAND);
    EntityAI feetAttachment = GetInventory().FindAttachment(InventorySlots.FEET);
    if (GetSingleAgentCount(DUB_MutantAgent.MUTANT_AGENT) >= 28800)
    {
			vision = 0.0;
      // Area 42
			if (vector.Distance(GetPosition(), Vector(13399.7, 12.9225, 9843.49)) < 600)
			{
				vision = 0.5;
			}
			// Airfield
			else if (vector.Distance(GetPosition(), Vector(5454.67, 75.6217, 3461.69)) < 550)
			{
				vision = 0.5;
			}
			// Paris
			else if (vector.Distance(GetPosition(), Vector(2812.13, 22.4625, 3901.33)) < 750)
			{
				vision = 0.5;
			}
			// Temple
			else if (vector.Distance(GetPosition(), Vector(422.315, 16.5728, 595.137)) < 850)
			{
				vision = 0.5;
			}
    }
		else if (suitAttachment && (suitAttachment.GetType() == "DUB_Monsterv2" || suitAttachment.IsInherited(DUB_Monsterv2)))
		{
			vision = 0.0;
		}  
    else if (suitAttachment && (suitAttachment.GetType() == "DUB_Wendigosuit" || suitAttachment.IsInherited(DUB_Wendigosuit)))
		{
			vision = 0.0;
		}       
		else if (armbandAttachment && armbandAttachment.GetType() == "Skylar_BioZone_Protection")
    {
      vision = 0.3;
    }
    else if (feetAttachment && feetAttachment.GetType() == "Sneakers_Skylar_Biozone")
    {
      vision = 0.3;
    }

    return vision;
  }

  float GetTotalTiredness()
  {
    return m_TotalTiredness;
  }

  void SetTotalTiredness(float tiredness)
  {
    m_TotalTiredness = tiredness;
  }

  bool IsTirednessSprintOverriden()
  {
    return m_TirednessSprintOverride;
  }

  void SetTirednessSprintOverride(bool overrideSprint)
  {
    m_TirednessSprintOverride = overrideSprint;
  }

  void SetIsNearComfortHeatSource(bool isNearComfort)
  {
    m_IsNearComfortHeatSource = isNearComfort;
  }

  bool IsNearComfortHeatSource()
  {
    return m_IsNearComfortHeatSource;
  }

  void ProcessPlayerSleep()
  {
    // Print("[PlayerBase] - [ProcessPlayerSleep] - TotalTiredNess: " + m_TotalTiredness);
  }
  
  override void ProcessFeetDamageServer(int pUserInt)
	{    
    if (SRP_IgnoreShoeDamage())
    {
      return;
    }
    super.ProcessFeetDamageServer(pUserInt);
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
    // AddAction(ActionTurnRubixCubeClockwise_Row1, InputActionMap);      
    // AddAction(ActionTurnRubixCubeClockwise_Row2, InputActionMap);      
    // AddAction(ActionTurnRubixCubeClockwise_Col1, InputActionMap);      
    // AddAction(ActionTurnRubixCubeClockwise_Col2, InputActionMap);      
    // AddAction(ActionTurnRubixCubeClockwise_Z1, InputActionMap);      
    // AddAction(ActionTurnRubixCubeClockwise_Z2, InputActionMap);    
  }
};
