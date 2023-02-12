class Craft_SRP_CraftingSoda_HerbalismBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Default Option";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
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
		// InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		//result1
		// AddResult("SRP_CraftingMaterial_Dye_Black");//add results here

		m_ResultSetFullQuantity[0] = true;//true = set full quantity, false = do nothing
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
		Debug.Log("Craft_SRP_CraftingSoda_HerbalismBase: Recipe Do method called: " + m_Name,"recipes");
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
};
class Craft_SRP_Beer_DoubleTap extends Craft_SRP_CraftingSoda_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Brew Double Tap";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_BeerBottle_DoublTap");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"dock", "valerian", "brookmint"},{150,150,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"mint", "brookmint", "dock"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"mint", "greenamanita", "valerian"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"ribwort", "dock","yarrow"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"greenamanita", "brookmint","dock"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};

class Craft_SRP_Beer_Electric extends Craft_SRP_CraftingSoda_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Brew Electric";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_BeerBottle_Electric");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"rosemary", "valerian", "dock"},{150,150,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"mint", "brookmint", "greenamanita"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"ribwort", "dock", "valerian"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"mint", "greenamanita","yarrow"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"yarrow", "brookmint","dock"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};

class Craft_SRP_Beer_Juggernaut extends Craft_SRP_CraftingSoda_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Brew Juggernaut";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_BeerBottle_Juggernaut");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"rosemary", "dock", "brookmint"},{150,150,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"mint", "greenamanita", "dock"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"valerian", "yarrow", "rosemary"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"greenamanita", "brookmint","dock"},{50,75,50}, reduceAmount);
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"ribwort", "greenamanita","yarrow"},{125,50,50}, reduceAmount);        
    }
    return canCraft;
  }
};

class Craft_SRP_Beer_Reviver extends Craft_SRP_CraftingSoda_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Brew Reviver";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_BeerBottle_Reviver");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"brookmint", "yarrow", "dock"},{150,150,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"valerian", "rosemary", "brookmint"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"ribwort", "dock","yarrow"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"mint", "greenamanita", "valerian"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"greenamanita", "brookmint","dock"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};

class Craft_SRP_Beer_Speedy extends Craft_SRP_CraftingSoda_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Brew Speedy";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_BeerBottle_Speedy");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"mint", "greenamanita", "valerian"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"mint", "brookmint", "dock"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"ribwort", "dock","yarrow"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"greenamanita", "brookmint","dock"},{50,75,50}, reduceAmount);
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"dock", "valerian", "brookmint"},{150,150,50}, reduceAmount);        
    }
    return canCraft;
  }
};
