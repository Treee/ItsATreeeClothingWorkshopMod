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

class SRP_DoubleArmband_ColorBase extends Armband_ColorBase{};

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

class Sneakers_Sneaky extends Sneakers_ColorBase
{
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


class SRP_EventArmband extends Armband_ColorBase
{
  override void OnWasDetached( EntityAI parent, int slot_id )
  {
    Delete();
  }
};
class Armband_Event_Generic extends SRP_EventArmband{};
class Armband_Event_Espen extends SRP_EventArmband{};

class Flag_Event_Generic extends Flag_Base
{
  override void OnWasDetached( EntityAI parent, int slot_id )
  {
    Delete();
  }
};
class Flag_Event_Espen extends Flag_Base
{
  override void OnWasDetached( EntityAI parent, int slot_id )
  {
    Delete();
  }
};

class SRP_PatchFlag_Event_Generic extends SRP_PatchFlag_ColorBase
{
  override void OnWasDetached( EntityAI parent, int slot_id )
  {
    Delete();
  }
};
class SRP_PatchFlag_Event_Espen extends SRP_PatchFlag_ColorBase
{
  override void OnWasDetached( EntityAI parent, int slot_id )
  {
    Delete();
  }
};

class SRP_Armband_Base extends Clothing{};

class SRP_Armband_Event_Generic extends SRP_Armband_Base
{
  override void OnWasDetached( EntityAI parent, int slot_id )
  {
    Delete();
  }
};
class SRP_Armband_Event_Espen extends SRP_Armband_Base
{
  override void OnWasDetached( EntityAI parent, int slot_id )
  {
    Delete();
  }
};