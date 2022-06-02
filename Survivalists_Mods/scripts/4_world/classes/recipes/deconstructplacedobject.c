class Deconstruct_PlacedObjectKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Dismantle - Using Crude Tools (Obsolete)";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 4;//animation length in relative time units
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
    InsertIngredient(0,"SRP_Cardboardbox");
    InsertIngredient(0,"SRP_BedsideTableMetal");
    InsertIngredient(0,"SRP_Potbelly_Stove");
    InsertIngredient(0,"SRP_ShootingTarget");
    InsertIngredient(0,"SRP_ShootingTargets");
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
    InsertIngredient(0,"SRP_SewingTable");
    InsertIngredient(0,"SRP_LatheWorkbench");
    InsertIngredient(0,"SRP_WornWorkbench");
    InsertIngredient(0,"SRP_WornWorkbench_Metal");
    InsertIngredient(0,"SRP_ComputerTerminal");
    InsertIngredient(0,"SRP_ComputerTerminalSlim");
    InsertIngredient(0,"SRP_ComputerTerminalWide");
    InsertIngredient(0,"SRP_MetalBox");
    InsertIngredient(0,"SRP_Furniture_OldWoodenChair");
    InsertIngredient(0,"SRP_Furniture_WoodenChair");

    InsertIngredient(0,"SRP_HangingWoodenSign");

    InsertIngredient(0,"SRP_StoneForgeWorkbench");
    InsertIngredient(0,"SRP_AdvancedStoneForgeWorkbench");

    InsertIngredient(0,"SRP_Furniture_BarCounter");

    InsertIngredient(0,"SRP_LockerSingle_Colorbase");
    InsertIngredient(0,"SRP_LockerTriple_Colorbase");
    InsertIngredient(0,"SRP_LockerQuad_Colorbase");
    InsertIngredient(0,"SRP_LockerMilitary_Colorbase");

    InsertIngredient(0,"SRP_FridgeMinsk");

    InsertIngredient(0,"SRP_PostBox");
    InsertIngredient(0,"SRP_PostBoxBlue");
    InsertIngredient(0,"SRP_PostBoxWooden");

    InsertIngredient(0,"SRP_DecontaminationShower");
    InsertIngredient(0,"SRP_DecontaminationShower_Red");
    InsertIngredient(0,"SRP_DecontaminationShower_Yellow");

    InsertIngredient(0,"SRP_HoneyCombStand");
    InsertIngredient(0,"SRP_GlassDisplayCase");
    InsertIngredient(0,"SRP_GlassDisplayCaseLarge");
    InsertIngredient(0,"SRP_MuseumTable");

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
		return ingredients[0].IsEmpty();
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Deconstruct_PlacedObjectKit: Recipe Do method called. Type: " +ingredients[0].GetType(),"recipes");
    SRP_KitBase.Cast( GetGame().CreateObjectEx(ingredients[0].GetType()+"_Kit", player.GetPosition(), false) );
	}
};

class Deconstruct_PlacedObjectKit_Advanced extends RecipeBase
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
    InsertIngredient(0,"SRP_Cardboardbox");
    InsertIngredient(0,"SRP_BedsideTableMetal");
    InsertIngredient(0,"SRP_Potbelly_Stove");
    InsertIngredient(0,"SRP_ShootingTarget");
    InsertIngredient(0,"SRP_ShootingTargets");
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
    InsertIngredient(0,"SRP_SewingTable");
    InsertIngredient(0,"SRP_LatheWorkbench");
    InsertIngredient(0,"SRP_WornWorkbench");
    InsertIngredient(0,"SRP_WornWorkbench_Metal");
    InsertIngredient(0,"SRP_ComputerTerminal");
    InsertIngredient(0,"SRP_ComputerTerminalSlim");
    InsertIngredient(0,"SRP_ComputerTerminalWide");
    InsertIngredient(0,"SRP_MetalBox");
    InsertIngredient(0,"SRP_Furniture_OldWoodenChair");
    InsertIngredient(0,"SRP_Furniture_WoodenChair");

    InsertIngredient(0,"SRP_HangingWoodenSign");

    InsertIngredient(0,"SRP_StoneForgeWorkbench");
    InsertIngredient(0,"SRP_AdvancedStoneForgeWorkbench");

    InsertIngredient(0,"SRP_Furniture_BarCounter");

    InsertIngredient(0,"SRP_LockerSingle_Colorbase");
    InsertIngredient(0,"SRP_LockerTriple_Colorbase");
    InsertIngredient(0,"SRP_LockerQuad_Colorbase");
    InsertIngredient(0,"SRP_LockerMilitary_Colorbase");

    InsertIngredient(0,"SRP_FridgeMinsk");

    InsertIngredient(0,"SRP_PostBox");
    InsertIngredient(0,"SRP_PostBoxBlue");
    InsertIngredient(0,"SRP_PostBoxWooden");

    InsertIngredient(0,"SRP_DecontaminationShower");
    InsertIngredient(0,"SRP_DecontaminationShower_Red");
    InsertIngredient(0,"SRP_DecontaminationShower_Yellow");

    InsertIngredient(0,"SRP_HoneyCombStand");
    InsertIngredient(0,"SRP_GlassDisplayCase");
    InsertIngredient(0,"SRP_GlassDisplayCaseLarge");
    InsertIngredient(0,"SRP_MuseumTable");

    InsertIngredient(0,"SRP_Barricade_Wood");
    InsertIngredient(0,"SRP_BarricadeWithWindow_Wood");
    InsertIngredient(0,"SRP_WindowBarricade_Wood");
    InsertIngredient(0,"SRP_WindowBarricadeTall_Wood");
    InsertIngredient(0,"SRP_SpikeBarricade_Wood");
    InsertIngredient(0,"SRP_BarricadeMetal");
    InsertIngredient(0,"SRP_BuildingComponentFrame_WornRamp");
    InsertIngredient(0,"SRP_BuildingComponentFrame_WornLPlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_WornUPlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_WornFlatPlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_WornFlatDoublePlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_WornSinglePlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_WornDoublePlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_WornLongDoublePlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_FineRamp");
    InsertIngredient(0,"SRP_BuildingComponentFrame_FineLPlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_FineUPlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_FineFlatPlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_FineFlatDoublePlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_FineSinglePlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_FineDoublePlatform");
    InsertIngredient(0,"SRP_BuildingComponentFrame_FineLongDoublePlatform");
    InsertIngredient(0,"SRP_Furniture_WoodenStairs");
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
    InsertIngredient(0,"SRP_WoodenShelfSimple");
    InsertIngredient(0,"SRP_WoodenShelfSimpleGround");
    InsertIngredient(0,"SRP_WoodenShelfGround");
    InsertIngredient(0,"SRP_WoodenShelfGroundTall");
    InsertIngredient(0,"SRP_GunShelfWall");
    InsertIngredient(0,"SRP_GunShelfGround");
    InsertIngredient(0,"SRP_MetalShelfSimpleGround");
    InsertIngredient(0,"SRP_MetalShelfGround");
    InsertIngredient(0,"SRP_MetalShelfGroundLarge");
    InsertIngredient(0,"SRP_MetalShelfGroundXL");
    InsertIngredient(0,"SRP_BedsideTable");
    InsertIngredient(0,"SRP_Furniture_WoodenTable");
    InsertIngredient(0,"SRP_Furniture_Barrel");
    InsertIngredient(0,"SRP_Furniture_BarrelTable");
    InsertIngredient(0,"SRP_MedicalBedSmall_Wood");
    InsertIngredient(0,"SRP_Furniture_Sofa_Modern");
    InsertIngredient(0,"SRP_Furniture_Sofa_Old");
    InsertIngredient(0,"SRP_ToolRack_Hammers");
    InsertIngredient(0,"SRP_Furniture_LogStump");
    InsertIngredient(0,"SRP_Furniture_LogBenchSmall");
    InsertIngredient(0,"SRP_Furniture_WoodBenchSmall");
    InsertIngredient(0,"SRP_Furniture_WoodBenchSlim");
    InsertIngredient(0,"SRP_WoodenBench");
    InsertIngredient(0,"SRP_StreetLightSlim");
    InsertIngredient(0,"SRP_StreetLightLarge");
    InsertIngredient(0,"SRP_StreetLightLarge_Metal");
    InsertIngredient(0,"SRP_StreetLightMedium");
    InsertIngredient(0,"SRP_StreetLightMedium_Wood");
    InsertIngredient(0,"SRP_StreetSign_Highway");
    InsertIngredient(0,"SRP_StreetSign_HandicapSmall");
    InsertIngredient(0,"SRP_StreetSign_OneWay");
    InsertIngredient(0,"SRP_StreetSign_BikePath");
    InsertIngredient(0,"SRP_StreetSign_SpeedLimit");
    InsertIngredient(0,"SRP_StreetSign_NoLeftTurn");
    InsertIngredient(0,"SRP_StreetSign_NoBikes");
    InsertIngredient(0,"SRP_StreetSign_Pedestrians");
    InsertIngredient(0,"SRP_StreetSign_Yield");
    InsertIngredient(0,"SRP_StreetSign_NoParking");
    InsertIngredient(0,"SRP_StreetSign_Handicap");
    InsertIngredient(0,"SRP_StreetSign_NoSmoking");
    InsertIngredient(0,"SRP_StreetSign_Caution");
    InsertIngredient(0,"SRP_MetalBarrel_Old");
    InsertIngredient(0,"SRP_MetalBarrel_Blue");
    InsertIngredient(0,"SRP_MetalBarrel_Red");
    InsertIngredient(0,"SRP_MetalBarrel_Yellow");
    InsertIngredient(0,"SRP_MetalBarrel_Concrete");

    InsertIngredient(0,"SRP_BookCaseCube");
    InsertIngredient(0,"SRP_GuitarCase_ColorBase");

    InsertIngredient(0,"SRP_CoatRack_Basic");
    InsertIngredient(0,"SRP_CoatRack_Fancy");
    InsertIngredient(0,"SRP_CoatRack_Simple");

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//ingredient 2
		InsertIngredient(1,"SRP_Deconstruction_Kit");
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
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
    if (ingredients[0].IsEmpty())
    {
      // check to see if all attachments are filled
      SRP_Deconstruction_Kit deconstructKit;
      if (ingredients[1] && Class.CastTo(deconstructKit, ingredients[1]))
      {
        return deconstructKit.HasAllAttachmentsFilled();
      }
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Deconstruct_PlacedObjectKit_Advanced: Recipe Do method called. Type: " +ingredients[0].GetType(),"recipes");
    SRP_KitBase.Cast( GetGame().CreateObjectEx(ingredients[0].GetType()+"_Kit", player.GetPosition(), false) );
    SRP_Deconstruction_Kit deconstructKit;
    if (ingredients[1] && Class.CastTo(deconstructKit, ingredients[1]))
    {
      deconstructKit.DamageTools();
    }
	}
};

class Craft_SRP_Deconstruct_Kit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Deconstruction Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
				
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = 3;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1 add any item that has a kit in this list so it can be dismantled.
		InsertIngredient(0,"Hammer");
		InsertIngredient(0,"Hatchet");
		InsertIngredient(0,"HandSaw");
		InsertIngredient(0,"Pliers");
		InsertIngredient(0,"Screwdriver");
		InsertIngredient(0,"Shovel");
		InsertIngredient(0,"SRP_Caliper");
		InsertIngredient(0,"SRP_Handdrill");
		InsertIngredient(0,"SRP_Handdrill_Old");
		InsertIngredient(0,"Crowbar");
		InsertIngredient(0,"Wrench");

		m_IngredientAddHealth[0] = -10;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//ingredient 2
    InsertIngredient(1,"Hammer");
		InsertIngredient(1,"Hatchet");
		InsertIngredient(1,"HandSaw");
		InsertIngredient(1,"Pliers");
		InsertIngredient(1,"Screwdriver");
		InsertIngredient(1,"Shovel");
		InsertIngredient(1,"SRP_Caliper");
		InsertIngredient(1,"SRP_Handdrill");
		InsertIngredient(1,"SRP_Handdrill_Old");
		InsertIngredient(1,"Crowbar");
		InsertIngredient(1,"Wrench");
		
		m_IngredientAddHealth[1] = -10;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_Deconstruction_Kit");//add results here

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
		Debug.Log("Craft_SRP_Deconstruct_Kit: Recipe Do method called. Type: " +ingredients[0].GetType(),"recipes");
	}
};

//=================================================================== MATERIAL PILES
class Deconstruct_PileOfMaterials extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Dismantle";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 4;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
				
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = 3;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1 add any item that has a kit in this list so it can be dismantled.
		// InsertIngredient(0,"SRP_StonePile_Small");    
		// InsertIngredient(0,"SRP_StonePile_Large");    

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		// //ingredient 2
		// InsertIngredient(1,"Hammer");
    // InsertIngredient(1,"Pickaxe");
		
		m_IngredientAddHealth[1] = -20;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
    // AddResult("Stone");//add results here

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
		return ingredients[0].IsEmpty();
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Deconstruct_PileOfMaterials: Recipe Do method called. Type: " +ingredients[0].GetType(),"recipes");
	}
};

class Deconstruct_RockPile extends Deconstruct_PileOfMaterials
{	
	override void Init()
	{
    super.Init();
		
		InsertIngredient(0,"SRP_StonePile_Small");    
		InsertIngredient(0,"SRP_StonePile_Large");    
		
		InsertIngredient(1,"Hammer");
    InsertIngredient(1,"Pickaxe");
		
		m_IngredientAddHealth[1] = -20;// 0 = do nothing
		//result1
    AddResult("Stone");//add results here
    AddResult("Stone");//add results here
    AddResult("Stone");//add results here
    AddResult("Stone");//add results here
    AddResult("Stone");//add results here
	}
};
class Deconstruct_PlankPile extends Deconstruct_PileOfMaterials
{	
	override void Init()
	{
    super.Init();
		
		InsertIngredient(0,"SRP_Furniture_PileOfPlanks");    
		
		InsertIngredient(1,"Hammer");
    InsertIngredient(1,"WoodAxe");
    InsertIngredient(1,"Crowbar");
		
		m_IngredientAddHealth[1] = -20;// 0 = do nothing
		//result1
    AddResult("WoodenPlank");//add results here
    m_ResultSetQuantity[0] = 5;//-1 = do nothing
	}
};
class Deconstruct_LogPile extends Deconstruct_PileOfMaterials
{	
	override void Init()
	{
    super.Init();
		
		InsertIngredient(0,"SRP_Furniture_SmallLogPile");    
		InsertIngredient(0,"SRP_Furniture_LargeLogPile");    

		InsertIngredient(1,"Hammer");
    InsertIngredient(1,"WoodAxe");
    InsertIngredient(1,"Crowbar");
		
		m_IngredientAddHealth[1] = -20;// 0 = do nothing
		//result1
    AddResult("WoodenLog");//add results here
    AddResult("WoodenLog");//add results here
	}
};

//=================================================================== OBJECT KITS
class Deconstruct_ObjectIntoKitBase extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Dismantle - Using Crude Tools";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 4;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
				
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1 add any item that has a kit in this list so it can be dismantled.		
    // InsertIngredient(0,"SRP_DecorativeLight_Long_Colorbase");
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
		
		m_IngredientAddHealth[1] = -20;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
    // AddResult("SRP_DecorativeLight_LongKit_Kit");//add results here

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
		return ingredients[0].IsEmpty();
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Deconstruct_ObjectIntoKitBase: Recipe Do method called. Type: " +ingredients[0].GetType(),"recipes");
	}
};
class Deconstruct_DecorativeLight_Long extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();		
    InsertIngredient(0,"SRP_DecorativeLight_Long_Colorbase");
    AddResult("SRP_DecorativeLight_LongKit_Kit");//add results here
	}
};
class Deconstruct_DecorativeLight_VerticalLong extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();		
    InsertIngredient(0,"SRP_DecorativeLight_VerticalLong_Colorbase");
    AddResult("SRP_DecorativeLight_VerticalLongKit_Kit");//add results here
	}
};
class Deconstruct_DecorativeLight_Flat extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();		
    InsertIngredient(0,"SRP_DecorativeLight_Flat_Colorbase");
    AddResult("SRP_DecorativeLight_FlatKit_Kit");//add results here
	}
};
class Deconstruct_DecorativeLight_VerticalFlat extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();		
    InsertIngredient(0,"SRP_DecorativeLight_VerticalFlat_Colorbase");
    AddResult("SRP_DecorativeLight_VerticalFlatKit_Kit");//add results here
	}
};
class Deconstruct_DecorativeLight_LongFancy extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();		
    InsertIngredient(0,"SRP_DecorativeLight_LongFancy_Colorbase");
    AddResult("SRP_DecorativeLight_LongFancyKit_Kit");//add results here
	}
};
class Deconstruct_DecorativeLight_VerticalLongFancy extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();		
    InsertIngredient(0,"SRP_DecorativeLight_VerticalLongFancy_Colorbase");
    AddResult("SRP_DecorativeLight_VerticalLongFancyKit_Kit");//add results here
	}
};
class Deconstruct_DecorativeLight_Corner extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();		
    InsertIngredient(0,"SRP_DecorativeLight_Corner_Colorbase");
    AddResult("SRP_DecorativeLight_CornerKit_Kit");//add results here
	}
};
class Deconstruct_DecorativeLight_HorizontalCorner extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();		
    InsertIngredient(0,"SRP_DecorativeLight_HorizontalCorner_Colorbase");
    AddResult("SRP_DecorativeLight_HorizontalCornerKit_Kit");//add results here
	}
};
class Deconstruct_IntermediaryBarricadeKit extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();
    InsertIngredient(0,"SRP_Barricade_Wood");
    InsertIngredient(0,"SRP_BarricadeWithWindow_Wood");
    InsertIngredient(0,"SRP_WindowBarricade_Wood");
    InsertIngredient(0,"SRP_WindowBarricadeTall_Wood");
    InsertIngredient(0,"SRP_SpikeBarricade_Wood");
    InsertIngredient(0,"SRP_BarricadeMetal");

    AddResult("SRP_BarricadeKit_Kit");//add results here
	}
};
class Deconstruct_IntermediaryObjectKit_BuildingFrame extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();
		InsertIngredient(0,"SRP_BuildingComponentFrame_WornRamp");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_WornLPlatform");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_WornUPlatform");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_WornFlatPlatform");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_WornFlatDoublePlatform");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_WornSinglePlatform");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_WornDoublePlatform");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_WornLongDoublePlatform");  

    InsertIngredient(0,"SRP_BuildingComponentFrame_FineRamp");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_FineLPlatform");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_FineUPlatform");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_FineFlatPlatform");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_FineFlatDoublePlatform");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_FineSinglePlatform");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_FineDoublePlatform");    
		InsertIngredient(0,"SRP_BuildingComponentFrame_FineLongDoublePlatform");   

		InsertIngredient(0,"SRP_Furniture_WoodenStairs");    

    AddResult("SRP_BuildingComponentFrame_Kit");//add results here
	}
};
class Deconstruct_IntermediaryObjectKit extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();
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

    AddResult("SRP_TetrisShelfKit_Kit");//add results here
	}
};
class Deconstruct_IntermediaryWoodenShelfKit extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();
    InsertIngredient(0,"SRP_WoodenShelfSimple");
    InsertIngredient(0,"SRP_WoodenShelfSimpleGround");
    InsertIngredient(0,"SRP_WoodenShelfGround");
    InsertIngredient(0,"SRP_WoodenShelfGroundTall");
    InsertIngredient(0,"SRP_GunShelfWall");
    InsertIngredient(0,"SRP_GunShelfGround");
    InsertIngredient(0,"SRP_BookCaseCube");

    AddResult("SRP_WoodenShelfKit_Kit");//add results here
	}
};
class Deconstruct_IntermediaryWoodenDisplayKit extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();
    InsertIngredient(0,"SRP_CoatRack_Basic");
    InsertIngredient(0,"SRP_CoatRack_Fancy");
    InsertIngredient(0,"SRP_CoatRack_Simple");

    AddResult("SRP_WoodenDisplayKit_Kit");//add results here
	}
};
class Deconstruct_IntermediaryMetalShelfKit extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();
    InsertIngredient(0,"SRP_MetalShelfSimpleGround");
    InsertIngredient(0,"SRP_MetalShelfGround");
    InsertIngredient(0,"SRP_MetalShelfGroundLarge");
    InsertIngredient(0,"SRP_MetalShelfGroundXL");

    AddResult("SRP_MetalShelfKit_Kit");//add results here
	}
};
class Deconstruct_IntermediaryWoodenFurnitureKit extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();
		InsertIngredient(0,"SRP_BedsideTable");
    InsertIngredient(0,"SRP_Furniture_WoodenTable");
    InsertIngredient(0,"SRP_Furniture_Barrel");
    InsertIngredient(0,"SRP_Furniture_BarrelTable");
    InsertIngredient(0,"SRP_MedicalBedSmall_Wood");
    InsertIngredient(0,"SRP_Furniture_Sofa_Modern");
    InsertIngredient(0,"SRP_Furniture_Sofa_Old");
    InsertIngredient(0,"SRP_ToolRack_Hammers");
    InsertIngredient(0,"SRP_Furniture_LogStump");
    InsertIngredient(0,"SRP_Furniture_LogBenchSmall");
    InsertIngredient(0,"SRP_Furniture_WoodBenchSmall");
    InsertIngredient(0,"SRP_Furniture_WoodBenchSlim");
    InsertIngredient(0,"SRP_WoodenBench");
    
		AddResult("SRP_WoodenFurnitureKit_Kit");//add results here
	}
};
class Deconstruct_IntermediaryStreetLightKit extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Dismantle";
    InsertIngredient(0,"SRP_StreetLightSlim");
    InsertIngredient(0,"SRP_StreetLightLarge");
    InsertIngredient(0,"SRP_StreetLightLarge_Metal");
    InsertIngredient(0,"SRP_StreetLightMedium");
    InsertIngredient(0,"SRP_StreetLightMedium_Wood");

		AddResult("SRP_StreetLightKit_Kit");//add results here
	}
};
class Deconstruct_IntermediaryObjectKit_StreetSign extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();
		InsertIngredient(0,"SRP_StreetSign_Highway");    
		InsertIngredient(0,"SRP_StreetSign_HandicapSmall");    
		InsertIngredient(0,"SRP_StreetSign_OneWay");    
		InsertIngredient(0,"SRP_StreetSign_BikePath");    
		InsertIngredient(0,"SRP_StreetSign_SpeedLimit");    
		InsertIngredient(0,"SRP_StreetSign_NoLeftTurn");    
		InsertIngredient(0,"SRP_StreetSign_NoBikes");    
		InsertIngredient(0,"SRP_StreetSign_Pedestrians");  
    InsertIngredient(0,"SRP_StreetSign_Yield");    
		InsertIngredient(0,"SRP_StreetSign_NoParking");    
		InsertIngredient(0,"SRP_StreetSign_Handicap");    
		InsertIngredient(0,"SRP_StreetSign_NoSmoking");    
		InsertIngredient(0,"SRP_StreetSign_Caution");

		AddResult("SRP_StreetSign_Kit");//add results here
	}
};
class Deconstruct_IntermediaryObjectKit_Barrels extends Deconstruct_ObjectIntoKitBase
{	
	override void Init()
	{
    super.Init();
    InsertIngredient(0,"SRP_MetalBarrel_Old");
    InsertIngredient(0,"SRP_MetalBarrel_Blue");
    InsertIngredient(0,"SRP_MetalBarrel_Red");
    InsertIngredient(0,"SRP_MetalBarrel_Yellow");
    InsertIngredient(0,"SRP_MetalBarrel_Concrete");

		AddResult("SRP_MetalBarrelKit_Kit");//add results here
	}
};