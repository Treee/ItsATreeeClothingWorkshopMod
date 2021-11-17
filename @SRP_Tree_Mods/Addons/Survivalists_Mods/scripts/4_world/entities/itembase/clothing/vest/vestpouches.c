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

	override void OnWasAttached( EntityAI parent, int slot_id )
	{
    super.OnWasAttached(parent, slot_id);
    if (parent)
    {
      // 	InventoryLocation inventory_location_to_lock = new InventoryLocation;
      // 	GetInventory().GetCurrentInventoryLocation( inventory_location_to_lock );
      // 	// parent.GetInventory().SetSlotLock( inventory_location_to_lock.GetSlot(), true );
      //   parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch1"), true );
      Print("We are attaching a small pouch. " + parent);
      if (slot_id == InventorySlots.GetSlotIdFromString("SmallPouch1"))
      {
        Print("lock large pouch 1");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch1"), true );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch1"), true);
      }
      else if (slot_id == InventorySlots.GetSlotIdFromString("SmallPouch3"))
      {
        Print("lock large pouch 2");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch2"), true );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch2"), true);
      }
      else if (slot_id == InventorySlots.GetSlotIdFromString("SmallPouch4"))
      {
        Print("lock large pouch 3");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch3"), true );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch3"), true);
      }
      else if (slot_id == InventorySlots.GetSlotIdFromString("SmallPouch6"))
      {
        Print("lock large pouch 4");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch4"), true );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch4"), true);
      }
    }
	}
	
	override void OnWasDetached( EntityAI parent, int slot_id )
	{
		super.OnWasDetached(parent, slot_id);
    if (parent)
    {
      // 	InventoryLocation inventory_location_to_lock = new InventoryLocation;
      // 	GetInventory().GetCurrentInventoryLocation( inventory_location_to_lock );
      // 	// parent.GetInventory().SetSlotLock( inventory_location_to_lock.GetSlot(), false );
      //   parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch1"), false );
      Print("We are attaching a large pouch. " + parent);
      if (slot_id == InventorySlots.GetSlotIdFromString("SmallPouch1"))
      {
        Print("lock large pouch 1");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch1"), false );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch1"), false);
      }
      else if (slot_id == InventorySlots.GetSlotIdFromString("SmallPouch3"))
      {
        Print("lock large pouch 2");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch2"), false );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch2"), false);
      }
      else if (slot_id == InventorySlots.GetSlotIdFromString("SmallPouch4"))
      {
        Print("lock large pouch 3");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch3"), false );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch3"), false);
      }
      else if (slot_id == InventorySlots.GetSlotIdFromString("SmallPouch6"))
      {
        Print("lock large pouch 4");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch4"), false );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch4"), false);
      }
    }
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

	override void OnWasAttached( EntityAI parent, int slot_id )
	{
    super.OnWasAttached(parent, slot_id);
    if (parent)
    {
      // 	InventoryLocation inventory_location_to_lock = new InventoryLocation;
      // 	GetInventory().GetCurrentInventoryLocation( inventory_location_to_lock );
      // 	// parent.GetInventory().SetSlotLock( inventory_location_to_lock.GetSlot(), true );
      //   parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch1"), true );
      Print("We are attaching a small pouch. " + parent);
      if (slot_id == InventorySlots.GetSlotIdFromString("LargePouch1"))
      {
        Print("lock large pouch 1");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("SmallPouch1"), true );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch1"), true);
      }
      else if (slot_id == InventorySlots.GetSlotIdFromString("LargePouch2"))
      {
        Print("lock large pouch 2");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("SmallPouch3"), true );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch2"), true);
      }
      else if (slot_id == InventorySlots.GetSlotIdFromString("LargePouch3"))
      {
        Print("lock large pouch 3");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("SmallPouch4"), true );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch3"), true);
      }
      else if (slot_id == InventorySlots.GetSlotIdFromString("LargePouch4"))
      {
        Print("lock large pouch 4");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("SmallPouch6"), true );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch4"), true);
      }
    }
	}
	
	override void OnWasDetached( EntityAI parent, int slot_id )
	{
		super.OnWasDetached(parent, slot_id);
    if (parent)
    {
      // 	InventoryLocation inventory_location_to_lock = new InventoryLocation;
      // 	GetInventory().GetCurrentInventoryLocation( inventory_location_to_lock );
      // 	// parent.GetInventory().SetSlotLock( inventory_location_to_lock.GetSlot(), false );
      //   parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch1"), false );
      Print("We are attaching a large pouch. " + parent);
      if (slot_id == InventorySlots.GetSlotIdFromString("LargePouch1"))
      {
        Print("lock large pouch 1");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("SmallPouch1"), false );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch1"), false);
      }
      else if (slot_id == InventorySlots.GetSlotIdFromString("LargePouch2"))
      {
        Print("lock large pouch 2");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("SmallPouch3"), false );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch2"), false);
      }
      else if (slot_id == InventorySlots.GetSlotIdFromString("LargePouch3"))
      {
        Print("lock large pouch 3");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("SmallPouch4"), false );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch3"), false);
      }
      else if (slot_id == InventorySlots.GetSlotIdFromString("LargePouch4"))
      {
        Print("lock large pouch 4");
        parent.GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("SmallPouch6"), false );
        // GetInventory().SetSlotLock(InventorySlots.GetSlotIdFromString("LargePouch4"), false);
      }
    }
  }

};

class SRP_IFAK_Tan extends SRP_PouchBase_Large{};
class SRP_Magazine_Pouch_1_Tan extends SRP_PouchBase_Large{};
class SRP_Empty_MagPouch_Tan extends SRP_PouchBase_Large{};

class SRP_Small_Bottle_Tan extends Bottle_Base {};
