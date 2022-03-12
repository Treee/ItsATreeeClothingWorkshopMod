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

	override float GetProtectionLevel(int type, bool consider_filter = false, int system = 0)
	{
		if (IsDamageDestroyed() || (HasQuantity() && GetQuantity() <= 0) )
		{
			return 0;
		}

		string subclass_path, entryName;

		switch (type)
		{
			case DEF_BIOLOGICAL:
				entryName = "biological";
				break;
			case DEF_CHEMICAL:
				entryName = "chemical";
				break;	
			default:
				entryName = "biological";
				break;
		}
		
		subclass_path = "CfgVehicles " + this.GetType() + " Protection ";
		
		return GetGame().ConfigGetFloat(subclass_path + entryName);
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
  
  override float GetProtectionLevel(int type, bool consider_filter = false, int system = 0)
	{
		if (IsDamageDestroyed() || (HasQuantity() && GetQuantity() <= 0) )
		{
			return 0;
		}

		string subclass_path, entryName;

		switch (type)
		{
			case DEF_BIOLOGICAL:
				entryName = "biological";
				break;
			case DEF_CHEMICAL:
				entryName = "chemical";
				break;	
			default:
				entryName = "biological";
				break;
		}
		
		subclass_path = "CfgVehicles " + this.GetType() + " Protection ";
		
		return GetGame().ConfigGetFloat(subclass_path + entryName);
	}

};