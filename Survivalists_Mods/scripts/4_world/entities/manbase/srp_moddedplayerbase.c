modded class PlayerBase extends ManBase
{
  EffectSound m_SleepSounds;
  
  string selectedCraftingBench = "";
  EntityAI guiCraftingBench = null;

  ItemBook currentBookInHands;

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

  override bool CanSprint()
  {
    ItemBase item;
    if (Class.CastTo(item, FindAttachmentBySlotName("Vest")))
    {
      if (item && (item.GetType() == "SRP_Ratnik_Green" || item.GetType() == "SRP_Ratnik_Tan" || item.GetType() == "SRP_Ratnik_Black"))
      {
        return false;
      }
    }
    if (Class.CastTo(item, FindAttachmentBySlotName("Hips")))
    {
      if (item && (item.GetType() == "SRP_Car_WoodenDerby" || item.IsInherited(SRP_Car_WoodenDerby)))
      {
        return false;
      }
    }
    if (Class.CastTo(item, FindAttachmentBySlotName("Feet")))
    {
      if (item && (item.GetType() == "DUB_Flippers"))
      {
        return false;
      }
    }
    item = GetItemInHands();
    if (item && (item.GetType() == "SRP_BerserkSword" || item.GetType() == "SRP_Car_WoodenDerby" || item.IsInherited(SRP_Car_WoodenDerby) || item.GetType() == "BBP_Step_LadderKit"))
    {
      return false;
    }
    if (item && item.HasAnyCargo()) // if the item exists and has cargo
    {
      CargoBase cargoItem = item.GetInventory().GetCargo();
      int currentWeight = 0;
      int maxWeight = cargoItem.GetWidth() * cargoItem.GetHeight(); // x,y    
      if (maxWeight >= 80)  
      {
        for ( int i = 0; i < cargoItem.GetItemCount(); ++i )
        {
          int x, y;
          cargoItem.GetItemSize( i, x, y );
          currentWeight += x * y;
        }
        float percentFilled = 1-((maxWeight-currentWeight)/maxWeight);
        if (percentFilled >= 0.6)
        {
          return false;
        }
      }
    }
    return super.CanSprint();
  }

  bool SRPIgnoreContaminatedArea(float deltaT)
  {
    // temp fix for irradiating SRP_LabTube_MutantLiquidSterilized until i localize hand items
    ItemBase item = GetItemInHands();
    if (item)
    {
      SRP_LabTube_MutantLiquidSterilized labTube = SRP_LabTube_MutantLiquidSterilized.Cast(item);
      if (labTube)
      {
        labTube.UpdateRadiationExposure(this, deltaT);
      }
    }

    if (GetSingleAgentCount(DUB_MutantAgent.MUTANT_AGENT) >= 2400)
    {
      return true;
    }
    EntityAI attachment = GetInventory().FindAttachment(InventorySlots.ARMBAND);
		if(attachment && (attachment.GetType() == "Skylar_BioZone_Protection" || attachment.GetType() == "Sneakers_Skylar_Biozone"))
    {
      return true;
    }
    attachment = GetInventory().FindAttachment(InventorySlots.FEET);
    if(attachment && (attachment.GetType() == "Sneakers_Skylar_Biozone"))
    {
      return true;
    }
    int slot_id = InventorySlots.GetSlotIdFromString("Head");
    Head_Default tempHead = Head_Default.Cast(GetInventory().FindPlaceholderForSlot( slot_id ));
    if (tempHead && (tempHead.GetType() == "DUB_Muthead_M" || tempHead.GetType() == "DUB_Muthead_F" || tempHead.GetType() == "DUB_Muthead_M_2" || tempHead.GetType() == "DUB_Muthead_F_2" || tempHead.GetType() == "DUB_Carlhead"))
    {
      return true;
    }
    EntityAI back = GetInventory().FindAttachment(InventorySlots.BACK);
    if (back && (back.GetType() == "DUB_Monsterv2" || back.IsInherited(DUB_Monsterv2)))
    {
      return true;
    }
    if (GetPlayerRadiationProtection() > 5)
    {
      return true;
    }
    return false;
  }

  int GetPlayerRadiationProtection()
  {
    float protection = 0;
    ItemBase wornItem;
    wornItem = ItemBase.Cast(GetInventory().FindAttachment(InventorySlots.HEADGEAR));
    if (wornItem)
    {
      protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    }
    wornItem = ItemBase.Cast(GetInventory().FindAttachment(InventorySlots.GLOVES));
    if (wornItem)
    {
      protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    }
    wornItem = ItemBase.Cast(GetInventory().FindAttachment(InventorySlots.BODY));
    if (wornItem)
    {
      protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    }
    wornItem = ItemBase.Cast(GetInventory().FindAttachment(InventorySlots.LEGS));
    if (wornItem)
    {
      protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    }
    wornItem = ItemBase.Cast(GetInventory().FindAttachment(InventorySlots.FEET));
    if (wornItem)
    {
      protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    }
    wornItem = ItemBase.Cast(GetInventory().FindAttachment(InventorySlots.MASK));
    if (wornItem)
    {
      protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL, true);
    }
    wornItem = ItemBase.Cast(GetInventory().FindAttachment(InventorySlots.ARMBAND));
    if (wornItem)
    {
      protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    }
    wornItem = ItemBase.Cast(GetInventory().FindAttachment(InventorySlots.BACK));
    if (wornItem)
    {
      protection += wornItem.GetProtectionLevel(DEF_BIOLOGICAL);
    }
    wornItem = ItemBase.Cast(GetInventory().FindAttachment(InventorySlots.HEAD));
    if (wornItem && (wornItem.GetType() == "DUB_Muthead_M" || wornItem.GetType() == "DUB_Muthead_F" || wornItem.GetType() == "DUB_Muthead_M_2" || wornItem.GetType() == "DUB_Muthead_F_2" || wornItem.GetType() == "DUB_Carlhead"))
    {
      protection += 6.0;
    }
    return protection;
  }

  float SRPAIVisionModifier()
  {
    float vision = 1.0;
    EntityAI suitAttachment = GetInventory().FindAttachment(InventorySlots.BACK);
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

  bool SRPIgnoreFallingDamage()
  {
    bool ignoreFalling = false;
    EntityAI suitAttachment = GetInventory().FindAttachment(InventorySlots.BACK);
    EntityAI mutantAttachment = GetInventory().FindAttachment(InventorySlots.HEAD);

    if (suitAttachment && (suitAttachment.GetType() == "DUB_Monsterv2" || suitAttachment.IsInherited(DUB_Monsterv2)))
      ignoreFalling = true;
    else if (suitAttachment && (suitAttachment.GetType() == "DUB_Wendigosuit" || suitAttachment.IsInherited(DUB_Wendigosuit)))
      ignoreFalling = true;
    else if (suitAttachment && (suitAttachment.GetType() == "DUB_Lich" || suitAttachment.IsInherited(DUB_Lich)))
      ignoreFalling = true;
    else if ( mutantAttachment && mutantAttachment.GetType() == "DUB_Observerhead")
      ignoreFalling = true;
    else if (GetSingleAgentCount(DUB_MutantAgent.MUTANT_AGENT) >= 86893 && GetGame().GetWorld().IsNight())
      ignoreFalling = true;
    else if (GetGame().GetWaterDepth(GetPosition()) > 0 )
      ignoreFalling = true;
    return ignoreFalling;
  }

  float SRPGetJumpHeight()
  {
    float height = 2.6; // default
    EntityAI suitAttachment = GetInventory().FindAttachment(InventorySlots.BACK);

    if (suitAttachment && (suitAttachment.GetType() == "DUB_Monsterv2" || suitAttachment.IsInherited(DUB_Monsterv2)))
		{
			height = 15;
		}
    else if (suitAttachment && (suitAttachment.GetType() == "DUB_Wendigosuit" || suitAttachment.IsInherited(DUB_Wendigosuit)))
		{
			height = 15;
		}
    return height;
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
      cargoItemIB = ItemBase.Cast(GetGame().CreateObjectEx(craftingComponent.className, vector.Zero, false));
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
    ItemBase tempIB = ItemBase.Cast(GetGame().CreateObjectEx(createdItem.result, vector.Zero, false));
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
        // itemReward = ItemBase.Cast(GetGame().CreateObjectEx(createdItem.result, GetPosition(), false));
        itemReward = ItemBase.Cast(workbench.GetInventory().CreateInInventory(createdItem.result));
        // Print("max item is less thant total: " + itemReward);
        needQuantity -= q_max;
      }
      else
      { // the item actually has quantity so reduce that
        // itemReward = ItemBase.Cast(GetGame().CreateObjectEx(createdItem.result, GetPosition(), false));
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

  override void SetActions(out TInputActionMap InputActionMap)
  {
    super.SetActions(InputActionMap);
    AddAction(ActionFlipPlayingCard, InputActionMap);      
  }
}
