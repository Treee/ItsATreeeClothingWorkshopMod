// DUB_UnmutatedEgg
class Craft_SRP_MutantEvolvedEggOptions_Base extends RecipeBase
{
	override void Init()
	{
		m_Name = "Evolve Egg";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
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
		InsertIngredient(0,"SRP_Mutation_Kit");//you can insert multiple ingredients this way

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
		Debug.Log("Craft_SRP_MutantEvolvedEggOptions_Base Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_MutantEvolvedEggKit extends RecipeBase
{
	override void Init()
	{
		m_Name = "Mutate DNA";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
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
		InsertIngredient(1,"DUB_Mutant_Accel_4");//you can insert multiple ingredients this way		
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_Mutation_Kit");//add results here

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
		Debug.Log("Craft_SRP_MutantEvolvedEggKit Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_MutantEvolvedEggOptions_LongFall extends Craft_SRP_MutantEvolvedEggOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Evolve Egg - Long Fall";
    AddResult("SRP_Mutation_LongFall_Kit");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot2 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 100));
      bool slot3 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidAntibiotic", 50));
      bool slot4 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot5 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot6 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidSterilized", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidDisinfected", 50));
      return (slot1 && slot2 && slot3 && slot4 && slot5 && slot6);
    }
		return true;
	}
};
class Craft_SRP_MutantEvolvedEggOptions_Brawler extends Craft_SRP_MutantEvolvedEggOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Evolve Egg - Brawler";
    AddResult("SRP_Mutation_Brawler_Kit");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot2 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot3 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot4 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidSterilized", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidDisinfected", 50));
      bool slot5 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidAntibiotic", 50));
      bool slot6 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 100));
      return (slot1 && slot2 && slot3 && slot4 && slot5 && slot6);
    }
		return true;
	}
};
class Craft_SRP_MutantEvolvedEggOptions_BodyHeat extends Craft_SRP_MutantEvolvedEggOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Evolve Egg - Insulation";
    AddResult("SRP_Mutation_BodyHeat_Kit");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidSterilized", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidDisinfected", 50));
      bool slot2 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot3 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot4 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot5 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 100));
      bool slot6 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidAntibiotic", 50));
      return (slot1 && slot2 && slot3 && slot4 && slot5 && slot6);
    }
		return true;
	}
};
class Craft_SRP_MutantEvolvedEggOptions_Chameleon extends Craft_SRP_MutantEvolvedEggOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Evolve Egg - Chameleon";
    AddResult("SRP_Mutation_Chameleon_Kit");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot2 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot3 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidSterilized", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidDisinfected", 50));
      bool slot4 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 100));
      bool slot5 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidAntibiotic", 50));
      bool slot6 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidSterilized", 50));
      return (slot1 && slot2 && slot3 && slot4 && slot5 && slot6);
    }
		return true;
	}
};
class Craft_SRP_MutantEvolvedEggOptions_Nocturnal extends Craft_SRP_MutantEvolvedEggOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Evolve Egg - Nocturnal";
    AddResult("SRP_Mutation_Nocturnal_Kit");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot2 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidSterilized", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidDisinfected", 50));
      bool slot3 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 100));
      bool slot4 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot5 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot6 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidAntibiotic", 50));
      return (slot1 && slot2 && slot3 && slot4 && slot5 && slot6);
    }
		return true;
	}
};
class Craft_SRP_MutantEvolvedEggOptions_Aquatic extends Craft_SRP_MutantEvolvedEggOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Evolve Egg - Aquatic";
    AddResult("SRP_Mutation_Aquatic_Kit");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot2 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidDisinfected", 50));
      bool slot3 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 100));
      bool slot4 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot5 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot6 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidAntibiotic", 50));
      return (slot1 && slot2 && slot3 && slot4 && slot5 && slot6);
    }
		return true;
	}
};
class Craft_SRP_MutantEvolvedEggOptions_Armor extends Craft_SRP_MutantEvolvedEggOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Evolve Egg - Armor";
    AddResult("SRP_Mutation_Armor_Kit");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 100) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot2 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidSterilized", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidDisinfected", 50));
      bool slot3 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidSterilized", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 100));
      bool slot4 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot5 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot6 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidAntibiotic", 50));
      return (slot1 && slot2 && slot3 && slot4 && slot5 && slot6);
    }
		return true;
	}
};
class Craft_SRP_MutantEvolvedEggOptions_IronStomach extends Craft_SRP_MutantEvolvedEggOptions_Base
{
  override void Init()
	{
    super.Init();
		m_Name = "Evolve Egg - Iron Stomach";
    AddResult("SRP_Mutation_IronStomach_Kit");//add results here
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_IntermediateCraftingKitBase kit = SRP_IntermediateCraftingKitBase.Cast(ingredients[0]);
    if (kit)
    {
      bool slot1 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 100) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube1", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot2 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidDisinfected", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidAntibiotic", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube2", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot3 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidBlood", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube3", "SRP_LabTube_MutantLiquidSterilized", 50));
      bool slot4 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidSterilized", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube4", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 100));
      bool slot5 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquid", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube5", "SRP_LabTube_MutantLiquidAntibiotic", 50));
      bool slot6 = (kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidSterilized", 50) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidSterilizedIrradiated", 80) || kit.HasAttachmentFilledWithItemAndQuantity("TestTube6", "SRP_LabTube_MutantLiquidDisinfected", 50));
      return (slot1 && slot2 && slot3 && slot4 && slot5 && slot6);
    }
		return true;
	}
};