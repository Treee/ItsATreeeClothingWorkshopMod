//pistol,shotgun,sniper,rifle,smg
//===================================CRUDE Breakdown
class SRP_BreakDownPistolCore extends RecipeBase
{
	override void Init()
	{
		m_Name = "Scrap Pistol For Parts";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 6;		// animation length in relative time units
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
		InsertIngredient(1,"Hammer");
        InsertIngredient(1,"Screwdriver");
        InsertIngredient(1,"Pliers");

		m_IngredientAddHealth[1] = -30;	// -1 = do nothing
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
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    float chance = Math.RandomFloatInclusive(0,1);

    ItemBase newItem = ItemBase.Cast(GetGame().CreateObjectEx(GetSmallParts().GetRandomElement(), player.GetPosition(), false));
    if (newItem)
    {
      if (chance >= 0.5)
      { // 50% chance to outright ruin the result
        newItem.AddHealth(-100);
      }
      else
      {
        newItem.AddHealth(-Math.RandomIntInclusive(50,90));
      }
      results.Insert(newItem);
    }
    Debug.Log("SRP_BreakDownPistol: Recipe Do method called","recipes");
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

class SRP_BreakDownRifleCoreLarge extends RecipeBase
{
	override void Init()
	{
		m_Name = "Scrap For Parts - Large";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 6;		// animation length in relative time units
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
		InsertIngredient(1,"Hammer");
        InsertIngredient(1,"Screwdriver");
        InsertIngredient(1,"Pliers");

		m_IngredientAddHealth[1] = -30;	// -1 = do nothing
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
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    float chance = Math.RandomFloatInclusive(0,1);
    ItemBase newItem = ItemBase.Cast(GetGame().CreateObjectEx(GetLargeParts().GetRandomElement(), player.GetPosition(), false));
    if (newItem)
    {
      if (chance >= 0.5)
      { // 50% chance to outright ruin the result
        newItem.AddHealth(-100);
      }
      else
      {
        newItem.AddHealth(-Math.RandomIntInclusive(50,90));
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

class SRP_BreakDownRifleCoreMedium extends RecipeBase
{
	override void Init()
	{
		m_Name = "Scrap For Parts - Medium";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 6;		// animation length in relative time units
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
		InsertIngredient(1,"Hammer");
        InsertIngredient(1,"Screwdriver");
        InsertIngredient(1,"Pliers");

		m_IngredientAddHealth[1] = -30;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;	// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient

		//result 1
		// AddResult("BW_Scar_Magazine");	// recipe result

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -1;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    float chance = Math.RandomFloatInclusive(0,1);
    ItemBase newItem = ItemBase.Cast(GetGame().CreateObjectEx(GetMediumParts().GetRandomElement(), player.GetPosition(), false));
    if (newItem)
    {
      if (chance >= 0.5)
      { // 50% chance to outright ruin the result
        newItem.AddHealth(-100);
      }
      else
      {
        newItem.AddHealth(-Math.RandomIntInclusive(50,90));
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

//===================================== ADVANCED BREAKDOWN
class SRP_BreakDownPistolCore_Advanced extends RecipeBase
{
	override void Init()
	{
		m_Name = "Scrap Pistol For Parts (Advanced)";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 6;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		m_MinQuantityIngredient[1] = 30;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"PistolCore");	// primary ingredient

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"SRP_WeaponRepairKit");

		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -30;// 0 = do nothing
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
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    float chance = Math.RandomFloatInclusive(0,1);

    ItemBase newItem = ItemBase.Cast(GetGame().CreateObjectEx(GetSmallParts().GetRandomElement(), player.GetPosition(), false));
    if (newItem)
    {
      if (chance >= 0.6)
      { // 40% chance to outright ruin the result
        newItem.AddHealth(-100);
      }
      else
      {
        newItem.AddHealth(-Math.RandomIntInclusive(30,70));
      }
      results.Insert(newItem);
    }
    Debug.Log("SRP_BreakDownPistolCore_Advanced: Recipe Do method called","recipes");
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

class SRP_BreakDownRifleCoreLarge_Advanced extends RecipeBase
{
	override void Init()
	{
		m_Name = "Scrap For Parts - Large (Advanced)";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 6;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		m_MinQuantityIngredient[1] = 30;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"RifleCore");	// primary ingredient

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"SRP_WeaponRepairKit");

		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -30;// 0 = do nothing
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
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    float chance = Math.RandomFloatInclusive(0,1);
    ItemBase newItem = ItemBase.Cast(GetGame().CreateObjectEx(GetLargeParts().GetRandomElement(), player.GetPosition(), false));
    if (newItem)
    {
      if (chance >= 0.6)
      { // 40% chance to outright ruin the result
        newItem.AddHealth(-100);
      }
      else
      {
        newItem.AddHealth(-Math.RandomIntInclusive(30,70));
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

class SRP_BreakDownRifleCoreMedium_Advanced extends RecipeBase
{
	override void Init()
	{
		m_Name = "Scrap For Parts - Medium (Advanced)";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 6;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		m_MinQuantityIngredient[0] = 1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		m_MinQuantityIngredient[1] = 30;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"RifleCore");	// primary ingredient

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"SRP_WeaponRepairKit");

		m_IngredientAddHealth[1] = -5;	// -1 = do nothing
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
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    float chance = Math.RandomFloatInclusive(0,1);
    ItemBase newItem = ItemBase.Cast(GetGame().CreateObjectEx(GetMediumParts().GetRandomElement(), player.GetPosition(), false));
    if (newItem)
    {
      if (chance >= 0.6)
      { // 50% chance to outright ruin the result
        newItem.AddHealth(-100);
      }
      else
      {
        newItem.AddHealth(-Math.RandomIntInclusive(30,70));
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

//====================================== SALVAGE REPAIR
class Craft_SRP_RepairSalvagedPart extends RecipeBase
{
	override void Init()
	{
		m_Name = "Repair Salvage Component";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 6;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check

		m_MinDamageIngredient[1] = 2;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check

		//ingredient 1
		InsertIngredient(0,"SRP_WeaponRepairKit");	// primary ingredient

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"TT_MainReceiver_Base");
        InsertIngredient(1,"TT_GunBarrel_Base");
        InsertIngredient(1,"TT_RifledBarrel_Base");
        InsertIngredient(1,"TT_Trigger_ColorBase");
        InsertIngredient(1,"TT_Hammer_ColorBase");

		m_IngredientAddHealth[1] = 50;	// -1 = do nothing
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
        return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
        Debug.Log("Craft_SRP_RepairSalvagedPart: Recipe Do method called","recipes");
	}
};