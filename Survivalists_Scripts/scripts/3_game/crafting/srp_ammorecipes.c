class SRP_AmmoRecipes extends SRP_RecipeManager
{
  override void Init()
  {
    super.Init();
    // CRAFTABLES
    craftableItems.Insert(Register_AmmoCrafting_380_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_22_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_9x19_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_45ACP_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_12gaSlug_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_12gaPellets_Recipe());

    craftableItems.Insert(Register_AmmoCrafting_40mm_Smoke_Red_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_40mm_Smoke_Green_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_40mm_Smoke_White_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_40mm_Smoke_Black_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_M18SmokeGrenade_Red_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_M18SmokeGrenade_Green_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_M18SmokeGrenade_Yellow_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_M18SmokeGrenade_Purple_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_M18SmokeGrenade_White_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_RDG2SmokeGrenade_Black_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_RDG2SmokeGrenade_White_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_545x39_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_9x39_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_556x45_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_357_Recipe());

    craftableItems.Insert(Register_AmmoCrafting_762x39_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_308Win_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_762x54_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_9x39AP_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_FlashGrenade_Recipe());

    craftableItems.Insert(Register_AmmoCrafting_40mm_Explosive_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_RGD5Grenade_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_M67Grenade_Recipe());
    
    craftableItems.Insert(Register_AmmoCrafting_700Nitro_Recipe());
    craftableItems.Insert(Register_AmmoCrafting_50BMG_Recipe());
  }
//===========================TEMPLATE
  // SRP_CraftableItem Register_X_Recipe()
  // {
  //   SRP_CraftableItem craftableItem = new SRP_CraftableItem("ITEM_CLASS_NAME", "ITEM_DISPLAY_NAME");
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 50));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 50));
  //   craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 50));
  //   return craftableItem;
  // }  

//===========================Small Caliber
  SRP_CraftableItem Register_AmmoCrafting_380_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_380", "380 Ammo", 35);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 35));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 35));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_22_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_22", "22 Ammo", 50);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 50));
    return craftableItem;
  } 
  SRP_CraftableItem Register_AmmoCrafting_9x19_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_9x19", "9x19 Ammo", 25);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 25));
    return craftableItem;
  } 
  SRP_CraftableItem Register_AmmoCrafting_45ACP_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_45ACP", "45ACP Ammo", 25);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 25));
    return craftableItem;
  }
//===========================shotgun/40mm
  SRP_CraftableItem Register_AmmoCrafting_12gaSlug_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_12gaSlug", "12 Gauge Slugs", 10);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 10));
    return craftableItem;
  } 
  SRP_CraftableItem Register_AmmoCrafting_12gaPellets_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_12gaPellets", "12 Gauge Pellets", 10);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 10));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 10));
    return craftableItem;
  } 
  SRP_CraftableItem Register_AmmoCrafting_40mm_Smoke_Red_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_40mm_Smoke_Red", "40mm Smoke - Red");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 5));
    return craftableItem;
  } 
  SRP_CraftableItem Register_AmmoCrafting_40mm_Smoke_Green_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_40mm_Smoke_Green", "40mm Smoke - Green");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 5));
    return craftableItem;
  } 
  SRP_CraftableItem Register_AmmoCrafting_40mm_Smoke_White_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_40mm_Smoke_White", "40mm Smoke - White");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 5));
    return craftableItem;
  } 
  SRP_CraftableItem Register_AmmoCrafting_40mm_Smoke_Black_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_40mm_Smoke_Black", "40mm Smoke - Black");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 5));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_M18SmokeGrenade_Red_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("M18SmokeGrenade_Red", "M18 Smoke Grenade - Red");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 5));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_M18SmokeGrenade_Green_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("M18SmokeGrenade_Green", "M18 Smoke Grenade - Green");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 5));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_M18SmokeGrenade_Yellow_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("M18SmokeGrenade_Yellow", "M18 Smoke Grenade - Yellow");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 5));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_M18SmokeGrenade_Purple_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("M18SmokeGrenade_Purple", "M18 Smoke Grenade - Purple");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 5));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_M18SmokeGrenade_White_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("M18SmokeGrenade_White", "M18 Smoke Grenade - White");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 5));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_RDG2SmokeGrenade_Black_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("RDG2SmokeGrenade_Black", "RDG2 Smoke Grenade - Black");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 5));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_RDG2SmokeGrenade_White_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("RDG2SmokeGrenade_White", "RDG2 Smoke Grenade - White");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 25));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 5));
    return craftableItem;
  }
//===========================Medium Caliber
  SRP_CraftableItem Register_AmmoCrafting_545x39_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_545x39", "545x39 Ammo", 20);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 20));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_9x39_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_9x39", "9x39 Ammo", 20);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 20));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_556x45_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_556x45", "556x45 Ammo", 20);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 20));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_357_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_357", "357 Ammo", 20);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 20));
    return craftableItem;
  }
//===========================large Caliber
  SRP_CraftableItem Register_AmmoCrafting_762x39_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_762x39", "762x39 Ammo", 20);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 20));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_308Win_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_308Win", "308Win Ammo", 20);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 20));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_762x54_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_762x54", "762x54 Ammo", 20);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 20));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_9x39AP_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_9x39AP", "9x39AP Ammo", 20);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 20));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_FlashGrenade_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("FlashGrenade", "Flash Grenade");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 20));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 20));
    return craftableItem;
  }
//===========================larger Caliber
  SRP_CraftableItem Register_AmmoCrafting_700Nitro_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_700Nitro", "700 Nitro Ammo", 5);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 60));
    return craftableItem;
  }
//===========================massive Caliber
  SRP_CraftableItem Register_AmmoCrafting_40mm_Explosive_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("40mm_Explosive", "40mm Explosive");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 25));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_RGD5Grenade_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("RGD5Grenade", "RGD5 Grenade");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 25));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_M67Grenade_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("M67Grenade", "M67 Grenade");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 50));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 25));
    return craftableItem;
  }
  SRP_CraftableItem Register_AmmoCrafting_50BMG_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_50BMG", ".50 BMG Ammo", 5);
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_CasePrep", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoPress", SRP_COLOR.NONE, 1));
  
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoCasings", SRP_COLOR.BRASS, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoGunpowder", SRP_COLOR.NONE, 100));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_AmmoBullets", SRP_COLOR.NONE, 60));
    return craftableItem;
  }
//===========================END

};