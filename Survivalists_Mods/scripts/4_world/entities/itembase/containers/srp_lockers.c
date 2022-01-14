class SRP_LockerSingle_Colorbase extends SRP_Openable_Container
{
  protected override void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Doors1",1);
		}
		else
		{
			SetAnimationPhase("Doors1",0);
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
};
class SRP_Locker_SingleBlue extends SRP_LockerSingle_Colorbase{};

class SRP_LockerTriple_Colorbase extends SRP_Openable_Container{};
class SRP_Locker_TripleBlue extends SRP_LockerTriple_Colorbase{};
