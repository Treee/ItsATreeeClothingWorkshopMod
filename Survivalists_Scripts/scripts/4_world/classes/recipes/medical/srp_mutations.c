class Craft_SRP_MutantFinalMutagenOptions_Base extends RecipeBase
{
	override void Init()
	{
		m_Name = "Finalize Mutation";
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
		// InsertIngredient(0,"SRP_Mutation_Kit");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = true;// 
		
		//ingredient 2 (tool)
		InsertIngredient(1,"DUB_Mutant_Accel_4");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_FullSyringe_Kuru");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
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
		Debug.Log("Craft_SRP_MutantFinalMutagenOptions_Base Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_MutantFinalMutagenOptions_LongFall extends Craft_SRP_MutantFinalMutagenOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Long Fall";
    InsertIngredient(0,"SRP_Mutation_LongFall_Kit");//you can insert multiple ingredients this way
    AddResult("DUB_Mutation1");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidFat", 100);
      bool slot2 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidPureAdrenaline", 100);
      return (slot1 && slot2);
    }
		return true;
	}
};
class Craft_SRP_MutantFinalMutagenOptions_Brawler extends Craft_SRP_MutantFinalMutagenOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Brawler";
    InsertIngredient(0,"SRP_Mutation_Brawler_Kit");//you can insert multiple ingredients this way
    AddResult("DUB_Mutation2");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidPureAdrenaline", 100);
      bool slot2 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidIron", 100);
      return (slot1 && slot2);
    }
		return true;
	}
};
class Craft_SRP_MutantFinalMutagenOptions_Insulation extends Craft_SRP_MutantFinalMutagenOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Insulation";
    InsertIngredient(0,"SRP_Mutation_BodyHeat_Kit");//you can insert multiple ingredients this way
    AddResult("DUB_Mutation3");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidFat", 100);
      bool slot2 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidFat", 100);
      return (slot1 && slot2);
    }
		return true;
	}
};
class Craft_SRP_MutantFinalMutagenOptions_Chameleon extends Craft_SRP_MutantFinalMutagenOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Chameleon";
    InsertIngredient(0,"SRP_Mutation_Chameleon_Kit");//you can insert multiple ingredients this way
    AddResult("DUB_Mutation4");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidMint", 100);
      bool slot2 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidFat", 100);
      return (slot1 && slot2);
    }
		return true;
	}
};
class Craft_SRP_MutantFinalMutagenOptions_Nocturnal extends Craft_SRP_MutantFinalMutagenOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Nocturnal";
    InsertIngredient(0,"SRP_Mutation_Nocturnal_Kit");//you can insert multiple ingredients this way
    AddResult("DUB_Mutation5");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidBatteryAcid", 100);
      bool slot2 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidBatteryAcid", 100);
      return (slot1 && slot2);
    }
		return true;
	}
};
class Craft_SRP_MutantFinalMutagenOptions_Aquatic extends Craft_SRP_MutantFinalMutagenOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Aquatic";
    InsertIngredient(0,"SRP_Mutation_Aquatic_Kit");//you can insert multiple ingredients this way
    AddResult("DUB_Mutation6");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidClamIchor", 100);
      bool slot2 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidFishIchor", 100);
      return (slot1 && slot2);
    }
		return true;
	}
};
class Craft_SRP_MutantFinalMutagenOptions_Armor extends Craft_SRP_MutantFinalMutagenOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Armor";
    InsertIngredient(0,"SRP_Mutation_Armor_Kit");//you can insert multiple ingredients this way
    AddResult("DUB_Mutation7");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidIron", 100);
      bool slot2 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidIron", 100);
      return (slot1 && slot2);
    }
		return true;
	}
};
class Craft_SRP_MutantFinalMutagenOptions_IronStomach extends Craft_SRP_MutantFinalMutagenOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Iron Stomach";
    InsertIngredient(0,"SRP_Mutation_IronStomach_Kit");//you can insert multiple ingredients this way
    AddResult("DUB_Mutation8");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidBatteryAcid", 100);
      bool slot2 = kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidAmanita", 100);
      return (slot1 && slot2);
    }
		return true;
	}
};








class Craft_SRP_MutantEvolvedEggOptions_BaseDQ extends RecipeBase
{
	override void Init()
	{
		m_Name = "Evolve Egg";
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
		InsertIngredient(0,"DUB_UnmutatedEgg");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = true;// 
		
		//ingredient 2 (tool)		
		InsertIngredient(1,"Bear_ColorBase");//you can insert multiple ingredients this way		
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_FullSyringe_Kuru");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		return player.IsQueenAlpha();
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_MutantEvolvedEggOptions_BaseDQ Recipe Do method called: " + m_Name,"recipes");
	}
};
class Craft_SRP_MutantFinalMutagenOptions_LongFallDQ extends Craft_SRP_MutantEvolvedEggOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Long Fall";
    AddResult("DUB_Mutation1");//add results here
	}
};
class Craft_SRP_MutantFinalMutagenOptions_BrawlerDQ extends Craft_SRP_MutantEvolvedEggOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Brawler";
    AddResult("DUB_Mutation2");//add results here
	}
};
class Craft_SRP_MutantFinalMutagenOptions_InsulationDQ extends Craft_SRP_MutantEvolvedEggOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Insulation";
    AddResult("DUB_Mutation3");//add results here
	}
};
class Craft_SRP_MutantFinalMutagenOptions_ChameleonDQ extends Craft_SRP_MutantEvolvedEggOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Chameleon";
    AddResult("DUB_Mutation4");//add results here
	}
};
class Craft_SRP_MutantFinalMutagenOptions_NocturnalDQ extends Craft_SRP_MutantEvolvedEggOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Nocturnal";
    AddResult("DUB_Mutation5");//add results here
	}
};
class Craft_SRP_MutantFinalMutagenOptions_AquaticDQ extends Craft_SRP_MutantEvolvedEggOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Aquatic";
    AddResult("DUB_Mutation6");//add results here
	}
};
class Craft_SRP_MutantFinalMutagenOptions_ArmorDQ extends Craft_SRP_MutantEvolvedEggOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Armor";
    AddResult("DUB_Mutation7");//add results here
	}
};
class Craft_SRP_MutantFinalMutagenOptions_IronStomachDQ extends Craft_SRP_MutantEvolvedEggOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Mutate Egg - Iron Stomach";
    AddResult("DUB_Mutation8");//add results here
	}
};

class Craft_SRP_SerumOptions_BaseDQ extends RecipeBase
{
	override void Init()
	{
		m_Name = "Extract Serum";
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
		InsertIngredient(0,"SRP_LabTube_MutantLiquid");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = true;// 
		
		//ingredient 2 (tool)		
		InsertIngredient(1,"Bear_ColorBase");//you can insert multiple ingredients this way		
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_FullSyringe_Kuru");//add results here

		m_ResultSetFullQuantity[0] = -1;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		return player.IsQueenAlpha();
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_SerumOptions_BaseDQ Recipe Do method called: " + m_Name,"recipes");
	}
};
class Craft_SRP_SerumOptions_Serum1DQ extends Craft_SRP_SerumOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Craft Injector - Mutation Serum";
    AddResult("DUB_Mutantsyringe_Pure");//add results here
	}
};
class Craft_SRP_SerumOptions_Serum2DQ extends Craft_SRP_SerumOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Craft Injector - Moderate Acceleration";
    AddResult("DUB_Mutant_Accel_2");//add results here
	}
};
class Craft_SRP_SerumOptions_Serum3DQ extends Craft_SRP_SerumOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Craft Injector - Extreme Acceleration";
    AddResult("DUB_Mutant_Accel_4");//add results here
	}
};
class Craft_SRP_SerumOptions_Serum4DQ extends Craft_SRP_SerumOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Craft Injector - Mutation Suppressor";
    AddResult("DUB_MutantSuppressor");//add results here
	}
};
class Craft_SRP_SerumOptions_Serum5DQ extends Craft_SRP_SerumOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Craft Injector - Crude Serum";
    AddResult("DUB_Mutant_Crude");//add results here
	}
};
class Craft_SRP_SerumOptions_Serum6DQ extends Craft_SRP_SerumOptions_BaseDQ
{
  override void Init()
	{
    super.Init();
		m_Name = "Craft Injector - Crude Serum Cure";
    AddResult("DUB_Mutant_Crude_Cure");//add results here
	}
};