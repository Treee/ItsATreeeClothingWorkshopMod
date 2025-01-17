modded class ToolBase
{
    override bool IsKnifeTool()
    {
        return true;
    }
}
modded class Hammer
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionAttach);
		AddAction(ActionDetach);
		AddAction(SRP_ActionCraftOnWorkbench);
		AddAction(SRP_ActionSalvageGun);
	}
    override bool IsMetalWorkbenchTool()
    {
        return true;
    }
    override bool IsAnvilWorkbenchTool()
    {
        return true;
    }
    override bool IsCarpentryWorkbenchTool()
    {
        return true;
    }
}
modded class WoodAxe
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionAttach);
		AddAction(ActionDetach);
        AddAction(ActionSalvageCarWreck);
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
        AddAction(SRP_ActionDigTarSands);
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
        AddAction(ActionSalvageCarWreck);
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
        AddAction(ActionSalvageCarWreck);
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
modded class Lockpick
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionLockDisplayCase);
		AddAction(ActionUnLockDisplayCase);
        AddAction(SRP_ActionSalvageGun);
	}
};
modded class Hacksaw
{
	override void SetActions()
	{
        super.SetActions();

		AddAction(ActionSalvageCarWreck);
        AddAction(SRP_ActionSalvageGun);
    }
};
modded class HandSaw
{
    override void SetActions()
	{
        super.SetActions();

		AddAction(ActionSalvageCarWreck);
    }
};
modded class Pipe
{
    override bool IsSmeltable()
    {
        return true;
    }
    override TStringArray GetSmeltableOptions()
    {
        return {"SRP_Mining_RawOre_Iron"};
    }
    override int GetSmeltableYield()
    {
        return Math.RandomIntInclusive(0, 2);
    }
};
modded class PipeWrench
{
    override bool IsSmeltable()
    {
        return true;
    }
    override TStringArray GetSmeltableOptions()
    {
        return {"SRP_Mining_RawOre_Iron"};
    }
    override int GetSmeltableYield()
    {
        return Math.RandomIntInclusive(0, 2);
    }
    override int GetTrasformerRepairValue()
    {
        return Math.RandomIntInclusive(15,50);
    }
    override void SetActions()
    {
        super.SetActions();
        AddAction(SRP_ActionRepairOilRigPump);
        AddAction(SRP_ActionSalvageGun);
    }
};
modded class MetalPlate
{
    override bool IsSmeltable()
    {
        return true;
    }
    override TStringArray GetSmeltableOptions()
    {
        return {"SRP_Mining_RawOre_Iron"};
    }
    override int GetSmeltableYield()
    {
        return Math.RandomIntInclusive(0, 3);
    }
};
modded class Sickle
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(SRP_ActionHarvestCrops_All);
	}
};
modded class FarmingHoe
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionSRPRakeFireplaceAshes);
	}
};
modded class Pliers
{
    override int GetTrasformerRepairValue()
    {
        return Math.RandomIntInclusive(10,40);
    }
	override void SetActions()
	{
		super.SetActions();

		AddAction(SRP_ActionCraftOnWorkbench);
        AddAction(SRP_ActionRepairOilRigPump);
        AddAction(SRP_ActionSalvageGun);
	}
    override bool IsAmmoCraftingWorkbenchTool()
    {
        return true;
    }
};
modded class CanOpener
{
    override bool IsKnifeTool()
    {
        return true;
    }
};
modded class Rope
{
    override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionRestrainSelf);
	}
};
modded class DuctTape
{
    override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionRestrainSelf);
	}
};
modded class MetalWire
{
    override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionRestrainSelf);
	}
};
modded class BarbedWire
{
    override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionRestrainSelf);
	}
};