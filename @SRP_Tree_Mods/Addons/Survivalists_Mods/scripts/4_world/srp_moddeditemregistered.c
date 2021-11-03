modded class ModItemRegisterCallbacks
{
  override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterOneHanded( pType, pBehavior );        
    pType.AddItemInHandsProfileIK("SRP_LeatherPouch_Default", "dz/anims/workspaces/player/player_main/weapons/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/duct_tape.anm"); 
    pType.AddItemInHandsProfileIK("SRP_LeatherPouch_Medieval", "dz/anims/workspaces/player/player_main/weapons/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/duct_tape.anm"); 
    pType.AddItemInHandsProfileIK("SRP_LeatherPouch_Small", "dz/anims/workspaces/player/player_main/weapons/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/duct_tape.anm");     
    pType.AddItemInHandsProfileIK("SRP_BulletCrafting_Pistol60Count", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_BulletCrafting_Rifle40Count", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_BulletCrafting_Shotgun60Count", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_FoodCanRaw_Colorbase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm"); 
    pType.AddItemInHandsProfileIK("SRP_FoodCanPreserved_Colorbase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can.anm"); 
    pType.AddItemInHandsProfileIK("SRP_FoodCanPreserved_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm"); 
    pType.AddItemInHandsProfileIK("SRP_Handdrill", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm");
    pType.AddItemInHandsProfileIK("SRP_Handdrill_Old", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm");
    pType.AddItemInHandsProfileIK("SRP_Clamp", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/steak_knife.anm");
    pType.AddItemInHandsProfileIK("SRP_Caliper", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");    
    pType.AddItemInHandsProfileIK("SRP_DiceSingle_White", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_DiceSingle_WhiteRed", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_DiceSingle_BlackWhite", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_DiceSingle_BlackRed", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_DeskNamePlate", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_ConsumableDrug_Cocaine", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/compass.anm");
    pType.AddItemInHandsProfileIK("SRP_ConsumableDrug_CocaineTainted", "dz/anims/workspaces/player/player_main/props/player_main_1h_compass.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm");
    pType.AddItemInHandsProfileIK("SRP_Trenchknife", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/kitchenknife.anm"); 
    pType.AddItemInHandsProfileIK("SRP_KarambitKnife", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/kitchenknife.anm"); 
    pType.AddItemInHandsProfileIK("SRP_DrugBrick_Cocaine", "dz/anims/workspaces/player/player_main/weapons/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/duct_tape.anm");     
    pType.AddItemInHandsProfileIK("SRP_Mining_RawOre_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/gear/SmallStone.anm");
    pType.AddItemInHandsProfileIK("SRP_Mining_UnCutGem_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/gear/SmallStone.anm");
    pType.AddItemInHandsProfileIK("SRP_Mining_CutGem_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/gear/SmallStone.anm");    
    pType.AddItemInHandsProfileIK("SRP_ForgeIngot_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");
    pType.AddItemInHandsProfileIK("SRP_Coinage_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("SRP_Staff_UnCutGem", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");  

    //Clothing

    // Hats
    pType.AddItemInHandsProfileIK("SRP_HannyaMask", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_PunisherMask", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");
    pType.AddItemInHandsProfileIK("SRP_BoneMonsterMask", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/nioshface_mask.anm");

  };

  override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterTwoHanded( pType, pBehavior );    
    pType.AddItemInHandsProfileIK("SRP_Bowl_Wood", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_BowlSquare_Wood", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_Guitar_Alpocalypse", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/baseballbat.anm");
    pType.AddItemInHandsProfileIK("SRP_KatanaBamboo", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/baseballbat.anm");
    pType.AddItemInHandsProfileIK("SRP_Mining_StoneChunk_ColorBase", "dz/anims/workspaces/player/player_main/player_main_2h.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/stone.anm");
    pType.AddItemInHandsProfileIK("SRP_Tool_CoalRake", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_farminghoe.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/farming_hoe.anm");
    pType.AddItemInHandsProfileIK("SRP_ForgeCrucible_ColorBase", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_ForgeIngotMold_ColorBase", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
  }

  override void RegisterHeavy( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
  {
    super.RegisterHeavy( pType, pBehavior );
    pType.AddItemInHandsProfileIK("SRP_KitBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_DeployableContainer_Base", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_AdvancedWorkbench", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
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
    pType.AddItemInHandsProfileIK("SRP_WoodenBox_Square", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");    
    pType.AddItemInHandsProfileIK("SRP_WoodenBox_Cask", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");   
    pType.AddItemInHandsProfileIK("SRP_LabEquipment_Projector", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_DrugWorkbench", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_BedsideTable", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_BedsideTableMetal", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_CraftingMaterial_MetalScraps", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/metal_sheet.anm");
    pType.AddItemInHandsProfileIK("SRP_CraftingMaterial_Metal", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
  };
}
