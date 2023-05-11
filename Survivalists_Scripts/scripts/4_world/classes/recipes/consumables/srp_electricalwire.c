class Craft_SRP_CopperWire extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Spool Into Wire - Copper";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
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
		InsertIngredient(0,"SRP_MiningTool_IronTongsSmall");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_MiningTool_IronTongsMedium");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_MiningTool_IronTongsLarge");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -10;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"SRP_LatheWorkbench");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -1;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("MetalWire_Copper");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_MiningTool_IronTongsSmall tongs = SRP_MiningTool_IronTongsSmall.Cast(ingredients[0]);
    bool tongsPuzzle = (tongs && tongs.HasEnoughIngots(1) && tongs.IsAttachedIngotHotEnough(180) && tongs.GetColor() == "copper");
    SRP_LatheWorkbench lathe = SRP_LatheWorkbench.Cast(ingredients[1]);
    bool lathePuzzle = (lathe && lathe.HasAllAttachments());
    return tongsPuzzle && lathePuzzle;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    SRP_MiningTool_IronTongsSmall tongs = SRP_MiningTool_IronTongsSmall.Cast(ingredients[0]);
    if (tongs)
    {
      ItemBase copperWire = ItemBase.Cast(GetGame().CreateObjectEx("MetalWire_Copper", player.GetPosition(), false));
      copperWire.SetQuantity(Math.RandomIntInclusive(2,10));
      results.Insert(copperWire);
      tongs.ReduceIngotCount(1);
    }
		Debug.Log("Craft_SRP_CopperWire: Recipe Do method called","recipes");
	}
};
class Craft_SRP_MetalWire extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Spool Into Wire - Iron";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
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
		InsertIngredient(0,"SRP_MiningTool_IronTongsSmall");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_MiningTool_IronTongsMedium");//you can insert multiple ingredients this way
		InsertIngredient(0,"SRP_MiningTool_IronTongsLarge");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -10;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"SRP_LatheWorkbench");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -1;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("MetalWire");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_MiningTool_IronTongsSmall tongs = SRP_MiningTool_IronTongsSmall.Cast(ingredients[0]);
    bool tongsPuzzle = (tongs && tongs.HasEnoughIngots(2) && tongs.IsAttachedIngotHotEnough(180) && tongs.GetColor() == "iron");
    SRP_LatheWorkbench lathe = SRP_LatheWorkbench.Cast(ingredients[1]);
    bool lathePuzzle = (lathe && lathe.HasAllAttachments());
    return tongsPuzzle && lathePuzzle;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    SRP_MiningTool_IronTongsSmall tongs = SRP_MiningTool_IronTongsSmall.Cast(ingredients[0]);
    if (tongs)
    {
      tongs.ReduceIngotCount(2);
    }
		Debug.Log("Craft_SRP_MetalWire: Recipe Do method called","recipes");
	}
};

class Craft_SRP_CopperWire_Colorbase extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Shield Copper Wire";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 5;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 35;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"MetalWire_Copper");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -5;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"EpoxyPutty");//you can insert multiple ingredients this way
		InsertIngredient(1,"SRP_WaxBar_ColorBase");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -35;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("MetalWire_Copper");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
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
		Debug.Log("Craft_SRP_CopperWire_Colorbase: Recipe Do method called " + m_Name,"recipes");
	}
};

class Craft_SRP_CopperWire_Black extends Craft_SRP_CopperWire_Colorbase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Shield Copper Wire - Black";
		AddResult("MetalWire_Black");//add results here
	}
};
class Craft_SRP_CopperWire_Brown extends Craft_SRP_CopperWire_Colorbase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Shield Copper Wire - Brown";
		AddResult("MetalWire_Brown");//add results here
	}
};
class Craft_SRP_CopperWire_Red extends Craft_SRP_CopperWire_Colorbase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Shield Copper Wire - Red";
		AddResult("MetalWire_Red");//add results here
	}
};
class Craft_SRP_CopperWire_Orange extends Craft_SRP_CopperWire_Colorbase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Shield Copper Wire - Orange";
		AddResult("MetalWire_Orange");//add results here
	}
};
class Craft_SRP_CopperWire_Yellow extends Craft_SRP_CopperWire_Colorbase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Shield Copper Wire - Yellow";
		AddResult("MetalWire_Yellow");//add results here
	}
};
class Craft_SRP_CopperWire_Green extends Craft_SRP_CopperWire_Colorbase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Shield Copper Wire - Green";
		AddResult("MetalWire_Green");//add results here
	}
};
class Craft_SRP_CopperWire_Blue extends Craft_SRP_CopperWire_Colorbase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Shield Copper Wire - Blue";
		AddResult("MetalWire_Blue");//add results here
	}
};
class Craft_SRP_CopperWire_Purple extends Craft_SRP_CopperWire_Colorbase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Shield Copper Wire - Purple";
		AddResult("MetalWire_Purple");//add results here
	}
};
class Craft_SRP_CopperWire_Grey extends Craft_SRP_CopperWire_Colorbase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Shield Copper Wire - Grey";
		AddResult("MetalWire_Grey");//add results here
	}
};
class Craft_SRP_CopperWire_White extends Craft_SRP_CopperWire_Colorbase
{	
	override void Init()
	{
    super.Init();
		m_Name = "Shield Copper Wire - White";
		AddResult("MetalWire_White");//add results here
	}
};

class Craft_SRP_BarbedWire extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Twist Into Barbed Wire";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = 3;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 40;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"MetalWire");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Nail");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = 0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("BarbedWire");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
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
		Debug.Log("Craft_SRP_BarbedWire: Recipe Do method called","recipes");
	}
};

class Craft_SRP_Fuse_Base extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Fuse";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
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
		InsertIngredient(0,"SRP_MaterialsSpool_ColorBase");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"SRP_MaterialsSpool_ColorBase");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		// AddResult("MetalWire_Copper");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_MaterialsSpool_ColorBase spool;
    if (!Class.CastTo(spool, ingredients[0]))
      return false;
    TStringArray c1 = GetColorWires1();
    if (!spool.IsFull(c1.Get(0), c1.Get(1), c1.Get(2), c1.Get(3), c1.Get(4)))
      return false;
    if (!Class.CastTo(spool, ingredients[1]))
      return false;
    TStringArray c2 = GetColorWires2();
    if (!spool.IsFull(c2.Get(0), c2.Get(1), c2.Get(2), c2.Get(3), c2.Get(4)))
      return false;

    return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    SRP_MaterialsSpool_ColorBase spool;
    if (Class.CastTo(spool, ingredients[0]))
      spool.DeleteElectricalWires();
    
    if (Class.CastTo(spool, ingredients[1]))
      spool.DeleteElectricalWires();
    
		Debug.Log("Craft_SRP_Fuse_Base: Recipe Do method called " + m_Name,"recipes");
	}

  TStringArray GetColorWires1()
  {
    return {};
  }
  TStringArray GetColorWires2()
  {
    return {};
  }
};
class Craft_SRP_Fuse_1 extends Craft_SRP_Fuse_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Fuse - 10 Amp";
		AddResult("DUB_Fuse_1");//add results here
	}
  override TStringArray GetColorWires1()
  {
    return {"black","brown","red","orange","yellow"};
  }
  override TStringArray GetColorWires2()
  {
    return {"green","blue","purple","grey","white"};
  }
};
class Craft_SRP_Fuse_2 extends Craft_SRP_Fuse_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Fuse - 20 Amp";
		AddResult("DUB_Fuse_2");//add results here
	}
  override TStringArray GetColorWires1()
  {
    return {"brown","red","black","orange","yellow"};
  }
  override TStringArray GetColorWires2()
  {
    return {"green","purple","grey","blue","white"};
  }
};
class Craft_SRP_Fuse_3 extends Craft_SRP_Fuse_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Fuse - 30 Amp";
		AddResult("DUB_Fuse_3");//add results here
	}
  override TStringArray GetColorWires1()
  {
    return {"orange","yellow","black","brown","red"};
  }
  override TStringArray GetColorWires2()
  {
    return {"purple","grey","white","green","blue"};
  }
};
class Craft_SRP_Fuse_4 extends Craft_SRP_Fuse_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Fuse - 40 Amp";
		AddResult("DUB_Fuse_4");//add results here
	}
  override TStringArray GetColorWires1()
  {
    return {"brown","red","orange","black","yellow"};
  }
  override TStringArray GetColorWires2()
  {
    return {"grey","white","green","blue","purple"};
  }
};
class Craft_SRP_Fuse_5 extends Craft_SRP_Fuse_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Fuse - 50 Amp";
		AddResult("DUB_Fuse_5");//add results here
	}
  override TStringArray GetColorWires1()
  {
    return {"red","orange","brown","black","yellow"};
  }
  override TStringArray GetColorWires2()
  {
    return {"grey","blue","purple", "white","green"};
  }
};
class Craft_SRP_Fuse_6 extends Craft_SRP_Fuse_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Fuse - 60 Amp";
		AddResult("DUB_Fuse_6");//add results here
	}
  override TStringArray GetColorWires1()
  {
    return {"yellow", "orange", "red", "brown","black"};
  }
  override TStringArray GetColorWires2()
  {
    return {"white", "grey","purple","blue", "green"};
  }
};
class Craft_SRP_Fuse_7 extends Craft_SRP_Fuse_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Fuse - 70 Amp";
		AddResult("DUB_Fuse_7");//add results here
	}
  override TStringArray GetColorWires1()
  {
    return { "red","yellow", "orange", "brown","black"};
  }
  override TStringArray GetColorWires2()
  {
    return {"white","blue", "green", "grey","purple"};
  }
};
class Craft_SRP_Fuse_8 extends Craft_SRP_Fuse_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Fuse - 80 Amp";
		AddResult("DUB_Fuse_8");//add results here
	}
  override TStringArray GetColorWires1()
  {
    return {"black", "yellow", "orange", "red", "brown"};
  }
  override TStringArray GetColorWires2()
  {
    return {"green", "white", "grey","purple","blue"};
  }
};
class Craft_SRP_Fuse_9 extends Craft_SRP_Fuse_Base
{	
	override void Init()
	{
    super.Init();
		m_Name = "Craft Fuse - 90 Amp";
		AddResult("DUB_Fuse_9");//add results here
	}
  override TStringArray GetColorWires1()
  {
    return {"yellow", "orange","black","red", "brown"};
  }
  override TStringArray GetColorWires2()
  {
    return {"white", "grey","blue", "green","purple"};
  }
};