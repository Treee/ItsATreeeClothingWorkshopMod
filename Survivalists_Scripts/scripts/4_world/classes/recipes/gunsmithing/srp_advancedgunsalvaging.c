//===================================== Expert BREAKDOWN
class SRP_BreakDownPistolCore_Expert extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Scrap Pistol For Parts (Expert)";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
				
		//ingredient 1  
		InsertIngredient(0,"PistolCore");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"SRP_LatheWorkbench");
		
		m_IngredientAddHealth[1] = -2;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;	// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		// AddResult("BW_Scar_Magazine");	// recipe result
		
		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_LatheWorkbench lathe = SRP_LatheWorkbench.Cast(ingredients[1]);
    if (lathe)
    {
      return lathe.HasAllAttachments();
    }
    return false;  
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    float chance = Math.RandomFloatInclusive(0,1);

    ItemBase newItem = ItemBase.Cast(GetGame().CreateObjectEx(GetSmallParts().GetRandomElement(), player.GetPosition(), false));        
    if (newItem)
    {
      if (chance >= 0.8)
      { // 20% chance to outright ruin the result
        newItem.AddHealth(-100);        
      }
      else
      {
        newItem.AddHealth(-Math.RandomIntInclusive(0,50));
      }
      results.Insert(newItem);
      Print("Item: " + newItem.GetType() + " hp level: " + newItem.GetHealth() + " chance: " + chance);
    }
    Debug.Log("SRP_BreakDownPistolCore_Expert: Recipe Do method called","recipes");
	}

  TStringArray GetSmallParts()
  {
    return {
      "TT_GunBarrel_Small",
      "TT_RifledBarrel_Small",
      "TT_MainReceiver_SemiSmall",
      "TT_MainReceiver_AutoSmall",
      "TT_Trigger_Simple",
      "TT_Hammer_Simple",
    };
  }
};

class SRP_BreakDownRifleCoreLarge_Expert extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Scrap For Parts - Large (Expert)";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
				
		//ingredient 1  
		InsertIngredient(0,"RifleCore");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"SRP_LatheWorkbench");
		
		m_IngredientAddHealth[1] = -2;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;	// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		// AddResult("BW_Scar_Magazine");	// recipe result
		
		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_LatheWorkbench lathe = SRP_LatheWorkbench.Cast(ingredients[1]);
    if (lathe)
    {
      return lathe.HasAllAttachments();
    }
    return false;
  }

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    float chance = Math.RandomFloatInclusive(0,1);
    ItemBase newItem = ItemBase.Cast(GetGame().CreateObjectEx(GetLargeParts().GetRandomElement(), player.GetPosition(), false));        
    if (newItem)
    {
      if (chance >= 0.8)
      { // 20% chance to outright ruin the result
        newItem.AddHealth(-100);        
      }
      else
      {
        newItem.AddHealth(-Math.RandomIntInclusive(0,50));
      }
      results.Insert(newItem);
    }
    Debug.Log("SRP_BreakDownRifleCoreLarge: Recipe Do method called","recipes");
	}

  TStringArray GetLargeParts()
  {
    return {
      "TT_GunBarrel_Long",
      "TT_RifledBarrel_Long",
      "TT_MainReceiver_SemiLarge",
      "TT_MainReceiver_AutoLarge",
      "TT_Trigger_Simple",
      "TT_Hammer_Simple",
    };
  }
};

class SRP_BreakDownRifleCoreMedium_Expert extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Scrap For Parts - Medium (Expert)";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
				
		//ingredient 1  
		InsertIngredient(0,"RifleCore");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		InsertIngredient(1,"SRP_LatheWorkbench");
		
		m_IngredientAddHealth[1] = -2;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;	// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		// AddResult("BW_Scar_Magazine");	// recipe result
		
		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_LatheWorkbench lathe = SRP_LatheWorkbench.Cast(ingredients[1]);
    if (lathe)
    {
      return lathe.HasAllAttachments();
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    float chance = Math.RandomFloatInclusive(0,1);
    ItemBase newItem = ItemBase.Cast(GetGame().CreateObjectEx(GetMediumParts().GetRandomElement(), player.GetPosition(), false));        
    if (newItem)
    {
      if (chance >= 0.8)
      { // 20% chance to outright ruin the result
        newItem.AddHealth(-100);        
      }
      else
      {
        newItem.AddHealth(-Math.RandomIntInclusive(0,50));
      }
      results.Insert(newItem);
    }
    Debug.Log("SRP_BreakDownRifleCoreMedium: Recipe Do method called","recipes");
	}

  TStringArray GetMediumParts()
  {
    return {
      "TT_GunBarrel_Medium",
      "TT_RifledBarrel_Medium",
      "TT_MainReceiver_SemiMedium",
      "TT_MainReceiver_AutoMedium",
      "TT_Trigger_Simple",
      "TT_Hammer_Simple",
    };
  }
};