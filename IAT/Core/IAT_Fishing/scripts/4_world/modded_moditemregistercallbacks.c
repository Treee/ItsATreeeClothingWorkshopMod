modded class ModItemRegisterCallbacks
{
  override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterOneHanded( pType, pBehavior );      
    pType.AddItemInHandsProfileIK("IAT_Fishing_CanOfWorms_ColorBase","dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can.anm");  
    
    pType.AddItemInHandsProfileIK("IAT_Fishing_Pearl_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/carp_live.anm");	
    pType.AddItemInHandsProfileIK("IAT_Fishing_Clam_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/tuna.anm");
    pType.AddItemInHandsProfileIK("IAT_Fishing_Clam_ColorBase_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/tuna.anm");
    
    pType.AddItemInHandsProfileIK("IAT_Fishing_Lure_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,	"dz/anims/anm/player/ik/gear/bait_worm.anm");    
		pType.AddItemInHandsProfileIK("IAT_Fishing_MetalLure_Kit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/sewing_kit.anm");
		pType.AddItemInHandsProfileIK("IAT_Fishing_WoodenLure_Kit", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/WoodenStick.anm"); 
    pType.AddItemInHandsProfileIK("IAT_Fishing_FreshWaterFish_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/carp_live.anm");	
    pType.AddItemInHandsProfileIK("IAT_Fishing_SaltWaterFish_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/carp_live.anm");	

    pType.AddItemInHandsProfileIK("IAT_Fishing_ClamFilletMeat", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,	"dz/anims/anm/player/ik/gear/mackerel_fillet.anm"); 
    pType.AddItemInHandsProfileIK("IAT_Fishing_SaltWaterFishFilletMeat_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,	"dz/anims/anm/player/ik/gear/mackerel_fillet.anm"); 
    pType.AddItemInHandsProfileIK("IAT_Fishing_FreshWaterFishFilletMeat_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,	"dz/anims/anm/player/ik/gear/mackerel_fillet.anm"); 

		pType.AddItemInHandsProfileIK("IAT_Fishing_WoodenRod_Kit", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/WoodenStick.anm"); 
    pType.AddItemInHandsProfileIK("IAT_Fishing_WoodenRod_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/ImprovisedFishingRod.anm");
  };

  override void RegisterHeavy( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
  {
    super.RegisterHeavy( pType, pBehavior );    
    pType.AddItemInHandsProfileIK("IAT_Fishing_KitBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("IAT_Fishing_Tacklebox_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("IAT_Fishing_Aquarium_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("IAT_Fishing_WoodenFishHanger_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("IAT_Fishing_WoodenFishRack_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    
    pType.AddItemInHandsProfileIK("IAT_Fishing_SailFish_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("IAT_Fishing_HammerHeadFish_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    
  };
}
