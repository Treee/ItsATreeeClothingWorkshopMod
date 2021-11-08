modded class PlayerBase extends ManBase
{
  EffectSound m_AcidSounds;
  EffectSound m_SleepSounds;

  string selectedCraftingBench = "";
  EntityAI guiCraftingBench = null;

  SRP_ActionOpenMapCB m_OpenMapCallback;

  const string FACEPAINT_PATH = "Survivalists_Mods\\characters\\heads\\";
  int	m_facepaintState;
  int m_facepaintStateLocal;
  int m_currentCamoIndex;
  int m_facepaintCountMax;

  override void Init()
	{
    super.Init();

    m_facepaintState = 0;
    m_facepaintStateLocal = 0;
    m_currentCamoIndex = 0;
    m_facepaintCountMax = GetPlayerCamoNames().Count() - 1;
    RegisterNetSyncVariableInt("m_facepaintState", 0, m_facepaintCountMax);
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
      case SRP_RPC.CLIENT_REQUEST_CRAFT: // client is asking the server to craft an item
      { 
        if (GetGame().IsServer())
        {
          Print("Server accepting client craft request");
          Param2<CraftedItem, EntityAI> ingredientsAndResults;
          if (!ctx.Read(ingredientsAndResults)) return;      
          guiCraftingBench = ingredientsAndResults.param2;        
          // if the server's ingredients are not what the client sent, return
          if (!CheckRecipeCraftingValidity(ingredientsAndResults.param1)) return;
          // delete the ingredients
          DeleteIngredients(ingredientsAndResults.param1, ItemBase.Cast(ingredientsAndResults.param2));
        }
        else {
          Print("Client craft request.... nono");
        }
        break;
      }
    }
  }

  override void OnVariablesSynchronized()
  {
		super.OnVariablesSynchronized();
    // Print("sync variables");
		if( m_facepaintStateLocal != m_facepaintState && IsPlayerLoaded())
		{
      // Print("sync camo state");
			UpdateCamoState();
		} 
  }

  override bool CanSprint()
  {
    // if (Class.CastTo(item, FindAttachmentBySlotName("Vest")))
    // {
    //   if (item && (item.GetType() == "SRP_Ratnik_Green" || item.GetType() == "SRP_Ratnik_Tan" || item.GetType() == "SRP_Ratnik_Black"))
    //   {
    //     return false;
    //   }
    // }
    ItemBase item = GetItemInHands();
    if (item && item.GetType() == "SRP_BerserkSword")
    {
      return false;
    }
    // if (item && item.HasAnyCargo()) // if the item exists and has cargo
    // {
    //   CargoBase cargoItem = item.GetInventory().GetCargo();
    //   int currentWeight = 0;
    //   int maxWeight = cargoItem.GetWidth() * cargoItem.GetHeight(); // x,y    
    //   if (maxWeight >= 80)  
    //   {
    //     for ( int i = 0; i < cargoItem.GetItemCount(); ++i )
    //     {
    //       int x, y;
    //       cargoItem.GetItemSize( i, x, y );
    //       currentWeight += x * y;
    //     }
    //     float percentFilled = 1-((maxWeight-currentWeight)/maxWeight);
    //     if (percentFilled >= 0.6)
    //     {
    //       return false;
    //     }
    //   }
    // }
    return super.CanSprint();
  }

  bool SRPIgnoreContaminatedArea()
  {
    if (GetSingleAgentCount(DUB_MutantAgent.MUTANT_AGENT) >= 2400)
    {
      return true;
    }
    EntityAI attachment = GetInventory().FindAttachment(InventorySlots.ARMBAND);
		if(attachment && attachment.GetType() == "Skylar_BioZone_Protection")
    {
      return true;
    }
    int slot_id = InventorySlots.GetSlotIdFromString("Head");
    Head_Default tempHead = Head_Default.Cast(GetInventory().FindPlaceholderForSlot( slot_id ));
    if (tempHead.GetType() == "DUB_Muthead_M" || tempHead.GetType() == "DUB_Muthead_F" || tempHead.GetType() == "DUB_Muthead_M_2" || tempHead.GetType() == "DUB_Muthead_F_2")
    {
      return true;
    }
    EntityAI back = GetInventory().FindAttachment(InventorySlots.BACK);
    if (back && back.GetType() == "DUB_Monsterv2")
    {
      return true;
    }
    return false;
  }

  void UpdateCamoState()
  {
    // Print("Update camo state");
    if (!IsMale())
    {
      // Print("female");
      int slot_id = InventorySlots.GetSlotIdFromString("Head");	
      EntityAI players_head = GetInventory().FindPlaceholderForSlot( slot_id );
      players_head.SetObjectMaterial( 0, "");
      
      string playerType = GetType();
      playerType.Replace("SurvivorF_", "");
      string filepath = "hhl_f_" + playerType + "_body.rvmat";
      string materialPath = FACEPAINT_PATH + GetSelectedCamoName() + "\\" + filepath;
      Print("female face path: " + materialPath);
      SetFaceMaterial( materialPath );
    }
    else 
    {
      // Print("male");
      if ( m_ModuleLifespan )
      {
        // Print("module lifespan is not null");
		    m_ModuleLifespan.UpdateLifespan( this, true );

      }
    }
    m_facepaintStateLocal = m_facepaintState;
  }

  string GetSelectedCamoName()
  {
    string selectedCamo = "";
    if (m_facepaintState > 0){
      selectedCamo = GetPlayerCamoNames().Get(m_facepaintState);
      // Print("GetSelectedCamoName selected camo name from list: " + selectedCamo);
    }
    return selectedCamo;
  }

  string GetCurrentCamoIndexName()
  {
    string selectedCamo = "";
    selectedCamo = GetPlayerCamoNames().Get(m_currentCamoIndex);
    // Print("GetCurrentCamoIndexName selected camo name from list: " + selectedCamo);
    return selectedCamo;
  }

  TStringArray GetPlayerCamoNames()
  {
    return {
      "",
      "fp_bosnia",
      "fp_bulgaria1",
      "fp_bulgaria2",
      "fp_croatia",
      "fp_czech1",
      "fp_czech2",
      "fp_desert",
      "fp_digital",
      "fp_france",
      "fp_germany",
      "fp_hungary1",
      "fp_hungary2",
      "fp_macedonia",
      "fp_poland1",
      "fp_poland2",
      "fp_romania1",
      "fp_romania2",
      "fp_slovenia",
      "fp_uk",
      "fp_usa",
      "fp_winter",
      "fp_woodland",
      "fp_yugoslavia",
    };
  }

  bool CheckRecipeCraftingValidity(CraftedItem craftedItem)
  {
    bool isValid = true;
    if (!guiCraftingBench)
    {
      // Print("No crafting bench");
      isValid = isValid && false;
    }
    if (!guiCraftingBench.HasAnyCargo())
    {
      // Print("Crafting bench has no cargo");
      isValid = isValid && false;
    }
    // for each component
    for (int componentIndex = 0; componentIndex < craftedItem.craftingComponents.Count(); componentIndex++)
    {
      // Print("Checking component " + componentIndex + " index");
      // check to see if the item exists in the workbench  
      for(int workbenchIndex = 0; workbenchIndex < guiCraftingBench.GetInventory().GetCargo().GetItemCount(); workbenchIndex++)
      {
        ItemBase itemInBench = ItemBase.Cast(guiCraftingBench.GetInventory().GetCargo().GetItem(workbenchIndex)); 
        // Print("Checking workbench " + workbenchIndex + " index " + itemInBench);
        if (itemInBench.GetType() == craftedItem.craftingComponents.Get(componentIndex).className)
        {
          // Print("Workbench item matches component")
          if (itemInBench.IsRuined())
          {
            // Print("Item is ruined....");
            continue;
          }
          if (itemInBench.HasQuantity())
          {
            // Print("Item has quantity");
            isValid = isValid && (itemInBench.GetQuantity() >= craftedItem.craftingComponents.Get(componentIndex).amount;
          }
          else
          {
            // Print("No quantity but still here");
            isValid = isValid && true;
          }
          // Print("Checking amount of " + itemInBench.GetType() + " Has x amount: " + itemInBench.GetQuantity() + " entity: " + itemInBench);
          // Print("quantity max " + itemInBench.GetQuantityMax());        
        }
      }
    }
    return isValid;
  }

  void DeleteIngredients(CraftedItem createdItem, ItemBase workbench)
  {
    // Print("Delete ingredients");
    ItemBase cargoItemIB;
    // for each component of the crafted item
    for (int i = 0; i < createdItem.craftingComponents.Count(); i++)
    {      
      CraftingComponent craftingComponent = createdItem.craftingComponents.Get(i);
      cargoItemIB = ItemBase.Cast(GetGame().CreateObject(craftingComponent.className, vector.Zero, false));
      // Print("Looking to delete: " + craftingComponent.className + " cargoitemtemp: " + cargoItemIB);
      // does the component even exist as an item in the config?
      if (cargoItemIB)
      {
        // Print("Cargo item exists theoretically");
        // if the item is a tool or something that might hold many items but is considered only 1 item total
        if ((QuantityConversions.HasItemQuantity(cargoItemIB) == 0) || cargoItemIB.IsInherited(Magazine))
        {
          ItemWithoutQuantity(craftingComponent);
        }
        else
        {
          ItemWithCount(craftingComponent);
        }
        // clean up our helper object
        GetGame().ObjectDelete(cargoItemIB);
      }
    }
    GiveResults(createdItem, workbench);
  }

  void GiveResults(CraftedItem createdItem, ItemBase workbench)
  {
    // Print("Give Results: " +createdItem.result);
    ItemBase itemReward;
    int needQuantity = createdItem.resultCount;

    // does the item even exist in the configs
    ItemBase tempIB = ItemBase.Cast(GetGame().CreateObject(createdItem.result, vector.Zero, false));
    if (!tempIB)
      return;

    // Print("Item theoretically exists");
    // set maximums
    float q_cur, q_min, q_max;
    QuantityConversions.GetItemQuantity(tempIB, q_cur, q_min, q_max);
    GetGame().ObjectDelete(tempIB);    

    if (!q_max) q_max = 1;

    while (needQuantity > 0)
    {
      // Print("Still need: " + needQuantity + " quantity");
      // if the max quantity is less than the totaly that we need, keep making items
      if (q_max < needQuantity)
      {
        // itemReward = ItemBase.Cast(GetGame().CreateObject(createdItem.result, GetPosition(), false));
        itemReward = ItemBase.Cast(workbench.GetInventory().CreateInInventory(createdItem.result));
        // Print("max item is less thant total: " + itemReward);
        needQuantity -= q_max;
      }
      else
      { // the item actually has quantity so reduce that
        // itemReward = ItemBase.Cast(GetGame().CreateObject(createdItem.result, GetPosition(), false));
        itemReward = ItemBase.Cast(workbench.GetInventory().CreateInInventory(createdItem.result));
        // Print("item has quantity: " + itemReward);
        Magazine pileReward;
        if (Class.CastTo(pileReward, itemReward))
        { // if ammo, set ammot count
          // Print("Ammo pile");
          pileReward.ServerSetAmmoCount(needQuantity);
        }
        else
        { // else just set the item quantity
          // Print("set quantity");
          itemReward.SetQuantity(needQuantity);
        }
        needQuantity = 0;
        // Print("all done making items");
      }
    }
  }

  void ItemWithoutQuantity(CraftingComponent craftingComponent)
  {
    int amount = craftingComponent.amount;
    // Print("Item without quantity: " + amount);
    // find any item that is not ruined or is a weapon
    for (int k = 0; k < guiCraftingBench.GetInventory().GetCargo().GetItemCount(); k++)
    {
      EntityAI cargoEntity = guiCraftingBench.GetInventory().GetCargo().GetItem(k);
      // Print("checking item: " + cargoEntity);
      if (cargoEntity && (!cargoEntity.IsRuined() || cargoEntity.IsWeapon()))
      {
        // Print("not ruined or a weapon");
          // check this cargo for quantity vs the craftingcomponent
        if (cargoEntity && (cargoEntity.GetType() == craftingComponent.className))
        {
          // Print("matches component");
          // destroy objects marked for destruction
          if (craftingComponent.destroy)
          {
            // Print("destroy component");
            GetGame().ObjectDelete(cargoEntity);
          } // otherwise reduce hp
          else
          {
            // Print("Modify hp");
            cargoEntity.AddHealth(craftingComponent.changeHealth);
          }
          // decrement the amount
          amount--;
          // if we are no longer removing quanity, break from the loop
          if (!amount) break;
        }        
      }
    }
  }

  void ItemWithCount(CraftingComponent craftingComponent)
  {
    int amount = craftingComponent.amount;
    // Print("ItemWithCount");
    // find any item that is not ruined or is a weapon
    for (int k = 0; k < guiCraftingBench.GetInventory().GetCargo().GetItemCount(); k++)
    {
      EntityAI cargoEntity = guiCraftingBench.GetInventory().GetCargo().GetItem(k);
      // Print("checking cargo enetity: " + cargoEntity);
      if (cargoEntity && (!cargoEntity.IsRuined() || cargoEntity.IsWeapon()))
      {
        // Print("cargo entity is not ruined or a weapon");
          // check this cargo for quantity vs the craftingcomponent
        if (cargoEntity && (cargoEntity.GetType() == craftingComponent.className))
        {
          ItemBase itemWithCount = ItemBase.Cast(cargoEntity);
          // Print("matches item " + itemWithCount);;
          if (itemWithCount)
          {
            // Print("not null");
            // destroy objects marked for destruction
            if (craftingComponent.destroy)
            {
              // Print("destroy component");
              if (itemWithCount.GetQuantity() > amount)
              {
                // Print("item has more quantity than needed");
                itemWithCount.AddQuantity(-amount);
                break;
              }
              else
              {
                // Print("item has less quantity than required so delete it and decrement amount")
                amount -= itemWithCount.GetQuantity();
                GetGame().ObjectDelete(itemWithCount);
              }
            } // otherwise reduce hp
            else
            {
              // Print("do not delete opbject");
              if (itemWithCount.GetQuantity() > amount)
              {
                // Print("reduce the item's count");
                itemWithCount.AddQuantity(-amount);
                amount -= itemWithCount.GetQuantity();
              }
              else
              {
                // Print("reduce item health")
                amount -= itemWithCount.GetQuantity();
                itemWithCount.AddHealth(craftingComponent.changeHealth);
              }
            }
            // if we are no longer removing quanity, break from the loop
            if (!amount) break;
          }
        }        
      }
    }
  }

  bool HasSleepAgent()
  {
    return m_AgentPool.HasAgent(SRP_Medical_Agents.SLEEP_AGENT);
  }

  bool IsAwake()
  {
    return !GetEmoteManager().m_IsLayDown && !IsUnconscious();
  }

  void SRP_SetUnconscious()
  {
    SetHealth("", "Shock", 0);
    GetModifiersManager().ActivateModifier(eModifiers.MDF_UNCONSCIOUSNESS);
  }

  void TryYawn(bool isMale)
  {    
    // Print("SRP Modded Playerbase:: TryYawn chance to yawn: " + chance);
    if (isMale) {
      PlaySoundSet(m_SleepSounds, SRP_SoundSets_Yawns_Male.GetRandomElement(), 0, 0);
    } else {
      PlaySoundSet(m_SleepSounds, SRP_SoundSets_Yawns_Female.GetRandomElement(), 0, 0);
    }
  }

  void PlayScarySound()
  {
    float chance = Math.RandomFloat01() * 100;
    string soundSet = "";
    if (chance < 25) {
      soundSet = SRP_SoundSets_ZombieAttack.GetRandomElement();       
    } else if (chance < 50) {
      soundSet = SRP_SoundSets_CallToArms.GetRandomElement();       
    } else if (chance < 75) {
      soundSet = SRP_SoundSets_Wolf.GetRandomElement();       
    } else {
      soundSet = SRP_SoundSets_Bear.GetRandomElement();       
    }
    PlaySoundSet(m_AcidSounds, soundSet, 0, 0);
  }

  void PlayHappySound()
  {
    float chance = Math.RandomFloat01() * 100;
    string soundSet = "";
    if (chance < 20) {
      soundSet = SRP_SoundSets_SheepBleats.GetRandomElement();       
    } else if (chance < 40) {
      soundSet = SRP_SoundSets_HogGrunts.GetRandomElement();       
    } else if (chance < 60) {
      soundSet = SRP_SoundSets_Cows.GetRandomElement();       
    } else if (chance < 80) {
      soundSet = SRP_SoundSets_Chicken.GetRandomElement();       
    } else {
      soundSet = SRP_SoundSets_Deer.GetRandomElement();       
    }
    PlaySoundSet(m_AcidSounds, soundSet, 0, 0);
  }

  void DisableAllMyModifiers()
  {
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_TEST );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_STONED );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_TOBACCO );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ACIDSMILE );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ACIDSKULL );
    // GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_MUSHROOMS );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_METH );
    // GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_COCAINE );
    // GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_PCP );
    // GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_HEROINE );
    // GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_ALCOHOL );
    GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_BATHSALTS );    
  }

  void RemoveAllSymptoms()
  {
    GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_TEST);
    GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_WEED);
    GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_TOBACCO);
    GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ACIDSMILE);
    GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ACIDSKULL);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_MUSHROOMS);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_COCAINE);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_PCP);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_HEROINE);
    // GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_ALCOHOL);
    GetSymptomManager().RemoveSecondarySymptom(SRP_SymptomIDs.SYMPTOM_BATHSALTS);
  }
}