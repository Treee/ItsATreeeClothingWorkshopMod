class SRP_FishContainerDisplayBase extends DeployableContainer_Base
{
    protected ref map<string, string> m_AttachedFish;

    void SRP_FishContainerDisplayBase()
    {
        if (GetGame().IsDedicatedServer())
        {
            if (!m_AttachedFish)
            {
                m_AttachedFish = new map<string, string>;
            }
        }
        GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( UpdateVisualFishSlots, 5000, false);
    }
    void ~SRP_FishContainerDisplayBase()
    {
        delete m_AttachedFish;
    }
    //============================================== VANILLA OVERRIDE
    override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
    override bool CanPutIntoHands(EntityAI parent)
    {
        return false;
    }
    override void EEItemAttached( EntityAI item, string slot_name )
	{
        super.EEItemAttached( item, slot_name );
        InsertAttachedFish(item, slot_name);
        UpdateVisualFishSlots();
	}
	override void EEItemDetached( EntityAI item, string slot_name )
	{
        super.EEItemDetached( item, slot_name );
        RemoveAttachedFish(slot_name);
    }
    //============================================== CUSTOM
    void InsertAttachedFish(EntityAI attachedItem, string slot_name)
    {
        if (GetGame().IsDedicatedServer())
        {
            string slotSelection = GetMemoryPointFromAttachedSlot(slot_name);

            Object newFish = CreateStaticObjectFromAttachedSlot(attachedItem, slotSelection);
            if (!newFish)
                return;


            //0 offset the bane of our existence
            if (m_AttachedFish)
            {
                if (m_AttachedFish.Contains(slot_name))
                {
                    RemoveAttachedFish(slot_name);
                }
                int lowBits
                int highBits;
                newFish.GetNetworkID(lowBits, highBits);
                string objectNetworkId = string.Format("%1,%2", lowBits, highBits);
                m_AttachedFish.Set(slot_name, objectNetworkId);
            }
        }
    }
    void RemoveAttachedFish(string slot_name)
    {
        if (GetGame().IsDedicatedServer())
        {
            //0 offset the bane of our existence
            if (m_AttachedFish)
            {
                if (m_AttachedFish.Contains(slot_name))
                {
                    // cover our asses so we dont infinitely create stuff
                    string fishNetworkBits = m_AttachedFish.Get(slot_name);
                    TStringArray parts = new TStringArray;
                    fishNetworkBits.Split(",", parts);
                    Object fishObject = GetGame().GetObjectByNetworkId(parts[0].ToInt(), parts[1].ToInt());
                    if (fishObject)
                    {
                        m_AttachedFish.Remove(slot_name);
                        EntityAI fishAI;
                        if (Class.CastTo(fishAI, fishObject))
                        {
                            fishAI.DeleteSafe();
                        }
                    }
                }
            }
        }
    }
    void SyncAttachedFishQuantities(string slot_name)
    {
        if (!m_AttachedFish.Contains(slot_name))
            return;

        EntityAI attachment;
        if (Class.CastTo(attachment, GetInventory().FindAttachmentByName(slot_name)))
        {
            string fishNetworkBits = m_AttachedFish.Get(slot_name);
            TStringArray parts = new TStringArray;
            fishNetworkBits.Split(",", parts);
            Object fishObject = GetGame().GetObjectByNetworkId(parts[0].ToInt(), parts[1].ToInt());

            SRP_Fish_Base tempFish;
            // if there is a temp fish visual
            if (m_AttachedFish && Class.CastTo(tempFish, fishObject))
            {
                // does the temp visual match the actual fish quantity?
                if (attachment.GetQuantity() != tempFish.GetQuantity())
                {
                    // if not, sync!
                    tempFish.SetQuantity(attachment.GetQuantity());
                    tempFish.SetSynchDirty();
                }
            }
        }
    }
    void UpdateVisualFishSlots()
    {
        if (!m_AttachedFish)
            return;

        SRP_Fish_Base tempFish;
        int totalSlots = GetInventory().GetAttachmentSlotsCount();
        int slotIndex = -1;
        for (int i = 0; i < totalSlots; i++)
        {
            slotIndex = i + 1;

            SyncAttachedFishQuantities(string.Format("SRP_Fish_Small%1", slotIndex));
            SyncAttachedFishQuantities(string.Format("SRP_Fish_Large%1", slotIndex));

        }
    }
    string GetMemoryPointFromAttachedSlot(string slot_name)
    {
        string slotSelection = "";
        slot_name.ToLower();
        if (slot_name.Contains("srp_fish_large"))
        {
            slot_name.Replace("srp_fish_large", "");
            slotSelection = string.Format("largefish%1", slot_name);

        }
        else if (slot_name.Contains("srp_fish_small"))
        {
            slot_name.Replace("srp_fish_small", "");
            slotSelection = string.Format("smallfish%1", slot_name);
        }
        return slotSelection;
    }
    Object CreateStaticObjectFromAttachedSlot(EntityAI attachedItem, string slotSelection)
    {
        Object newFish;
        if ( MemoryPointExists( slotSelection ) )
        {
            vector selection_pos = ModelToWorld( GetMemoryPointPos( slotSelection ) );
            vector orientation = "0 0 -90" + GetOrientation();
            SRP_Fish_Base fish;
            if (Class.CastTo(fish, attachedItem))
            {
                int flags = ECE_SETUP | ECE_KEEPHEIGHT | ECE_NOLIFETIME | ECE_NOPERSISTENCY_WORLD | ECE_NOPERSISTENCY_CHAR | ECE_DYNAMIC_PERSISTENCY;
                newFish = GetGame().CreateObjectEx(attachedItem.GetType(), selection_pos, flags);
                SRP_Fish_Base fishAI;
                if (Class.CastTo(fishAI, newFish))
                {
                    fishAI.SetTakeable(false);
                    fishAI.SetIsAttached(true);
                    fishAI.SetSynchDirty();
                }
                newFish.SetOrientation(orientation);
            }
        }
        return newFish;
    }
};

class SRP_WoodenFishRack extends SRP_FishContainerDisplayBase{};
class SRP_WoodenFishHanger extends SRP_FishContainerDisplayBase{};
