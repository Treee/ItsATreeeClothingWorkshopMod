modded class Hammer
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
}

modded class WoodAxe
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
}

modded class Shovel
{

	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionBuildPart);
		AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
}

modded class SledgeHammer
{
	override bool IsMeleeFinisher()
	{
		return true;
	}
	
	override void SetActions()
	{
		super.SetActions();	
		AddAction(ActionAttach);
		AddAction(ActionDetach);
    // remove dat raiding ability
    RemoveAction(ActionDismantlePart);
	}
}

modded class Hatchet
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
}

modded class BaseballBat
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
}

modded class NailedBaseballBat
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
}

modded class FirefighterAxe
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionAttach);
		AddAction(ActionDetach);
	}
}

modded class Crowbar
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionAttach);
		AddAction(ActionDetach);
    AddAction(ActionSawPlanks);
	}
};
