modded class ModItemRegisterCallbacks
{
  override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  {
    super.RegisterOneHanded( pType, pBehavior );
    pType.AddItemInHandsProfileIK("SRP_FacePaintStick", "dz/anims/workspaces/player/player_main/props/player_main_1h_morphine.asi", pBehavior,		"dz/anims/anm/player/ik/gear/morphine.anm");
  };
}
