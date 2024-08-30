class SRP_Fish_Base extends Edible_Base
{
    protected int m_FishSize = -1;
    protected float m_FishScale = 0;
    protected string m_FilletType = "";

    void SRP_Fish_Base()
    {
        SetFishSize();
        SetFilletType();
    }
    override void EEInit()
	{
		super.EEInit();
        ScaleFish();
	}
    override void OnInventoryExit(Man player)
	{
		super.OnInventoryExit(player);
        ScaleFish();
	}

    //============================================== VANILLA OVERRIDE
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
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionForceFeed);
		AddAction(ActionEatMeat);

		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
	}
    //============================================== CUSTOM
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
        SetScale(m_FishScale);
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
    void SetFishSize()
    {
        m_FishSize = 1;
        float tempScale = 1.0;
        string fishType = GetType();
        fishType.ToLower();
        if (fishType.Contains("_medium"))
        {
            m_FishSize = 2;
            tempScale = 1.5;
        }
        else if (fishType.Contains("_large"))
        {
            m_FishSize = 3;
            tempScale = 2.5;
        }
        else if (fishType.Contains("_epic"))
        {
            m_FishSize = 4;
            tempScale = 4.5;
        }
        float normalizedQuantity = GetQuantity() / GetQuantityMax();
        m_FishScale = normalizedQuantity * tempScale;
        string debugText = string.Format("%1 scale: %2 norm: %3", GetType(), m_FishScale, normalizedQuantity);
        Print(debugText);
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