class SRP_MortarBowl extends Inventory_Base
{
  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
    bool canAttach = super.CanReceiveAttachment(attachment, slotId);
    EntityAI flowerSlot;
    // when the SRP_Flower1 slot is empty, we can place things in SRP_CrushedPowder1
    // when the SRP_CrushedPowder1 slot is empty, we can place things in SRP_Flower1
    if (attachment && attachment.IsInherited(SRP_CrushedHerb_Colorbase))
    {
      canAttach = FindAttachmentBySlotName("SRP_Flower1") == null;      
    }
    else if (attachment && attachment.IsInherited(SRP_PlantHerbEdible_Colorbase))
    {
      canAttach = FindAttachmentBySlotName("SRP_CrushedPowder1") == null;
      canAttach = canAttach && FindAttachmentBySlotName("SRP_CrushedPowder2") == null;
      canAttach = canAttach && FindAttachmentBySlotName("SRP_CrushedPowder3") == null;
      canAttach = canAttach && FindAttachmentBySlotName("SRP_CrushedPowder4") == null;
      canAttach = canAttach && FindAttachmentBySlotName("SRP_CrushedPowder5") == null;
    }
		return canAttach;
	}

  override void SetActions()
	{
		super.SetActions();
		
		// AddAction(ActionForceFeed);
	}
};