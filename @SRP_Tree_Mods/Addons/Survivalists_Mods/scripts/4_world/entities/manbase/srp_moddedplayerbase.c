modded class PlayerBase extends ManBase
{
  string selectedCraftingBench = "";
  EntityAI guiCraftingBench = null;

  override void SetMapOpen(bool state)
	{
    super.SetMapOpen(state);
    // this forces the map to stay open instead of normally forcing it to close
    m_MapCloseRequestProcessed = state;
	}
  
	override void CommandHandler(float pDt, int pCurrentCommandID, bool pCurrentCommandFinished)	
	{
    super.CommandHandler(pDt,pCurrentCommandID,pCurrentCommandFinished);

		if ( (!GetGame().IsMultiplayer() || GetGame().IsClient()) && IsMapOpen())
		{
      HumanInputController hic = GetInputController();
      // close the map if we click while the map is open
			if (hic.IsUseButtonDown()) 
			{
        CloseMap();
        // manually set the request processed to true
        m_MapCloseRequestProcessed = m_MapCloseRequestProcessed;
			}
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
        Param2<CraftedItem, EntityAI> ingredientsAndResults;
        if (!ctx.Read(ingredientsAndResults)) return;      
        guiCraftingBench = ingredientsAndResults.param2;        
        // if the server's ingredients are not what the client sent, return
        if (!CheckRecipeCraftingValidity(ingredientsAndResults.param1)) return;
        // delete the ingredients
        DeleteIngredients(ingredientsAndResults.param1, ingredientsAndResults.param2);
        break;
      }
    }
  }

  bool CheckRecipeCraftingValidity(CraftedItem craftedItem)
  {
    bool isValid = true;
    if (!guiCraftingBench)
    {
      isValid = isValid && false;
    }
    if (!guiCraftingBench.HasAnyCargo())
    {
      isValid = isValid && false;
    }
    // for each component
    for (int componentIndex = 0; componentIndex < craftedItem.craftingComponents.Count(); componentIndex++)
    {
      // check to see if the item exists in the workbench  
      for(int workbenchIndex = 0; i < guiCraftingBench.GetInventory().GetCargo().GetItemCount(); workbenchIndex++)
      {
        ItemBase itemInBench = targetPlayer.guiCraftingBench.GetInventory().GetCargo().GetItem(workbenchIndex);      
        if (itemInBench.GetType() == craftedItem.craftingComponents.Get(componentIndex).className)
        {
          if (itemInBench.IsRuined())
          {
            continue;
          }
          if (itemInBench.HasQuantity())
          {
            isValid = isValid && (itemInBench.GetQuantity() >= craftedItem.craftingComponents.Get(componentIndex).amount;
          }
          else
          {
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
    ItemBase cargoItemIB;
    CargoBase cargoBase;
    int cargoCount;

    cargoBase = workbench.GetInventory().GetCargo();
    cargoCount = cargoBase.GetItemCount();

    for (int k = 0; k < cargoCount; k++)
    {
        EntityAI crgEnt = cargoBase.GetItem(k);
        if (crgEnt && (!crgEnt.IsRuined() || crgEnt.IsWeapon()))
        {
            CargoItems.Insert(crgEnt);
        }
    }

    for (int i = 0; i < createdItem.CraftComponents.Count(); i++)
    {
        TailorCraftComponent cc = createdItem.CraftComponents.Get(i);
        cargoItemIB = ItemBase.Cast(GetGame().CreateObject(cc.Classname, vector.Zero, false));
        if (cargoItemIB)
        {
            if ((QuantityConversions.HasItemQuantity(cargoItemIB) == 0) || cargoItemIB.IsInherited(Magazine))
            {
                ItemWithoutQuantity(cc);
            }
            else
            {
                ItemWithCount(cc, workbench);
            }

            GetGame().ObjectDelete(cargoItemIB);
        }
    }
    CargoItems.Clear();
    DeletItems.Clear();
    GiveResults(arr);
  }

    void GiveResults(CraftedItem itemData)
    {
        CraftedItem cragtItem = itemData;
        ItemBase itemReward;
        ItemBase tempIB;
        Magazine pileReward;
        string resultType;
        float needQuantity;
        float q_cur, q_min, q_max;

        resultType = cragtItem.Result;
        needQuantity = cragtItem.ResultCount;

        tempIB = ItemBase.Cast(GetGame().CreateObject(resultType, vector.Zero, false));
        if (!tempIB)
            return;

        QuantityConversions.GetItemQuantity(tempIB, q_cur, q_min, q_max)
        tempIB.Delete();

		if (!q_max) q_max = 1;

        while (needQuantity)
        {
            if (q_max < needQuantity)
            {
                itemReward = ItemBase.Cast(GetGame().CreateObject(resultType, this.GetPosition(), false));
                needQuantity -= q_max;
            }
            else
            {
                itemReward = ItemBase.Cast(GetGame().CreateObject(resultType, this.GetPosition(), false));
                if (Class.CastTo(pileReward, itemReward))
                {
                    pileReward.ServerSetAmmoCount(needQuantity);
                }
                else
                {
                    itemReward.SetQuantity(needQuantity);
                }
                needQuantity = 0;
            }
        }

    }

    void ItemWithoutQuantity(TailorCraftComponent cc)
    {
        int amount = cc.Amount;
        string name = cc.Classname;
        int count = CargoItems.Count();
        for (int i = 0; i < count; i++)
        {
            EntityAI ent = CargoItems.Get(i);
            if (ent && (ent.GetType() == name))
            {
                ItemBase item = ItemBase.Cast(ent);
                if (item)
                {
                    if (cc.Destroy)
                    GetGame().ObjectDelete(item);    
                    else
                    item.AddHealth(cc.Changehealth);

                    amount--;
                    if (!amount) break;
                }
            }
        }
    }


    void ItemWithCount(TailorCraftComponent cc, ItemBase workbench)
    {
        int amount = cc.Amount;
        string name = cc.Classname;
        int count = CargoItems.Count();
        for (int i = 0; i < count; i++)
        {
            EntityAI ent = CargoItems.Get(i);
            if (ent && (ent.GetType() == name))
            {
                ItemBase item = ItemBase.Cast(ent);
                if (item)
                {
                    if (cc.Destroy)
                    {
                        if (item.GetQuantity() > amount)
                        {
                            item.AddQuantity(-amount);
                            break;
                        }
                        else
                        {
                            amount -= item.GetQuantity();
                            GetGame().ObjectDelete(item); 
                        }
                    }
                    else
                    {
                        if (item.GetQuantity() > amount)
                        {
                            item.AddQuantity(-amount);
                            ItemBase tempItm = ItemBase.Cast(workbench.GetInventory().CreateInInventory(item.GetType()));
                            if (!tempItm)
                            tempItm = ItemBase.Cast(GetGame().CreateObject(item.GetType(), workbench.GetPosition(), false));
                            tempItm.SetQuantity(amount);
                            tempItm.AddHealth(cc.Changehealth);
                            break;
                        }
                        else
                        {
                            amount -= item.GetQuantity();
                            item.AddHealth(cc.Changehealth); 
                        }
                    }
                }
            }
        }
    }
}