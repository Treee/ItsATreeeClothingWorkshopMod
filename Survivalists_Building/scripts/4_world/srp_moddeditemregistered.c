modded class ModItemRegisterCallbacks
{
  // override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  // {
  //   super.RegisterOneHanded( pType, pBehavior );     
  // };

  // override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
  // {
  //   super.RegisterTwoHanded( pType, pBehavior );  
  // }

  override void RegisterHeavy( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
  {
    super.RegisterHeavy( pType, pBehavior );
    
    pType.AddItemInHandsProfileIK("SRP_Building_KitBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/wooden_crate.anm");
  };
}