class SRP_BBQ_ColorBase extends BarrelHoles_ColorBase
{
  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
	}
	
  override bool CanShowSmoke()
	{
		return true;
	}
  protected override void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Lid2",0);
			SetAnimationPhase("Lid",1);
		}
		else
		{
			SetAnimationPhase("Lid2",1);
			SetAnimationPhase("Lid",0);
		}
	}

  override protected vector GetFireEffectPosition()
	{
		return Vector( 0, 0.804, 0 );
	}
	
	override protected vector GetSmokeEffectPosition()
	{
		return Vector( 0.322, 1.224, 0 );
	}

	override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
    
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }
	
  override bool CanDisplayAttachmentCategory( string category_name )
	{
		if ( ( category_name == "CookingEquipment" ) || ( category_name == "Smoking" ) )
		{
			return IsOpen();
		}			
		else
		{
			return !IsOpen();
		}
				//super
		return super.CanDisplayAttachmentCategory( category_name );
	}	

  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_BBQ_Basic extends SRP_BBQ_ColorBase{};
class SRP_BBQ_Grill extends SRP_BBQ_ColorBase
{
  void SRP_BBQ_Grill()
  {
    Open();
  }

  override bool CanDisplayAttachmentCategory( string category_name )
	{
		return true;
	}	

  override protected vector GetFireEffectPosition()
	{
		return Vector( 0, 0.030, 0 );
	}
	
	override protected vector GetSmokeEffectPosition()
	{
		return Vector( 0, 0.30, 0 );
	}
  override void SoundBarrelOpenPlay(){}
	override void SoundBarrelClosePlay(){}
};
class SRP_BBQ_FirePit extends SRP_BBQ_ColorBase
{
  void SRP_BBQ_FirePit()
  {
    Open();
  }

  override bool CanDisplayAttachmentCategory( string category_name )
	{
		return true;
	}
  
  override protected vector GetFireEffectPosition()
	{
		return Vector( 0, 0.163, 0 );
	}
	
	override protected vector GetSmokeEffectPosition()
	{
		return Vector( 0, 0.463, 0 );
	}
  override void SoundBarrelOpenPlay(){}
	override void SoundBarrelClosePlay(){}

};
