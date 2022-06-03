modded class ModItemRegisterCallbacks
{
  override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterOneHanded( pType, pBehavior );     
    
    pType.AddItemInHandsProfileIK("SRP_ConsumableDrug_Cocaine", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_ConsumableDrug_CocaineTainted", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm");

		pType.AddItemInHandsProfileIK("SRP_SealedLetter_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/paper.anm");
    pType.AddItemInHandsProfileIK("SRP_WaxBar_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");    
    pType.AddItemInHandsProfileIK("SRP_SealPress", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");    

    pType.AddItemInHandsProfileIK("SRP_CassettePlayer", "dz/anims/workspaces/player/player_main/props/player_main_1h_radio.asi", pBehavior, "dz/anims/anm/player/ik/gear/Radio.anm");     
    pType.AddItemInHandsProfileIK("SRP_SewingThread", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/duct_tape.anm"); 
    pType.AddItemInHandsProfileIK("SRP_LeatherPouch_Default", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/duct_tape.anm"); 
    pType.AddItemInHandsProfileIK("SRP_LeatherPouch_Medieval", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/duct_tape.anm"); 
    pType.AddItemInHandsProfileIK("SRP_LeatherPouch_Small", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/duct_tape.anm");     
    pType.AddItemInHandsProfileIK("SRP_BulletCrafting_Pistol60Count", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_BulletCrafting_Rifle40Count", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_BulletCrafting_Shotgun60Count", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");    
    pType.AddItemInHandsProfileIK("SRP_HiddenStash_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm"); 
    pType.AddItemInHandsProfileIK("SRP_FoodCanRaw_Colorbase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm"); 
    pType.AddItemInHandsProfileIK("SRP_FoodCanPreserved_Colorbase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can.anm"); 
    pType.AddItemInHandsProfileIK("SRP_FoodCanPreserved_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm"); 
    pType.AddItemInHandsProfileIK("SRP_Handdrill", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm");
    pType.AddItemInHandsProfileIK("SRP_Handdrill_Old", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm");
    pType.AddItemInHandsProfileIK("SRP_Clamp", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/steak_knife.anm");
    pType.AddItemInHandsProfileIK("SRP_CollectableSign_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/steak_knife.anm");
    pType.AddItemInHandsProfileIK("SRP_CollectableSign2_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/steak_knife.anm");
    pType.AddItemInHandsProfileIK("SRP_Letter_Colorbase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/steak_knife.anm");
    pType.AddItemInHandsProfileIK("SRP_Caliper", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");    
    pType.AddItemInHandsProfileIK("SRP_Dynamite_Stick", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");    
    pType.AddItemInHandsProfileIK("SRP_Dynamite_Stick_Kit", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");    
    pType.AddItemInHandsProfileIK("SRP_Dynamite_Stack", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");    
    pType.AddItemInHandsProfileIK("SRP_DiceSingle_White", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("SRP_DiceRpg_d4", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("SRP_PlantHerbEdible_Colorbase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");    
    pType.AddItemInHandsProfileIK("Brookmint", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("Valerian", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("GreenAmanita", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm"); 
    pType.AddItemInHandsProfileIK("SRP_DeskNamePlate", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_KarambitKnife", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/kitchenknife.anm"); 
    pType.AddItemInHandsProfileIK("SRP_WarCleaver", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/kitchenknife.anm"); 
    pType.AddItemInHandsProfileIK("SRP_PlayingCard_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("SRP_CraftingMaterial_Dye_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("SRP_PatchFlag_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("SRP_PatchLogo_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("SRP_DeckOfCards", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("SRP_KatanaSlim_Sheath", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/steak_knife.anm");    
    
    pType.AddItemInHandsProfileIK("SRP_MortarPestle", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/pen.anm");
    pType.AddItemInHandsProfileIK("SRP_CrushedHerb_Colorbase", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    //Clothing
    
    // Vest Pouches
    pType.AddItemInHandsProfileIK("SRP_PouchBase_Small", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,	"dz/anims/anm/player/ik/gear/canteen.anm");	
    pType.AddItemInHandsProfileIK("SRP_PouchBase_Large", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,	"dz/anims/anm/player/ik/gear/canteen.anm");	
    pType.AddItemInHandsProfileIK("SRP_Small_Bottle_Tan", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,	"dz/anims/anm/player/ik/gear/canteen.anm");	

    // Hats
    pType.AddItemInHandsProfileIK("SRP_HannyaMask", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_Ballistic_Mask", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_PunisherMask", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_BoneMonsterMask", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_Goggles_Head", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_Goggles_Face", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_Cowboy_Hat", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_EyePatch", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_Burlap_Mask", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("HookHand", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_Pouch_Belt", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_Holster_Belt", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    
    // Belts
    pType.AddItemInHandsProfileIK("SRP_Elbow_Knee_Pads_Green", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_Bandoiler", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_ShoulderSling", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
  };

  override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterTwoHanded( pType, pBehavior );  
    pType.AddItemInHandsProfileIK("SRP_HandOfCards", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_Bowl_Wood", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_MortarBowl", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_Rolltop_Bag", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_Cardboardbox", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_BowlSquare_Wood", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_Guitar_Alpocalypse", "dz/anims/workspaces/player/player_main/weapons/player_main_izh43.asi", pBehavior, "dz/anims/anm/player/ik/weapons/izh43.anm");

    pType.AddItemInHandsProfileIK("SRP_JPC_Vest_Green", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
    pType.AddItemInHandsProfileIK("SRP_Tac_Vest_Green", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
    pType.AddItemInHandsProfileIK("SRP_Tac_Tec_Vest_Green", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
    pType.AddItemInHandsProfileIK("SRP_Chestrig_Green", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
    pType.AddItemInHandsProfileIK("SRP_Army_Vest_1_Green", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
    pType.AddItemInHandsProfileIK("SRP_Army_Vest_2_Green", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
    pType.AddItemInHandsProfileIK("SRP_Ratnik_Green", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
    pType.AddItemInHandsProfileIK("SRP_Light_Ratnik_Green", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
    pType.AddItemInHandsProfileIK("SRP_MessengerBag_Leather", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");

    pType.AddItemInHandsProfileIK("SRP_KatanaBamboo", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
    pType.AddItemInHandsProfileIK("SRP_KatanaSlim", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
    pType.AddItemInHandsProfileIK("SRP_BerserkSword", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
    pType.AddItemInHandsProfileIK("SRP_CrystalMace", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/baseballbat.anm");
    pType.AddItemInHandsProfileIK("SRP_BeanBasher", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/baseballbat.anm");    
    pType.AddItemInHandsProfileIK("SRP_SlingBackpack_Default", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_SkeletonFrame", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_PortableGasLamp", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_Staff_Wooden_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_spear.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/advanced_spear.anm"); 
    pType.AddItemInHandsProfileIK("SRP_Staff_Skull_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_spear.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/advanced_spear.anm"); 
    pType.AddItemInHandsProfileIK("SRP_Staff_Sun_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_spear.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/advanced_spear.anm"); 
    pType.AddItemInHandsProfileIK("SRP_Staff_Copper_Basic", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_spear.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/advanced_spear.anm"); 
    pType.AddItemInHandsProfileIK("SRP_Staff_Spear_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_spear.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/advanced_spear.anm"); 
  }

  override void RegisterHeavy( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
  {
    super.RegisterHeavy( pType, pBehavior );
    pType.AddItemInHandsProfileIK("SRP_KitBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_CraftingMaterial_BagBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_DeployableContainer_Base", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_Furniture_LogStump", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_AdvancedWorkbench", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_WornWorkbench", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_WorkbenchDrill", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_WorkbenchClamp", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_LatheWorkbench", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_LatheBelt", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_LatheClamp", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_LatheTable", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_LatheGearDrive", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_MedicalBed_Frame", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_MedicalBed_Wood", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_MedicalBed_Mattress", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_BloodPressureMonitor", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_PostBox", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_PostBoxBlue", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_PostBoxWooden", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_Furniture_LogBenchSmall", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_Furniture_WoodBenchSmall", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_Furniture_WoodBenchSlim", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_Furniture_PileOfPlanks", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_Furniture_SmallLogPile", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_Furniture_LargeLogPile", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_WoodenBox_Square", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");    
    pType.AddItemInHandsProfileIK("SRP_WoodenBox_Cask", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");   
    pType.AddItemInHandsProfileIK("SRP_LabEquipment_Projector", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_BedsideTable", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_BedsideTableMetal", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_CraftingMaterial_MetalScraps", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_Carpet", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/metal_sheet.anm");
    pType.AddItemInHandsProfileIK("SRP_CarpetRug", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/metal_sheet.anm");
    pType.AddItemInHandsProfileIK("SRP_CraftingMaterial_Metal", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");    
    pType.AddItemInHandsProfileIK("SRP_GarbageBin_Colorbase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");    
    pType.AddItemInHandsProfileIK("SRP_GuitarCase_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");    
  };
}
