enum SRP_FISH_SIZE
{
    SMALL = 1,
    MEDIUM,
    LARGE,
    EPIC
}
class SRP_Fish_Base extends Edible_Base
{
    protected int m_FishSize = 1;
    protected string m_FilletType = "MackerelFilletMeat";

    void SRP_FreshWaterFish_Base()
    {
        Print("New object " + GetType());

        string fishType = GetType();
        fishType.ToLower();
        if (fishType.Contains("_medium"))
        {
            SetScale(1.25);
            m_FishSize = 2;
        }
        else if (fishType.Contains("_large"))
        {
            SetScale(1.65);
            m_FishSize = 3;
        }
        else if (fishType.Contains("_epic"))
        {
            SetScale(2.2);
            m_FishSize = 4;
        }
        else
        {
            SetScale(0.75);
            m_FishSize = 1;
        }

        m_FilletType = "MackerelFilletMeat";
        TStringArray parts = {};
        fishType.Split("_", parts);
        if (GetFilletPrefix() != "")
        {
            m_FilletType = string.Format("%1_%2", GetFilletPrefix(), parts.Get(1));
        }
    }
    string GetFilletPrefix()
    {
        return "";
    }
    string GetFilletType()
    {
        return m_FilletType;
    }
    int GetFishSize()
    {
        return m_FishSize;
    }
    bool IsFreshWater()
    {
        return false;
    }
    bool IsSaltWater()
    {
        return false;
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
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionForceFeed);
		AddAction(ActionEatMeat);

		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
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