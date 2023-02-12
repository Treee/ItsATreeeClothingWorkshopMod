class Craft_SRP_DecorativeLightKit_KitBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Decorative Light Starter Kit";
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
		m_MinQuantityIngredient[0] = 5;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 2;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"MetalPlate");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = -5;// -1 = do nothing
		m_IngredientDestroy[0] = false;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"Pliers"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = -10;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// -1 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		AddResult("SRP_DecorativeLightKit_Kit");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
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
		Debug.Log("Craft_SRP_DecorativeLightKit_KitBase Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_DecorativeLightKit_OptionsBase extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Decorative Light Kit - Options";
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = -1;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 2;	//-1 = disable check
		m_MinQuantityIngredient[1] = 50;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_DecorativeLightKit_Kit");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"EpoxyPutty"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -50;// -1 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		// AddResult("SRP_DecorativeLightKit_Kit");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
    SRP_DecorativeLightKit_Kit kit;
    Class.CastTo(kit, ingredients[0]);
    bool canCraft = false;
    if (kit)
    {
      canCraft |= (kit.FindAttachmentBySlotName("Lightbulb") != NULL) ;
      canCraft &= (kit.FindAttachmentBySlotName("LargeBattery") != NULL);
      canCraft &= (kit.FindAttachmentBySlotName("Material_MetalWire") != NULL);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Craft_SRP_DecorativeLightKit_OptionsBase Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_DecorativeLightKit_Long extends Craft_SRP_DecorativeLightKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Light Kit - Long";
		AddResult("SRP_DecorativeLight_LongKit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeLightKit_VerticalLong extends Craft_SRP_DecorativeLightKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Light Kit - Vertical Long";
		AddResult("SRP_DecorativeLight_VerticalLongKit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeLightKit_Flat extends Craft_SRP_DecorativeLightKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Light Kit - Flat";
		AddResult("SRP_DecorativeLight_FlatKit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeLightKit_VerticalFlat extends Craft_SRP_DecorativeLightKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Light Kit - Vertical Flat";
		AddResult("SRP_DecorativeLight_VerticalFlatKit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeLightKit_LongFancy extends Craft_SRP_DecorativeLightKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Light Kit - Long Fancy";
		AddResult("SRP_DecorativeLight_LongFancyKit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeLightKit_VerticalLongFancy extends Craft_SRP_DecorativeLightKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Light Kit - Vertical Long Fancy";
		AddResult("SRP_DecorativeLight_VerticalLongFancyKit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeLightKit_Corner extends Craft_SRP_DecorativeLightKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Light Kit - Corner";
		AddResult("SRP_DecorativeLight_CornerKit_Kit");	// recipe result
	}
};
class Craft_SRP_DecorativeLightKit_HorizontalCorner extends Craft_SRP_DecorativeLightKit_OptionsBase
{
	override void Init()
	{
    super.Init();
		m_Name = "Craft Decorative Light Kit - Horizontal Corner";
		AddResult("SRP_DecorativeLight_HorizontalCornerKit_Kit");	// recipe result
	}
};

class Craft_SRP_DecorativeLightKit_IntoColorKit extends RecipeBase
{
	override void Init()
	{
		m_Name = "Finish Decorative Light - Apply Filter";
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 2;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 2;	//-1 = disable check
		m_MinQuantityIngredient[1] = 1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_DecorativeLight_LongKit_Kit");	// primary ingredient
		InsertIngredient(0,"SRP_DecorativeLight_VerticalLongKit_Kit");	// primary ingredient
		InsertIngredient(0,"SRP_DecorativeLight_FlatKit_Kit");	// primary ingredient
		InsertIngredient(0,"SRP_DecorativeLight_VerticalFlatKit_Kit");	// primary ingredient
		InsertIngredient(0,"SRP_DecorativeLight_LongFancyKit_Kit");	// primary ingredient
		InsertIngredient(0,"SRP_DecorativeLight_VerticalLongFancyKit_Kit");	// primary ingredient
		InsertIngredient(0,"SRP_DecorativeLight_CornerKit_Kit");	// primary ingredient
		InsertIngredient(0,"SRP_DecorativeLight_HorizontalCornerKit_Kit");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"SRP_Mining_Crystal_ColorBase"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -1;// -1 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		// AddResult("SRP_DecorativeLightKit_Kit");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
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
    string kitname = ingredients[0].GetType();
    kitname.Replace("Kit_Kit", "");

    string color = ingredients[1].ConfigGetString("color");
    color = MapColorBaseToItem(color);

    string newKit = kitname + "_" + color + "_Kit";
    // Print("ingredient: " + kitname + " kit: " + newKit);
    ItemBase newThread = ItemBase.Cast(GetGame().CreateObjectEx(newKit, player.GetPosition(), false));
    results.Insert(newThread);
		Debug.Log("Craft_SRP_DecorativeLightKit_IntoColorKit Recipe Do method called: " + ingredients[0].GetType() + " gem: " + ingredients[1].GetType(),"recipes");
	}

  string MapColorBaseToItem(string colorbase)
  {
    switch(colorbase)
		{
			case "ruby": return "red";
			case "sapphire": return "blue";
			case "jade": return "green";
      case "amethyst": return "purple";
      case "aqua": return "lightblue";
      case "amber": return "orange";
      case "diamond": return "white";
      case "topaz": return "yellow";
      case "quartz": return "pink";
      case "opal": return "rainbow";
			default: return "white";
		}
		return "white";
  }
};
