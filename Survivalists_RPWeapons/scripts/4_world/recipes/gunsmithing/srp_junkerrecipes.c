class Craft_SRP_WeaponGunCrafting_Base extends RecipeBase  
{
	override void Init()
	{
		m_Name = "Base Recipe";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 6;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
				
		//ingredient 1  
		// InsertIngredient(0,"SRP_WeaponShortBarrel_Kit");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2					
		// InsertIngredient(1,"Pliers");
		
		m_IngredientAddHealth[1] = -30;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;	// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result 1
		// AddResult("DUB_ColtSA");	// recipe result
		
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
    SRP_WeaponCraftingKitBase kit;
    if (Class.CastTo(kit, ingredients[0]) && kit.IsCraftingKit())
    {
      return kit.AreCorrectTypesAndSlots(GetSlotTypes(), GetItemTypes());
    }
    return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    Debug.Log("Craft_SRP_WeaponGunCrafting_Base: Recipe Do method called: " + m_Name,"recipes");
	}

  TStringArray GetSlotTypes()
  {
    return {};
  }

  TStringArray GetItemTypes()
  {
    return {};
  }
};


class Craft_SRP_WeaponShortBarrel_Kit_ColtSA_Revolver extends Craft_SRP_WeaponGunCrafting_Base  
{
	override void Init()
	{
    super.Init();
		m_Name = "Short Barreled Gun - ColtSA Revolver";
		InsertIngredient(0,"SRP_WeaponShortBarrel_Kit");
		InsertIngredient(1,"Pliers");
		AddResult("DUB_ColtSA");
	}

  TStringArray GetSlotTypes()
  {
    return {"SRP_GunBarrel","SRP_MainReceiver","SRP_Trigger","SRP_Hammer","SRP_GunGrip"};
  }

  TStringArray GetItemTypes()
  {
    return {"TT_RifledBarrel_Small","TT_MainReceiver_SemiSmall","TT_Trigger_Simple","TT_Hammer_Simple","TT_Grip_Wood"};
  }
};
class Craft_SRP_WeaponShortBarrel_Kit_JunkShotgun extends Craft_SRP_WeaponGunCrafting_Base  
{
	override void Init()
	{
    super.Init();
		m_Name = "Short Barreled Gun - Junk Shotgun";
		InsertIngredient(0,"SRP_WeaponShortBarrel_Kit");
		InsertIngredient(1,"Pliers");
		AddResult("DUB_JunkShotgun");
	}

  TStringArray GetSlotTypes()
  {
    return {"SRP_GunBarrel","SRP_MainReceiver","SRP_Trigger","SRP_Hammer","SRP_GunGrip"};
  }

  TStringArray GetItemTypes()
  {
    return {"TT_GunBarrel_Small","TT_MainReceiver_SemiSmall","TT_Trigger_Simple","TT_Hammer_Simple","TT_Grip_Wood"};
  }
};
class Craft_SRP_WeaponMediumBarrel_Kit_Contender extends Craft_SRP_WeaponGunCrafting_Base  
{
	override void Init()
	{
    super.Init();
		m_Name = "Medium Barreled Gun - L&S Contender";
		InsertIngredient(0,"SRP_WeaponMediumBarrel_Kit");
		InsertIngredient(1,"Pliers");
		AddResult("DUB_Contender");
	}

  TStringArray GetSlotTypes()
  {
    return {"SRP_GunBarrel","SRP_MainReceiver","SRP_Trigger","SRP_Hammer","SRP_GunGrip","SRP_GunButtStock"};
  }

  TStringArray GetItemTypes()
  {
    return {"TT_RifledBarrel_Medium","TT_MainReceiver_SemiMedium","TT_Trigger_Simple","TT_Hammer_Simple","TT_Grip_Wood","TT_Buttstock_Wood"};
  }
};
class Craft_SRP_WeaponLongBarrel_Kit_Model18871 extends Craft_SRP_WeaponGunCrafting_Base  
{
	override void Init()
	{
    super.Init();
		m_Name = "Long Barreled Gun - Model 1887";
		InsertIngredient(0,"SRP_WeaponLongBarrel_Kit");
		InsertIngredient(1,"Pliers");
		AddResult("DUB_Model1887");
	}

  TStringArray GetSlotTypes()
  {
    return {"SRP_GunBarrel","SRP_MainReceiver","SRP_Trigger","SRP_Hammer","SRP_GunGrip","SRP_GunButtStock"};
  }

  TStringArray GetItemTypes()
  {
    return {"TT_GunBarrel_Long","TT_MainReceiver_SemiLarge","TT_Trigger_Simple","TT_Hammer_Simple","TT_Grip_Wood","TT_Buttstock_Wood"};
  }
};
class Craft_SRP_WeaponLongBarrel_Kit_JunkerAK extends Craft_SRP_WeaponGunCrafting_Base  
{
	override void Init()
	{
    super.Init();
		m_Name = "Long Barreled Gun - Junker AK";
		InsertIngredient(0,"SRP_WeaponLongBarrel_Kit");
		InsertIngredient(1,"Pliers");
		AddResult("junkak");
	}

  TStringArray GetSlotTypes()
  {
    return {"SRP_GunBarrel","SRP_MainReceiver","SRP_Trigger","SRP_Hammer","SRP_GunGrip","SRP_GunButtStock"};
  }

  TStringArray GetItemTypes()
  {
    return {"TT_GunBarrel_Long","TT_MainReceiver_SemiLarge","TT_Trigger_Simple","TT_Hammer_Simple","TT_Grip_Wood","TT_Buttstock_Wood"};
  }
};
class Craft_SRP_WeaponMediumBarrel_Kit_OTS71 extends Craft_SRP_WeaponGunCrafting_Base  
{
	override void Init()
	{
    super.Init();
		m_Name = "Medium Barreled Gun - OTS 71";
		InsertIngredient(0,"SRP_WeaponMediumBarrel_Kit");
		InsertIngredient(1,"Pliers");
		AddResult("ots71");
	}

  TStringArray GetSlotTypes()
  {
    return {"SRP_GunBarrel","SRP_MainReceiver","SRP_Trigger","SRP_Hammer","SRP_GunGrip"};
  }

  TStringArray GetItemTypes()
  {
    return {"TT_RifledBarrel_Medium","TT_MainReceiver_AutoMedium","TT_Trigger_Simple","TT_Hammer_Simple","TT_Grip_Wood"};
  }
};
class Craft_SRP_WeaponMediumBarrel_Kit_Boomstick extends Craft_SRP_WeaponGunCrafting_Base  
{
	override void Init()
	{
    super.Init();
		m_Name = "Medium Barreled Gun - Boomstick";
		InsertIngredient(0,"SRP_WeaponMediumBarrel_Kit");
		InsertIngredient(1,"Pliers");
		AddResult("boomstick");
	}

  TStringArray GetSlotTypes()
  {
    return {"SRP_GunBarrel","SRP_MainReceiver","SRP_Trigger","SRP_GunGrip"};
  }

  TStringArray GetItemTypes()
  {
    return {"TT_RifledBarrel_Medium","TT_MainReceiver_SemiMedium","TT_Trigger_Simple","TT_Grip_Wood"};
  }
};