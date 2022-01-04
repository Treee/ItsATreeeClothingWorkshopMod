class SRP_MinerHelmet extends Headtorch_ColorBase
{
  void SRP_MinerHelmet() 
  {
    // these id's correspond with the selections on the miner helmet. first item starts at index 0.
    REFLECTOR_ID = 3;
    GLASS_ID = 4;
  }
}


class SRP_Goggles_Head extends Clothing
{
	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionPutGogglesOnFace);
	}
}

class SRP_Goggles_Face extends Clothing
{
	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionPutGogglesOnHead);
	}
}

class SRP_SlimHelmetFull: Mich2001Helmet{};

class SRP_SlimHelmetFull_Kain extends SRP_SlimHelmetFull{};
