class Craft_SRP_MutantLiquid_Base extends RecipeBase
{
	override void Init()
	{
		m_Name = "Reduce to Ichor";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
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
		//ingredient 1 (reagent)
		// InsertIngredient(0,"SRP_InjectionVial_Kuru");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = true;// 
		
		//ingredient 2 (tool)
		// InsertIngredient(1,"DUB_Microscope");//you can insert multiple ingredients this way
		// InsertIngredient(1,"SRP_ComputerTerminal");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -1;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_FullSyringe_Kuru");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
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
		Debug.Log("Craft_SRP_MutantLiquid_Base Recipe Do method called: " + m_Name,"recipes");
	}
};

//=============================================================================== BASE ICHORS
class Craft_SRP_CraftVirusFromIchor_Pelts extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"DUB_Biowolfpelt");//you can insert multiple ingredients this way
		
    InsertIngredient(1,"DUB_MonsterclawV2");//you can insert multiple ingredients this way
    InsertIngredient(1,"DUB_BoneScythe");//you can insert multiple ingredients this way
		m_IngredientAddHealth[1] = -2;// 0 = do nothing
		AddResult("SRP_LabTube_MutantLiquid");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    m_ResultSetQuantity[0] = Math.RandomIntInclusive(1,3);
    return true;
	}
};
class Craft_SRP_CraftVirusFromIchor_Flesh extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();

		m_MinQuantityIngredient[0] = 35;//-1 = disable check
		InsertIngredient(0,"DUB_FleshStrip");//you can insert multiple ingredients this way
		
    InsertIngredient(1,"DUB_MonsterclawV2");//you can insert multiple ingredients this way
    InsertIngredient(1,"DUB_BoneScythe");//you can insert multiple ingredients this way
		m_IngredientAddHealth[1] = -2;// 0 = do nothing
		AddResult("SRP_LabTube_MutantLiquid");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    m_ResultSetQuantity[0] = Math.RandomIntInclusive(1,3);
    return true;
	}
};
class Craft_SRP_CraftVirusFromIchor_Meats extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();

		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		InsertIngredient(0,"DUB_Mutantmeat");//you can insert multiple ingredients this way
		
    InsertIngredient(1,"DUB_MonsterclawV2");//you can insert multiple ingredients this way
    InsertIngredient(1,"DUB_BoneScythe");//you can insert multiple ingredients this way
		m_IngredientAddHealth[1] = -2;// 0 = do nothing
		AddResult("SRP_LabTube_MutantLiquid");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    m_ResultSetQuantity[0] = Math.RandomIntInclusive(1,3);
    return true;
	}
};

//=============================================================================== MIXED ICHORS
class SRP_Craft_SRP_LabTube_MutantLiquidBlood extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();
    m_Name = "Mix Ichor with Blood";
    m_MinQuantityIngredient[0] = 25;//-1 = disable check
    m_IngredientAddQuantity[0] = -25;// 0 = do nothing
		InsertIngredient(0,"SRP_LabTube_MutantLiquid");//you can insert multiple ingredients this way
		
    m_MinQuantityIngredient[1] = 350;//-1 = disable check
		m_IngredientDestroy[1] = true;// false = do nothing
    InsertIngredient(1,"BloodBagFull");//you can insert multiple ingredients this way

		m_ResultSetQuantity[0] = 25;//-1 = do nothing
		AddResult("SRP_LabTube_MutantLiquidBlood");//add results here
	}
};
class SRP_Craft_SRP_LabTube_MutantLiquidAntibiotic extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();
    m_Name = "Treat Ichor Mix";
    m_MinQuantityIngredient[0] = 25;//-1 = disable check
    m_IngredientAddQuantity[0] = -25;// 0 = do nothing
		InsertIngredient(0,"SRP_LabTube_MutantLiquidBlood");//you can insert multiple ingredients this way
		
    m_MinQuantityIngredient[1] = 6;//-1 = disable check
    m_IngredientAddQuantity[1] = -6;// 0 = do nothing
    InsertIngredient(1,"TetracyclineAntibiotics");//you can insert multiple ingredients this way

		m_ResultSetQuantity[0] = 25;//-1 = do nothing
		AddResult("SRP_LabTube_MutantLiquidAntibiotic");//add results here
	}
};
class SRP_Craft_SRP_LabTube_MutantLiquidDisinfected extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();
    m_Name = "Disinfect Ichor Mix";
    m_MinQuantityIngredient[0] = 25;//-1 = disable check
    m_IngredientAddQuantity[0] = -25;// 0 = do nothing
		InsertIngredient(0,"SRP_LabTube_MutantLiquidBlood");//you can insert multiple ingredients this way
		
    m_MinQuantityIngredient[1] = 200;//-1 = disable check
    m_IngredientAddQuantity[1] = -200;// 0 = do nothing
    InsertIngredient(1,"DisinfectantSpray");//you can insert multiple ingredients this way
    InsertIngredient(1,"DisinfectantAlcohol");//you can insert multiple ingredients this way
    InsertIngredient(1,"IodineTincture");//you can insert multiple ingredients this way

		m_ResultSetQuantity[0] = 25;//-1 = do nothing
		AddResult("SRP_LabTube_MutantLiquidDisinfected");//add results here
	}
};
class SRP_Craft_SRP_LabTube_MutantLiquidSterilized extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();
    m_Name = "Combine Treated And Disinfected Ichor Mix";
    m_MinQuantityIngredient[0] = 25;//-1 = disable check
    m_IngredientAddQuantity[0] = -25;// 0 = do nothing
		InsertIngredient(0,"SRP_LabTube_MutantLiquidDisinfected");//you can insert multiple ingredients this way
		
    m_MinQuantityIngredient[1] = 25;//-1 = disable check
    m_IngredientAddQuantity[1] = -25;// 0 = do nothing
    InsertIngredient(1,"SRP_LabTube_MutantLiquidAntibiotic");//you can insert multiple ingredients this way

		m_ResultSetQuantity[0] = 25;//-1 = do nothing
		AddResult("SRP_LabTube_MutantLiquidSterilized");//add results here
	}
};
class SRP_Craft_SRP_LabTube_MutantLiquidSterilizedIrradiatedNeutral extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();
    m_Name = "Temper Irradiated Ichor";
    m_MinQuantityIngredient[0] = 25;//-1 = disable check
    m_IngredientAddQuantity[0] = -25;// 0 = do nothing
		InsertIngredient(0,"SRP_LabTube_MutantLiquidSterilizedIrradiated");//you can insert multiple ingredients this way
		
    m_MinQuantityIngredient[1] = 6;//-1 = disable check
    m_IngredientAddQuantity[1] = -6;// 0 = do nothing
    InsertIngredient(1,"CharcoalTablets");//you can insert multiple ingredients this way

		m_ResultSetQuantity[0] = 25;//-1 = do nothing
		AddResult("SRP_LabTube_MutantLiquidSterilizedIrradiatedNeutral");//add results here
	}
};

//=============================================================================== MUTATION ICHORS
class Craft_SRP_CraftVirusFromIchor_Clam extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_ClamFilletMeat");//you can insert multiple ingredients this way
		
    InsertIngredient(1,"DUB_MonsterclawV2");//you can insert multiple ingredients this way
    InsertIngredient(1,"DUB_BoneScythe");//you can insert multiple ingredients this way
		m_IngredientAddHealth[1] = -2;// 0 = do nothing
		AddResult("SRP_LabTube_MutantLiquidClamIchor");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    m_ResultSetQuantity[0] = Math.RandomIntInclusive(1,3);
    return true;
	}
};
class Craft_SRP_CraftVirusFromIchor_Fish extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_FreshWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_SaltWaterFishFilletMeat_Base");//you can insert multiple ingredients this way
		InsertIngredient(0,"CarpFilletMeat");//you can insert multiple ingredients this way
		InsertIngredient(0,"MackerelFilletMeat");//you can insert multiple ingredients this way
		
    InsertIngredient(1,"DUB_MonsterclawV2");//you can insert multiple ingredients this way
    InsertIngredient(1,"DUB_BoneScythe");//you can insert multiple ingredients this way
		m_IngredientAddHealth[1] = -2;// 0 = do nothing
		AddResult("SRP_LabTube_MutantLiquidFishIchor");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    m_ResultSetQuantity[0] = Math.RandomIntInclusive(1,3);
    return true;
	}
};
class Craft_SRP_CraftVirusFromIchor_BatteryAcid extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"TruckBattery");//you can insert multiple ingredients this way
		InsertIngredient(0,"CarBattery");//you can insert multiple ingredients this way
		
    InsertIngredient(1,"DUB_MonsterclawV2");//you can insert multiple ingredients this way
    InsertIngredient(1,"DUB_BoneScythe");//you can insert multiple ingredients this way
		m_IngredientAddHealth[1] = -2;// 0 = do nothing
		AddResult("SRP_LabTube_MutantLiquidBatteryAcid");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    m_ResultSetQuantity[0] = Math.RandomIntInclusive(1,3);
    return true;
	}
};
class Craft_SRP_CraftVirusFromIchor_Iron extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_Mining_RawOre_Iron");//you can insert multiple ingredients this way
		
    InsertIngredient(1,"DUB_MonsterclawV2");//you can insert multiple ingredients this way
    InsertIngredient(1,"DUB_BoneScythe");//you can insert multiple ingredients this way
		m_IngredientAddHealth[1] = -2;// 0 = do nothing
		AddResult("SRP_LabTube_MutantLiquidIron");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    m_ResultSetQuantity[0] = Math.RandomIntInclusive(1,3);
    return true;
	}
};
class Craft_SRP_CraftVirusFromIchor_Adrenaline extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"Epinephrine");//you can insert multiple ingredients this way
		
    InsertIngredient(1,"DUB_MonsterclawV2");//you can insert multiple ingredients this way
    InsertIngredient(1,"DUB_BoneScythe");//you can insert multiple ingredients this way
		m_IngredientAddHealth[1] = -2;// 0 = do nothing
		AddResult("SRP_LabTube_MutantLiquidPureAdrenaline");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    m_ResultSetQuantity[0] = Math.RandomIntInclusive(1,3);
    return true;
	}
};
class Craft_SRP_CraftVirusFromIchor_Fat extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"Lard");//you can insert multiple ingredients this way
		
    InsertIngredient(1,"DUB_MonsterclawV2");//you can insert multiple ingredients this way
    InsertIngredient(1,"DUB_BoneScythe");//you can insert multiple ingredients this way
		m_IngredientAddHealth[1] = -2;// 0 = do nothing
		AddResult("SRP_LabTube_MutantLiquidFat");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    m_ResultSetQuantity[0] = Math.RandomIntInclusive(1,3);
    return true;
	}
};
class Craft_SRP_CraftVirusFromIchor_Mint extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"Mint");//you can insert multiple ingredients this way
		
    InsertIngredient(1,"DUB_MonsterclawV2");//you can insert multiple ingredients this way
    InsertIngredient(1,"DUB_BoneScythe");//you can insert multiple ingredients this way
		m_IngredientAddHealth[1] = -2;// 0 = do nothing
		AddResult("SRP_LabTube_MutantLiquidMint");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    m_ResultSetQuantity[0] = Math.RandomIntInclusive(1,3);
    return true;
	}
};
class Craft_SRP_CraftVirusFromIchor_Amanita extends Craft_SRP_MutantLiquid_Base
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"GreenAmanita");//you can insert multiple ingredients this way
		
    InsertIngredient(1,"DUB_MonsterclawV2");//you can insert multiple ingredients this way
    InsertIngredient(1,"DUB_BoneScythe");//you can insert multiple ingredients this way
		m_IngredientAddHealth[1] = -2;// 0 = do nothing
		AddResult("SRP_LabTube_MutantLiquidAmanita");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    m_ResultSetQuantity[0] = Math.RandomIntInclusive(1,3);
    return true;
	}
};