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
  // override void EEItemAttached(EntityAI item, string slot_name)
	// {
  //   Edible_Base edible;
  //   if (Class.CastTo(edible, item))
  //   {
  //     Print("hanging item on hanger: " + edible.GetType());
  //     edible.SetCanDelayDecayOverride(true);
  //   }	
	// 	super.EEItemAttached(item, slot_name);
	// };
	// override void EEItemDetached(EntityAI item, string slot_name)
	// {
  //   Edible_Base edible;
  //   if (Class.CastTo(edible, item))
  //   {
  //     Print("removing item on hanger: " + edible.GetType());
  //     edible.SetCanDelayDecayOverride(false);
  //   }
	// 	super.EEItemDetached(item, slot_name);
	// };
};