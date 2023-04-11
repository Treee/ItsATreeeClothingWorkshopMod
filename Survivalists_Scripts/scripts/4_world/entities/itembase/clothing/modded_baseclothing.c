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

class SRP_DoubleArmband_ColorBase extends Armband_ColorBase
{
  string m_DisplayTexture = "";

  override void EOnInit(IEntity other, int extra)
	{
    int idx1;
		TStringArray item_texture_array = new TStringArray;
    GetGame().ConfigGetTextArray("cfgVehicles " + GetType() + " hiddenSelectionsTextures", item_texture_array);	
    m_DisplayTexture = item_texture_array.Get(0);
	}

  void HideSelectionsForDisplayCase()
  {
    int idx1;
    TStringArray item_selection_array = new TStringArray;
    GetGame().ConfigGetTextArray("cfgVehicles SRP_DoubleArmband_ColorBase hiddenSelections", item_selection_array);	
    
    // hide everything
    for(int i = 0; i < item_selection_array.Count(); i++)
    {
      idx1 = GetHiddenSelectionIndex(item_selection_array.Get(i));
      if (item_selection_array.Get(i) == "camoGround" || item_selection_array.Get(i) == "camoFemale_big_a" || item_selection_array.Get(i) == "camoFemale_small_a")
      {
        SetObjectTexture(idx1,m_DisplayTexture);
        // Print("Show: selection: " + item_selection_array.Get(i));
      }
      else
      {
        SetObjectTexture(idx1,"");
        // Print("HIDE: selection: " + item_selection_array.Get(i));
      }
    }
  }

  void ResetSelectionsForWearing()
  {
    int idx1;
    TStringArray item_selection_array = new TStringArray;
    GetGame().ConfigGetTextArray("cfgVehicles SRP_DoubleArmband_ColorBase hiddenSelections", item_selection_array);	

    // show all
    for(int i = 0; i < item_selection_array.Count(); i++)
    {
      idx1 = GetHiddenSelectionIndex(item_selection_array.Get(i));
      SetObjectTexture(idx1,m_DisplayTexture);
      // Print("show: selection: " + item_selection_array.Get(i));
    } 
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