modded class PlayerBase
{
  void CloseEyesBecauseSleeping() {
    PPEffects.EnableBurlapSackBlindness();			
    SetMasterAttenuation("BurlapSackAttenuation");
  }

  void OpenEyesBecauseAwake() {
    PPEffects.DisableBurlapSackBlindness();			
    SetInventorySoftLock(false);
    SetMasterAttenuation("");
  }

};