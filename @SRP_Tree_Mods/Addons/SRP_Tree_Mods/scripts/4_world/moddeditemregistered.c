modded class ModItemRegisterCallbacks
{
  override void RegisterHeavy( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
  {
    super.RegisterHeavy( pType, pBehavior );        
    pType.AddItemInHandsProfileIK("SRP_DrugWorkbench", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,				"dz/anims/anm/player/ik/heavy/55galDrum.anm");
    pType.AddItemInHandsProfileIK("SRP_LabEquipment_Projector", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior,				"dz/anims/anm/player/ik/heavy/55galDrum.anm");
  }  
}
