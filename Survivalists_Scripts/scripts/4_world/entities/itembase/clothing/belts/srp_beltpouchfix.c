class SRP_ModularBelt_Base extends Clothing
{
	override bool CanReceiveAttachment( EntityAI attachment,int slotId )
	{
    if (attachment && (InventorySlots.GetSlotName(slotId) == "Belt_Right" || InventorySlots.GetSlotName(slotId) == "VestHolster" || InventorySlots.GetSlotName(slotId) == "Belt_Back"))
    {
      if (attachment.GetType() == "PlateCarrierPouches" || attachment.IsInherited(PlateCarrierPouches))
      {
        return false;
      }
    }

		if( !super.CanReceiveAttachment( attachment, slotId ) )
		{
			return false;
		}
		
		return !GetInventory().IsInCargo();
	}
};

class SRP_PoliceBelt extends SRP_ModularBelt_Base{};
class SRP_Holster_Belt extends SRP_ModularBelt_Base{};
class SRP_TacticalBelt_ColorBase extends SRP_ModularBelt_Base{};
class SRP_TacticalHolster_ColorBase extends SRP_ModularBelt_Base{};
class SRP_DualTacticalHolster_ColorBase extends SRP_ModularBelt_Base{};

class SRP_Car_WoodenDerby extends Clothing
{
  override bool IsSprintRemoved()
  {
    return true;
  }
};