class SRP_DismantlePostBox_Base extends RecipeBase
{
	override void Init()
	{
		m_Name = "Dismantle";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 3;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 2;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		// InsertIngredient(0,"SRP_PostBox");//you can insert multiple ingredients this way
		// InsertIngredient(0,"SRP_PostBoxBlue");//you can insert multiple ingredients this way
		// InsertIngredient(0,"SRP_PostBoxWooden");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Hammer");
    InsertIngredient(1,"Screwdriver");
    InsertIngredient(1,"Pliers");

		m_IngredientAddHealth[1] = -10;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("SRP_WaxBar_White");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = 0;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}
  override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_PostBox_Base postBox;
    if (Class.CastTo(postBox, ingredients[0]))
    {
      if (postBox.HasBeenChecked() && postBox.IsEmpty())
      {
        if (!postBox.HasOwner())
        {
          return true;
        }
        else if (postBox.IsPlayerOwner(player.GetIdentity().GetId()))
        {
          return true;
        }
      }    
    }
    return false;
	}
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("SRP_DismantlePostBox_Base: Recipe Do method called: " + m_Name,"recipes");
	}
};

class SRP_DismantlePostBox extends SRP_DismantlePostBox_Base
{
	override void Init()
	{
    super.Init();
		m_Name = "Dismantle - Post Box";
		InsertIngredient(0,"SRP_PostBox");//you can insert multiple ingredients this way
		AddResult("SRP_PostBox_Kit");//add results here
	}
};
class SRP_DismantlePostBox_Blue extends SRP_DismantlePostBox_Base
{
	override void Init()
	{
    super.Init();
		m_Name = "Dismantle - Blue Post Box";
		InsertIngredient(0,"SRP_PostBoxBlue");//you can insert multiple ingredients this way
		AddResult("SRP_PostBoxBlue_Kit");//add results here
	}
};
class SRP_DismantlePostBox_Wooden extends SRP_DismantlePostBox_Base
{
	override void Init()
	{
    super.Init();
		m_Name = "Dismantle - Wooden Post Box";
		InsertIngredient(0,"SRP_PostBoxWooden");//you can insert multiple ingredients this way
		AddResult("SRP_PostBoxWooden_Kit");//add results here
	}
};