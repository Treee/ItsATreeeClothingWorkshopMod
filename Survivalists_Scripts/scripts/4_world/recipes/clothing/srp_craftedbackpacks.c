class Craft_DUB_ShieldBackpack extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Fortify Backpack";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 4;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"DUB_GuitarBackpack");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"DUB_Improvshield");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DUB_ShieldBackpack");//add results here

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
		Debug.Log("Craft_DUB_ShieldBackpack: Recipe Do method called","recipes");
	}
};

class Craft_SRP_BackpackFromKit_Base extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Sew Backpack";
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
		InsertIngredient(0,"SRP_ClothingBackpacks_Kit");//you can insert multiple ingredients this way
		
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
		Debug.Log("Craft_SRP_BackpackFromKitBase: Recipe Do method called","recipes");
	}
};

class Craft_SRPClothing_BackpackKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Clothing Kit - Backpack";
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
		AddResult("SRP_ClothingBackpacks_Kit");//add results here

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
    if (ingredients[0] && ingredients[0].GetInventory().HasInventorySlot(InventorySlots.BACK))
    {
      return true;
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRPClothing_BackpackKit: Recipe Do method called","recipes");
	}
};

class Craft_SRP_BackpackFromKit_LeatherBackpack_Default extends Craft_SRP_BackpackFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Backpack - Leather Backpack";
		AddResult("SRP_LeatherBackpack_Default");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Black", "SRP_SewingThread_Green", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Red"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Blue", "SRP_SewingThread_Grey", "SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Purple", "SRP_SewingThread_Yellow", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Green", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Orange", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_BackpackFromKitBase SRP_LeatherBackpack_Default: Recipe Do method called","recipes");
	}
};

class Craft_SRP_BackpackFromKit_SurvivalBackpack_Default extends Craft_SRP_BackpackFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Backpack - Survival Backpack";
		AddResult("SRP_SurvivalBackpack_Default");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Black", "SRP_SewingThread_Green", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Red"},{75,20,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Blue", "SRP_SewingThread_Grey", "SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Purple", "SRP_SewingThread_Yellow", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{75,20,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Green", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{75,75,75,20});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Orange", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{75,75,20,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","CowPelt","BearPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"WolfPelt","RabbitPelt","PigPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 2);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_BackpackFromKitBase SRP_SurvivalBackpack_Default: Recipe Do method called","recipes");
	}
};

class Craft_SRP_BackpackFromKit_SlingBackpack_Default extends Craft_SRP_BackpackFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Backpack - Sling Backpack";
		AddResult("SRP_SlingBackpack_Default");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Purple", "SRP_SewingThread_Yellow", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{75,20,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Blue", "SRP_SewingThread_Grey", "SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Orange", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{75,75,20,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Green", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{75,75,75,20});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Black", "SRP_SewingThread_Green", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Red"},{75,20,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"RabbitboarPelt","CowPelt","BearPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"WolfPelt","RabbitPelt","PigPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 2);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 4);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_BackpackFromKitBase SRP_SlingBackpack_Default: Recipe Do method called","recipes");
	}
};

class Craft_SRP_BackpackFromKit_Small_Military_Pack_Tan extends Craft_SRP_BackpackFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Backpack - Small Military Backpack";
		AddResult("SRP_Small_Military_Pack_Tan");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Black", "SRP_SewingThread_Green", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Red"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Purple", "SRP_SewingThread_Yellow", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Green", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{75,20,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Orange", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{75,75,75,20});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Blue", "SRP_SewingThread_Grey", "SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"DeerPelt","GoatPelt","MouflonPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"SheepPelt","RabbitPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 3);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 1);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 3);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_BackpackFromKitBase SRP_Small_Military_Pack_Tan: Recipe Do method called","recipes");
	}
};

class Craft_SRP_BackpackFromKit_Big_Military_Pack_Tan extends Craft_SRP_BackpackFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Backpack - Large Military Backpack";
		AddResult("SRP_Big_Military_Pack_Tan");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Red", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Red"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Blue", "SRP_SewingThread_Green", "SRP_SewingThread_Orange", "SRP_SewingThread_LightBlue"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Grey", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Purple", "SRP_SewingThread_Blue"},{75,20,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Pink", "SRP_SewingThread_Black", "SRP_SewingThread_Yellow", "SRP_SewingThread_Green"},{75,75,75,20});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Orange", "SRP_SewingThread_Green", "SRP_SewingThread_Pink", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"BearPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"BearPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 7);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_BackpackFromKitBase SRP_Big_Military_Pack_Tan: Recipe Do method called","recipes");
	}
};

class Craft_SRP_BackpackFromKit_Rifle_Bag_Green extends Craft_SRP_BackpackFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Backpack - Rifle Backpack";
		AddResult("SRP_Rifle_Bag_Green");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Pink", "SRP_SewingThread_Black", "SRP_SewingThread_Yellow", "SRP_SewingThread_Green"},{75,75,75,20});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Grey", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Purple", "SRP_SewingThread_Blue"},{75,20,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Orange", "SRP_SewingThread_Green", "SRP_SewingThread_Pink", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Red", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Red"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Blue", "SRP_SewingThread_Green", "SRP_SewingThread_Orange", "SRP_SewingThread_LightBlue"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"BearPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"BearPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 3);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_BackpackFromKitBase SRP_Rifle_Bag_Green: Recipe Do method called","recipes");
	}
};

class Craft_SRP_BackpackFromKit_Rolltop_Bag extends Craft_SRP_BackpackFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Backpack - Rolltop Backpack";
		AddResult("SRP_Rolltop_Bag");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Pink", "SRP_SewingThread_Black", "SRP_SewingThread_Yellow", "SRP_SewingThread_Green"},{75,75,75,20});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Grey", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Purple", "SRP_SewingThread_Blue"},{75,20,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Orange", "SRP_SewingThread_Green", "SRP_SewingThread_Pink", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Red", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Red"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Blue", "SRP_SewingThread_Green", "SRP_SewingThread_Orange", "SRP_SewingThread_LightBlue"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"PigPelt","WolfPelt","SheepPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"CowPelt","DeerPelt","RabbitPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 2);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags",6);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_BackpackFromKitBase SRP_Rolltop_Bag: Recipe Do method called","recipes");
	}
};

class Craft_SRP_BackpackFromKit_MessengerBag_Leather extends Craft_SRP_BackpackFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Backpack - Messenger Backpack";
		AddResult("SRP_MessengerBag_Leather");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Green", "SRP_SewingThread_Black", "SRP_SewingThread_Yellow", "SRP_SewingThread_Pink"},{75,75,75,20});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Blue", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Purple", "SRP_SewingThread_Grey"},{75,20,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Black", "SRP_SewingThread_Green", "SRP_SewingThread_Pink", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Red", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Blue"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Grey", "SRP_SewingThread_Green", "SRP_SewingThread_Orange", "SRP_SewingThread_Purple"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","WolfPelt","SheepPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt", "MouflonPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 2);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags",4);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_BackpackFromKitBase SRP_MessengerBag_Leather: Recipe Do method called","recipes");
	}
};

class Craft_SRP_BackpackFromKit_DUB_Leatherbag extends Craft_SRP_BackpackFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Backpack - Leather Sling Backpack";
		AddResult("DUB_Leatherbag");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Blue", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Purple", "SRP_SewingThread_Grey"},{75,20,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Black", "SRP_SewingThread_Green", "SRP_SewingThread_Pink", "SRP_SewingThread_Orange"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Green", "SRP_SewingThread_Black", "SRP_SewingThread_Yellow", "SRP_SewingThread_Pink"},{75,75,75,20});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Grey", "SRP_SewingThread_Green", "SRP_SewingThread_Orange", "SRP_SewingThread_Purple"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Red", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Blue"},{75,75,20,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","WolfPelt","SheepPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt", "MouflonPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 2);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags",4);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_BackpackFromKitBase DUB_Leatherbag: Recipe Do method called","recipes");
	}
};
class Craft_DUB_BagFlag extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Battle Flag Bag Mount";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 3;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenLog");
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Rope");//you can insert multiple ingredients this way
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("DUB_BagFlag");//add results here

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
		Debug.Log("Craft_DUB_BagFlag: Recipe Do method called: " + m_Name,"recipes");
	}
};