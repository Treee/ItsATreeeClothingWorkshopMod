modded class ModItemRegisterCallbacks
{
  override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterOneHanded( pType, pBehavior );
    // Mining
		pType.AddItemInHandsProfileIK("SRP_Mining_RawOre_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/SmallStone.anm");
		pType.AddItemInHandsProfileIK("SRP_Mining_RawGem_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/SmallStone.anm");
		pType.AddItemInHandsProfileIK("SRP_Mining_CutGem_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/SmallStone.anm");

    // Metallurgy
    pType.AddItemInHandsProfileIK("SRP_ForgeIngot_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");
    pType.AddItemInHandsProfileIK("SRP_Coinage_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");  
    pType.AddItemInHandsProfileIK("SRP_MiningTool_HammerBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");
  };

  override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterTwoHanded( pType, pBehavior );
    // Mining
    pType.AddItemInHandsProfileIK("SRP_Mining_StoneChunk_ColorBase", "dz/anims/workspaces/player/player_main/player_main_2h.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/stone.anm");

    // Metallurgy
    pType.AddItemInHandsProfileIK("SRP_MetalBucket_ColorBase", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_ForgeCrucible_ColorBase", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");    
    pType.AddItemInHandsProfileIK("SRP_ForgeIngotMold_ColorBase", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
    pType.AddItemInHandsProfileIK("SRP_Tool_CoalRake", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_farminghoe.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/farming_hoe.anm");

  }

  override void RegisterHeavy( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
  {
    super.RegisterHeavy( pType, pBehavior );

    // Metallurgy
    pType.AddItemInHandsProfileIK("SRP_MasonryMetallurgy_KitBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_ForgeIngotPlate_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_ForgeIngotRod_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
    pType.AddItemInHandsProfileIK("SRP_AdvancedStoneForgeWorkbench_Bellows", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
  };
}
