modded class ModItemRegisterCallbacks
{
  override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
  { //! Attachments
    super.RegisterOneHanded( pType, pBehavior );
    pType.AddItemInHandsProfileIK("SRPsushi","dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/zucchini_seeds_pack.anm");
    pType.AddItemInHandsProfileIK("SRPdonut","dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/zucchini_seeds_pack.anm");

    pType.AddItemInHandsProfileIK("SRP_FoodCanRaw_Colorbase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm"); 
    pType.AddItemInHandsProfileIK("SRP_FoodCanPreserved_Colorbase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can.anm"); 
    pType.AddItemInHandsProfileIK("SRP_FoodCanPreserved_Opened", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm"); 

    pType.AddItemInHandsProfileIK("SRP_PlantHerbEdible_Colorbase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");    
    pType.AddItemInHandsProfileIK("Brookmint", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("Valerian", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("GreenAmanita", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/food_can_opened.anm"); 

  }
	override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
	  pType.AddItemInHandsProfileIK("srpStew_Base", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/Cauldron.anm");
	}
};
