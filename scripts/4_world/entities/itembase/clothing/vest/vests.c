class SRP_ModularVest_Base extends Clothing
{
  override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached( parent, slot_id );
		
		if ( GetGame().IsServer() && parent.IsInherited( DayZInfected ) )
		{
			float coef = Math.RandomFloatInclusive( 0.2, 0.4 );
			SetHealth01( "", "", coef);
		}
	}

  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
    bool canAttach = super.CanReceiveAttachment(attachment, slotId);
    EntityAI alternatePouch;
    if (attachment && attachment.IsInherited(SRP_PouchBase_Small))
    {
      SRP_PouchBase_Small smallPouch = SRP_PouchBase_Small.Cast(attachment);
      string largePouchAlternateSlotName = smallPouch.GetLinkedLargePouchSlot(slotId);
      alternatePouch = FindAttachmentBySlotName(largePouchAlternateSlotName);      
    }
    else if (attachment && attachment.IsInherited(SRP_PouchBase_Large))
    {
      SRP_PouchBase_Large largePouch = SRP_PouchBase_Large.Cast(attachment);
      string smallPouchAlternateSlotName = largePouch.GetLinkedSmallPouchSlot(slotId);
      alternatePouch = FindAttachmentBySlotName(smallPouchAlternateSlotName);      
    }

    if (alternatePouch)
    {
      canAttach = false;
    }
		return canAttach;
	}

  override bool CanDisplayAttachmentSlot( string slot_name )
	{
    bool canDisplay = super.CanDisplayAttachmentSlot(slot_name);
		// return InventorySlots.GetShowForSlotId(InventorySlots.GetSlotIdFromString(slot_name));
    EntityAI attachment;
    // small pouch display
    if (slot_name == "SmallPouch1")
    {
      attachment = FindAttachmentBySlotName("LargePouch1");
    }
    else if (slot_name == "SmallPouch3")
    {
      attachment = FindAttachmentBySlotName("LargePouch2");
    }
    else if (slot_name == "SmallPouch4")
    {
      attachment = FindAttachmentBySlotName("LargePouch3");
    }
    else if (slot_name == "SmallPouch5")
    {
      attachment = FindAttachmentBySlotName("LargePouch4");
    }
    else if (slot_name == "SmallPouch6")
    {
      attachment = FindAttachmentBySlotName("LargePouch5");
    }
    // Large Pouch display
    else if (slot_name == "LargePouch1")
    {
      attachment = FindAttachmentBySlotName("SmallPouch1");
    }
    else if (slot_name == "LargePouch2")
    {
      attachment = FindAttachmentBySlotName("SmallPouch3");
    }
    else if (slot_name == "LargePouch3")
    {
      attachment = FindAttachmentBySlotName("SmallPouch4");
    }
    else if (slot_name == "LargePouch4")
    {
      attachment = FindAttachmentBySlotName("SmallPouch5");
    }
    else if (slot_name == "LargePouch5")
    {
      attachment = FindAttachmentBySlotName("SmallPouch6");
    }
    if (attachment)
    {
      canDisplay = false;
    }

    return canDisplay;
	}
	
	override bool CanDisplayAttachmentCategory( string category_name )
	{
    bool canDisplay = super.CanDisplayAttachmentCategory(category_name);
    if (category_name == "Small Pouches")
    {
      if (FindAttachmentBySlotName("LargePouch1") && FindAttachmentBySlotName("LargePouch2") && FindAttachmentBySlotName("LargePouch3") && FindAttachmentBySlotName("LargePouch4"))
      {
        canDisplay = false;
      }
    }
    else if (category_name == "Large Pouches")
    {
      if (FindAttachmentBySlotName("SmallPouch1") && FindAttachmentBySlotName("SmallPouch2") && FindAttachmentBySlotName("SmallPouch3") && FindAttachmentBySlotName("SmallPouch4") && FindAttachmentBySlotName("SmallPouch5") && FindAttachmentBySlotName("SmallPouch6"))
      {
        canDisplay = false;
      }
    }
		return canDisplay;
	}
  
};
class SRP_Tac_Vest_Green: SRP_ModularVest_Base{};
class SRP_Tac_Vest_Black: SRP_ModularVest_Base{};
class SRP_Tac_Vest_Tan: SRP_ModularVest_Base{};

class SRP_Ratnik_Green: SRP_ModularVest_Base{};
class SRP_Ratnik_Black: SRP_ModularVest_Base{};
class SRP_Ratnik_Tan: SRP_ModularVest_Base{};

class SRP_Light_Ratnik_Green: SRP_ModularVest_Base{};
class SRP_Light_Ratnik_Black: SRP_ModularVest_Base{};
class SRP_Light_Ratnik_Tan: SRP_ModularVest_Base{};

class SRP_Chestrig_Green: SRP_ModularVest_Base{};
class SRP_Chestrig_Black: SRP_ModularVest_Base{};
class SRP_Chestrig_Tan: SRP_ModularVest_Base{};

class SRP_Army_Vest_1_Green: SRP_ModularVest_Base{};
class SRP_Army_Vest_1_Black: SRP_ModularVest_Base{};
class SRP_Army_Vest_1_Tan: SRP_ModularVest_Base{};

class SRP_Army_Vest_2_Green: SRP_ModularVest_Base{};
class SRP_Army_Vest_2_Black: SRP_ModularVest_Base{};
class SRP_Army_Vest_2_Tan: SRP_ModularVest_Base{};

class SRP_JPC_Vest_Green: SRP_ModularVest_Base{};
class SRP_JPC_Vest_Black: SRP_ModularVest_Base{};
class SRP_JPC_Vest_Tan: SRP_ModularVest_Base{};

class SRP_Tac_Tec_Vest_Green: SRP_ModularVest_Base{};
class SRP_Tac_Tec_Vest_Black: SRP_ModularVest_Base{};
class SRP_Tac_Tec_Vest_Tan: SRP_ModularVest_Base{};