class Deconstruct_PlacedObjectKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Dismantle";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
				
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1 add any item that has a kit in this list so it can be dismantled.
		InsertIngredient(0,"SRP_BedsideTable");
    InsertIngredient(0,"SRP_BedsideTableMetal");
    InsertIngredient(0,"SRP_WoodenShelfSimple");
    InsertIngredient(0,"SRP_WoodenShelfSimpleGround");
    InsertIngredient(0,"SRP_WoodenShelfGround");
    InsertIngredient(0,"SRP_WoodenShelfGroundTall");
    InsertIngredient(0,"SRP_MetalShelfSimpleGround");
    InsertIngredient(0,"SRP_MetalShelfGround");
    InsertIngredient(0,"SRP_GunShelfWall");
    InsertIngredient(0,"SRP_GunShelfGround");
    InsertIngredient(0,"SRP_Potbelly_Stove");
    InsertIngredient(0,"SRP_ShootingTarget");
    InsertIngredient(0,"SRP_ShootingTargets");
    InsertIngredient(0,"SRP_StreetLightLarge");
    InsertIngredient(0,"SRP_StreetLightLarge_Metal");
    InsertIngredient(0,"SRP_StreetLightMedium_Wood");
    InsertIngredient(0,"SRP_StreetLightMedium");
    InsertIngredient(0,"SRP_Furniture_WoodenTable");
    InsertIngredient(0,"SRP_Fridge");
    InsertIngredient(0,"SRP_FridgeLarge");
    InsertIngredient(0,"SRP_FridgeRetro");
    InsertIngredient(0,"SRP_MilitaryCaseSmall");
    InsertIngredient(0,"SRP_MilitaryCaseSmallBlack");
    InsertIngredient(0,"SRP_MilitaryCaseMedium");
    InsertIngredient(0,"SRP_MilitaryCaseLong");
    InsertIngredient(0,"SRP_MilitaryCaseLarge");
    InsertIngredient(0,"SRP_MilitaryCaseLongBlue");
    InsertIngredient(0,"SRP_MilitaryCaseLongTan");
    InsertIngredient(0,"SRP_GChair");
    InsertIngredient(0,"SRP_GChairHigh");
    InsertIngredient(0,"SRP_GOutdoorTable");
    InsertIngredient(0,"SRP_GOutdoorTableUmbrella");
    InsertIngredient(0,"SRP_Umbrella");
    InsertIngredient(0,"SRP_Carpet");
    InsertIngredient(0,"SRP_CarpetRug");
    InsertIngredient(0,"SRP_MedicalCurtains");
    InsertIngredient(0,"SRP_BarricadeMetal");
    InsertIngredient(0,"SRP_SewingTable");
    InsertIngredient(0,"SRP_ComputerTerminal");

    InsertIngredient(0,"SRP_StoneForgeWorkbench");
    InsertIngredient(0,"SRP_AdvancedStoneForgeWorkbench");

    InsertIngredient(0,"SRP_Barricade_Wood");
    InsertIngredient(0,"SRP_BarricadeWithWindow_Wood");
    InsertIngredient(0,"SRP_WindowBarricade_Wood");
    InsertIngredient(0,"SRP_WindowBarricadeTall_Wood");
    InsertIngredient(0,"SRP_SpikeBarricade_Wood");

    InsertIngredient(0,"SRP_Furniture_Barrel");
    InsertIngredient(0,"SRP_Furniture_BarrelTable");
    InsertIngredient(0,"SRP_Furniture_Sofa");
    InsertIngredient(0,"SRP_Furniture_BarCounter");

    InsertIngredient(0,"SRP_ToolRack_Tongs");
    InsertIngredient(0,"SRP_ToolRack_Hammers");

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//ingredient 2
		InsertIngredient(1,"Hammer");
    InsertIngredient(1,"Screwdriver");
    InsertIngredient(1,"Pliers");
		
		m_IngredientAddHealth[1] = -10;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_BedsideTable_Kit");//add results here

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
		Debug.Log("Deconstruct_PlacedObjectKit: Recipe Do method called. Type: " +ingredients[0].GetType(),"recipes");
    SRP_KitBase.Cast( GetGame().CreateObject(ingredients[0].GetType()+"_Kit", player.GetPosition(), false) );
	}
};

class Deconstruct_IntermediaryObjectKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Dismantle";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
				
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1 add any item that has a kit in this list so it can be dismantled.
		InsertIngredient(0,"SRP_TetrisShelfLDown");    
		InsertIngredient(0,"SRP_TetrisShelfLUp");    
		InsertIngredient(0,"SRP_TetrisShelfLLeft");    
		InsertIngredient(0,"SRP_TetrisShelfLRight");    
		InsertIngredient(0,"SRP_TetrisShelfIVertical");    
		InsertIngredient(0,"SRP_TetrisShelfIHorizontal");    
		InsertIngredient(0,"SRP_TetrisShelfTUp");    
		InsertIngredient(0,"SRP_TetrisShelfTDown");    
		InsertIngredient(0,"SRP_TetrisShelfTVertical");    
		InsertIngredient(0,"SRP_TetrisShelfSHorizontal");    
		InsertIngredient(0,"SRP_TetrisShelfSVertical");    
		InsertIngredient(0,"SRP_TetrisShelfBox");

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//ingredient 2
		InsertIngredient(1,"Hammer");
    InsertIngredient(1,"Screwdriver");
    InsertIngredient(1,"Pliers");
		
		m_IngredientAddHealth[1] = -10;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_TetrisShelfKit_Kit");//add results here

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
		Debug.Log("Deconstruct_IntermediaryObjectKit: Recipe Do method called. Type: " +ingredients[0].GetType(),"recipes");
    // SRP_KitBase.Cast( GetGame().CreateObject(ingredients[0].GetType()+"_Kit", player.GetPosition(), false) );
	}
};