class SRP_CookingRecipes extends SRP_RecipeManager
{
  override void Init()
  {
    super.Init();
    // FOOD
    craftableItems.Insert(Register_ApplePie_Recipe());
    craftableItems.Insert(Register_MacNCheese_Recipe());
    craftableItems.Insert(Register_Popcorn_Recipe());
    craftableItems.Insert(Register_RiceSalad_Recipe());

    craftableItems.Insert(Register_ApplePiePoisoned_Recipe());
    craftableItems.Insert(Register_MacNCheesePoisoned_Recipe());
    craftableItems.Insert(Register_PopcornPoisoned_Recipe());
    craftableItems.Insert(Register_RiceSaladPoisoned_Recipe());

  }
//===========================TEMPLATE
  // SRP_CraftableItem Register_X_Recipe()
  // {
  //   SRP_CraftableItem craftableItem = new SRP_CraftableItem("ITEM_CLASS_NAME", "ITEM_DISPLAY_NAME");

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient1", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient2", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient3", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient4", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient5", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient6", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient7", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient8", SRP_COLOR.NONE, 1));

  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder1", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder2", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder3", SRP_COLOR.NONE, 1));

  //   return craftableItem;
  // }  
//===========================STEWS
  SRP_CraftableItem Register_ApplePie_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("srpStew_ApplePie", "Apple Pie");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient1", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient2", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient3", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient4", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient5", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient6", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient7", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient8", SRP_COLOR.FRUIT, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder1", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder2", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder3", SRP_COLOR.NONE, 25));

    return craftableItem;
  }  
  SRP_CraftableItem Register_MacNCheese_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("srpStew_MacNCheese", "Mac N Cheese");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient1", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient2", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient3", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient4", SRP_COLOR.NONE, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder1", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder2", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder3", SRP_COLOR.NONE, 25));

    return craftableItem;
  }  
  SRP_CraftableItem Register_Popcorn_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("srpStew_Popcorn", "Popcorn");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient1", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient2", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient3", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient4", SRP_COLOR.NONE, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder1", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder2", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder3", SRP_COLOR.NONE, 25));

    return craftableItem;
  } 
  SRP_CraftableItem Register_RiceSalad_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("srpStew_RiceSalad", "Rice Salad");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient1", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient2", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient3", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient4", SRP_COLOR.FRUIT, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder1", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder2", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder3", SRP_COLOR.NONE, 25));

    return craftableItem;
  }  
//===========================POISONED
  SRP_CraftableItem Register_ApplePiePoisoned_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("srpStew_ApplePiePoisoned", "Apple Pie - Poisoned");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient1", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient2", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient3", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient4", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient5", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient6", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient7", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient8", SRP_COLOR.FRUIT, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder1", SRP_COLOR.GREENAMANITA, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder2", SRP_COLOR.GREENAMANITA, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder3", SRP_COLOR.GREENAMANITA, 25));

    return craftableItem;
  }  
  SRP_CraftableItem Register_MacNCheesePoisoned_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("srpStew_MacNCheesePoisoned", "Mac N Cheese - Poisoned");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient1", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient2", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient3", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient4", SRP_COLOR.NONE, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder1", SRP_COLOR.GREENAMANITA, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder2", SRP_COLOR.GREENAMANITA, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder3", SRP_COLOR.GREENAMANITA, 25));

    return craftableItem;
  }  
  SRP_CraftableItem Register_PopcornPoisoned_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("srpStew_PopcornPoisoned", "Popcorn - Poisoned");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient1", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient2", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient3", SRP_COLOR.FRUIT, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient4", SRP_COLOR.NONE, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder1", SRP_COLOR.GREENAMANITA, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder2", SRP_COLOR.GREENAMANITA, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder3", SRP_COLOR.GREENAMANITA, 25));

    return craftableItem;
  } 
  SRP_CraftableItem Register_RiceSaladPoisoned_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("srpStew_RiceSaladPoisoned", "Rice Salad - Poisoned");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient1", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient2", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient3", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Ingredient4", SRP_COLOR.FRUIT, 50));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder1", SRP_COLOR.GREENAMANITA, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder2", SRP_COLOR.GREENAMANITA, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CrushedPowder3", SRP_COLOR.GREENAMANITA, 25));

    return craftableItem;
  }  
//===========================END

};