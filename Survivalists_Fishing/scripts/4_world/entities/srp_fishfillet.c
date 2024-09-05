class SRP_Fish_Base extends Edible_Base
{
    protected bool m_IsAttached = false;
    protected int m_FishSize = -1;
    protected float m_FishScale = 0;
    protected float m_DefaultFishScale = 1;

    protected string m_FilletType = "";

    void SRP_Fish_Base()
    {
        SetFishSize();
        SetFilletType();
        RegisterNetSyncVariableBool("m_IsAttached");
    }
    //============================================== VANILLA OVERRIDE
    override void EEInit()
	{
		super.EEInit();
        GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( ScaleFish, 100, false);
	}
    override void OnInventoryExit(Man player)
	{
		super.OnInventoryExit(player);
        ScaleFish();
	}
    override void OnWasDetached(EntityAI parent, int slot_id)
	{
		super.OnWasDetached(parent, slot_id);
        ScaleFish();
	}
    override void OnQuantityChanged(float delta)
	{
        super.OnQuantityChanged(delta);
        SetFishSize();
        ScaleFish();
	}
    override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
        if (m_IsAttached)
        {
            ScaleFish();
        }
  	};
    override string GetDisplayName()
    {
        string name = super.GetDisplayName();
        if (m_FishSize == -1)
            return name;

        return string.Format("%1 %2", GetFishSizeDisplayName(), name);
    }
    override bool CanBeCookedOnStick()
	{
		return false;
	}
	override bool CanBeCooked()
	{
		return false;
	}
	override bool IsCorpse()
	{
		return true;
	}
	override bool CanDecay()
	{
		return true;
	}
    override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
    override bool DisableVicinityIcon()
	{
		return m_IsAttached;
	}
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionForceFeed);
		AddAction(ActionEatMeat);

		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
	}
    //============================================== CUSTOM
    void SetIsAttached(bool state)
    {
        m_IsAttached = state;
    }
    string GetFilletPrefix()
    {
        return "";
    }
    string GetFilletType()
    {
        return m_FilletType;
    }
    void SetFilletType()
    {
        m_FilletType = "MackerelFilletMeat";
        TStringArray parts = {};
        GetType().Split("_", parts);
        if (GetFilletPrefix() != "")
            m_FilletType = string.Format("%1_%2", GetFilletPrefix(), parts.Get(1));
    }
    void ScaleFish()
    {
        if (GetGame().IsClient())
        {
            m_FishScale = CalculateFishScale();
            SetScale(m_FishScale);
        }
    }
    // geometric function technicaly but this is probly faster than doing actual math
    int GetNumberOfFillets()
    {
        switch(GetFishSize())
        {
            case 0:
                return 1;
            break;
            case 1:
                return 2;
            break;
            case 2:
                return 4;
            break;
            case 3:
                return 8;
            break;
        }
        return 1;
    }
    int GetFishSize()
    {
        return m_FishSize;
    }
    float CalculateFishScale()
    {
        float normalizedQuantity = (GetQuantity() / GetQuantityMax()) - 0.5;
        float tempScale = normalizedQuantity + m_DefaultFishScale;
        // PrintFormat("%1 scale: %2 norm: %3 Max: %4 current: %5 :: %6 :: takeable? %7", GetType(), tempScale, normalizedQuantity, GetQuantityMax(), GetQuantity(), this, IsTakeable());
        return tempScale;
    }
    void SetFishSize()
    {
        m_FishSize = 1;
        m_DefaultFishScale = 0.6;
        string fishType = GetType();
        fishType.ToLower();
        if (fishType.Contains("_medium"))
        {
            m_FishSize = 2;
            m_DefaultFishScale = 1.0;
        }
        else if (fishType.Contains("_large"))
        {
            m_FishSize = 3;
            m_DefaultFishScale = 1.6;
        }
        else if (fishType.Contains("_epic"))
        {
            m_FishSize = 4;
            m_DefaultFishScale = 2.5;
        }
    }
    string GetFishSizeDisplayName()
    {
        if (m_FishSize == 1)
            return "Small";
        else if (m_FishSize == 2)
            return "Medium";
        else if (m_FishSize == 3)
            return "Large";
        else if (m_FishSize == 4)
            return "Epic";
        return "";
    }
    bool IsFreshWater()
    {
        return false;
    }
    bool IsSaltWater()
    {
        return false;
    }
};

class SRP_FreshWaterFish_Base extends SRP_Fish_Base
{
    override string GetFilletPrefix()
    {
        return "SRP_FreshWaterFishFilletMeat";
    }
    override bool IsFreshWater()
    {
        return true;
    }
};
class SRP_SaltWaterFish_Base extends SRP_Fish_Base
{
    override string GetFilletPrefix()
    {
        return "SRP_SaltWaterFishFilletMeat";
    }
    override bool IsSaltWater()
    {
        return true;
    }
};

class SRP_FreshWaterFishFilletMeat_Base extends CarpFilletMeat
{
    override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
};

class SRP_FreshWaterFishFilletMeat_Trout extends SRP_FreshWaterFishFilletMeat_Base{};
class SRP_FreshWaterFishFilletMeat_MutantFish extends SRP_FreshWaterFishFilletMeat_Base{};
class SRP_FreshWaterFishFilletMeat_Splake extends SRP_FreshWaterFishFilletMeat_Base{};
class SRP_FreshWaterFishFilletMeat_Perch extends SRP_FreshWaterFishFilletMeat_Base{};
class SRP_FreshWaterFishFilletMeat_Tilapia extends SRP_FreshWaterFishFilletMeat_Base{};

class SRP_SaltWaterFishFilletMeat_Base extends MackerelFilletMeat
{
    override bool CanProcessDecay()
	{
		return !( GetAgents() & eAgents.FOOD_POISON );
	}
};

class SRP_SaltWaterFishFilletMeat_CoralFish extends SRP_SaltWaterFishFilletMeat_Base{};
class SRP_SaltWaterFishFilletMeat_AngelFish extends SRP_SaltWaterFishFilletMeat_Base{};
class SRP_SaltWaterFishFilletMeat_SailFish extends SRP_SaltWaterFishFilletMeat_Base{};
class SRP_SaltWaterFishFilletMeat_AnglerFish extends SRP_SaltWaterFishFilletMeat_Base{};
class SRP_SaltWaterFishFilletMeat_HammerHeadFish extends SRP_SaltWaterFishFilletMeat_Base{};