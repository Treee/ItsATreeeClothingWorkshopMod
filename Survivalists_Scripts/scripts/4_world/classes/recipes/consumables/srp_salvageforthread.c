class Craft_SRP_SewingThreadBase extends RecipeBase
{
  int m_MinQuantity;
  int m_MaxQuantity;
	override void Init()
	{
		m_Name = "Salvage for Thread";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		// InsertIngredient(0,"LeatherSewingKit");	// primary ingredient
		// InsertIngredient(0,"SewingKit");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		// InsertIngredient(1,"LeatherSewingKit");	// primary ingredient
		// InsertIngredient(1,"SewingKit");	// primary ingredient
		
		m_IngredientAddHealth[1] = 0;	// 0 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		// AddResult("SRP_Armband_Base");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1; 			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Craft_SRP_SewingThreadBase Recipe Do method called: " + m_Name,"recipes");
    string randomThread = GetSewingThreadTypes().GetRandomElement();
    ItemBase newThread = ItemBase.Cast(GetGame().CreateObjectEx(randomThread, player.GetPosition(), false));
    /**
  	\brief Returns global health level specified in object's config class parameter healthLevels
	     (range is usually 0..4, 0 = pristine, 1 = worn, 2 = damaged, 3 = badly damaged, 4 = ruined but can be changed).
      @param zoneName if empty string, returns state of global health level
    */
    int damagelevel = 1;
    if (ingredients[0])
    {
      damagelevel = ingredients[0].GetHealthLevel() + 1;
    }
    int quantity = Math.RandomIntInclusive(m_MinQuantity, m_MaxQuantity) / damagelevel;
    newThread.SetQuantity(quantity);  
    results.Insert(newThread);
    // Print("Random Thread: " + randomThread + " Quantity: " + quantity + " new item: " + newThread);
	}

  TStringArray GetSewingThreadTypes()
  {
    return {
      "SRP_SewingThread",
      "SRP_SewingThread_Black",
      "SRP_SewingThread_Green",
      "SRP_SewingThread_LightBlue",
      "SRP_SewingThread_Red",
      "SRP_SewingThread_Blue",
      "SRP_SewingThread_Grey",
      "SRP_SewingThread_Orange",
      "SRP_SewingThread_Pink",
      "SRP_SewingThread_Purple",
      "SRP_SewingThread_Yellow",
    };
  }
};

//======================== kit salvage into thread
class Craft_SRP_SalvageSewingThread extends Craft_SRP_SewingThreadBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
{
	override void Init()
	{
    super.Init();
    m_MinQuantity = 5;
    m_MaxQuantity = 10;
		m_Name = "Salvage Sewing Kit - Thread";	// action name in game
		//conditions
		m_MinQuantityIngredient[0] = 20;	//quantity 1 required for primary ingredient
		m_MinQuantityIngredient[1] = 20;	//quantity 1 required for secondary ingredient
		
		//ingredient 1  
		InsertIngredient(0,"LeatherSewingKit");	// primary ingredient
		InsertIngredient(0,"SewingKit");	// primary ingredient
		
		m_IngredientAddQuantity[0] = -20;// 0 = do nothing
		
		//ingredient 2	
		InsertIngredient(1,"LeatherSewingKit");	// primary ingredient
		InsertIngredient(1,"SewingKit");	// primary ingredient
		
		m_IngredientAddQuantity[1] = -20;// 0 = do nothing
	}
};

class Craft_SRP_SalvageSewingThreadWithTool extends Craft_SRP_SewingThreadBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
{
	override void Init()
	{
    super.Init();
    m_MinQuantity = 15;
    m_MaxQuantity = 35;

		m_Name = "Break Down Sewing Kit - Thread";	// action name in game
		//conditions
		m_MinQuantityIngredient[0] = 10;	//quantity 1 required for primary ingredient
		
		//ingredient 1  
		InsertIngredient(0,"LeatherSewingKit");	// primary ingredient
		InsertIngredient(0,"SewingKit");	// primary ingredient
		
		m_IngredientAddQuantity[0] = -10;// 0 = do nothing
		
		//ingredient 2	
		InsertIngredient(1,"Pliers");	// primary ingredient		
		
		m_IngredientAddHealth[1] = -10;	// 0 = do nothing
	}
};

//======================= clothing salvage into thread
class Craft_SRP_ClothingThreadBase extends Craft_SRP_SewingThreadBase
{

	override void Init()
	{
		m_Name = "Salvage for Thread";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 3;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"Clothing");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		// InsertIngredient(1,"LeatherSewingKit");	// primary ingredient
		// InsertIngredient(1,"SewingKit");	// primary ingredient
		
		m_IngredientAddHealth[1] = 0;	// 0 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		// AddResult("SRP_Armband_Base");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1; 			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    if (super.CanDo(ingredients,player))
    {
      Clothing clothingPiece;
      if (ingredients[0] && Class.CastTo(clothingPiece, ingredients[0]))
      {
        return clothingPiece.IsEmpty();
      }
    }
		return false;
	}
  override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Craft_SRP_ClothingThreadBase Recipe Do method called: " + m_Name,"recipes");
    string randomThread = GetSewingThreadTypes().GetRandomElement();
    ItemBase newThread = ItemBase.Cast(GetGame().CreateObjectEx(randomThread, player.GetPosition(), false));
    /**
  	\brief Returns global health level specified in object's config class parameter healthLevels
	     (range is usually 0..4, 0 = pristine, 1 = worn, 2 = damaged, 3 = badly damaged, 4 = ruined but can be changed).
      @param zoneName if empty string, returns state of global health level
    */
    int damagelevel = 1;
    int clothingSlotType = -1;
    Clothing clothing;
    if (Class.CastTo(clothing, ingredients[0]))
    {    
      damagelevel = clothing.GetHealthLevel() + 1;
      clothingSlotType = clothing.GetWearableSlotType();
    }
    int quantity = Math.RandomIntInclusive(m_MinQuantity, m_MaxQuantity) / damagelevel;
    quantity = quantity + GetThreadYieldBySlotType(clothingSlotType);
    newThread.SetQuantity(quantity);  
    results.Insert(newThread);
    // Print("Random Thread: " + randomThread + " Quantity: " + quantity + " new item: " + newThread);
	}

  int GetThreadYieldBySlotType(int slottype)
  {
    // -1 is no slot type so short circuit
    if (slottype == -1)
      return 1;

    if (slottype == InventorySlots.HEADGEAR)
      return 15;
    else if (slottype == InventorySlots.MASK)
      return 10;
    else if (slottype == InventorySlots.GLOVES)
      return 15;
    else if (slottype == InventorySlots.ARMBAND)
      return 10;
    else if (slottype == InventorySlots.BODY)
      return 50;
    else if (slottype == InventorySlots.VEST)
      return 45;
    else if (slottype == InventorySlots.BACK)
      return 50;
    else if (slottype == InventorySlots.HIPS)
      return 25;
    else if (slottype == InventorySlots.LEGS)
      return 30;
    else if (slottype == InventorySlots.FEET)
      return 15;
    
    return 0;
  }
};

class Craft_SRP_SalvageClothing extends Craft_SRP_ClothingThreadBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
{
	override void Init()
	{
    super.Init();
    m_MinQuantity = 1;
    m_MaxQuantity = 7;
		m_Name = "Salvage Clothing - Thread";	// action name in game

		//ingredient 2	
		InsertIngredient(1,"LeatherSewingKit");	// primary ingredient
		InsertIngredient(1,"SewingKit");	// primary ingredient
		m_MinQuantityIngredient[1] = -35;
		m_IngredientAddQuantity[1] = -35;// 0 = do nothing
	}
};

class Craft_SRP_SalvageClothingWithTool extends Craft_SRP_ClothingThreadBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
{
	override void Init()
	{
    super.Init();
    m_MinQuantity = 5;
    m_MaxQuantity = 15;
		m_Name = "Break Down Clothing - Thread";	// action name in game

		//ingredient 2	
		InsertIngredient(1,"Pliers");	// primary ingredient		
		
		m_IngredientAddHealth[1] = -10;	// 0 = do nothing
	}
};

class Craft_SRP_SalvageClothingWithMachine extends Craft_SRP_ClothingThreadBase   // Our example recipe which uses primary ingredient - our custom item MagicHammer to turn any other secondary ingredient ( all ItemBase items ) into stones. 
{
	override void Init()
	{
    super.Init();
    m_MinQuantity = 75;
    m_MaxQuantity = 125;
    m_Name = "Extract Clothing - Thread";	// action name in game

		//ingredient 2	
		InsertIngredient(1,"SRP_SewingTable");	// primary ingredient			
		m_IngredientAddHealth[1] = -1;	// 0 = do nothing
  }
};

//======================= repair clothing
class Craft_SRP_RepairClothing extends Craft_SRP_SewingThreadBase
{

	override void Init()
	{
		m_Name = "Repair Completely";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"Clothing");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// 0 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"SRP_SewingTable");	// primary ingredient
		
		m_IngredientAddHealth[1] = -1;	// 0 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		// AddResult("SRP_Armband_Base");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1; 			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    if (super.CanDo(ingredients,player))
    {
      Clothing clothingPiece;
      SRP_SewingTable workbench;
      if (Class.CastTo(clothingPiece, ingredients[0]) && Class.CastTo(workbench, ingredients[1]))
      {
        return clothingPiece.IsEmpty() && workbench.HasAllThreadSlotsFilledAndFull();
      }
    }
		return false;
	}
  override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Craft_SRP_RepairClothing Recipe Do method called: " + m_Name,"recipes");

    Clothing clothing;
    SRP_SewingTable workbench;
    if (Class.CastTo(clothing, ingredients[0]) && Class.CastTo(workbench, ingredients[1]))
    {
      workbench.ConsumeAllThreadSlots();      
      clothing.SetHealth(clothing.GetMaxHealth());
    }
	}
};