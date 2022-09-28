class Deconstruct_PlacedObjectKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Dismantle to Base Kit - Crude (Chance to destroy/damage item)";
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
    InsertIngredient(0,"Inventory_Base");
    InsertIngredient(0,"Container_Base");
    InsertIngredient(0,"BarrelHoles_ColorBase");    

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
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    // only deconstruct items that can be deconstructed AND are empty
		if (ingredients[0].CanBeDeconstructed() && ingredients[0].IsEmpty())
    {
      m_IngredientAddHealth[1] = -Math.RandomIntInclusive(5,30); 
      return true;
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Deconstruct_PlacedObjectKit: Recipe Do method called. Type: " +ingredients[0].GetType(),"recipes");    
    string newItemName = "";
    // if the item has no crafting kit for itself (since this is crude crafting)
    if (ingredients[0].GetCraftingKitName() == "")
    {
      newItemName = ingredients[0].GetKitName();
    }    
    else // else the item has crafting kit for itself (since this is crude crafting)
    {
      newItemName = ingredients[0].GetCraftingKitName();
    }

    TurnItemIntoItemLambda_KitDeployment lambda = new TurnItemIntoItemLambda_KitDeployment(ingredients[0], newItemName, player, player.GetPosition());
    lambda.SetTransferParams(false, false);
    MiscGameplayFunctions.TurnItemIntoItemEx(player, lambda);

    PluginAdminLog m_AdminLog = PluginAdminLog.Cast( GetPlugin(PluginAdminLog) );
    if (m_AdminLog)
    {
      m_AdminLog.DirectAdminLogPrint("||DECONSTRUCTION||");
      m_AdminLog.OnPlacementComplete( player, ingredients[0]);
    }
	}
};

class Deconstruct_PlacedObjectKit_Advanced extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Dismantle to Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
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
    InsertIngredient(0,"Inventory_Base");
    InsertIngredient(0,"Container_Base");
    InsertIngredient(0,"BarrelHoles_ColorBase");    

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//ingredient 2
		InsertIngredient(1,"PowerTool_ElectricHandDrill");
		
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
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    // only deconstruct items that can be deconstructed AND are empty
		if (ingredients[0].CanBeDeconstructed() && ingredients[0].IsEmpty())
    {
      m_IngredientAddHealth[1] = -Math.RandomIntInclusive(0,3); 
      return true;
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Deconstruct_PlacedObjectKit_Advanced: Recipe Do method called. Type: " +ingredients[0].GetType(),"recipes");
   
    TurnItemIntoItemLambda_KitDeployment lambda = new TurnItemIntoItemLambda_KitDeployment(ingredients[0], ingredients[0].GetKitName(), player, player.GetPosition());
    lambda.SetTransferParams(false, false);
    MiscGameplayFunctions.TurnItemIntoItemEx(player, lambda);

    PowerTool_ElectricHandDrill tool = PowerTool_ElectricHandDrill.Cast(ingredients[1]);
    if (tool)
    {
      tool.ConsumeBattery(Math.RandomIntInclusive(200,400));
    }

    PluginAdminLog m_AdminLog = PluginAdminLog.Cast( GetPlugin(PluginAdminLog) );
    if (m_AdminLog)
    {
      m_AdminLog.DirectAdminLogPrint("||DECONSTRUCTION||");
      m_AdminLog.OnPlacementComplete( player, ingredients[0]);
    }
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
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
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
    PluginAdminLog m_AdminLog = PluginAdminLog.Cast( GetPlugin(PluginAdminLog) );
    if (m_AdminLog)
    {
      m_AdminLog.DirectAdminLogPrint("||DECONSTRUCTION||");
      m_AdminLog.OnPlacementComplete( player, ingredients[0]);
    }
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
