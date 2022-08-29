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
    array<string> acceptableAttachments = {"Mag_FNX45_15Rnd", "Mag_Deagle_9rnd", "Mag_1911_7Rnd", "Mag_CZ75_15Rnd", "Mag_Glock_15Rnd", "Mag_P1_8Rnd",
     "Mag_IJ70_8Rnd", "Mag_MKII_10Rnd", "Mag_MakarovPB_8Rnd", "Mag_CLIP9x19_10Rnd"};

		foreach (string allowedAttachments : acceptableAttachments)
		{
      if (attachment.GetType() == allowedAttachments)
			{
				return true;
			}
    };
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
    array<string> acceptableCargo = {"BloodTestKit", "Thermometer", "BloodBagIV", "BloodBagFull", "BloodBagEmpty", "SalineBagIV",
     "StartKitIV", "SalineBag", "InjectionVial", "BloodSyringe", "ClearSyringe", "Syringe", "Epinephrine", "AntiChemInjector", 
     "Morphine", "TetracyclineAntibiotics", "IodineTincture", "VitaminBottle","PainkillerTablets", "CharcoalTablets", "PurificationTablets",
     "DisinfectantAlcohol", "DisinfectantSpray", "BandageDressing", "Rag"};
		foreach (string allowedCargo : acceptableCargo)
		{
			if (item.IsKindOf(allowedCargo))
			{
				return true;
			}
      if (item.GetType() == allowedCargo)
			{
				return true;
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
    array<string> acceptableCargo = {"BloodTestKit", "Thermometer", "BloodBagIV", "BloodBagFull", "BloodBagEmpty", "SalineBagIV",
     "StartKitIV", "SalineBag", "InjectionVial", "BloodSyringe", "ClearSyringe", "Syringe", "Epinephrine", "AntiChemInjector", 
     "Morphine", "TetracyclineAntibiotics", "IodineTincture", "VitaminBottle","PainkillerTablets", "CharcoalTablets", "PurificationTablets",
     "DisinfectantAlcohol", "DisinfectantSpray", "BandageDressing", "Rag"};
		foreach (string allowedCargo : acceptableCargo)
		{
			if (new_entity.IsKindOf(allowedCargo))
			{
				return true;
			}
      if (new_entity.GetType() == allowedCargo)
			{
				return true;
			}
		}
		return false;
	}

};

class SRP_Magazine_Pouch_1_ColorBase extends SRP_PouchBase_Large
{
  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
    array<string> acceptableAttachments = {"Mag_AK74_30Rnd", "Mag_AK74_45Rnd", "Mag_AK101_30Rnd", "Mag_AKM_30Rnd", "Mag_AKM_Palm30Rnd", "Mag_Aug_30Rnd",
     "Mag_STANAG_30Rnd", "Mag_CMAG_10Rnd", "Mag_CMAG_20Rnd", "Mag_CMAG_30Rnd", "Mag_CZ61_20Rnd", "Mag_CZ527_5rnd", "Mag_FAL_20Rnd",
     "Mag_FAMAS_25Rnd", "Mag_MP5_15Rnd", "Mag_MP5_30Rnd", "Mag_Groza_20Rnd", "Mag_VSS_10Rnd", "Mag_PM73_25Rnd", "Mag_PM73_15Rnd", "Mag_Ruger1022_30Rnd", "Mag_Ruger1022_15Rnd",
     "Mag_Scout_5Rnd", "Mag_SVD_10Rnd", "Mag_UMP_25Rnd", "Mag_VAL_20Rnd"};

		foreach (string allowedAttachments : acceptableAttachments)
		{
      if (attachment.IsKindOf(allowedAttachments))
      {
        return true;
      }
      if (attachment.GetType() == allowedAttachments)
			{
				return true;
			}
    };
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
    if (attachment.GetType() == "Handsaw")
    {
      return false;
    }
    if (attachment.GetType() == "HackSaw")
    {
      return false;
    }
    return GetInventory().AttachmentCount() < 1;
  }

  override bool CanDisplayAttachmentSlot( string slot_name )
	{
    bool canDisplay = GetInventory().AttachmentCount() == 0;
    EntityAI slotItem = FindAttachmentBySlotName(slot_name);      
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
    if (attachment.GetType() == "Handsaw")
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
    if (attachment.GetType() == "Handsaw")
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
    if (attachment.GetType() == "Handsaw")
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
