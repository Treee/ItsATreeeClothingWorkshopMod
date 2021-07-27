modded class ModItemRegisterCallbacks
{
  override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterOneHanded( pType, pBehavior );        
    pType.AddItemInHandsProfileIK("SRP_LeatherPouch_Default", "dz/anims/workspaces/player/player_main/weapons/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/duct_tape.anm"); 
    pType.AddItemInHandsProfileIK("SRP_LeatherPouch_Medieval", "dz/anims/workspaces/player/player_main/weapons/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/duct_tape.anm"); 
    pType.AddItemInHandsProfileIK("SRP_LeatherPouch_Small", "dz/anims/workspaces/player/player_main/weapons/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/duct_tape.anm"); 
    pType.AddItemInHandsProfileIK("SRP_BulletKit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/ammunition/9mm_25rnd_box.anm");
    pType.AddItemInHandsProfileIK("SRP_BulletCrafting_Shotgun60Count", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/ammunition/9mm_25rnd_box.anm");
    pType.AddItemInHandsProfileIK("SRP_BulletCrafting_Pistol60Count", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/ammunition/9mm_25rnd_box.anm");
    pType.AddItemInHandsProfileIK("SRP_BulletCrafting_Rifle40Count", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/ammunition/9mm_25rnd_box.anm");
  };

  override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterTwoHanded( pType, pBehavior );    
    pType.AddItemInHandsProfileIK("SRP_Bowl_Wood", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_BowlSquare_Wood", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_Guitar_Alpocalypse", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/baseballbat.anm");
  }

  override void RegisterHeavy( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
  {
    super.RegisterHeavy( pType, pBehavior );
    pType.AddItemInHandsProfileIK("SRP_KitBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_AdvancedWorkbench", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_MedicalBed_Frame", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_MedicalBed_Wood", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_MedicalBed_Mattress", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_BloodPressureMonitor", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_PostBox", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_PostBoxBlue", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_PostBoxWooden", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_WoodenBox_Square", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");    
    pType.AddItemInHandsProfileIK("SRP_WoodenBox_Cask", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");    
  };
}
