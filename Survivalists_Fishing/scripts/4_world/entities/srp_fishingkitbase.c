class SRP_Fishing_KitBase extends ItemBase
{

    override string GetKitItemName()
    {
        string kitType = this.GetType();
        // int trimLength = kitType.Length() - 4; // -4 for _Kit removal
        if (kitType != "")
            kitType = kitType.Substring(0, kitType.Length() - 4);

        return kitType;
    }

    override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);
		if (GetGame().IsServer())
		{
			EntityAI kitItem = EntityAI.Cast(GetGame().CreateObjectEx(GetKitItemName(), position, ECE_PLACE_ON_SURFACE));
			kitItem.SetPosition(position);
			kitItem.SetOrientation(orientation);

            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(Delete, 1000, false);
		}
	}

	override bool IsDeployable()
    {
        return true;
    }

    override bool CanAssignAttachmentsToQuickbar()
	{
		return false;
	}

    override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
	}
};
class SRP_Fishing_Intermediate_KitBase extends ItemBase
{
    override bool CanPutInCargo( EntityAI parent )
	{
        return GetInventory().AttachmentCount() == 0;
	}

    bool HasAttachmentFilled(string slotName)
    {
        return FindAttachmentBySlotName(slotName) != null;
    }
    bool HasAttachmentFilledWithQuantity(string slotName, float quantity)
    {
        EntityAI eai = FindAttachmentBySlotName(slotName);
        if (eai)
        {
            ItemBase item = ItemBase.Cast(eai);
            return (item && item.GetQuantity() >= quantity);
        }
        return false;
    }
    bool CanCraft()
    {
        return false;
    }
};

//===============KITBASE
class SRP_WoodenFishRack_Kit extends SRP_Fishing_KitBase{};
class SRP_WoodenFishHanger_Kit extends SRP_Fishing_KitBase{};
class SRP_Aquarium_Kit extends SRP_Fishing_KitBase{};

//==================INTERMEDIATE KITBASE
class SRP_AquariumIntermediate_Kit extends SRP_Fishing_Intermediate_KitBase
{
    override bool CanCraft()
    {
        bool isValid = HasAttachmentFilled("SRP_Aquarium_Top");
        isValid &= HasAttachmentFilled("SRP_Aquarium_Bot");
        isValid &= HasAttachmentFilled("SRP_Aquarium_Glass1");
        isValid &= HasAttachmentFilled("SRP_Aquarium_Glass2");
        isValid &= HasAttachmentFilled("SRP_Aquarium_Glass3");
        isValid &= HasAttachmentFilled("SRP_Aquarium_Glass4");
        return isValid;
    }
};
class SRP_AquariumIntermediate_Top extends SRP_Fishing_Intermediate_KitBase{};
class SRP_AquariumIntermediate_Bot extends SRP_Fishing_Intermediate_KitBase{};
class SRP_AquariumIntermediate_Glass extends SRP_Fishing_Intermediate_KitBase{};

class SRP_FishingLureMetal_Kit extends SRP_Fishing_Intermediate_KitBase{};
class SRP_FishingLureWood_Kit extends SRP_Fishing_Intermediate_KitBase{};

class SRP_WoodenFishHangerIntermediate_Kit extends SRP_Fishing_Intermediate_KitBase
{
    override bool CanCraft()
    {
        bool isValid = HasAttachmentFilledWithQuantity("Material_FPole_WoodenLog2",6);
        isValid &= HasAttachmentFilled("MetalWire");
        isValid &= HasAttachmentFilled("Material_MetalWire");
        isValid &= HasAttachmentFilled("Rope");
        isValid &= HasAttachmentFilled("Material_FPole_Rope");
        isValid &= HasAttachmentFilled("Material_Shelter_Rope");
        isValid &= HasAttachmentFilledWithQuantity("Material_FPole_Nails",60);
        return isValid;
    }
};

class SRP_WoodenFishRackIntermediate_Kit extends SRP_Fishing_Intermediate_KitBase
{
    override bool CanCraft()
    {
        bool isValid = HasAttachmentFilledWithQuantity("Material_L2_WoodenLogs",4);
        isValid &= HasAttachmentFilled("MetalWire");
        isValid &= HasAttachmentFilled("Material_MetalWire");
        isValid &= HasAttachmentFilled("Rope");
        isValid &= HasAttachmentFilled("Material_FPole_Rope");
        isValid &= HasAttachmentFilled("Material_Shelter_Rope");
        isValid &= HasAttachmentFilledWithQuantity("Material_FPole_Nails",60);
        return isValid;
    }
};


class SRP_FishingWoodRod_Kit extends SRP_Fishing_Intermediate_KitBase
{
    override bool CanCraft()
    {
        bool isValid = HasAttachmentFilledWithQuantity("Material_Shelter_FrameSticks",4);
        isValid &= HasAttachmentFilledWithQuantity("WoodenStick",10);
        isValid &= HasAttachmentFilled("Rope");
        isValid &= HasAttachmentFilled("Material_FPole_Rope");
        isValid &= HasAttachmentFilled("Material_Shelter_Rope");
        isValid &= HasAttachmentFilled("Material_MetalWire");
        isValid &= HasAttachmentFilled("Material_FPole_MetalWire");
        return isValid;
    }
};
