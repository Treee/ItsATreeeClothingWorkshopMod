modded class ModItemRegisterCallbacks
{
  override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterOneHanded( pType, pBehavior );        
    // pType.AddItemInHandsProfileIK("SRP_SewingThread", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/duct_tape.anm"); 
    pType.AddItemInHandsProfileIK("SaltWaterFish_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/carp_live.anm");	
    pType.AddItemInHandsProfileIK("SaltWaterFishFilletMeat_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,	"dz/anims/anm/player/ik/gear/mackerel_fillet.anm"); 
    pType.AddItemInHandsProfileIK("FreshWaterFish_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/carp_live.anm");	
    pType.AddItemInHandsProfileIK("FreshWaterFishFilletMeat_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,	"dz/anims/anm/player/ik/gear/mackerel_fillet.anm"); 
    pType.AddItemInHandsProfileIK("FishingLure_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,	"dz/anims/anm/player/ik/gear/bait_worm.anm");
  };

  override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterTwoHanded( pType, pBehavior );
  }

  override void RegisterHeavy( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
  {
    super.RegisterHeavy( pType, pBehavior );
    pType.AddItemInHandsProfileIK("SailFish_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("HammerHeadFish_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
  };
}
