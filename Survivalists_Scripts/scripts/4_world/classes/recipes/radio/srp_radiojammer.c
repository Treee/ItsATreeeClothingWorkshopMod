class SRP_DismantleElectronicJammers_Enhanced extends RecipeBase
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
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1 add any item that has a kit in this list so it can be dismantled.
    InsertIngredient(0,"SRP_ElectronicsJammer_Dish");
    InsertIngredient(0,"SRP_ElectronicsJammer_Tower");
    InsertIngredient(0,"SRP_ElectronicsJammer_TowerAdvanced");

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//ingredient 2
		InsertIngredient(1,"PowerTool_ElectricHandDrill");
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
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
    SRP_ElectronicsJammer_Base jammer = SRP_ElectronicsJammer_Base.Cast(ingredients[0]);
    if (jammer)
    {
      // check to see if all attachments are filled
      PowerTool_ElectricHandDrill powerDrill;
      if (ingredients[1] && Class.CastTo(powerDrill, ingredients[1]))
      {
        return powerDrill.HasBatteryAttached() && !jammer.HasHackingKitAttached();        
      }
		  return false;   
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    SRP_ElectronicsJammer_Base jammer = SRP_ElectronicsJammer_Base.Cast(ingredients[0]);
    if (jammer)
    {
      jammer.DismantleJammer();
    }
		Debug.Log("SRP_DismantleElectronicJammers: Recipe Do method called. Type: " +ingredients[0].GetType(),"recipes");
    
    PowerTool_ElectricHandDrill powerDrill;
    if (ingredients[1] && Class.CastTo(powerDrill, ingredients[1]))
    {
      powerDrill.ConsumeBattery(Math.RandomIntInclusive(50,150));
    }
    PluginAdminLog m_AdminLog = PluginAdminLog.Cast( GetPlugin(PluginAdminLog) );
    if (m_AdminLog)
    {
      m_AdminLog.DirectAdminLogPrint("||DECONSTRUCTION||");
      m_AdminLog.OnPlacementComplete( player, ingredients[0]);
    }
	}
};

class SRP_DismantleElectronicJammers_RemoveHackingKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Remove Hacking Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
				
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1 add any item that has a kit in this list so it can be dismantled.
    InsertIngredient(0,"SRP_ElectronicsJammer_Dish");
    InsertIngredient(0,"SRP_ElectronicsJammer_Tower");
    InsertIngredient(0,"SRP_ElectronicsJammer_TowerAdvanced");

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;// false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//ingredient 2
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
    SRP_ElectronicsJammer_Base jammer = SRP_ElectronicsJammer_Base.Cast(ingredients[0]);
    if (jammer)
    {
		  return jammer.HasHackingKitAttached();      
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{    
    SRP_ElectronicsJammer_Base jammer = SRP_ElectronicsJammer_Base.Cast(ingredients[0]);
    if (jammer && jammer.HasHackingKitAttached())
    {
      if (jammer.IsSolved())
      {
        jammer.RemovePriorityHackingKit();
      }
      else
      {
        float chance = Math.RandomIntInclusive(1,20);
        if (chance >= 16) 
        {
          player.GetInventory().CreateInInventory("SRP_DrugExplosion");
          PluginAdminLog m_AdminLog = PluginAdminLog.Cast( GetPlugin(PluginAdminLog) );
          if (m_AdminLog)
          {
            m_AdminLog.DirectAdminLogPrint("Player Died To Explosion by diffusing a radio jammer. Nat 20 roll");
          }
        }
      }
    }
		Debug.Log("SRP_DismantleElectronicJammers_RemoveHackingKit: Recipe Do method called. Type: " +ingredients[0].GetType(),"recipes");
	}
};