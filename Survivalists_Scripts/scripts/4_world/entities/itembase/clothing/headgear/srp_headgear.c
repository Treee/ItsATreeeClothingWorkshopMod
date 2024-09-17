class SRP_MinerHelmet extends Headtorch_ColorBase
{
  void SRP_MinerHelmet()
  {
    // these id's correspond with the selections on the miner helmet. first item starts at index 0.
    REFLECTOR_ID = 3;
    GLASS_ID = 4;
    m_OnHeadLocalPos = Vector(1,1,0);
  }
};


class SRP_Goggles_Head extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionPutGogglesOnFace);
	}
};

class SRP_Goggles_Face extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionPutGogglesOnHead);
	}
};

class SRP_MilitaryPatrolCap_ColorBase extends BaseballCap_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionFlipCapBackward);
	}
};
class SRP_MilitaryPatrolCapBackwards_ColorBase extends BaseballCap_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionFlipCapForward);
	}
};


class SRP_SlimHelmetFull extends HelmetBase
{
  override void SetActions()
	{
		super.SetActions();
    AddAction(ActionTurnOnHelmetFlashlight); //use default light actions instead?
		AddAction(ActionTurnOffHelmetFlashlight);
		AddAction(ActionToggleNVG);
	}
};
class SRP_SlimHelmetFull_Kain extends SRP_SlimHelmetFull{};

class SRP_ModernHelmet_ColorBase extends HelmetBase
{
  override void SetActions()
	{
		super.SetActions();
    AddAction(ActionTurnOnHelmetFlashlight); //use default light actions instead?
		AddAction(ActionTurnOffHelmetFlashlight);
		AddAction(ActionToggleNVG);
	}
};
class SRP_ModernHelmet_Default extends SRP_ModernHelmet_ColorBase{};
class SRP_ModernHelmet_ScrimUzi extends SRP_ModernHelmet_ColorBase{};

class SRP_HaloODSTHelmet_ColorBase extends HelmetBase
{
    override void SetActions()
	{
		super.SetActions();
        AddAction(ActionTurnOnHelmetFlashlight); //use default light actions instead?
		AddAction(ActionTurnOffHelmetFlashlight);
		AddAction(ActionToggleNVG);
	}
};
class SRP_HaloODSTHelmet_Basic extends SRP_HaloODSTHelmet_ColorBase{};
class SRP_HaloODSTHelmet_shifty0423 extends SRP_HaloODSTHelmet_ColorBase{};

class SRP_Comtacs_ColorBase extends BalaclavaMask_ColorBase{};
class SRP_EarProtection_ColorBase extends SRP_Comtacs_ColorBase{};

class SRP_CombatHelmet_ColorBase extends HelmetBase
{
  override void SetActions()
	{
		super.SetActions();
    AddAction(ActionTurnOnHelmetFlashlight); //use default light actions instead?
		AddAction(ActionTurnOffHelmetFlashlight);
		AddAction(ActionToggleNVG);
	}
};
class SRP_CombatHelmetV2_ColorBase extends HelmetBase
{
  override void SetActions()
	{
		super.SetActions();
    AddAction(ActionTurnOnHelmetFlashlight); //use default light actions instead?
		AddAction(ActionTurnOffHelmetFlashlight);
		AddAction(ActionToggleNVG);
	}
};
class SRP_CombatHelmet6B47_ColorBase extends HelmetBase
{
  override void SetActions()
	{
		super.SetActions();
    AddAction(ActionTurnOnHelmetFlashlight); //use default light actions instead?
		AddAction(ActionTurnOffHelmetFlashlight);
		AddAction(ActionToggleNVG);
	}
};
class SRP_CombatHelmetHighCut_ColorBase extends HelmetBase
{
  override void SetActions()
	{
		super.SetActions();
    AddAction(ActionTurnOnHelmetFlashlight); //use default light actions instead?
		AddAction(ActionTurnOffHelmetFlashlight);
		AddAction(ActionToggleNVG);
	}
};
class SRP_CombatHelmetAltyn_ColorBase extends HelmetBase
{
  override void SetActions()
	{
		super.SetActions();
    AddAction(ActionTurnOnHelmetFlashlight); //use default light actions instead?
		AddAction(ActionTurnOffHelmetFlashlight);
		AddAction(ActionToggleNVG);
	}
};

class SRP_HornetHelmet_ColorBase extends HelmetBase
{
  override void SetActions()
	{
		super.SetActions();
    AddAction(ActionTurnOnHelmetFlashlight); //use default light actions instead?
		AddAction(ActionTurnOffHelmetFlashlight);
		AddAction(ActionToggleNVG);
	}
};

class SRP_AdvancedBioHelmet_ColorBase extends HelmetBase
{
    override void SetActions()
	{
		super.SetActions();
		AddAction(ActionToggleNVG);
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
class SRP_AdvancedBioHelmet_Basic extends SRP_AdvancedBioHelmet_ColorBase{};
class SRP_AdvancedBioHelmet_ddog659 extends SRP_AdvancedBioHelmet_ColorBase{};
