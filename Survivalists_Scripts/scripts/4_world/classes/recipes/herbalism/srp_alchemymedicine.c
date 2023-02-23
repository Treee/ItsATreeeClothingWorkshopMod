class Craft_SRP_CraftingMaterial_HerbalismBase extends RecipeBase
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
		Debug.Log("Craft_SRP_CraftingMaterial_HerbalismBase: Recipe Do method called: " + m_Name,"recipes");
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
class Craft_SRP_Dexamphetamine extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Press Dexamphetamine Tablets";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_Dexamphetamine");//add results here
    m_ResultSetQuantity[0] = 8;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"greenamanita", "mint", "dock"},{150,150,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"yarrow", "brookmint", "rosemary"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"mint", "greenamanita", "valerian"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint", "mint","dock"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"dock", "brookmint","valerian"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};
class Craft_SRP_Analgine extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Press Analgine Tablets";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_Analgine");//add results here
    m_ResultSetQuantity[0] = 8;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"ribwort", "mint", "dock"},{150,150,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"yarrow", "dock", "rosemary"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"mint", "greenamanita", "ribwort"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint", "valerian","greenamanita"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"ribwort", "brookmint","valerian"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};
class Craft_SRP_Drotaverine extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Press Drotaverine Tablets";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_Drotaverine");//add results here
    m_ResultSetQuantity[0] = 8;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"rosemary", "mint", "yarrow"},{150,150,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"yarrow", "dock", "ribwort"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"mint", "greenamanita", "ribwort"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint", "yarrow","greenamanita"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"greenamanita", "brookmint","valerian"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};
class Craft_SRP_Macropen extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Macropen Capsules";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_Macropen");//add results here
    m_ResultSetQuantity[0] = 8;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"rosemary", "dock", "greenamanita"},{150,150,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"yarrow", "dock", "valerian"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"mint", "greenamanita", "ribwort"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint", "yarrow","greenamanita"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"greenamanita", "brookmint","dock"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};
class Craft_SRP_Amoxicillin extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Amoxicillin Capsules";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_Amoxicillin");//add results here
    m_ResultSetQuantity[0] = 8;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"rosemary", "yarrow", "greenamanita"},{150,75,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"mint", "ribwort", "valerian"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"yarrow", "greenamanita", "dock"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint", "yarrow","greenamanita"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"greenamanita", "brookmint","dock"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};
class Craft_SRP_Amosin extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Amosin Capsules";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_Amosin");//add results here
    m_ResultSetQuantity[0] = 8;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"rosemary", "ribwort", "greenamanita"},{150,75,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"mint", "ribwort", "valerian"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"mint", "greenamanita", "dock"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint", "yarrow","rosemary"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"valerian", "brookmint","dock"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};
class Craft_SRP_Ciprolet extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Ciprolet Capsules";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_Ciprolet");//add results here
    m_ResultSetQuantity[0] = 8;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"brookmint", "ribwort", "yarrow"},{150,75,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"dock", "ribwort", "valerian"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"mint", "greenamanita", "dock"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"dock", "yarrow","rosemary"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"valerian", "brookmint","dock"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};
class Craft_SRP_Toradol extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Press Toradol Tablets";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_Toradol");//add results here
    m_ResultSetQuantity[0] = 8;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"valerian", "greenamanita", "yarrow"},{150,75,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"rosemary", "brookmint", "ribwort"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"brookmint", "valerian", "rosemary"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"dock", "yarrow","greenamanita"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"valerian", "brookmint","dock"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};
class Craft_SRP_MagnesiumSulfate extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Press Magnesium Sulfate Tablets";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_MagnesiumSulfate");//add results here
    m_ResultSetQuantity[0] = 8;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"brookmint", "mint", "yarrow"},{150,75,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"rosemary", "dock", "ribwort"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"brookmint", "valerian", "rosemary"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"dock", "yarrow","valerian"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"valerian", "greenamanita","mint"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};

class Craft_SRP_BandageDressing_Healing extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Healing Bandage";
    
    m_MinQuantityIngredient[1] = 6;//-1 = disable check
    InsertIngredient(1,"Rag");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -6;// 0 = do nothing

    AddResult("SRP_BandageDressing_Healing");//add results here
    m_ResultSetQuantity[0] = 3;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"brookmint", "dock", "valerian"},{150,75,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"ribwort", "rosemary", "greenamanita"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"yarrow", "mint", "brookmint"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"dock", "valerian","ribwort"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"rosemary", "greenamanita","yarrow"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};
class Craft_SRP_BandageDressing_Shock extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Shock Bandage";
    
    m_MinQuantityIngredient[1] = 6;//-1 = disable check
    InsertIngredient(1,"Rag");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -6;// 0 = do nothing

    AddResult("SRP_BandageDressing_Shock");//add results here
    m_ResultSetQuantity[0] = 3;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"mint", "yarrow", "greenamanita"},{150,75,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"rosemary", "ribwort", "valerian"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"brookmint", "valerian", "mint"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint", "dock","greenamanita"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"rosemary", "yarrow","brookmint"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};
class Craft_SRP_BandageDressing_Antibiotic extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Antibiotic Bandage";
    
    m_MinQuantityIngredient[1] = 6;//-1 = disable check
    InsertIngredient(1,"Rag");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -6;// 0 = do nothing

    AddResult("SRP_BandageDressing_Antibiotic");//add results here
    m_ResultSetQuantity[0] = 3;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"yarrow", "dock", "mint"},{150,75,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"brookmint", "greenamanita", "ribwort"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"rosemary", "valerian", "dock"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"ribwort", "yarrow","mint"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"greenamanita","rosemary","dock"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};

class Craft_SRP_BandageDressing_Advanced_Healing extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Healing Bandage";
    
    m_MinQuantityIngredient[1] = 3;//-1 = disable check
    InsertIngredient(1,"BandageDressing");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -3;// 0 = do nothing

    AddResult("SRP_BandageDressing_Healing");//add results here
    m_ResultSetQuantity[0] = 3;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"brookmint", "dock", "valerian"},{150,75,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"ribwort", "rosemary", "greenamanita"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"yarrow", "mint", "brookmint"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"dock", "valerian","ribwort"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"rosemary", "greenamanita","yarrow"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};
class Craft_SRP_BandageDressing_Advanced_Shock extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Shock Bandage";
    
    m_MinQuantityIngredient[1] = 3;//-1 = disable check
    InsertIngredient(1,"BandageDressing");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -3;// 0 = do nothing

    AddResult("SRP_BandageDressing_Shock");//add results here
    m_ResultSetQuantity[0] = 3;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"mint", "yarrow", "greenamanita"},{150,75,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"rosemary", "ribwort", "valerian"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"brookmint", "valerian", "mint"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint", "dock","greenamanita"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"rosemary", "yarrow","brookmint"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};
class Craft_SRP_BandageDressing_Advanced_Antibiotic extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Antibiotic Bandage";
    
    m_MinQuantityIngredient[1] = 3;//-1 = disable check
    InsertIngredient(1,"BandageDressing");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -3;// 0 = do nothing

    AddResult("SRP_BandageDressing_Antibiotic");//add results here
    m_ResultSetQuantity[0] = 3;//-1 = do nothing
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"yarrow", "dock", "mint"},{150,75,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"brookmint", "greenamanita", "ribwort"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"rosemary", "valerian", "dock"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"ribwort", "yarrow","mint"},{125,50,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"greenamanita","rosemary","dock"},{50,75,50}, reduceAmount);
    }
    return canCraft;
  }
};

class Craft_SRP_CrudeStimPack extends Craft_SRP_CraftingMaterial_HerbalismBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Crude Stim Pack";
    
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    InsertIngredient(1,"SRP_LabTube_Colorbase");//you can insert multiple ingredients this way
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing

    AddResult("SRP_StimPackInjector_Crude");//add results here
	}

  override bool HerbalismCraft(ItemBase mortarBowl, bool reduceAmount = false)
  {
    SRP_MortarBowl mortarPestle = SRP_MortarBowl.Cast(mortarBowl);
    bool canCraft = false;
    if (mortarPestle && mortarPestle.HasAllPowderSlotsFilled())
    {
      canCraft |= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder1",{"rosemary", "dock", "ribwort"},{150,125,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder2",{"greenamanita", "mint", "yarrow"},{150,75,50}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder3",{"valerian", "greenamanita","mint"},{50,75,50}, reduceAmount);
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder4",{"brookmint", "valerian", "rosemary"},{50,20,35}, reduceAmount);        
      canCraft &= mortarPestle.HasSlotFilledWithCorrectPowder("SRP_CrushedPowder5",{"dock", "yarrow","valerian"},{125,50,50}, reduceAmount);        
    }
    return canCraft;
  }
};