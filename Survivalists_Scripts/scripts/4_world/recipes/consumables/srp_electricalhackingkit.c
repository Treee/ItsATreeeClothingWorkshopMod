class Craft_SRP_HackingKit_KitStarter extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Make Hacking Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 3;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"TireRepairKit");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -10;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"MetalWire");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("TireRepairKit_ElectronicsKit_Kit");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 1;//-1 = do nothing
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
		Debug.Log("Craft_SRP_HackingKit_KitStarter: Recipe Do method called","recipes");
	}
};


class Craft_SRP_HackingKit_ColorBase extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Finish Hacking Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 3;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"TireRepairKit_ElectronicsKit_Kit");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -10;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Pliers");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -15;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("TireRepairKit_ElectronicsKit_Kit");//add results here

		m_ResultSetFullQuantity[0] = true;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    bool canCraft = false;
    if (ingredients[0].IsCraftingKit())
    {
      ItemBase battery = ingredients[0].GetItemOnSlot("TruckBattery");
      ItemBase grenade = ingredients[0].GetItemOnSlot("VestGrenadeA");
      ItemBase copperWire = ingredients[0].GetItemOnSlot("SRP_CopperWire1");
      ItemBase wire1 = ingredients[0].GetItemOnSlot("SRP_ElectricalWire1");
      ItemBase wire2 = ingredients[0].GetItemOnSlot("SRP_ElectricalWire2");
      canCraft |= grenade != null;
      if (wire1)
      {
        if (GetRequiredWire1Color() != "")
        {
          canCraft &= wire1.GetColor() == GetRequiredWire1Color();
        }
        else
        {
          canCraft &= true;
        }
      }
      else
      {
        canCraft &= false;
      }
      if (wire2)
      {
        if (GetRequiredWire2Color() != "")
        {
          canCraft &= wire2.GetColor() == GetRequiredWire2Color();
        }
        else
        {
          canCraft &= true;
        }
      }
      else
      {
        canCraft &= false;
      }
      if (battery)
      {
        canCraft &= battery.GetQuantity() >= GetRequiredBatteryQuantity();
      }
      else
      {
        canCraft &= false;
      }
      if (copperWire)
      {
        canCraft &= copperWire.GetQuantity() >= GetRequiredCopperQuantity();
      }
      else
      {
        canCraft &= false;
      }
    }
    return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_HackingKit_ColorBase: Recipe Do method called: " + m_Name,"recipes");
	}

  int GetRequiredBatteryQuantity()
  {
    return 0;
  }
  int GetRequiredCopperQuantity()
  {
    return 0;
  }
  string GetRequiredWire1Color()
  {
    return "";
  }
  string GetRequiredWire2Color()
  {
    return "";
  }
};


class Craft_SRP_HackingKit_Green extends Craft_SRP_HackingKit_ColorBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Finish Hacking Kit - Basic";
		//result1
		AddResult("TireRepairKit_ElectronicsKit_Green");//add results here
	}
  override int GetRequiredBatteryQuantity()
  {
    return 250;
  }
  override int GetRequiredCopperQuantity()
  {
    return 20;
  }
};
class Craft_SRP_HackingKit_Yellow extends Craft_SRP_HackingKit_ColorBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Finish Hacking Kit - Advanced";
		//result1
		AddResult("TireRepairKit_ElectronicsKit_Yellow");//add results here
	}
  override int GetRequiredBatteryQuantity()
  {
    return 500;
  }
  override int GetRequiredCopperQuantity()
  {
    return 35;
  }
};
class Craft_SRP_HackingKit_Red extends Craft_SRP_HackingKit_ColorBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Finish Hacking Kit - Expert";
		//result1
		AddResult("TireRepairKit_ElectronicsKit_Red");//add results here
	}
  override int GetRequiredBatteryQuantity()
  {
    return 750;
  }
  override int GetRequiredCopperQuantity()
  {
    return 60;
  }
  override string GetRequiredWire1Color()
  {
    return "red";
  }
};
class Craft_SRP_HackingKit_Blue extends Craft_SRP_HackingKit_ColorBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Finish Hacking Kit - Master";
		//result1
		AddResult("TireRepairKit_ElectronicsKit_Blue");//add results here
	}
  override int GetRequiredBatteryQuantity()
  {
    return 750;
  }
  override int GetRequiredCopperQuantity()
  {
    return 85;
  }
  override string GetRequiredWire1Color()
  {
    return "blue";
  }
};
class Craft_SRP_HackingKit_Purple extends Craft_SRP_HackingKit_ColorBase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Finish Hacking Kit - Supreme";
		//result1
		AddResult("TireRepairKit_ElectronicsKit_Purple");//add results here
	}
  override int GetRequiredBatteryQuantity()
  {
    return 1000;
  }
  override int GetRequiredCopperQuantity()
  {
    return 100;
  }
  override string GetRequiredWire1Color()
  {
    return "red";
  }
  override string GetRequiredWire2Color()
  {
    return "blue";
  }
};