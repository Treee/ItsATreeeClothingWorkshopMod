class SRP_SmithingRecipes extends SRP_RecipeManager
{
  override void Init()
  {
    super.Init();
    // KNIVES    
    craftableItems.Insert(RegisterKarambitKnife());
    craftableItems.Insert(RegisterKarambitKnifeRed());
    craftableItems.Insert(RegisterKarambitKnifeBlue());
    craftableItems.Insert(RegisterSnakeDagger());
    craftableItems.Insert(RegisterForgedKnife());
    craftableItems.Insert(RegisterThrowingKnives());
    // SWORDS
    craftableItems.Insert(RegisterBerserkSword());
    craftableItems.Insert(RegisterFireyGreatSword());
    craftableItems.Insert(RegisterAerondightSword());
    craftableItems.Insert(RegisterAndurilSword());
    craftableItems.Insert(RegisterGreatRuneSword());
    craftableItems.Insert(RegisterGreatRuneSwordObsidian());
    craftableItems.Insert(RegisterGreatRuneSwordGold());
    craftableItems.Insert(RegisterGreatRuneSwordSilver());
    craftableItems.Insert(RegisterGreatRuneSwordRed());
    craftableItems.Insert(RegisterGreatRuneSwordBlue());    
    craftableItems.Insert(RegisterKatanaBambooRecipe());
    craftableItems.Insert(RegisterKatanaSlimRecipe());
    craftableItems.Insert(RegisterKatanaSlimSheathRecipe());
    craftableItems.Insert(RegisterWarCleaverRecipe());
    craftableItems.Insert(RegisterGladiusSwordRecipe());
    craftableItems.Insert(RegisterGladiusSwordSheathRecipe());
    craftableItems.Insert(RegisterGladiusSwordOrnamentalRecipe());
    craftableItems.Insert(RegisterGladiusSwordOrnamentalSheathRecipe());
    craftableItems.Insert(RegisterMasterSwordRecipe());
    craftableItems.Insert(RegisterMasterSwordSheathRecipe());
    craftableItems.Insert(RegisterRaidersMacheteSword());
    // AXES
    craftableItems.Insert(RegisterCelticAxeRecipe());
    craftableItems.Insert(RegisterVikingAxeRecipe());
    craftableItems.Insert(RegisterGreatBattleAxeRecipe());
    craftableItems.Insert(RegisterIceAxeRecipe());    
    // MACES
    craftableItems.Insert(RegisterMaceratorRecipe());
    craftableItems.Insert(RegisterCrystalMaceRecipe());
    // HAMMERS    
    craftableItems.Insert(RegisterWarhammerBasicRecipe());
    craftableItems.Insert(RegisterWarhammerBrutalRecipe());
    craftableItems.Insert(RegisterWarhammerEngravedRecipe());
    craftableItems.Insert(RegisterWarhammerHeavyRecipe());
    craftableItems.Insert(RegisterWarhammerMalletRecipe());
    craftableItems.Insert(RegisterWarhammerSimpleRecipe());
    craftableItems.Insert(RegisterWarhammerLongRecipe());
    craftableItems.Insert(RegisterWarhammerPikeRecipe());
    craftableItems.Insert(RegisterWarhammerProngRecipe());
    craftableItems.Insert(RegisterWarhammerSkullCrusherRecipe());
    // SPEARS
    craftableItems.Insert(RegisterWarSpearPikeRecipe());
    craftableItems.Insert(RegisterWarSpearPikeHookRecipe());
    // STAFFS
    craftableItems.Insert(RegisterWarStaffBasicRecipe());
    craftableItems.Insert(RegisterWarStaffSkullRecipe());
    craftableItems.Insert(RegisterWarStaffSunRecipe());
    craftableItems.Insert(RegisterWarStaffCopperRecipe());
    craftableItems.Insert(RegisterWarStaffSpearRecipe());
    craftableItems.Insert(RegisterWarStaffMoonRecipe());
    // RINGS
    craftableItems.Insert(RegisterRingRubyRecipe());
    craftableItems.Insert(RegisterRingRunestoneRecipe());
    craftableItems.Insert(RegisterRingSkullRecipe());
    craftableItems.Insert(RegisterRingTurquoiseRecipe());
    craftableItems.Insert(RegisterRingRunicRecipe());
    craftableItems.Insert(RegisterRingSnakeEyeRecipe());
    craftableItems.Insert(RegisterRingAzuriteRecipe());
    craftableItems.Insert(RegisterRingWeddingRecipe());
    craftableItems.Insert(RegisterRingEarthenRecipe());
    craftableItems.Insert(RegisterRingCelticRecipe());
    // TOOLS
    craftableItems.Insert(RegisterToolWoodAxeRecipe());
    craftableItems.Insert(RegisterToolPickAxeRecipe());
    craftableItems.Insert(RegisterToolCanOpenerRecipe());
    craftableItems.Insert(RegisterToolPliersRecipe());
    craftableItems.Insert(RegisterToolLockpickRecipe());
    craftableItems.Insert(RegisterToolHandcuffsRecipe());
    craftableItems.Insert(RegisterToolHandcuffKeysRecipe());
    craftableItems.Insert(RegisterToolCrowbarRecipe());
    craftableItems.Insert(RegisterToolShovelRecipe());
    craftableItems.Insert(RegisterToolHammerRecipe());
    craftableItems.Insert(RegisterToolFarmingHoeRecipe());
    craftableItems.Insert(RegisterToolSledgeHammerRecipe());
    craftableItems.Insert(RegisterToolSmallTongsRecipe());
    craftableItems.Insert(RegisterToolMediumTongsRecipe());
    craftableItems.Insert(RegisterToolLargeTongsRecipe());
    craftableItems.Insert(RegisterToolHacksawRecipe());
    craftableItems.Insert(RegisterToolHandsawRecipe());
    craftableItems.Insert(RegisterToolPropaneRedRecipe());
    craftableItems.Insert(RegisterToolPropaneYellowRecipe());
    craftableItems.Insert(RegisterToolPropaneWhiteRecipe());
    // MASKS
    craftableItems.Insert(RegisterMaskShatteredRecipe());
    // BULLETS
    craftableItems.Insert(RegisterBulletsCopperRecipe());
    craftableItems.Insert(RegisterBulletsIronRecipe());
    // CYBERNETICS
    craftableItems.Insert(RegisterCyberneticCore1Recipe());
    craftableItems.Insert(RegisterCyberneticCore2Recipe());
    craftableItems.Insert(RegisterCyberneticCore3Recipe());
    craftableItems.Insert(RegisterCybernetic1Recipe());
    craftableItems.Insert(RegisterCybernetic2Recipe());
    craftableItems.Insert(RegisterCybernetic3Recipe());
    craftableItems.Insert(RegisterCybernetic4Recipe());
    craftableItems.Insert(RegisterCybernetic5Recipe());
    craftableItems.Insert(RegisterCybernetic6Recipe());
    craftableItems.Insert(RegisterCybernetic7Recipe());
    craftableItems.Insert(RegisterCybernetic8Recipe());
    craftableItems.Insert(RegisterCybernetic9Recipe());
    craftableItems.Insert(RegisterCybernetic10Recipe());
    craftableItems.Insert(RegisterCybernetic11Recipe());
    craftableItems.Insert(RegisterCybernetic12Recipe());
    // CYBERNETICS
    craftableItems.Insert(Register_CrossbowBroadBolt_Recipe());
    // Print(string.Format("======================================= SMELTING RECIPES REGISTERED"));
    // PrintRecipes();
  }
//===========================KNIFES
  SRP_CraftableItem RegisterKarambitKnife()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_KarambitKnife", "Karambit Knife - Steel");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterKarambitKnifeRed()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_KarambitKnife_Red", "Karambit Knife - Bloodstone");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.GOLD, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterKarambitKnifeBlue()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_KarambitKnife_Blue", "Karambit Knife - Cobalt");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.ZINC, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.ZINC, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterSnakeDagger()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_SnakeDagger", "Silver Snake Dagger");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterForgedKnife()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_KnifeOld", "Forged Knife");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterThrowingKnives()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Throwingknife", "Throwing Knife");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================SWORDS
  SRP_CraftableItem RegisterBerserkSword()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_BerserkSword", "Bersek Sword");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.PLATINUM, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.IRON, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.SILVER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterFireyGreatSword()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_FireyGreatsword_Basic", "Firey Greatsword");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.PLATINUM, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.PLATINUM, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.SILVER, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterAerondightSword()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WitcherSword_Basic", "Aerondight");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.SILVER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.SILVER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.SILVER, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.PLATINUM, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.IRON, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterAndurilSword()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_LotR_SwordAnduril_Basic", "Anduril");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.SILVER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.SILVER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.PLATINUM, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.IRON, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterGreatRuneSword()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GreatRuneSword_Basic", "Great Rune Sword");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.BRONZE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 4));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.GOLD, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterGreatRuneSwordObsidian()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GreatRuneSword_Black", "Great Rune Sword - Obsidian");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 4));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.GOLD, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.OPAL, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterGreatRuneSwordGold()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GreatRuneSword_Gold", "Great Rune Sword - Gold");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.SILVER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 4));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.GOLD, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterGreatRuneSwordSilver()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GreatRuneSword_Silver", "Great Rune Sword - Silver");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.SILVER, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 4));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.SILVER, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterGreatRuneSwordRed()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GreatRuneSword_Red", "Great Rune Sword - BloodStone");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.COPPER, 4));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.COPPER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.ZINC, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.RUBY, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterGreatRuneSwordBlue()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GreatRuneSword_Blue", "Great Rune Sword - Azurite");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.ZINC, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.PLATINUM, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.ZINC, 2));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.SAPPHIRE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterKatanaBambooRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_KatanaBamboo", "Katana Training Sword");

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
    
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterKatanaSlimRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_KatanaSlim_Default", "Katana");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.BRONZE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.GOLD, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.PLATINUM, 2));
    
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterKatanaSlimSheathRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_KatanaSlim_Sheath_Black", "Katana Sheath");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarCleaverRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WarCleaver", "War Cleaver");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.TIN, 1));
    
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterGladiusSwordRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GladiusSword_Basic", "Gladius Sword");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.BRONZE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.TIN, 3));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.SILVER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.PLATINUM, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.TOPAZ, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterGladiusSwordSheathRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GladiusSwordSheath_Basic", "Gladius Sword Sheath");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.SILVER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.GOLD, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterGladiusSwordOrnamentalRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GladiusSword_Ornamental", "Ornamental Gladius Sword");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.BRONZE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.ZINC, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.COPPER, 3));    
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.PLATINUM, 3));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.SILVER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.QUARTZ, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterGladiusSwordOrnamentalSheathRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GladiusSwordSheath_Ornamental", "Ornamental Gladius Sword Sheath");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.SILVER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.GOLD, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.PLATINUM, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 8));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterMasterSwordRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_MasterSword_Basic", "Master Sword");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.SILVER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.GOLD, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.SILVER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.AMETHYST, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterMasterSwordSheathRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_MasterSword_Sheath_Basic", "Master Sword Sheath");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.SILVER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterRaidersMacheteSword()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("tantosword_Simple", "Raider's Machete");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.BRONZE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================AXES
  SRP_CraftableItem RegisterCelticAxeRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("ttcelticaxe_Simple", "Celtic Axe");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));    
    
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 6));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterVikingAxeRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Viking_Axe", "Viking Axe");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.COPPER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterGreatBattleAxeRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_GreatBattleAxe", "Great Battle Axe");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.BRONZE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterIceAxeRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Iceaxe", "Ice Axe");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================MACES
  SRP_CraftableItem RegisterMaceratorRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Macerator", "Macerator");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));    
    
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCrystalMaceRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_CrystalMace", "Crystal Mace");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));    
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.PLATINUM, 1)); 

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.SAPPHIRE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.AQUA, 1));
    
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================HAMMERS
  SRP_CraftableItem RegisterWarhammerBasicRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WarHammer_Basic_Wood", "War Hammer - Basic");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 3));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarhammerBrutalRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WarHammer_Brutal_Basic", "War Hammer - Brutal");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.PLATINUM, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarhammerEngravedRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WarHammer_Engraved_Basic", "War Hammer - Engraved");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.SILVER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.GOLD, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.BRONZE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarhammerHeavyRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WarHammer_Heavy_Basic", "War Hammer - Heavy");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.BRONZE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.PLATINUM, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.GOLD, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.PLATINUM, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarhammerMalletRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WarHammer_Mallet_Basic", "War Hammer - Mallet");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.BRONZE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.COPPER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.TIN, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.COPPER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarhammerSimpleRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WarHammer_Simple_Basic", "War Hammer - Simple");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 3));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.COPPER, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarhammerLongRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WarHammer_Long_Basic", "War Hammer - Long");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarhammerPikeRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WarHammer_Pike_Basic", "War Hammer - Pike");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.GOLD, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.PLATINUM, 3));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.BRONZE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarhammerProngRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WarHammer_Prong_Basic", "War Hammer - Prong");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.BRONZE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.BRONZE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.COPPER, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarhammerSkullCrusherRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_WarHammer_SkullCrusher_Basic", "War Hammer - SkullCrusher");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.PLATINUM, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.GOLD, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.PLATINUM, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.BRONZE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================SPEARS
  SRP_CraftableItem RegisterWarSpearPikeRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Spear_Pike_Basic", "War Spear - Pike");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.COPPER, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.IRON, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.COPPER, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarSpearPikeHookRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Spear_PikeHook_Basic", "War Spear - Pike Hook");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.TIN, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.BRONZE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.BRONZE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================STAFFS
  SRP_CraftableItem RegisterWarStaffBasicRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Staff_Wooden_Brown", "War Staff - Basic");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.COPPER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.COPPER, 3));    

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.BRONZE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.BRONZE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarStaffSkullRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Staff_Skull_Basic", "War Staff - Skull");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.SILVER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.IRON, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.BRONZE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.RUBY, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarStaffSunRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Staff_Sun_Basic", "War Staff - Sun");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.COPPER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.COPPER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.TOPAZ, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarStaffCopperRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Staff_Copper_Basic", "War Staff - Copper");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.COPPER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.ZINC, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.COPPER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.COPPER, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.COPPER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.GOLD, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.COPPER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.BRONZE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.AMBER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarStaffSpearRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Staff_Spear_Basic", "War Staff - Spear");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.SILVER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.GOLD, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.GOLD, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.ZINC, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.GOLD, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.AMETHYST, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterWarStaffMoonRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Staff_Moon_Basic", "War Staff - Moon");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.ZINC, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.COPPER, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.BRONZE, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.JADE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================RINGS
  SRP_CraftableItem RegisterRingRubyRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_BloodRing", "Bloodstone Ring");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.SILVER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.RUBY, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    return craftableItem;
  }
  SRP_CraftableItem RegisterRingRunestoneRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_StoneRing", "Runestone Ring");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.BRONZE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.COPPER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.OPAL, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    return craftableItem;
  }
  SRP_CraftableItem RegisterRingSkullRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_SkullRing", "Skull Ring");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.SILVER, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.DIAMOND, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    return craftableItem;
  }
  SRP_CraftableItem RegisterRingTurquoiseRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_SkeletalEmeraldRing", "Turquoise Ring");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.ZINC, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.SAPPHIRE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    return craftableItem;
  }
  SRP_CraftableItem RegisterRingRunicRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_RuneRing", "Runic Ring");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.SILVER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.TIN, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.QUARTZ, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    return craftableItem;
  }
  SRP_CraftableItem RegisterRingSnakeEyeRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_ClawRing", "Snake Eye Ring");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.GOLD, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.COPPER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.BRONZE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.TOPAZ, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.AMBER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    return craftableItem;
  }
  SRP_CraftableItem RegisterRingAzuriteRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_ThreeCrystalRing", "Azurite Ring");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.COPPER, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.SILVER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.AQUA, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.SAPPHIRE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    return craftableItem;
  }
  SRP_CraftableItem RegisterRingWeddingRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Wedding_Ring", "Wedding Ring");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.SILVER, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    return craftableItem;
  }
  SRP_CraftableItem RegisterRingEarthenRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Ring_Earth_Basic", "Earthen Ring");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.COPPER, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.AMBER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    return craftableItem;
  }
  SRP_CraftableItem RegisterRingCelticRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_Ring_Celtic_Basic", "Celtic Ring");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.BRONZE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.AMBER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    return craftableItem;
  }
//===========================TOOLS
  SRP_CraftableItem RegisterToolWoodAxeRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("WoodAxe", "Wood Axe");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.BRONZE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolPickAxeRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Pickaxe", "Pick Axe");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolCanOpenerRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("CanOpener", "Can Opener");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.TIN, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.TIN, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolPliersRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Pliers", "Pliers");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.COPPER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolLockpickRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Lockpick", "Lockpick");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.TIN, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.TIN, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolHandcuffsRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Handcuffs", "Handcuffs");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolHandcuffKeysRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("HandcuffKeys", "Handcuff Keys");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolCrowbarRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Crowbar", "Crowbar");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.BRONZE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.BRONZE, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolShovelRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Shovel", "Shovel");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.COPPER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolHammerRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Hammer", "Hammer");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolFarmingHoeRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("FarmingHoe", "Farming Hoe");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolSledgeHammerRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SledgeHammer", "Sledge Hammer");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.ZINC, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.BRONZE, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_WoodenLogs", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolSmallTongsRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_MiningTool_IronTongsSmall", "Small Tongs");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.ZINC, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolMediumTongsRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_MiningTool_IronTongsMedium", "Medium Tongs");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.ZINC, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolLargeTongsRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_MiningTool_IronTongsLarge", "Large Tongs");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.ZINC, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolHacksawRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Hacksaw", "Hacksaw");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.BRONZE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.TIN, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolHandsawRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("HandSaw", "HandSaw");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.BRONZE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.COPPER, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.TIN, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolPropaneRedRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_PropaneTank_Red", "Propane Tank - Red");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.COPPER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.COPPER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.COPPER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolPropaneYellowRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_PropaneTank_Yellow", "Propane Tank - Yellow");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterToolPropaneWhiteRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_PropaneTank_White", "Propane Tank - White");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.BRONZE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.COPPER, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================MASKS
  SRP_CraftableItem RegisterMaskShatteredRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_ShatteredMask", "Shattered Mask");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.ZINC, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.IRON, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Fabric", SRP_COLOR.NONE, 2));
    return craftableItem;
  }  
//===========================BULLETS
  SRP_CraftableItem RegisterBulletsCopperRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_BulletCrafting_Copper", "Bullet Tips - Copper");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.COPPER, 1));        

    return craftableItem;
  }  
  SRP_CraftableItem RegisterBulletsIronRecipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("SRP_BulletCrafting_Copper", "Bullet Tips - Iron");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 1));        

    return craftableItem;
  } 
//===========================CYBERNETICS
  SRP_CraftableItem RegisterCyberneticCore1Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_CyberCore_1", "Cybernetic Core - Rechargeable");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.SILVER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.TIN, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.GOLD, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.TIN, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.GOLD, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.ZINC, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.GOLD, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.TIN, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.ALTARSHARD, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCyberneticCore2Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_CyberCore_2", "Cybernetic Core - Non Rechargeable");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.SILVER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.SILVER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.GOLD, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.SILVER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.GOLD, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.ALTARSHARD, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCyberneticCore3Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_CyberCore_3", "Cybernetic Core - Kinetic Recharge");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.COPPER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.COPPER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.COPPER, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.COPPER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.IRON, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.PLATINUM, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.COPPER, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.ALTARSHARD, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCybernetic1Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Cybernetic_1", "Cybernetic Eye - Medical Augment");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.COPPER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.IRON, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.ZINC, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.COPPER, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.COPPER, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.SAPPHIRE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.AQUA, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.AMBER, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.JADE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.OPAL, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCybernetic2Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Cybernetic_2", "Cybernetic Arm - Medical Augment");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.ZINC, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.TIN, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.ZINC, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.PLATINUM, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.ZINC, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.BRONZE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.PLATINUM, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.COPPER, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.JADE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.AMBER, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.RUBY, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.OPAL, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.DIAMOND, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCybernetic3Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Cybernetic_3", "Cybernetic Leg - Medical Augment");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.BRONZE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.COPPER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.GOLD, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.ZINC, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.BRASS, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.COPPER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.BRONZE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.GOLD, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.OPAL, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.QUARTZ, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.TOPAZ, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.RUBY, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.AQUA, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCybernetic4Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Cybernetic_4", "Cybernetic Eye - Combat Augment");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.BRONZE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.BRASS, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.ZINC, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.IRON, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.GOLD, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.PLATINUM, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.DIAMOND, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.SAPPHIRE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.OPAL, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.AMETHYST, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.JADE, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCybernetic5Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Cybernetic_5", "Cybernetic Arm - Combat Augment");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.BRASS, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.ZINC, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.BRONZE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.BRASS, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.PLATINUM, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.BRONZE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.BRASS, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.ZINC, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.PLATINUM, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.PLATINUM, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.AMBER, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.AQUA, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.OPAL, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.DIAMOND, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.RUBY, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCybernetic6Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Cybernetic_6", "Cybernetic Leg - Combat Augment");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.SILVER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.BRASS, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.BRASS, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.BRONZE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.ZINC, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.BRASS, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.BRASS, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.BRONZE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.RUBY, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.OPAL, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.SAPPHIRE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.TOPAZ, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.QUARTZ, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCybernetic7Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Cybernetic_7", "Cybernetic Eye - Utility Augment");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.ZINC, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.GOLD, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.TIN, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.SILVER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.PLATINUM, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.BRONZE, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.IRON, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.PLATINUM, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.ZINC, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.JADE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.JADE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.DIAMOND, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.JADE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.JADE, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCybernetic8Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Cybernetic_8", "Cybernetic Arm - Utility Augment");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.BRONZE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.IRON, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.IRON, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.BRASS, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.ZINC, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.SILVER, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.RUBY, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.OPAL, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.AQUA, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.SAPPHIRE, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.TOPAZ, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCybernetic9Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Cybernetic_9", "Cybernetic Leg - Utility Augment");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.GOLD, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.SILVER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.COPPER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.BRASS, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.SILVER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.GOLD, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.BRONZE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.COPPER, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.QUARTZ, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.QUARTZ, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.RUBY, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.RUBY, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.SAPPHIRE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCybernetic10Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Cybernetic_10", "Cybernetic Eye - Utility Augment");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.TIN, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.GOLD, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.BRONZE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.SILVER, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.COPPER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.TIN, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.GOLD, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.SILVER, 2));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.PLATINUM, 2));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.OPAL, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.TOPAZ, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.JADE, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.DIAMOND, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.RUBY, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCybernetic11Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Cybernetic_11", "Cybernetic Arm - Utility Augment");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.COPPER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.TIN, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.COPPER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.SILVER, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.GOLD, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.BRASS, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.ZINC, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.TIN, 3));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.GOLD, 3));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.AMBER, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.AMETHYST, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.TOPAZ, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.RUBY, 4));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.OPAL, 4));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
  SRP_CraftableItem RegisterCybernetic12Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("DUB_Cybernetic_12", "Cybernetic Leg - Utility Augment");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.IRON, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate3", SRP_COLOR.BRASS, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate4", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate5", SRP_COLOR.BRONZE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.PLATINUM, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod2", SRP_COLOR.BRASS, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod3", SRP_COLOR.BRONZE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod4", SRP_COLOR.ZINC, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod5", SRP_COLOR.BRONZE, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone1", SRP_COLOR.OPAL, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone2", SRP_COLOR.SAPPHIRE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone3", SRP_COLOR.OPAL, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone4", SRP_COLOR.JADE, 5));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_PreciousStone5", SRP_COLOR.AMBER, 5));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    return craftableItem;
  }
//===========================MISC
  SRP_CraftableItem Register_CrossbowBroadBolt_Recipe()
  {
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("Ammo_BroadBolt", "Crossbow Bolt - Iron BroadBolt");
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate1", SRP_COLOR.BRONZE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalPlate2", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("SRP_MetalRod1", SRP_COLOR.IRON, 1));

    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Leather", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_MetalWire", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Smithing_Rope", SRP_COLOR.NONE, 1));
    craftableItem.RegisterIngredient(new SRP_ItemRequirement("Material_Shelter_Sticks", SRP_COLOR.NONE, 10));
    return craftableItem;
  }
//===========================END

};