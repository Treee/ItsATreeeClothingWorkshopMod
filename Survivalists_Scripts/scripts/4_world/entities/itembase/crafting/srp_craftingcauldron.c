class SRP_CookingWorkbench_Base extends SRP_Fireplace_Transformer
{
  void SRP_CookingWorkbench_Base()
  {
		//Particles - default for FireplaceBase
		PARTICLE_FIRE_START 	= ParticleList.BARREL_FIRE_START;
		PARTICLE_SMALL_FIRE 	= ParticleList.BARREL_SMALL_FIRE;
		PARTICLE_NORMAL_FIRE	= ParticleList.BARREL_NORMAL_FIRE;
		PARTICLE_SMALL_SMOKE 	= ParticleList.BARREL_SMALL_SMOKE;
		PARTICLE_NORMAL_SMOKE	= ParticleList.BARREL_NORMAL_SMOKE;
		PARTICLE_FIRE_END 		= ParticleList.BARREL_FIRE_END;
		PARTICLE_STEAM_END		= ParticleList.BARREL_FIRE_STEAM_2END;
  }    
  override void EOnInit(IEntity other, int extra)
	{
		super.EOnInit(other, extra);
    GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(ScaleCauldron, 5000, false);
	}
  void ScaleCauldron()
  {
    SetScale(5.0);
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
  SRP_CraftableItem GetPotentialItems()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("", "");
    EntityAI attachment;
    int enumId = -1;
    int quantity;
    string colorName;
    TStringArray slotsToCheck = GetSlotsToCheck();

    foreach(string slotName : slotsToCheck)
    {
      if (Class.CastTo(attachment, FindAttachmentBySlotName(slotName)))
      {
        colorName = attachment.ConfigGetString("color");
        colorName.ToUpper();        
        enumId = EnumTools.StringToEnum(SRP_COLOR, colorName);
        if (attachment.IsFruit())
          enumId = SRP_COLOR.FRUIT;
        if (attachment.IsMeat())
          enumId = SRP_COLOR.MEAT;        
        // non null items with 0 quantity should be seen as 1
        quantity = Math.Max(1, attachment.GetQuantity());

        craftableItem.RegisterIngredient(new SRP_ItemRequirement(slotName, enumId, quantity));
      }
    }

    array<SRP_CraftableItem> craftableItems = new array<SRP_CraftableItem>;
    if (GetDayZGame().GetSRPCookingRecipesGlobal().IsRecipeMatch(craftableItem, craftableItems))
    {
      return craftableItems[0];
    }
    return NULL;
  }
  void ReduceAttachments(SRP_CraftableItem craftable)
  {
    if (craftable)
    {
      ItemBase attachment;
      foreach(SRP_ItemRequirement requirement : craftable.m_RequiredIngredients)
      {
        if (Class.CastTo(attachment, GetInventory().FindAttachmentByName(requirement.GetAttachmentSlotName())))
        {
          // attached augments do not get damaged
          if (attachment.IsAugmentAttachment())
            continue;
          // if the item is hp reduced and is not an augment attchment
          if (requirement.ShouldReduceHP())
            attachment.AddHealth(requirement.GetRequiredQuantity());
          else
          {
            // players that brute force recipes will find things to be most expensive.
            // int quantityToRemove = Math.Max(requirement.GetRequiredQuantity(), attachment.GetQuantity());
            int quantityToRemove = requirement.GetRequiredQuantity();
            attachment.AddQuantity(-quantityToRemove);
            if (attachment.GetQuantityMax() == 1 && quantityToRemove == 1)
              attachment.Delete();
          } 
        }        
      }
    }
  }
  override bool IsHotEnough()
  {
    return GetTemperature() > 499;
  }
  TStringArray GetSlotsToCheck()
  {
    return {
      "Ingredient1",
      "Ingredient2",
      "Ingredient3",
      "Ingredient4",
      "Ingredient5",
      "Ingredient6",
      "Ingredient7",
      "Ingredient8",
      "SRP_CrushedPowder1",
      "SRP_CrushedPowder2",
      "SRP_CrushedPowder3",
    };
  }
  override int DamagePerTransformEvent()
  {
    return 15;
  }
  override int GetHeatTimerThreshold()
  {
    return 180;//5mins
    // return 10;//5mins
  }
  override void HandleHeatTransformation()
  {    
    if (GetGame().IsDedicatedServer())
    {
      SRP_CraftableItem itemToYield;
      if (Class.CastTo(itemToYield, GetPotentialItems()))
      {
        EntityAI newItem = GetInventory().CreateInInventory(itemToYield.GetItemClassName());
        ItemBase someItem;
        if (Class.CastTo(someItem, newItem))        
          someItem.SetQuantityMax();
          
        ReduceAttachments(itemToYield);
      }
    }
  }
};

class SRP_PrefabCrafting_cookingcauldron extends SRP_CookingWorkbench_Base
{
  override bool CanBeDeconstructed()
  {
    return false;
  }
  override int DamagePerTransformEvent()
  {
    return 0;
  }
};