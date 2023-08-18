//============================================================================================= VIRUS
class Craft_SRP_CraftVirusFromIchorBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Synthesize Virus";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		// InsertIngredient(0,"SRP_InjectionVial_Kuru");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = true;// 
		
		//ingredient 2
		InsertIngredient(1,"DUB_Microscope");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_ComputerTerminal");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_FullSyringe_Kuru");//add results here

		m_ResultSetFullQuantity[0] = true;//true = set full quantity, false = do nothing
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
		Debug.Log("Craft_SRP_CraftVirusFromIchorBase Recipe Do method called","recipes");
	}
};

class Craft_SRP_CraftVirusFromIchor_Kuru extends Craft_SRP_CraftVirusFromIchorBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_LabTube_Kuru");//you can insert multiple ingredients this way

		AddResult("SRP_InjectionVial_Kuru");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_CraftVirusFromIchor_Kuru Recipe Do method called","recipes");
	}
};

class Craft_SRP_CraftVirusFromIchor_Salmonella extends Craft_SRP_CraftVirusFromIchorBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_LabTube_Salmonella");//you can insert multiple ingredients this way

		AddResult("SRP_InjectionVial_Salmonella");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_CraftVirusFromIchor_Salmonella Recipe Do method called","recipes");
	}
};

class Craft_SRP_CraftVirusFromIchor_Influenza extends Craft_SRP_CraftVirusFromIchorBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_LabTube_Influenza");//you can insert multiple ingredients this way

		AddResult("SRP_InjectionVial_Influenza");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_CraftVirusFromIchor_Influenza Recipe Do method called","recipes");
	}
};

class Craft_SRP_CraftVirusFromIchor_Cholera extends Craft_SRP_CraftVirusFromIchorBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_LabTube_Cholera");//you can insert multiple ingredients this way

		AddResult("SRP_InjectionVial_Cholera");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_CraftVirusFromIchor_Cholera Recipe Do method called","recipes");
	}
};

class Craft_SRP_CraftVirusFromIchor_StomachVirus extends Craft_SRP_CraftVirusFromIchorBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_LabTube_StomachVirus");//you can insert multiple ingredients this way

		AddResult("SRP_InjectionVial_StomachVirus");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_CraftVirusFromIchor_StomachVirus Recipe Do method called","recipes");
	}
};

class Craft_SRP_CraftVirusFromIchor_Bacteria extends Craft_SRP_CraftVirusFromIchorBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_LabTube_Bacteria");//you can insert multiple ingredients this way

		AddResult("SRP_InjectionVial_BacterialInfection");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_CraftVirusFromIchor_Bacteria Recipe Do method called","recipes");
	}
};



//============================================================================================= CURES
class Craft_SRP_CraftVirusCureBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Synthesize Cure";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 100;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		// InsertIngredient(0,"SRP_InjectionVial_Kuru");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -100;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = true;// 
		
		//ingredient 2
		InsertIngredient(1,"SRP_ComputerTerminalSlim");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_ComputerTerminalWide");//you can insert multiple ingredients this way

		m_IngredientAddHealth[1] = -10;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_FullSyringe_Kuru");//add results here

		m_ResultSetFullQuantity[0] = true;//true = set full quantity, false = do nothing
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
		Debug.Log("Craft_SRP_CraftVirusCureBase Recipe Do method called","recipes");
	}
};

class Craft_SRP_CraftVirusCure_Kuru extends Craft_SRP_CraftVirusCureBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_Kuru");//you can insert multiple ingredients this way

		AddResult("SRP_InjectionVial_KuruCure");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_CraftVirusCure_Kuru Recipe Do method called","recipes");
	}
};
class Craft_SRP_CraftVirusCure_Salmonella extends Craft_SRP_CraftVirusCureBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_Salmonella");//you can insert multiple ingredients this way

		AddResult("SRP_InjectionVial_SalmonellaCure");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_CraftVirusCure_Salmonella Recipe Do method called","recipes");
	}
};
class Craft_SRP_CraftVirusCure_Influenza extends Craft_SRP_CraftVirusCureBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_Influenza");//you can insert multiple ingredients this way

		AddResult("SRP_InjectionVial_InfluenzaCure");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_CraftVirusCure_Influenza Recipe Do method called","recipes");
	}
};
class Craft_SRP_CraftVirusCure_Cholera extends Craft_SRP_CraftVirusCureBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_Cholera");//you can insert multiple ingredients this way

		AddResult("SRP_InjectionVial_CholeraCure");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_CraftVirusCure_Cholera Recipe Do method called","recipes");
	}
};
class Craft_SRP_CraftVirusCure_StomachVirus extends Craft_SRP_CraftVirusCureBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_StomachVirus");//you can insert multiple ingredients this way

		AddResult("SRP_InjectionVial_Ceftazidim");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_CraftVirusCure_StomachVirus Recipe Do method called","recipes");
	}
};
class Craft_SRP_CraftVirusCure_Bacteria extends Craft_SRP_CraftVirusCureBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_BacterialInfection");//you can insert multiple ingredients this way

		AddResult("SRP_InjectionVial_Ampicillin");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_CraftVirusCure_Bacteria Recipe Do method called","recipes");
	}
};


//============================================================================================= SYRINGES
class Craft_SRP_FillSyringeBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Fill Syringe";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 20;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		// InsertIngredient(0,"SRP_InjectionVial_Kuru");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -20;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = true;// 
		
		//ingredient 2
		InsertIngredient(1,"Syringe");//you can insert multiple ingredients this way

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_FullSyringe_Kuru");//add results here

		m_ResultSetFullQuantity[0] = true;//true = set full quantity, false = do nothing
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
		Debug.Log("Craft_SRP_FillSyringeBase Recipe Do method called","recipes");
	}
};

class Craft_SRP_FullSyringe_Kuru extends Craft_SRP_FillSyringeBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_Kuru");//you can insert multiple ingredients this way

		AddResult("SRP_FullSyringe_Kuru");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_FullSyringe_Kuru Recipe Do method called","recipes");
	}
};
class Craft_SRP_FullSyringe_KuruCure extends Craft_SRP_FillSyringeBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_KuruCure");//you can insert multiple ingredients this way

		AddResult("SRP_FullSyringe_KuruCure");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_FullSyringe_KuruCure Recipe Do method called","recipes");
	}
};

class Craft_SRP_FullSyringe_Salmonella extends Craft_SRP_FillSyringeBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_Salmonella");//you can insert multiple ingredients this way

		AddResult("SRP_FullSyringe_Salmonella");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_FullSyringe_Salmonella Recipe Do method called","recipes");
	}
};
class Craft_SRP_FullSyringe_SalmonellaCure extends Craft_SRP_FillSyringeBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_SalmonellaCure");//you can insert multiple ingredients this way

		AddResult("SRP_FullSyringe_SalmonellaCure");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_FullSyringe_SalmonellaCure Recipe Do method called","recipes");
	}
};

class Craft_SRP_FullSyringe_Influenza extends Craft_SRP_FillSyringeBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_Influenza");//you can insert multiple ingredients this way

		AddResult("SRP_FullSyringe_Influenza");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_FullSyringe_Influenza Recipe Do method called","recipes");
	}
};
class Craft_SRP_FullSyringe_InfluenzaCure extends Craft_SRP_FillSyringeBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_InfluenzaCure");//you can insert multiple ingredients this way

		AddResult("SRP_FullSyringe_InfluenzaCure");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_FullSyringe_InfluenzaCure Recipe Do method called","recipes");
	}
};

class Craft_SRP_FullSyringe_Cholera extends Craft_SRP_FillSyringeBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_Cholera");//you can insert multiple ingredients this way

		AddResult("SRP_FullSyringe_Cholera");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_FullSyringe_Cholera Recipe Do method called","recipes");
	}
};
class Craft_SRP_FullSyringe_CholeraCure extends Craft_SRP_FillSyringeBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_CholeraCure");//you can insert multiple ingredients this way

		AddResult("SRP_FullSyringe_CholeraCure");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_FullSyringe_CholeraCure Recipe Do method called","recipes");
	}
};

class Craft_SRP_FullSyringe_StomachVirus extends Craft_SRP_FillSyringeBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_StomachVirus");//you can insert multiple ingredients this way

		AddResult("SRP_FullSyringe_Ceftazidim");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_FullSyringe_StomachVirus Recipe Do method called","recipes");
	}
};
class Craft_SRP_FullSyringe_StomachVirusCure extends Craft_SRP_FillSyringeBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_Ceftazidim");//you can insert multiple ingredients this way

		AddResult("SRP_FullSyringe_CeftazidimCure");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_FullSyringe_StomachVirusCure Recipe Do method called","recipes");
	}
};
// bacterial infection... bad naming
class Craft_SRP_FullSyringe_Ampicillin extends Craft_SRP_FillSyringeBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_BacterialInfection");//you can insert multiple ingredients this way

		AddResult("SRP_FullSyringe_Ampicillin");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_FullSyringe_Ampicillin Recipe Do method called","recipes");
	}
};
class Craft_SRP_FullSyringe_AmpicillinCure extends Craft_SRP_FillSyringeBase
{
	override void Init()
	{
    super.Init();

		InsertIngredient(0,"SRP_InjectionVial_Ampicillin");//you can insert multiple ingredients this way

		AddResult("SRP_FullSyringe_AmpicillinCure");//add results here
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_FullSyringe_AmpicillinCure Recipe Do method called","recipes");
	}
};

//============================================================================================= SYRINGES
class Craft_SRP_TransferContentsToVialBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Fill Vial";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = 80;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		// InsertIngredient(0,"SRP_InjectionVial_Kuru");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 20;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = true;// 
		
		//ingredient 2
		// InsertIngredient(1,"SRP_FullSyringe_Kuru");//you can insert multiple ingredients this way

		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("Syringe");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
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
		Debug.Log("Craft_SRP_TransferContentsToVialBase Recipe Do method called","recipes");
	}
};

class Craft_SRP_TransferContentsToVial_Kuru extends Craft_SRP_TransferContentsToVialBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Vial";
		InsertIngredient(0,"SRP_InjectionVial_Kuru");
		InsertIngredient(1,"SRP_FullSyringe_Kuru");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TransferContentsToVial_Kuru Recipe Do method called","recipes");
	}
};
class Craft_SRP_TransferContentsToVial_KuruCure extends Craft_SRP_TransferContentsToVialBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Vial";
		InsertIngredient(0,"SRP_InjectionVial_KuruCure");
		InsertIngredient(1,"SRP_FullSyringe_KuruCure");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TransferContentsToVial_KuruCure Recipe Do method called","recipes");
	}
};
class Craft_SRP_TransferContentsToVial_Salmonella extends Craft_SRP_TransferContentsToVialBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Vial";
		InsertIngredient(0,"SRP_InjectionVial_Salmonella");
		InsertIngredient(1,"SRP_FullSyringe_Salmonella");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TransferContentsToVial_Salmonella Recipe Do method called","recipes");
	}
};
class Craft_SRP_TransferContentsToVial_SalmonellaCure extends Craft_SRP_TransferContentsToVialBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Vial";
		InsertIngredient(0,"SRP_InjectionVial_SalmonellaCure");
		InsertIngredient(1,"SRP_FullSyringe_SalmonellaCure");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TransferContentsToVial_SamonellaCure Recipe Do method called","recipes");
	}
};
class Craft_SRP_TransferContentsToVial_Influenza extends Craft_SRP_TransferContentsToVialBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Vial";
		InsertIngredient(0,"SRP_InjectionVial_Influenza");
		InsertIngredient(1,"SRP_FullSyringe_Influenza");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TransferContentsToVial_Influenza Recipe Do method called","recipes");
	}
};
class Craft_SRP_TransferContentsToVial_InfluenzaCure extends Craft_SRP_TransferContentsToVialBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Vial";
		InsertIngredient(0,"SRP_InjectionVial_InfluenzaCure");
		InsertIngredient(1,"SRP_FullSyringe_InfluenzaCure");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TransferContentsToVial_InfluenzaCure Recipe Do method called","recipes");
	}
};
class Craft_SRP_TransferContentsToVial_Cholera extends Craft_SRP_TransferContentsToVialBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Vial";
		InsertIngredient(0,"SRP_InjectionVial_Cholera");
		InsertIngredient(1,"SRP_FullSyringe_Cholera");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TransferContentsToVial_Cholera Recipe Do method called","recipes");
	}
};
class Craft_SRP_TransferContentsToVial_CholeraCure extends Craft_SRP_TransferContentsToVialBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Vial";
		InsertIngredient(0,"SRP_InjectionVial_CholeraCure");
		InsertIngredient(1,"SRP_FullSyringe_CholeraCure");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TransferContentsToVial_CholeraCure Recipe Do method called","recipes");
	}
};
class Craft_SRP_TransferContentsToVial_StomachVirus extends Craft_SRP_TransferContentsToVialBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Vial";
		InsertIngredient(0,"SRP_InjectionVial_StomachVirus");
		InsertIngredient(1,"SRP_FullSyringe_Ceftazidim");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TransferContentsToVial_StomachVirus Recipe Do method called","recipes");
	}
};
class Craft_SRP_TransferContentsToVial_StomachVirusCure extends Craft_SRP_TransferContentsToVialBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Vial";
		InsertIngredient(0,"SRP_InjectionVial_Ceftazidim");
		InsertIngredient(1,"SRP_FullSyringe_CeftazidimCure");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TransferContentsToVial_StomachVirusCure Recipe Do method called","recipes");
	}
};
class Craft_SRP_TransferContentsToVial_BacterialInfection extends Craft_SRP_TransferContentsToVialBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Vial";
		InsertIngredient(0,"SRP_InjectionVial_BacterialInfection");
		InsertIngredient(1,"SRP_FullSyringe_Ampicillin");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TransferContentsToVial_BacterialInfection Recipe Do method called","recipes");
	}
};
class Craft_SRP_TransferContentsToVial_BacterialInfectionCure extends Craft_SRP_TransferContentsToVialBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Fill Vial";
		InsertIngredient(0,"SRP_InjectionVial_Ampicillin");
		InsertIngredient(1,"SRP_FullSyringe_AmpicillinCure");
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_TransferContentsToVial_BacterialInfectionCure Recipe Do method called","recipes");
	}
};
