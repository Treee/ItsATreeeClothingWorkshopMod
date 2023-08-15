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

  string GetLinkedLargePouchSlot(int slotId)
  {
    string linkedLargePouchSlot = "";
    if (slotId == InventorySlots.GetSlotIdFromString("SmallPouch1"))
    {
      linkedLargePouchSlot = "LargePouch1";
    }
    else if (slotId == InventorySlots.GetSlotIdFromString("SmallPouch3"))
    {
      linkedLargePouchSlot = "LargePouch2";
    }
    else if (slotId == InventorySlots.GetSlotIdFromString("SmallPouch4"))
    {
      linkedLargePouchSlot = "LargePouch3";
    }
    else if (slotId == InventorySlots.GetSlotIdFromString("SmallPouch5"))
    {
      linkedLargePouchSlot = "LargePouch4";
    }
    else if (slotId == InventorySlots.GetSlotIdFromString("SmallPouch6"))
    {
      linkedLargePouchSlot = "LargePouch5";
    }
    return linkedLargePouchSlot;
  }
};

class SRP_Map_Pouch_ColorBase extends SRP_PouchBase_Small{};

class SRP_Pistol_Mag_Pouch_ColorBase extends SRP_PouchBase_Small
{
  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
    ItemBase pistolMag;
    if (Class.CastTo(pistolMag, attachment))
    { 
      return pistolMag.IsPistolMagazine();
    }
		return false;
	}
};

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

  string GetLinkedSmallPouchSlot(int slotId)
  {
    string linkedLargePouchSlot = "";
    // it can only attach if there is not a conflicting small pouch
    if (slotId == InventorySlots.GetSlotIdFromString("LargePouch1"))
    {
      linkedLargePouchSlot = "SmallPouch1";
    }
    else if (slotId == InventorySlots.GetSlotIdFromString("LargePouch2"))
    {
      linkedLargePouchSlot = "SmallPouch3";
    }
    else if (slotId == InventorySlots.GetSlotIdFromString("LargePouch3"))
    {
      linkedLargePouchSlot = "SmallPouch4";
    }
    else if (slotId == InventorySlots.GetSlotIdFromString("LargePouch4"))
    {
      linkedLargePouchSlot = "SmallPouch5";
    }
    else if (slotId == InventorySlots.GetSlotIdFromString("LargePouch5"))
    {
      linkedLargePouchSlot = "SmallPouch6";
    }
    return linkedLargePouchSlot;
  }

};

class SRP_IFAK_ColorBase extends SRP_PouchBase_Large
{
  override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
		{
			return false;
		}
    ItemBase medicalItem;
    if (Class.CastTo(medicalItem, item))
    { 
      return medicalItem.IsMedicalItem();
    }
		return false;
	}

	override bool CanSwapItemInCargo(EntityAI child_entity, EntityAI new_entity)
	{
		if (!super.CanSwapItemInCargo(child_entity, new_entity))
		{
			return false;
		}
    ItemBase medicalItem;
    if (Class.CastTo(medicalItem, new_entity))
    { 
      return medicalItem.IsMedicalItem();
    }
		return false;
	}
};

class SRP_Magazine_Pouch_1_ColorBase extends SRP_PouchBase_Large
{
  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
    ItemBase rifleMag;
    if (Class.CastTo(rifleMag, attachment))
    { 
      return rifleMag.IsFlatRifleMagazine();
    }
		return false;
	}
};

class SRP_Empty_MagPouch_ColorBase extends SRP_PouchBase_Large
{
  override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
		{
			return false;
		}

    ItemBase ib;
		if ( Class.CastTo(ib, item) )
		{
			if ( item.IsMagazine() )
      {
        Magazine magazine_item;
				Class.CastTo(magazine_item, item);
				return magazine_item.GetAmmoCount() == 0;
      }
    }
		return false;
	}

	override bool CanSwapItemInCargo(EntityAI child_entity, EntityAI new_entity)
	{
		if (!super.CanSwapItemInCargo(child_entity, new_entity))
		{
			return false;
		}

    ItemBase ib;
		if ( Class.CastTo(ib, new_entity) )
		{
			if ( new_entity.IsMagazine() )
      {
        Magazine magazine_item;
				Class.CastTo(magazine_item, new_entity);
				return magazine_item.GetAmmoCount() == 0;
      }
    }
		return false;
	}

};

class SRP_UtilityPouch_ColorBase extends SRP_PouchBase_Large
{
  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
    if (attachment.GetType() == "HandSaw")
    {
      return false;
    }
    if (attachment.GetType() == "HackSaw")
    {
      return false;
    }
    return GetInventory().AttachmentCount() < 1;
  }

  override bool CanDisplayAttachmentSlot(int slot_id)
	{
    string slotName = InventorySlots.GetSlotName(slot_id);

    bool canDisplay = GetInventory().AttachmentCount() == 0;
    EntityAI slotItem = FindAttachmentBySlotName(slotName);      
    if (slotItem)
    {
      canDisplay = true; 
    }
    return canDisplay;
  }
};
class SRP_HeavyPouch_ColorBase extends SRP_PouchBase_Large
{
  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
    if (attachment.GetType() == "HandSaw")
    {
      return false;
    }
    if (attachment.GetType() == "HackSaw")
    {
      return false;
    }
		return super.CanReceiveAttachment(attachment, slotId);
  }
};
class SRP_MediumPouch_ColorBase extends SRP_PouchBase_Large
{
  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
    if (attachment.GetType() == "HandSaw")
    {
      return false;
    }
    if (attachment.GetType() == "HackSaw")
    {
      return false;
    }
		return super.CanReceiveAttachment(attachment, slotId);
  }
};
class SRP_TacoPouch_ColorBase extends SRP_PouchBase_Large
{
  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
    if (attachment.GetType() == "HandSaw")
    {
      return false;
    }
    if (attachment.GetType() == "HackSaw")
    {
      return false;
    }
		return super.CanReceiveAttachment(attachment, slotId);
  }
};


class SRP_Small_Bottle_ColorBase extends Bottle_Base {};
