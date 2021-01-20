// class SkullAndCrossbones_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Black Skull and Crossbones Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_Bandit_Black");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Red_Cross_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Red Cross Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_FieldMedic");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Red_Medical_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Red Medical Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_FieldMedic1");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Medical_Corps_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Medical Corps Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_FieldMedic2");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Blue_Medical_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Blue Medical Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_FieldMedic3");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Runic_Medical_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Runic Medical Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_FieldMedic4");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Black_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Black Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_Black");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class DarkBlue_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft DarkBlue Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_DarkBlue");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class DarkPurple_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft DarkPurple Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_DarkPurple");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Green_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Green Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_Green");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Grey_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Grey Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_Grey");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Light_Blue_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Light Blue Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_LightBlue");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Light_Grey_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Light Grey Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_LightGray");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Lime_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Lime Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_Lime");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Orange_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Orange Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_Orange");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Pink_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Pink Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_Pink");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Purple_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Purple Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_Purple");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Red_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Red Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_Red");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };

// class Teal_Double_Armband extends RecipeBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
// {
// 	override void Init()
// 	{
// 		m_Name = "Craft Teal Double Armband";	// action name in game
// 		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
// 		m_AnimationLength = 1;		// animation length in relative time units
// 		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
// 		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
// 		//ingredient 1  
// 		InsertIngredient(0,"MassArmbandDouble_White");	// primary ingredient
		
// 		m_IngredientAddHealth[0] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[0] = -1;// -1 = do nothing
// 		m_IngredientDestroy[0] = 1;	// -1 = do nothing
// 		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2	
// 		InsertIngredient(1,"SewingKit"); //  secondary ingredient
		
// 		m_IngredientAddHealth[1] = -1;	// -1 = do nothing
// 		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
// 		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
// 		m_IngredientDestroy[1] = 1;		// destroy secondary ingredient
// 		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//result
// 		AddResult("GenericCraftedArmband_Teal");	// recipe result
		
// 		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
// 		m_ResultSetQuantity[0] = 1;			// result quantity
// 		m_ResultSetHealth[0] = -1;			// -1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
// 		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
// 		m_ResultToInventory[0] = -1;		// -1 = do nothing
// 		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
// 		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
// 	}

//   override bool CanDo(ItemBase ingredients[], PlayerBase player)
// 	{
// 		return true;
// 	}

// 	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
// 	{
		
// 	}
// };
