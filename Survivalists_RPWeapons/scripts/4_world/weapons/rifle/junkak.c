class junkak extends RifleBoltLock_Base
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "AK_RailHndgrd" );
		inventory.CreateInInventory( "AK_Bayonet" );
		inventory.CreateInInventory( "UniversalLight" );
		inventory.CreateInInventory( "KobraOptic" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "Battery9V" );
	}

    override bool CanDisplayAttachmentSlot(int slot_id)
    {
        if (super.CanDisplayAttachmentSlot(slot_id))
        {
            // restrict only one optic showing at a time when others are attached
            string slotName = InventorySlots.GetSlotName(slot_id);
            if (slotName == "weaponFlashlight" || slotName == "weaponBayonetAK")
            {
                if (FindAttachmentBySlotName("weaponHandguardAK"))
                    return true; // show slots when handguard is attached
                return false;
            }
            else if (slotName == "weaponOpticsAK")
            { // ak slot
                if (FindAttachmentBySlotName("AKRISAdapter"))
                { // ris attached
                    if (FindAttachmentBySlotName("weaponOptics")) // m4 optic attached
                        return false;
                    return true;
                }
                return false;
            }
            else if (slotName == "weaponOptics")
            { // m4 slot
                if (FindAttachmentBySlotName("AKRISAdapter"))
                { // ris attached
                    if (FindAttachmentBySlotName("weaponOpticsAK")) // ak optic attached
                        return false;
                    return true;
                }
                return false;
            }
            return true;
        }
        return false;
    }
    override bool CanReceiveAttachment( EntityAI attachment, int slotId )
    {
        if (super.CanReceiveAttachment(attachment, slotId))
        {
            // restrict only one optic showing at a time when others are attached
            string slotName = InventorySlots.GetSlotName(slotId);
            if (slotName == "weaponFlashlight" || slotName == "weaponBayonetAK")
            {
                if (FindAttachmentBySlotName("weaponHandguardAK"))
                    return true; // show slots when handguard is attached
                return false;
            }
            else if (slotName == "weaponOpticsAK")
            { // ak slot
                if (FindAttachmentBySlotName("AKRISAdapter"))
                { // ris attached
                    if (FindAttachmentBySlotName("weaponOptics")) // m4 optic attached
                        return false;
                    return true;
                }
                return false;
            }
            else if (slotName == "weaponOptics")
            { // m4 slot
                if (FindAttachmentBySlotName("AKRISAdapter"))
                { // ris attached
                    if (FindAttachmentBySlotName("weaponOpticsAK")) // ak optic attached
                        return false;
                    return true;
                }
                return false;
            }
            return true;
        }
        return false;
    }
};