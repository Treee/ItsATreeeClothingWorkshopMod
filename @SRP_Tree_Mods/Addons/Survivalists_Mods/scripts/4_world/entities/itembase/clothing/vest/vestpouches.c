class SRP_PouchBase_Small extends Container_Base
{  
	override bool CanReceiveItemIntoCargo( EntityAI item )
	{
		if (!super.CanReceiveItemIntoCargo(item))
			return false;
		
		if(GetInventory().IsAttachment())
		{
			return !GetHierarchyParent().GetInventory().IsInCargo();
		}
		//TODO: After CanPutToCargo and CanBeInCango uncommnet this
		//else
		//{
			//return !GetInventory().IsInCargo();
		//}
		
		return !item.GetInventory().HasInventorySlot(InventorySlots.GetSlotIdFromString("Vest"));
	}
	
	override bool CanLoadItemIntoCargo( EntityAI item )
	{
		if (!super.CanLoadItemIntoCargo(item))
			return false;
		
		return !item.GetInventory().HasInventorySlot(InventorySlots.GetSlotIdFromString("Vest"));
	}
};

class SRP_Map_Pouch_Tan extends SRP_PouchBase_Small{};
class SRP_Pistol_Mag_Pouch_Tan extends SRP_PouchBase_Small{};

class SRP_PouchBase_Large extends Container_Base
{
	override bool CanReceiveItemIntoCargo( EntityAI item )
	{
		if (!super.CanReceiveItemIntoCargo(item))
			return false;
		
		if(GetInventory().IsAttachment())
		{
			return !GetHierarchyParent().GetInventory().IsInCargo();
		}
		//TODO: After CanPutToCargo and CanBeInCango uncommnet this
		//else
		//{
			//return !GetInventory().IsInCargo();
		//}
		
		return !item.GetInventory().HasInventorySlot(InventorySlots.GetSlotIdFromString("Vest"));
	}
	
	override bool CanLoadItemIntoCargo( EntityAI item )
	{
		if (!super.CanLoadItemIntoCargo(item))
			return false;
		
		return !item.GetInventory().HasInventorySlot(InventorySlots.GetSlotIdFromString("Vest"));
	}
};

class SRP_IFAK_Tan extends SRP_PouchBase_Large{};
class SRP_Magazine_Pouch_1_Tan extends SRP_PouchBase_Large{};
class SRP_Empty_MagPouch_Tan extends SRP_PouchBase_Large{};

class SRP_Small_Bottle_Tan extends Bottle_Base {};
