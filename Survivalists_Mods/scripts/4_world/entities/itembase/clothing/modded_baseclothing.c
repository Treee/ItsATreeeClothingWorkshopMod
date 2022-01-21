modded class GasMask
{
  override bool IsObstructingVoice()
	{
		return false;
	}
};

modded class GP5GasMask
{
  override bool IsObstructingVoice()
	{
		return false;
	}
};

modded class MotoHelmet_ColorBase
{
  override bool IsObstructingVoice()
	{
		return false;
	}
};

modded class DarkMotoHelmet_ColorBase
{
  override bool IsObstructingVoice()
	{
		return false;
	}
};

class Skylar_BioZone_Protection extends Armband_ColorBase
{
  override bool CanDetachAttachment (EntityAI parent)
	{
		return false;
	}
  override void OnWasDetached( EntityAI parent, int slot_id )
  {
    this.Delete();
  }
};
class Sneakers_Skylar_Biozone extends Sneakers_ColorBase
{
  override bool CanDetachAttachment (EntityAI parent)
	{
		return false;
	}
  override void OnWasDetached( EntityAI parent, int slot_id )
  {
    this.Delete();
  }
};