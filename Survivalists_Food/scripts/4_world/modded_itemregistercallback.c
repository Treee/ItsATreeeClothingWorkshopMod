modded class ModItemRegisterCallbacks
{
  override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
  { //! Attachments
    super.RegisterOneHanded( pType, pBehavior );
    pType.AddItemInHandsProfileIK("SRPsushi","dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/zucchini_seeds_pack.anm");
    pType.AddItemInHandsProfileIK("SRPdonut","dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/zucchini_seeds_pack.anm");
  }
	override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
	  pType.AddItemInHandsProfileIK("srpStew_Base", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/Cauldron.anm");
	}
};
