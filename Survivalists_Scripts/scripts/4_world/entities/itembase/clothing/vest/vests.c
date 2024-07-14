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
        if (attachment&& IsSlotBlockedByOtherPouch(slotId))
            return false;
        // pouches cannot go into the vest holster slot. make a new proxy for them
        if (attachment && (InventorySlots.GetSlotName(slotId) == "VestHolster" || InventorySlots.GetSlotName(slotId) == "Belt_Back"))
            if (attachment.GetType() == "PlateCarrierPouches" || attachment.IsInherited(PlateCarrierPouches))
                return false;

        return super.CanReceiveAttachment(attachment, slotId);
	}

    bool IsSlotBlockedByOtherPouch(int slotId)
    {
        string slotName = InventorySlots.GetSlotName(slotId);
        string slotNumberText = slotName;
        int slotNumber;
        EntityAI attachment;
        if (slotName.Contains("Small"))
        {
            slotNumberText.Replace("SmallPouch", "");
            slotNumber = slotNumberText.ToInt();
            // small slot 2 is never blocked
            if (slotNumber == 2)
                return false;

            // fix the offset from small to large pouches
            if (slotNumber > 2)
                slotNumber--;

            if (Class.CastTo(attachment, FindAttachmentBySlotName(string.Format("LargePouch%1", slotNumber))))
                return true;

        }
        else if (slotName.Contains("Large"))
        {
            slotNumberText.Replace("LargePouch", "");
            slotNumber = slotNumberText.ToInt();
            // fix the offset from small to large pouches
            if (slotNumber > 1)
                slotNumber++;

            if (Class.CastTo(attachment, FindAttachmentBySlotName(string.Format("SmallPouch%1", slotNumber))))
                return true;
        }
        return false;
    }

    override bool CanDisplayAttachmentSlot(int slot_id)
	{
        if (IsSlotBlockedByOtherPouch(slot_id))
            return false;
        return super.CanDisplayAttachmentSlot(slot_id);

	}
};

class SRP_Ratnik_ColorBase extends SRP_ModularVest_Base
{
  override bool IsSprintRemoved()
  {
    return true;
  }
};

class SRP_Tac_Vest_ColorBase extends SRP_ModularVest_Base{};
class SRP_Light_Ratnik_ColorBase extends SRP_ModularVest_Base{};
class SRP_Chestrig_ColorBase extends SRP_ModularVest_Base{};
class SRP_Army_Vest_1_ColorBase extends SRP_ModularVest_Base{};
class SRP_Army_Vest_2_ColorBase extends SRP_ModularVest_Base{};
class SRP_JPC_Vest_ColorBase extends SRP_ModularVest_Base{};
class SRP_Tac_Tec_Vest_ColorBase extends SRP_ModularVest_Base{};
