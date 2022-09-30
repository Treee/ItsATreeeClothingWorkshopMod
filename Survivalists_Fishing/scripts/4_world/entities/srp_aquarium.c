class SRP_Aquarium extends DeployableContainer_Base
{
  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return GetInventory().AttachmentCount() == 0 && GetNumberOfItems() == 0;
  }
  // override void EEItemAttached(EntityAI item, string slot_name)
	// {
  //   Edible_Base edible;
  //   if (Class.CastTo(edible, item))
  //   {
  //     edible.SetCanDelayDecayOverride(true);
  //   }	
	// 	super.EEItemAttached(item, slot_name);
	// };
	// override void EEItemDetached(EntityAI item, string slot_name)
	// {
  //   Edible_Base edible;
  //   if (Class.CastTo(edible, item))
  //   {
  //     edible.SetCanDelayDecayOverride(false);
  //   }
	// 	super.EEItemDetached(item, slot_name);
	// };
};