class Craft_SRP_ChessBoard_Kit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Chess Game Kit";
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
		InsertIngredient(0,"Firewood");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"SRP_WornWorkbench");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -1;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_ChessBoard_Kit");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_WornWorkbench bench = SRP_WornWorkbench.Cast(ingredients[1]);
    return bench && bench.HasAllAttachments();
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_ChessBoard_Kit: Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_ChessBoard_Base extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Chess Board";
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
		InsertIngredient(0,"SRP_ChessBoard_Kit");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -2;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"SRP_WornWorkbench");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -1;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_ChessBoard_Board");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_WornWorkbench bench = SRP_WornWorkbench.Cast(ingredients[1]);
    return bench && bench.HasAllAttachments();
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_ChessBoard_Base: Recipe Do method called: " + m_Name,"recipes");
	}
};
class Craft_SRP_ChessBoard extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Chess Board";
		AddResult("SRP_ChessBoard_Board");//add results here
	}
};
class Craft_SRP_ChessBoard_PawnPrimary extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Player 1 Pawn";
		AddResult("SRP_ChessBoard_PawnPrimary");//add results here
	}
};
class Craft_SRP_ChessBoard_RookPrimary extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Player 1 Rook";
		AddResult("SRP_ChessBoard_RookPrimary");//add results here
	}
};
class Craft_SRP_ChessBoard_KnightPrimary extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Player 1 Knight";
		AddResult("SRP_ChessBoard_KnightPrimary");//add results here
	}
};
class Craft_SRP_ChessBoard_BishopPrimary extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Player 1 Bishop";
		AddResult("SRP_ChessBoard_BishopPrimary");//add results here
	}
};
class Craft_SRP_ChessBoard_QueenPrimary extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Player 1 Queen";
		AddResult("SRP_ChessBoard_QueenPrimary");//add results here
	}
};
class Craft_SRP_ChessBoard_KingPrimary extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Player 1 King";
		AddResult("SRP_ChessBoard_KingPrimary");//add results here
	}
};


class Craft_SRP_ChessBoard_PawnAlternate extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Player 2 Pawn";
		AddResult("SRP_ChessBoard_PawnAlternate");//add results here
	}
};
class Craft_SRP_ChessBoard_RookAlternate extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Player 2 Rook";
		AddResult("SRP_ChessBoard_RookAlternate");//add results here
	}
};
class Craft_SRP_ChessBoard_KnightAlternate extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Player 2 Knight";
		AddResult("SRP_ChessBoard_KnightAlternate");//add results here
	}
};
class Craft_SRP_ChessBoard_BishopAlternate extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Player 2 Bishop";
		AddResult("SRP_ChessBoard_BishopAlternate");//add results here
	}
};
class Craft_SRP_ChessBoard_QueenAlternate extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Player 2 Queen";
		AddResult("SRP_ChessBoard_QueenAlternate");//add results here
	}
};
class Craft_SRP_ChessBoard_KingAlternate extends Craft_SRP_ChessBoard_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Create Player 2 King";
		AddResult("SRP_ChessBoard_KingAlternate");//add results here
	}
};