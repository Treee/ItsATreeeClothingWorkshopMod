modded class PlayerBase
{
  override void Init()
  {
    DayzPlayerItemBehaviorCfg 	toolsOneHanded = new DayzPlayerItemBehaviorCfg;
    toolsOneHanded.SetToolsOneHanded();
    
		GetDayZPlayerType().AddItemInHandsProfileIK("IAT_FacePaintStick", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/meat_human.anm");

    super.Init();
  }
};