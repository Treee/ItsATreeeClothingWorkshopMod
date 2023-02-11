class SRP_BBQ_ColorBase extends SRP_FireplaceBase
{
  override protected vector GetFireEffectPosition()
	{
		return Vector( 0, 0.804, 0 );
	}
	
	override protected vector GetSmokeEffectPosition()
	{
		return Vector( 0.322, 1.224, 0 );
	}
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_BBQ_Basic extends SRP_BBQ_ColorBase{}; // smoker
class SRP_BBQ_Grill extends SRP_BBQ_ColorBase // rectangle cooker
{
  override protected vector GetFireEffectPosition()
	{
		return Vector( 0, 0.030, 0 );
	}
	override protected vector GetSmokeEffectPosition()
	{
		return Vector( 0, 0.30, 0 );
	}
};
class SRP_BBQ_FirePit extends SRP_BBQ_ColorBase // circular firepit
{
  // void SRP_BBQ_FirePit()
  // {
  //   Open();
  // }

  // override bool CanDisplayAttachmentCategory( string category_name )
	// {
	// 	return true;
	// }
  
  override protected vector GetFireEffectPosition()
	{
		return Vector( 0, 0.163, 0 );
	}
	
	override protected vector GetSmokeEffectPosition()
	{
		return Vector( 0, 0.463, 0 );
	}
  // override void SoundBarrelOpenPlay(){}
	// override void SoundBarrelClosePlay(){}
	
	// override void SetActions()
	// {
	// 	RemoveAction(ActionOpenBarrelHoles);
	// 	RemoveAction(ActionCloseBarrelHoles);
	// }
};

class SRP_FireplaceIndoor_Medieval extends SRP_FireplaceBase
{
  override bool IsFireplaceIndoor()
	{
		return true;
	}
  override protected vector GetFireEffectPosition()
	{
		return Vector( 0, 0.167, 0.122 );
	}
	override protected vector GetSmokeEffectPosition()
	{
		return Vector( 0, 2, -0.253 );
	}
  override bool CanBeDeconstructed()
  {
    return true;
  }
};
class SRP_FireplaceIndoor_Fancy extends SRP_FireplaceIndoor_Medieval
{
  override bool IsFireplaceIndoor()
	{
		return true;
	}
  override protected vector GetFireEffectPosition()
	{
		return Vector( 0, 0.208, 0 );
	}
	
	override protected vector GetSmokeEffectPosition()
	{
		return Vector( 0, 2, -0.253 );
	}
};
class SRP_FireplaceIndoor_FancyPink extends SRP_FireplaceIndoor_Medieval
{
  override protected vector GetFireEffectPosition()
	{
		return Vector( 0, 0.208, 0 );
	}
	
	override protected vector GetSmokeEffectPosition()
	{
		return Vector( 0, 2, -0.253 );
	}
};
class SRP_FireplaceIndoor_FancyBlue extends SRP_FireplaceIndoor_Medieval
{
  override protected vector GetFireEffectPosition()
	{
		return Vector( 0, 0.208, 0 );
	}
	override protected vector GetSmokeEffectPosition()
	{
		return Vector( 0, 2, -0.253 );
	}
};
class SRP_FireplaceIndoor_FancyGreen extends SRP_FireplaceIndoor_Medieval
{
  override protected vector GetFireEffectPosition()
	{
		return Vector( 0, 0.208, 0 );
	}
	override protected vector GetSmokeEffectPosition()
	{
		return Vector( 0, 2, -0.253 );
	}
};
