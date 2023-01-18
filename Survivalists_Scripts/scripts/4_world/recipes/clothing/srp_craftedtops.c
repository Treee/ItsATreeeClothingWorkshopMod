class Craft_SRP_TopFromKit_Base extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Sew Top";
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
		InsertIngredient(0,"SRP_ClothingTops_Kit");//you can insert multiple ingredients this way
		
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

class Craft_SRPClothing_TopKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Clothing Kit - Top";
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
		AddResult("SRP_ClothingTops_Kit");//add results here

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
    if (ingredients[0] && ingredients[0].GetInventory().HasInventorySlot(InventorySlots.BODY))
    {
      return true;
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRPClothing_TopKit: Recipe Do method called","recipes");
	}
};

class Craft_SRPClothing_TopKit_NurseDress extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Nurse Dress";
		AddResult("NurseDress_Blue");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Green","SRP_SewingThread_Black", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Red"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Grey","SRP_SewingThread_Blue","SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Grey","SRP_SewingThread_Yellow", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Green", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Grey", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_Sweater extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Sweater";
		AddResult("Sweater_Gray");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Green","SRP_SewingThread_Black", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Red"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Green", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Grey","SRP_SewingThread_Yellow", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Grey", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Grey","SRP_SewingThread_Blue","SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_Shirt extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Shirt";
		AddResult("Shirt_BlueCheck");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Green","SRP_SewingThread_Black", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Red", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread","SRP_SewingThread_Yellow", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Blue", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Purple","SRP_SewingThread_Blue","SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_TShirt extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - TShirt";
		AddResult("TShirt_Blue");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Purple","SRP_SewingThread_Blue","SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Green","SRP_SewingThread_Black", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Red", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread","SRP_SewingThread_Yellow", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Blue", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_Hoodie extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Hoodie";
		AddResult("Hoodie_Blue");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread","SRP_SewingThread_Black","SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Green","SRP_SewingThread_Black", "SRP_SewingThread", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Yellow", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread","SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Blue", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_TacticalShirt extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Tactical Shirt";
		AddResult("TacticalShirt_Olive");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Green","SRP_SewingThread_Black", "SRP_SewingThread", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread","SRP_SewingThread_Black","SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread","SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Blue", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Yellow", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_HikingJacket extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Hiking Jacket";
		AddResult("HikingJacket_Blue");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Pink","SRP_SewingThread_Black", "SRP_SewingThread", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Grey","SRP_SewingThread_Orange","SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread","SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Orange", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Purple", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_ManSuitJacket extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Man Suit Jacket";
		AddResult("ManSuit_Brown");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread","SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Green","SRP_SewingThread_Black", "SRP_SewingThread", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Blue", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Yellow", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread","SRP_SewingThread_Black","SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 4);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_M65Jacket extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - M65 Jacket";
		AddResult("M65Jacket_Tan");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Grey","SRP_SewingThread_Orange","SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Pink","SRP_SewingThread_Black", "SRP_SewingThread", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Orange", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread","SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Purple", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_WomanSuitJacket extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Woman Suit Jacket";
		AddResult("WomanSuit_Brown");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Grey","SRP_SewingThread_Orange","SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Pink","SRP_SewingThread_Black", "SRP_SewingThread", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Orange", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread","SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Purple", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_GorkaJacket extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Gorka Jacket";
		AddResult("GorkaEJacket_Autumn");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Red","SRP_SewingThread_Orange","SRP_SewingThread_Purple", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Blue","SRP_SewingThread_Purple", "SRP_SewingThread", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Orange", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Pink","SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Black", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_RidersJacket extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Riders Jacket";
		AddResult("RidersJacket_Black");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Black","SRP_SewingThread_Orange","SRP_SewingThread_Purple", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Black","SRP_SewingThread_Purple", "SRP_SewingThread", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Black", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Black","SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Black", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_WoolCoat extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - WoolCoat";
		AddResult("WoolCoat_BlackCheck");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Grey","SRP_SewingThread_Orange","SRP_SewingThread_Purple", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Orange","SRP_SewingThread_Purple", "SRP_SewingThread", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Purple", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Pink","SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Yellow", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_TracksuitJacket extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Tracksuit Jacket";
		AddResult("TrackSuitJacket_Blue");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Pink","SRP_SewingThread_Orange","SRP_SewingThread_Purple", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Grey","SRP_SewingThread_Purple", "SRP_SewingThread", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_LightBlue", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Green","SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_FirefighterJacket extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Firefighter Jacket";
		AddResult("FirefighterJacket_Beige");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Red","SRP_SewingThread_Orange","SRP_SewingThread_Purple", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Yellow","SRP_SewingThread_Purple", "SRP_SewingThread", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Red", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Yellow","SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};
class Craft_SRPClothing_TopKit_Minidress extends Craft_SRP_TopFromKit_Base
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Minidress";
		AddResult("MiniDress_WhiteChecker");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread","SRP_SewingThread_Orange","SRP_SewingThread_Purple", "SRP_SewingThread_Pink"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Grey","SRP_SewingThread_Purple", "SRP_SewingThread", "SRP_SewingThread_Yellow"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_LightBlue", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{20,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Green","SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Purple", "SRP_SewingThread_Orange", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{20,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"WildboarPelt","MouflonPelt","GoatPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"PigPelt","DeerPelt","CowPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};


class Craft_SRP_LeatherArmband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
{
	override void Init()
	{
		m_Name = "Craft Armband - Plain Leather";	// action name in game
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
		m_MinQuantityIngredient[1] = 50;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"TannedLeather");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -8;// -1 = do nothing
		m_IngredientDestroy[0] = false;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"LeatherSewingKit"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -50;// -1 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		AddResult("SRP_Armband_Base");	// recipe result
		
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
		Debug.Log("Craft_SRP_LeatherArmband Recipe Do method called","recipes");
	}
};

//========================================================================= DEER ISLE GHILLIE REDO
class Craft_SRPClothing_TopKit_InsulatedGhillie extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Sew Top - Insulated Bear Ghillie";
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
		InsertIngredient(0,"SRP_ClothingTops_Kit");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"GhillieSuit_ColorBase");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -3;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
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
		Debug.Log("Craft_SRPClothing_TopKit_InsulatedBrownGhillie: Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRPClothing_TopKit_InsulatedGhillie_Brown extends Craft_SRPClothing_TopKit_InsulatedGhillie
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Insulated Brown Ghillie";
		AddResult("jmc_BearPeltGhillieBrown_m");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread_Red","SRP_SewingThread_Black", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Red"},{25,75,75,75});              
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread_Green","SRP_SewingThread_Blue","SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{25,75,75,75});              
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread_Yellow","SRP_SewingThread_Yellow", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{25,75,75,75});              
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread_Green", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{25,75,75,75});              
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread_Red", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{25,75,75,75});      
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"BearPelt"},GameConstants.STATE_PRISTINE);      
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"BearPelt"},GameConstants.STATE_PRISTINE);      
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);      
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);      
      canCraft &= kit.HasAttachmentFilled("Rope");      
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);      
    }
		return canCraft;
	}
};

class Craft_SRPClothing_TopKit_InsulatedGhillie_White extends Craft_SRPClothing_TopKit_InsulatedGhillie
{	
	override void Init()
	{
    super.Init();
    m_Name = "Sew Top - Insulated White Ghillie";
		AddResult("jmc_BearPeltGhillieWhite");//add results here
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    SRP_IntermediateClothingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]))
    {
      canCraft |= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread1",{"SRP_SewingThread","SRP_SewingThread_Black", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Red"},{25,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread2",{"SRP_SewingThread","SRP_SewingThread_Blue","SRP_SewingThread_Orange", "SRP_SewingThread_Pink"},{25,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread3",{"SRP_SewingThread","SRP_SewingThread_Yellow", "SRP_SewingThread_Pink", "SRP_SewingThread_Grey"},{25,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread4",{"SRP_SewingThread", "SRP_SewingThread_LightBlue", "SRP_SewingThread_Grey", "SRP_SewingThread_Black"},{25,75,75,75});        
      canCraft &= kit.HasAttachmentFilledWithCorrectItemAndQuantity("SRP_SewingThread5",{"SRP_SewingThread", "SRP_SewingThread_Pink", "SRP_SewingThread_Red", "SRP_SewingThread_LightBlue"},{25,75,75,75});
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt1", {"BearPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithCorrectItem("AnimalPelt2", {"BearPelt"},GameConstants.STATE_PRISTINE);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Leather", 8);
      canCraft &= kit.HasAttachmentFilledWithQuantity("Material_Shelter_Fabric", 4);
      canCraft &= kit.HasAttachmentFilled("Rope");
      canCraft &= kit.HasAttachmentFilledWithQuantity("Rags", 6);
    }
		return canCraft;
	}
};