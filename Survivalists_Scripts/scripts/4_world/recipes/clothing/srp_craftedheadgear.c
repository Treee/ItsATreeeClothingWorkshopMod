class Craft_SRP_TinfoilHat extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Make Tinfoil";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_LatheWorkbench");	// primary ingredient
		InsertIngredient(0,"Pliers");	// primary ingredient
		
		m_IngredientAddHealth[0] = -2;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 1;// -1 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"SRP_CraftingMaterial_MetalScraps");
		
		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 10;// 0 = do nothing
		m_IngredientDestroy[1] = 1;	// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		AddResult("SRP_BaseballCap_Tinfoil");	// recipe result
		
		m_ResultSetFullQuantity[0] = 1;	// -1 = do nothing
		m_ResultSetQuantity[0] = 1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = 1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("Craft_SRP_TinfoilHat: Recipe Do method called","recipes");
	}
};

class Craft_SRP_HeadgearFromKit_Base extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Sew Headgear";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 4;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"SRP_ClothingHeadgear_Kit");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"SRP_SewingTable");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -3;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_AssaultBag_Denim");//add results here

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
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_BackpackFromKitBase: Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRPClothing_HeadgearKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Clothing Kit - Headgear";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 4;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision	
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Clothing");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"SRP_SewingTable");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -2;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_ClothingHeadgear_Kit");//add results here

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
    if (ingredients[0] && ingredients[0].GetInventory().HasInventorySlot(InventorySlots.HEADGEAR))
    {
      return true;
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRPClothing_BeltKit: Recipe Do method called","recipes");
	}
};

class Craft_SRP_HeadgearFromKit_BeanieHat_Turkey extends Craft_SRP_HeadgearFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Headgear - Turkey Hat";
		AddResult("SRP_TurkeyBeanie_Turkey");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Red", "SRP_SewingThread_Orange", "SRP_SewingThread_Black", "SRP_SewingThread_Blue"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Blue", "SRP_SewingThread_Pink", "SRP_SewingThread_Green", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Grey", "SRP_SewingThread_Purple", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Orange", "SRP_SewingThread_Red", "SRP_SewingThread_Blue", "SRP_SewingThread_Green"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 1);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 1);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 3);
    }
		return canCraft;
	}
};

class Craft_SRP_HeadgearFromKit_BaseballCap_MilitaryPatrolTan extends Craft_SRP_HeadgearFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Headgear - Military Patrol Cap";
		AddResult("BaseballCap_MilitaryPatrolTan");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Blue", "SRP_SewingThread_Orange", "SRP_SewingThread_Black", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Grey", "SRP_SewingThread_Pink", "SRP_SewingThread_Green", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_LightBlue", "SRP_SewingThread_Purple", "SRP_SewingThread_Red", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Green", "SRP_SewingThread_Red", "SRP_SewingThread_Blue", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"BearPelt","CowPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 2);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 4);
    }
		return canCraft;
	}
};

class Craft_SRP_HeadgearFromKit_BaseballCap_Pakol extends Craft_SRP_HeadgearFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Headgear - Pakol";
		AddResult("BaseballCap_Pakol");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Blue", "SRP_SewingThread_Orange", "SRP_SewingThread_Black", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Grey", "SRP_SewingThread_Pink", "SRP_SewingThread_Green", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_LightBlue", "SRP_SewingThread_Purple", "SRP_SewingThread_Red", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Green", "SRP_SewingThread_Red", "SRP_SewingThread_Blue", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"BearPelt","CowPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 2);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 4);
    }
		return canCraft;
	}
};

class Craft_SRP_HeadgearFromKit_FaceMaskSkull_Tan extends Craft_SRP_HeadgearFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Headgear - Skull Face Mask";
		AddResult("SRP_FaceMaskSkull_Tan");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Grey", "SRP_SewingThread_Pink", "SRP_SewingThread_Green", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Green", "SRP_SewingThread_Red", "SRP_SewingThread_Blue", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_LightBlue", "SRP_SewingThread_Purple", "SRP_SewingThread_Red", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Blue", "SRP_SewingThread_Orange", "SRP_SewingThread_Black", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"BearPelt","CowPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 1);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};

class Craft_SRP_HeadgearFromKit_FaceMask_Tan extends Craft_SRP_HeadgearFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Headgear - Skull Face Mask";
		AddResult("SRP_FaceMask_Tan");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Pink","SRP_SewingThread_Grey", "SRP_SewingThread_Green", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Red","SRP_SewingThread_Green", "SRP_SewingThread_Blue", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Purple","SRP_SewingThread_LightBlue", "SRP_SewingThread_Red", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Orange","SRP_SewingThread_Blue", "SRP_SewingThread_Black", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WolfPelt","WildboarPelt","DeerPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 2);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 3);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 5);
    }
		return canCraft;
	}
};

class Craft_SRP_HeadgearFromKit_MouthCover_Tan extends Craft_SRP_HeadgearFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Headgear - Mouth Cover";
		AddResult("SRP_MouthCover_Tan");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_LightBlue","SRP_SewingThread_Grey", "SRP_SewingThread_Green", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Black","SRP_SewingThread_Green", "SRP_SewingThread_Blue", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Pink","SRP_SewingThread_LightBlue", "SRP_SewingThread_Red", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Green","SRP_SewingThread_Blue", "SRP_SewingThread_Black", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WolfPelt","WildboarPelt","DeerPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 2);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 2);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 3);
    }
		return canCraft;
	}
};

class Craft_SRP_HeadgearFromKit_Shroud_Tan extends Craft_SRP_HeadgearFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Headgear - Head Shroud";
		AddResult("SRP_Shroud_Tan");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Red","SRP_SewingThread_Grey", "SRP_SewingThread_Green", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Orange","SRP_SewingThread_Green", "SRP_SewingThread_Blue", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Black","SRP_SewingThread_LightBlue", "SRP_SewingThread_Red", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_LightBlue","SRP_SewingThread_Blue", "SRP_SewingThread_Black", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WolfPelt","WildboarPelt","BearPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 3);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 4);
    }
		return canCraft;
	}
};

class Craft_SRP_HeadgearFromKit_Cowboy_Hat extends Craft_SRP_HeadgearFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Headgear - Cowboy Hat";
		AddResult("SRP_Cowboy_Hat");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Black","SRP_SewingThread_Grey", "SRP_SewingThread_Green", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Grey","SRP_SewingThread_Green", "SRP_SewingThread_Blue", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Green","SRP_SewingThread_LightBlue", "SRP_SewingThread_Red", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Pink","SRP_SewingThread_Blue", "SRP_SewingThread_Black", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WolfPelt","WildboarPelt","BearPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 5);
    }
		return canCraft;
	}
};

class Craft_SRP_HeadgearFromKit_Burlap_Mask extends Craft_SRP_HeadgearFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Headgear - Burlap Mask";
		AddResult("SRP_Burlap_Mask");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Grey","SRP_SewingThread_Green", "SRP_SewingThread_Blue", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Green","SRP_SewingThread_LightBlue", "SRP_SewingThread_Red", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Black","SRP_SewingThread_Grey", "SRP_SewingThread_Green", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Pink","SRP_SewingThread_Blue", "SRP_SewingThread_Black", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WolfPelt","WildboarPelt","BearPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};

class Craft_SRP_LeatherCowl extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
{
	override void Init()
	{
		m_Name = "Craft Leather Cowl";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 3;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 8;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = 5;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"TannedLeather");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -8;// -1 = do nothing
		m_IngredientDestroy[0] = false;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"DUB_Leatherstrip"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -5;// -1 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		AddResult("DUB_Leathercowl");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = 1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Craft_SRP_LeatherCowl Recipe Do method called","recipes");
	}
};