class SRP_Clam extends Edible_Base
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionOpenClam);
	}

	override bool IsOpen()
	{
		return false;
	}

    override bool CanDecay()
	{
		return false;
	}
};
class SRP_Clam_Blue extends SRP_Clam{};
class SRP_Clam_Red extends SRP_Clam{};
class SRP_Clam_Silver extends SRP_Clam{};

class SRP_Clam_Opened extends Edible_Base
{
	override bool CanDecay()
	{
		return false;
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);
		if ( GetGame().IsDedicatedServer() )
        {
            if (slot_name == "SRP_ClamPearl" || slot_name == "SRP_ClamMeat")
            {
                AddHealth(-200);
            }
        }
	}
};
class SRP_Clam_Blue_Opened extends SRP_Clam_Opened{};
class SRP_Clam_Red_Opened extends SRP_Clam_Opened{};
class SRP_Clam_Silver_Opened extends SRP_Clam_Opened{};

class SRP_ClamFilletMeat extends Edible_Base
{
	override bool CanBeCooked()
	{
		return true;
	}

	override bool CanBeCookedOnStick()
	{
		return true;
	}

	override bool IsMeat()
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
