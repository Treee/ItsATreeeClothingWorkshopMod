modded class ModItemRegisterCallbacks
{
  override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterOneHanded(pType,pBehavior);
    pType.AddItemInHandsProfileIK("SRP_PostBoxKeys_ColorBase", "dz/anims/workspaces/player/player_main/props/player_main_1h_keys.asi", pBehavior,"dz/anims/anm/player/ik/gear/handcuff_keys.anm");
  }

  override void RegisterHeavy( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
  {
    super.RegisterHeavy( pType, pBehavior );
    pType.AddItemInHandsProfileIK("SRP_PostBox_KitBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");

    // If people want to override the can put in hands this will be useful
    pType.AddItemInHandsProfileIK("SRP_PostBox", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_PostBoxBlue", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_PostBoxWooden", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/55galDrum.anm");

  };
}