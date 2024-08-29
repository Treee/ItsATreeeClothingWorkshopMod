class SRP_WoodenFishHanger extends DeployableContainer_Base
{
    override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
    override bool CanPutIntoHands(EntityAI parent)
    {
        return false;
    }
};