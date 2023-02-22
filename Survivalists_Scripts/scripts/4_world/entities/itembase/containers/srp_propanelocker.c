class SRP_PropaneLocker_Colorbase extends SRP_Openable_Container
{
  void SRP_PropaneLocker_Colorbase()
	{
		ProcessInvulnerabilityCheck(GetInvulnerabilityTypeString());
	}
  protected override void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Doors1",1);
			SetAnimationPhase("Doors2",1);
		}
		else
		{
			SetAnimationPhase("Doors1",0);
			SetAnimationPhase("Doors2",0);
		}
	}
  override void SoundBarrelOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "SRP_Door_MetalOpen_SoundSet1", GetPosition() );
		sound.SetAutodestroy( true );
	}
	override void SoundBarrelClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "SRP_Door_MetalClose_SoundSet1", GetPosition() );
		sound.SetAutodestroy( true );
	}
  override string GetInvulnerabilityTypeString()
	{
		return "disableContainerDamage";
	}
};

class SRP_PropaneLocker_Basic extends SRP_PropaneLocker_Colorbase{};
