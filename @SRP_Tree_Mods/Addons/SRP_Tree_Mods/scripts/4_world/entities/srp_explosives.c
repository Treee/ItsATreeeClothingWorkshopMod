class SRP_Dynamite_Stick extends Grenade_Base
{
  void SRP_Dynamite_Stick() {
    SetAmmoType("RGD5Grenade_Ammo");
		SetFuseDelay(4);
		SetParticleExplosion(ParticleList.RGD5);
  }

  void ~SRP_Dynamite_Stick() {};

  override void SetActions()
	{
    super.SetActions();
    RemoveAction(ActionUnpin);
    RemoveAction(ActionPin);
		AddAction(ActionLightExplosivesInHands); // only alow the player to light the fuse
	}
	
}