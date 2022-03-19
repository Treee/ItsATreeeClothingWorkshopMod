class SRP_WoodenFishRack extends DeployableContainer_Base
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