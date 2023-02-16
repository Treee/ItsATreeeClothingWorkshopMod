class SRP_Drugs_DetermineQuality extends RecipeBase 
{
  bool m_isTainted = true;

	override void Init()
	{
		m_Name = "Inspect Quality";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 1;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = 1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = -1;	//-1 = disable check
		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"DUB_Microscope");	// primary ingredient
		
		m_IngredientAddHealth[0] = -5;	// -5 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = -1;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"SRP_ConsumableDrug_MethSmall"); //  secondary ingredient
		InsertIngredient(1,"SRP_ConsumableDrug_MethMedium"); //  secondary ingredient
		InsertIngredient(1,"SRP_ConsumableDrug_MethLarge"); //  secondary ingredient
		InsertIngredient(1,"SRP_ConsumableDrug_BathSalts"); //  secondary ingredient
		InsertIngredient(1,"SRP_ConsumableDrug_SmileyAcid"); //  secondary ingredient
		InsertIngredient(1,"SRP_ConsumableDrug_SkullAcid"); //  secondary ingredient
		InsertIngredient(1,"SRP_ConsumableDrug_Cocaine"); //  secondary ingredient
		InsertIngredient(1,"SRP_DrugBrick_Cocaine"); //  secondary ingredient
		InsertIngredient(1,"SRP_ConsumableDrug_MethSmallTainted"); //  secondary ingredient
		InsertIngredient(1,"SRP_ConsumableDrug_BathSaltsTainted"); //  secondary ingredient
		InsertIngredient(1,"SRP_ConsumableDrug_SmileyAcidTainted"); //  secondary ingredient
		InsertIngredient(1,"SRP_ConsumableDrug_SkullAcidTainted"); //  secondary ingredient
		InsertIngredient(1,"SRP_ConsumableDrug_CocaineTainted"); //  secondary ingredient
		InsertIngredient(1,"SRP_DrugBrick_CocaineTainted"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// 0 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = -1;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
    ItemBase theDrug = ItemBase.Cast(ingredients[1]);
    string itemName = theDrug.GetType();
    itemName.ToLower();
    Param1<string> m_MessageParam;
    if (itemName.Contains("tainted"))
    {
      // player.SendMessageToClient(player, "You see broken and unordered crystal structures. This is not even close to being pure.");
      // SendMessageToClient(player, "You see broken and unordered crystal structures. This is not even close to being pure.");
      m_MessageParam = new Param1<string>("You see broken and unordered crystal structures. This is not even close to being pure.");
    }
    else 
    {
      // player.SendMessageToClient(player, "This is the purest crystal you have ever seen.");
      // SendMessageToClient(player, "This is the purest crystal you have ever seen.");
      m_MessageParam = new Param1<string>("This is the purest crystal you have ever seen.");
    }
    if( GetGame().IsServer() && m_MessageParam && player.IsAlive())
    {
      GetGame().RPCSingleParam(player, ERPCs.RPC_USER_ACTION_MESSAGE, m_MessageParam, true, player.GetIdentity());
    }
	}
};