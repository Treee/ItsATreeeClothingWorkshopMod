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
class SRP_LockerTriple_Colorbase extends SRP_Openable_Container
{
  protected override void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Doors1",1);
			SetAnimationPhase("Doors2",1);
			SetAnimationPhase("Doors3",1);
		}
		else
		{
			SetAnimationPhase("Doors1",0);
			SetAnimationPhase("Doors2",0);
			SetAnimationPhase("Doors3",0);
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
class SRP_LockerQuad_Colorbase extends SRP_Openable_Container
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
class SRP_LockerMilitary_Colorbase extends SRP_Openable_Container
{
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
};

//======================= SINGLE
class SRP_LockerSingle_Pelt extends SRP_LockerSingle_Colorbase{};
class SRP_LockerSingle_Black extends SRP_LockerSingle_Colorbase{};
class SRP_LockerSingle_Blue extends SRP_LockerSingle_Colorbase{};
class SRP_LockerSingle_Brown extends SRP_LockerSingle_Colorbase{};
class SRP_LockerSingle_Gray extends SRP_LockerSingle_Colorbase{};
class SRP_LockerSingle_Green extends SRP_LockerSingle_Colorbase{};
class SRP_LockerSingle_Orange extends SRP_LockerSingle_Colorbase{};
class SRP_LockerSingle_Pink extends SRP_LockerSingle_Colorbase{};
class SRP_LockerSingle_Purple extends SRP_LockerSingle_Colorbase{};
class SRP_LockerSingle_Red extends SRP_LockerSingle_Colorbase{};
class SRP_LockerSingle_White extends SRP_LockerSingle_Colorbase{};
class SRP_LockerSingle_Yellow extends SRP_LockerSingle_Colorbase{};

//======================= TRIPLE
class SRP_LockerTriple_Black extends SRP_LockerTriple_Colorbase{};
class SRP_LockerTriple_Blue extends SRP_LockerTriple_Colorbase{};
class SRP_LockerTriple_Brown extends SRP_LockerTriple_Colorbase{};
class SRP_LockerTriple_Gray extends SRP_LockerTriple_Colorbase{};
class SRP_LockerTriple_Green extends SRP_LockerTriple_Colorbase{};
class SRP_LockerTriple_Orange extends SRP_LockerTriple_Colorbase{};
class SRP_LockerTriple_Pink extends SRP_LockerTriple_Colorbase{};
class SRP_LockerTriple_Purple extends SRP_LockerTriple_Colorbase{};
class SRP_LockerTriple_Red extends SRP_LockerTriple_Colorbase{};
class SRP_LockerTriple_White extends SRP_LockerTriple_Colorbase{};
class SRP_LockerTriple_Yellow extends SRP_LockerTriple_Colorbase{};

//======================= QUAD
class SRP_LockerQuad_Black extends SRP_LockerQuad_Colorbase{};
class SRP_LockerQuad_Blue extends SRP_LockerQuad_Colorbase{};
class SRP_LockerQuad_Brown extends SRP_LockerQuad_Colorbase{};
class SRP_LockerQuad_Gray extends SRP_LockerQuad_Colorbase{};
class SRP_LockerQuad_Green extends SRP_LockerQuad_Colorbase{};
class SRP_LockerQuad_Orange extends SRP_LockerQuad_Colorbase{};
class SRP_LockerQuad_Pink extends SRP_LockerQuad_Colorbase{};
class SRP_LockerQuad_Purple extends SRP_LockerQuad_Colorbase{};
class SRP_LockerQuad_Red extends SRP_LockerQuad_Colorbase{};
class SRP_LockerQuad_White extends SRP_LockerQuad_Colorbase{};
class SRP_LockerQuad_Yellow extends SRP_LockerQuad_Colorbase{};

//======================= MILITARY
class SRP_LockerMilitary_Green extends SRP_LockerMilitary_Colorbase{};
class SRP_LockerMilitary_Black extends SRP_LockerMilitary_Colorbase{};
class SRP_LockerMilitary_Gray extends SRP_LockerMilitary_Colorbase{};
class SRP_LockerMilitary_Tan extends SRP_LockerMilitary_Colorbase{};
