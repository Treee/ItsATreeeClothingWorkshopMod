class Craft_SRP_CraftingMaterial_Dye_HerbalismBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Make Dye";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 10;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"SRP_MortarBowl");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -1;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -10;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		//result1
		// AddResult("SRP_CraftingMaterial_Dye_Black");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    return HerbalismCraft(ingredients[0], false);
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    //reduce quantities
    HerbalismCraft(ingredients[0], true);
		ItemBase result;
		Class.CastTo(result, results.Get(0));
    if (result)
    {
      result.SetQuantity(Math.RandomIntInclusive(100, 200));
    }
		Debug.Log("Craft_SRP_CraftingMaterial_Dye_HerbalismBase: Recipe Do method called: " + m_Name,"recipes");
	}

  bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"yarrow", "rosemary", "ribwort", "dock"},{150,150,120,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"mint", "brookmint", "greenamanita", "mint"},{150,125,150,15}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"brookmint", "dock", "valerian"},{150,120,125}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint", "mint","valerian","dock"},{175,125,150,125}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"ribwort", "rosemary", "greenamanita","dock"},{150,150,175,100}, reduceAmount);
    }
    // Print("Herbalism Craft: " + m_Name + " cnaCraft: " + canCraft);
    return canCraft;
  }

  int GetMinYield()
  {
    return 100;
  }  

  int GetMaxYield()
  {
    return 200;
  }
  
  TStringArray GetDyeTypes()
  {
    return {
      "SRP_CraftingMaterial_Dye_Bleach"
      "SRP_CraftingMaterial_Dye_Black"
      "SRP_CraftingMaterial_Dye_Blue"
      "SRP_CraftingMaterial_Dye_Brown"
      "SRP_CraftingMaterial_Dye_Green"
      "SRP_CraftingMaterial_Dye_Pink"
      "SRP_CraftingMaterial_Dye_Red"
      "SRP_CraftingMaterial_Dye_Yellow"
    };
  }
};

class Craft_SRP_CraftingMaterial_Dye_Random extends Craft_SRP_CraftingMaterial_Dye_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Make Dye - Random";
		// AddResult("SRP_CraftingMaterial_Dye_Black");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"brookmint","dock","valerian","ribwort","rosemary","greenamanita","yarrow","mint"},{125,125,125,125,125,125,125,125}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"brookmint","dock","valerian","ribwort","rosemary","greenamanita","yarrow","mint"},{125,125,125,125,125,125,125,125}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"brookmint","dock","valerian","ribwort","rosemary","greenamanita","yarrow","mint"},{125,125,125,125,125,125,125,125}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint","dock","valerian","ribwort","rosemary","greenamanita","yarrow","mint"},{125,125,125,125,125,125,125,125}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"brookmint","dock","valerian","ribwort","rosemary","greenamanita","yarrow","mint"},{125,125,125,125,125,125,125,125}, reduceAmount);
    }
    return canCraft;
  }
  override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    ItemBase dye = ItemBase.Cast(GetGame().CreateObjectEx(GetDyeTypes().GetRandomElement(), player.GetPosition(), false));
    if (dye)
    {
      results.Insert(dye);
    }
    super.Do(ingredients, player, results, specialty_weight);
	}
  override int GetMinYield()
  {
    return 25;
  }  

  override int GetMaxYield()
  {
    return 75;
  }
};

class Craft_SRP_CraftingMaterial_Dye_Black extends Craft_SRP_CraftingMaterial_Dye_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Make Dye - Black";
		AddResult("SRP_CraftingMaterial_Dye_Black");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"yarrow", "rosemary", "ribwort", "dock"},{150,150,120,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"mint", "brookmint", "greenamanita", "rosemary"},{150,125,150,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"brookmint", "dock", "valerian"},{50,20,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint", "mint","valerian","greenamanita"},{75,125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"ribwort", "rosemary", "greenamanita","valerian"},{150,50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};

class Craft_SRP_CraftingMaterial_Dye_Blue extends Craft_SRP_CraftingMaterial_Dye_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Make Dye - Blue";
		AddResult("SRP_CraftingMaterial_Dye_Blue");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"mint", "rosemary", "ribwort", "greenamanita"},{150,150,50,75}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"rosemary", "ribwort", "greenamanita","mint"},{50,50,150,15}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"ribwort", "greenamanita","mint","rosemary"},{50,120,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"greenamanita","mint","rosemary", "ribwort"},{75,25,150,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"mint", "rosemary", "ribwort", "greenamanita"},{50,150,50,25}, reduceAmount);
    }
    return canCraft;
  }
};

class Craft_SRP_CraftingMaterial_Dye_Brown extends Craft_SRP_CraftingMaterial_Dye_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Make Dye - Brown";
		AddResult("SRP_CraftingMaterial_Dye_Brown");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"dock", "rosemary", "mint", "greenamanita"},{50,50,20,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"yarrow", "brookmint", "greenamanita","mint"},{50,25,50,15}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"ribwort", "greenamanita","mint","yarrow"},{50,10,25,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"greenamanita","mint","yarrow", "brookmint"},{50,125,110,125}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"mint", "rosemary", "ribwort", "greenamanita"},{10,50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};

class Craft_SRP_CraftingMaterial_Dye_Green extends Craft_SRP_CraftingMaterial_Dye_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Make Dye - Green";
		AddResult("SRP_CraftingMaterial_Dye_Green");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"yarrow", "rosemary", "ribwort", "greenamanita"},{50,50,20,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"dock", "brookmint", "ribwort","greenamanita"},{50,25,50,15}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"ribwort", "greenamanita","mint","yarrow"},{50,10,25,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"dock","greenamanita","yarrow", "brookmint"},{175,25,10,25}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"mint", "dock", "ribwort", "greenamanita"},{10,50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};

class Craft_SRP_CraftingMaterial_Dye_Pink extends Craft_SRP_CraftingMaterial_Dye_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Make Dye - Pink";
		AddResult("SRP_CraftingMaterial_Dye_Pink");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"brookmint", "rosemary", "ribwort", "greenamanita"},{50,75,120,150}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"dock", "brookmint", "ribwort","mint"},{150,25,150,125}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"mint", "valerian","brookmint","yarrow"},{150,110,50,150}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint","mint","yarrow", "valerian"},{25,125,100,125}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"brookmint", "dock", "ribwort", "greenamanita"},{50,150,75,150}, reduceAmount);
    }
    return canCraft;
  }
};

class Craft_SRP_CraftingMaterial_Dye_Red extends Craft_SRP_CraftingMaterial_Dye_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Make Dye - Red";
		AddResult("SRP_CraftingMaterial_Dye_Red");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"dock", "rosemary", "ribwort", "valerian"},{120,75,120,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"brookmint", "valerian", "ribwort","mint"},{110,50,150,115}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"mint", "valerian","dock","yarrow"},{120,50,125,150}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"ribwort","mint","yarrow", "valerian"},{75,125,100,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"valerian", "dock", "mint", "rosemary"},{50,150,75,75}, reduceAmount);
    }
    return canCraft;
  }
};

class Craft_SRP_CraftingMaterial_Dye_Yellow extends Craft_SRP_CraftingMaterial_Dye_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Make Dye - Yellow";
		AddResult("SRP_CraftingMaterial_Dye_Yellow");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"yarrow", "rosemary", "brookmint", "valerian"},{20,75,120,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"yarrow", "brookmint", "ribwort","mint"},{50,125,150,115}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"yarrow", "valerian","mint","greenamanita"},{50,110,75,150}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"valerian","mint","yarrow", "brookmint"},{75,125,50,125}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"valerian", "ribwort", "yarrow", "rosemary"},{100,70,50,150}, reduceAmount);
    }
    return canCraft;
  }
};