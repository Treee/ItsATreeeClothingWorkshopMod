modded class ItemBase
{
    protected int m_HeatCounter = 0;
    protected string m_BaseClassName;
    protected ref array<string> m_DyableColorVariants;
    protected bool m_ItemHasBioImmunity;
    protected bool m_IsMutantIdentifierItem;
    protected bool m_IsCyborgIdentifierItem;
    protected bool m_IsEventItem = false;

    override void InitItemVariables()
    {
        super.InitItemVariables();
        InitializeSRPVariables();
    };
    override void OnWasAttached( EntityAI parent, int slot_id )
    {
        super.OnWasAttached(parent, slot_id);
        // Print("OnWasAttached");
        PlayerBase player;
        if(Class.CastTo(player, parent))
        {
            if (IsSprintRemoved())
            {
                player.ModifyTotalEquippedHeavyItems(1);
            }
            if (HasBioImmunity())
            {
                player.ModifyContaminationProtection(GameConstants.SRP_MUTANT_HEAD_BIO_PROTECTION);
            }
            if (IsMutantIdentifier())
            {
                player.SetIsPlayerMutant(true);
            }
            if (IsCyborgIdentifier())
            {
                player.SetIsPlayerCyborg(true);
            }
        }
    }
    override void OnWasDetached( EntityAI parent, int slot_id )
    {
        super.OnWasDetached(parent, slot_id);
        // Print("OnWasDetached");
        PlayerBase player;
        if(Class.CastTo(player, parent))
        {
            if (IsSprintRemoved())
            {
                player.ModifyTotalEquippedHeavyItems(-1);
            }
            if (HasBioImmunity())
            {
                player.ModifyContaminationProtection(-GameConstants.SRP_MUTANT_HEAD_BIO_PROTECTION);
            }
            if (IsMutantIdentifier())
            {
                player.SetIsPlayerMutant(false);
            }
            if (IsCyborgIdentifier())
            {
                player.SetIsPlayerCyborg(false);
            }
        }

        if (IsEventItem())
        {
            Delete();
        }
    }
    override void OnItemLocationChanged(EntityAI old_owner, EntityAI new_owner)
    {
        super.OnItemLocationChanged(old_owner, new_owner);

        if (IsEmpty())
            return;
        if (GetSlotsCountCorrect() == -1)
            return;

        // handle bags with slots for weapons
        EntityAI attachedItem;
        PlayerBase rootPlayer;
        TStringArray slotNames = GetWeaponAttachmentSlots();
        foreach (string slotName : slotNames)
        {
            // short circuit
            if (!Class.CastTo(attachedItem, FindAttachmentBySlotName(slotName)))
                continue;
            else
            {
                if (new_owner && !attachedItem.CanAssignToQuickbar())
                {
                    if (Class.CastTo(rootPlayer, new_owner.GetHierarchyRootPlayer()))
                        rootPlayer.RemoveQuickBarEntityShortcut(attachedItem);
                }
            }
        }
    }
    override void OnInventoryEnter(Man player)
    {
        super.OnInventoryEnter(player);
        if (GetGame().IsDedicatedServer() && HasRadioactiveEffect())
        {
            PlayerBase playerPB;
            if (Class.CastTo(playerPB, player) && !playerPB.SRPIgnoreContaminatedArea())
            {
                if (playerPB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
                {
                    playerPB.InsertAgent(eAgents.CHEMICAL_POISON, 65);
                }
            }
        }
    }

    override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
    {
        super.OnPlacementComplete(player, position, orientation);

        if (IsPlacingKit() && GetGame().IsDedicatedServer())
        {
            PlayerBase playerPB = PlayerBase.Cast(player);
            if (player)
            {
                // Print("Placing object: " + GetKitItemName());
                TurnItemIntoItemLambda_KitDeployment lambda = new TurnItemIntoItemLambda_KitDeployment(this, GetKitItemName(), playerPB, position, orientation);
                if (CanTransferHPOnDeploy())
                    lambda.SetTransferParams(false, false);
                else
                    lambda.SetTransferParams(false, false, false);

                MiscGameplayFunctions.TurnItemIntoItemEx(playerPB, lambda);
            }
        }
    }
    override bool CanRemoveFromCargo(EntityAI parent)
    {
        if (!super.CanRemoveFromCargo(parent))
            return false; // short circuit items we already cannot take out

        if (IsEventItem())
            return false; // event items are off limits

        PlayerBase itemParent;
        if (Class.CastTo(itemParent, GetHierarchyRootPlayer()))
        {
            if (itemParent.IsAlive() && itemParent.IsSoftSurrendered())
                return false;
        }
        return true;
    }
    override bool CanDetachAttachment (EntityAI parent)
    {
        if (!super.CanDetachAttachment(parent))
            return false; // short circuit items we already cannot take out

        if (IsEventItem())
            return false; // event items are off limits

        PlayerBase itemParent;
        if (Class.CastTo(itemParent, GetHierarchyRootPlayer()))
        {
            if (itemParent.IsAlive() && itemParent.IsSoftSurrendered())
                return false;
        }
        return true;
    }
    // make sure to use the slot name not the item name....
    ItemBase GetItemOnSlot(string slot_type)
    {
        int slot_id = InventorySlots.GetSlotIdFromString( slot_type );
        EntityAI item_EAI = GetInventory().FindAttachment( slot_id );
        ItemBase item_IB = ItemBase.Cast(item_EAI);

        if (item_EAI && !item_IB)
        {
            string str = "Warning! GetItemOnSlot() >> found item on slot " + slot_type + " can't be cast to ItemBase! Found item is " + item_EAI.GetType() + " and the player is " + GetType() + "!";
            Error(str);
            return null;
        }
        return item_IB;
    }
    void InitializeSRPVariables()
    {
        InitializeColorVariants();
        InitializeBioImmunityVariables();
        InitializeMutantVariables();
        InitializeCyborgVariables();
    }
    TStringArray GetWeaponAttachmentSlots()
    {
        return {
            "Melee",
            "Shoulder",
            "SRP_GunDerringer",
            "Pistol",
        };
    }
    //===================================== HELPERS
    bool IsPistolMagazine() // for pistol mag pouches
    {
        return false;
    }
    bool IsFlatRifleMagazine() // for rifle mag pouches
    {
        return false;
    }
    bool IsKnifeTool()
    {
        return false;
    }
    bool IsMedicalItem()
    {
        return false;
    }
    bool CanBypassRaidConditions()
    {
        return false;
    }
    bool IsGunClean()
    {
        return false;
    }
    // for items that attach to workbenches as a type of "tier modifier" (SRP_AdvancedStoneForgeWorkbench_Bellows for example)
    bool IsAugmentAttachment()
    {
        return false;
    }
    bool CanBeStoredInNotebook()
    {
        return false;
    }
    void SetIsEventItem(bool state)
    {
        m_IsEventItem = state;
    }
    bool IsEventItem()
    {
        return m_IsEventItem;
    }
    override void OnRightClick()
    {
        if (CanBeSplit() && !GetDayZGame().IsLeftCtrlDown() && GetDayZGame().IsLeftShiftDown() && !GetGame().GetPlayer().GetInventory().HasInventoryReservation(this,null))
        {
            SplitIntoSingleItemClient();
        }
        else
        {
            super.OnRightClick();
        }
    }
    void SplitIntoSingleItemClient()
    {
        if (GetGame().IsClient())
        {
            if (ScriptInputUserData.CanStoreInputUserData())
            {
                vector m4[4];
                PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());

                EntityAI root = GetHierarchyRoot();

                InventoryLocation dst = new InventoryLocation;
                if (!player.GetInventory().FindFirstFreeLocationForNewEntity(GetType(), FindInventoryLocationType.CARGO, dst))
                {
                    if (root)
                    {
                        root.GetTransform(m4);
                        dst.SetGround(this, m4);
                    }
                    else
                        GetInventory().GetCurrentInventoryLocation(dst);
                    }
                else
                {
                    dst.SetCargo(dst.GetParent(), this, dst.GetIdx(), dst.GetRow(), dst.GetCol(), dst.GetFlip());
                    if (GetGame().GetPlayer().GetInventory().HasInventoryReservation(null, dst))
                    {
                        if (root)
                        {
                            root.GetTransform(m4);
                            dst.SetGround(this, m4);
                        }
                        else
                            GetInventory().GetCurrentInventoryLocation(dst);
                    }
                    else
                    {
                        GetGame().GetPlayer().GetInventory().AddInventoryReservationEx(null, dst, GameInventory.c_InventoryReservationTimeoutShortMS);
                    }
                }
                ScriptInputUserData ctx = new ScriptInputUserData;
                ctx.Write(SRP_INPUT_UDT_ITEM_MANIPULATION);
                ItemBase thiz = this; // @NOTE: workaround for correct serialization
                ctx.Write(thiz);
                dst.WriteToContext(ctx);
                ctx.Send();
            }
        }
        else if (!GetGame().IsMultiplayer())
        {
            SplitItemSingle(PlayerBase.Cast(GetGame().GetPlayer()));
        }
    }
    void SplitSingleItemToInventoryLocation(notnull InventoryLocation dst)
    {
        if (!CanBeSplit())
            return;

        float quantity = GetQuantity();
        float split_quantity_new = 1;

        ItemBase new_item = ItemBase.Cast(GameInventory.LocationCreateEntity(dst, GetType(), ECE_IN_INVENTORY, RF_DEFAULT));

        if (new_item)
        {
            if (new_item.GetQuantityMax() < split_quantity_new)
            {
                split_quantity_new = new_item.GetQuantityMax();
            }

            new_item.SetResultOfSplit(true);
            MiscGameplayFunctions.TransferItemProperties(this, new_item);

            if (dst.IsValid() && dst.GetType() == InventoryLocationType.ATTACHMENT && split_quantity_new > 1)
            {
                AddQuantity(-1);
                new_item.SetQuantity(1);
            }
            else
            {
                AddQuantity(-split_quantity_new);
                new_item.SetQuantity(split_quantity_new);
            }
        }
    }
    void SplitItemSingle(PlayerBase player)
    {
        if (!CanBeSplit())
        {
            return;
        }

        float quantity = GetQuantity();
        float split_quantity_new = 1;

        InventoryLocation invloc = new InventoryLocation;
        bool found = player.GetInventory().FindFirstFreeLocationForNewEntity(GetType(), FindInventoryLocationType.ATTACHMENT, invloc);

        ItemBase new_item;
        new_item = player.CreateCopyOfItemInInventoryOrGroundEx(this, true);

        if (new_item)
        {
            if (new_item.GetQuantityMax() < split_quantity_new)
            {
                split_quantity_new = new_item.GetQuantityMax();
            }
            if (found && invloc.IsValid() && invloc.GetType() == InventoryLocationType.ATTACHMENT && split_quantity_new > 1)
            {
                AddQuantity(-1);
                new_item.SetQuantity(1);
            }
            else
            {
                AddQuantity(-split_quantity_new);
                new_item.SetQuantity(split_quantity_new);
            }
        }
    }
    //===================================== DYE STUFF
    void InitializeColorVariants()
    {
        // Print("Initing item: " + GetType());
        m_BaseClassName = "";
        if (ConfigIsExisting("rootClassName"))
        {
            m_BaseClassName = ConfigGetString("rootClassName");
        }
        m_DyableColorVariants = new array<string>;
        if (ConfigIsExisting("colorVariants"))
        {
            ConfigGetTextArray("colorVariants", m_DyableColorVariants);
        }
    }
    TStringArray GetDyableColorVariants()
    {
        return m_DyableColorVariants;
    }
    void SetDyableBaseClassName(string baseClassName)
    {
        m_BaseClassName = baseClassName;
    }
    string GetDyableBaseClassName()
    {
        return m_BaseClassName;
    }
    bool HasDyableOptions()
    {
        return m_DyableColorVariants.Count() > 0;
    }
    string GetDyeOption(int index)
    {
        if (HasDyableOptions() && m_DyableColorVariants.IsValidIndex(index))
        {
            return m_DyableColorVariants.Get(index);
        }
        return "";
    }
    int GetTotalColorVariations()
    {
        return m_DyableColorVariants.Count();
    }
    int GetWearableSlotType()
    {
        if (GetInventory())
        {
            if (GetInventory().HasInventorySlot(InventorySlots.HEADGEAR))
                return InventorySlots.HEADGEAR;
            else if (GetInventory().HasInventorySlot(InventorySlots.MASK))
                return InventorySlots.MASK;
            else if (GetInventory().HasInventorySlot(InventorySlots.EYEWEAR))
                return InventorySlots.EYEWEAR;
            else if (GetInventory().HasInventorySlot(InventorySlots.GLOVES))
                return InventorySlots.GLOVES;
            else if (GetInventory().HasInventorySlot(InventorySlots.ARMBAND))
                return InventorySlots.ARMBAND;
            else if (GetInventory().HasInventorySlot(InventorySlots.BODY))
                return InventorySlots.BODY;
            else if (GetInventory().HasInventorySlot(InventorySlots.VEST))
                return InventorySlots.VEST;
            else if (GetInventory().HasInventorySlot(InventorySlots.BACK))
                return InventorySlots.BACK;
            else if (GetInventory().HasInventorySlot(InventorySlots.HIPS))
                return InventorySlots.HIPS;
            else if (GetInventory().HasInventorySlot(InventorySlots.LEGS))
                return InventorySlots.LEGS;
            else if (GetInventory().HasInventorySlot(InventorySlots.FEET))
                return InventorySlots.FEET;
            else
                return 999999;
        }
        return -1;
    }
    //===================================== STATUS EFFECT
    void InitializeBioImmunityVariables()
    {
        m_ItemHasBioImmunity = ConfigGetBool("BioImmunity");
    }
    bool HasBioImmunity()
    {
        return m_ItemHasBioImmunity;
    }
    void InitializeMutantVariables()
    {
        m_IsMutantIdentifierItem = ConfigGetBool("IsMutant");
    }
    bool IsMutantIdentifier()
    {
        return m_IsMutantIdentifierItem;
    }
    void InitializeCyborgVariables()
    {
        m_IsCyborgIdentifierItem = ConfigGetBool("IsCyborg");
    }
    bool IsCyborgIdentifier()
    {
        return m_IsCyborgIdentifierItem;
    }
    bool HasAlcoholEffect()
    {
        return false;
    }
    float GetAlcoholAmount()
    {
        return 0.0;
    }
    bool HasEpinephrineEffect()
    {
        return false;
    }
    bool HasRadioactiveEffect()
    {
        return false;
    }
    bool HasCharcoalEffect()
    {
        return false;
    }
    bool IsBloodDrink()
    {
        return false;
    }
    bool HasAntibioticEffect()
    {
        return false;
    }
    bool HasHealthRegenEffect()
    {
        return false;
    }
    int GetHealthRegenEffectTotal()
    {
        return 0;
    }
    bool HasShockRegenEffect()
    {
        return false;
    }
    int GetShockRegenEffectTotal()
    {
        return 0;
    }
    bool HasBloodRegenEffect()
    {
        return false;
    }
    int GetBloodRegenEffectTotal()
    {
        return 0;
    }
    bool IsPoisoned()
    {
        return false;
    }
    //====================================== CRAFTING
    bool IsAlchemyReagent()
    {
        return false;
    }
    bool IsPlacingKit()
    {
        return false;
    }
    bool IsCraftingKit()
    {
        return false;
    }
    bool CanTransferHPOnDeploy()
    {
        return true;
    }
    bool CanBeDeconstructed()
    {
        return false;
    }
    bool HasCorrectQuantityAndType(int quantity, string acceptedType, bool exactAmount=false)
    {
        if (exactAmount)
        {
            return GetQuantity() == quantity && acceptedType == GetColor();
        }
        if (acceptedType == "")
        {
            return GetQuantity() >= quantity;
        }
        return GetQuantity() >= quantity && acceptedType == GetColor();
    }
    bool IsDrugWorkbenchTool()
    {
        return false;
    }
    bool IsMetalWorkbenchTool()
    {
        return false;
    }
    bool IsCarpentryWorkbenchTool()
    {
        return false;
    }
    bool IsBrewingWorkbenchTool()
    {
        return false;
    }
    bool IsAmmoCraftingWorkbenchTool()
    {
        return false;
    }
    bool IsLatheWorkbenchTool()
    {
        return false;
    }
    bool IsSewingWorkbenchTool()
    {
        return false;
    }
    bool IsAnvilWorkbenchTool()
    {
        return false;
    }
    bool IsPrintingPressTool()
    {
        return false;
    }
    string GetKitName()
    {
        return string.Format("%1_Kit", GetType());
    }
    string GetKitItemName()
    {
        return string.Format("%1", GetType().Substring(0, GetType().Length() - 4));
    }
    string GetCraftingKitName()
    {
        return "";
    }
    //========================================= SPRINTING BOOLS
    bool IsSprintRemoved()
    {
        return false;
    }
    bool IsContainerFilledToRemoveSprint(int maxCargo=80)
    {
        // Print("IsContainerFilledToRemoveSprint: maxCargo: " + maxCargo);
        if (HasAnyCargo()) // if the item exists and has cargo
        {
            CargoBase cargoItem = GetInventory().GetCargo();
            int currentWeight = 0;
            int maxWeight = cargoItem.GetWidth() * cargoItem.GetHeight(); // x,y
            // Print("has cargo with this size: " + maxWeight);
            if (maxWeight >= maxCargo)
            {
                for ( int i = 0; i < cargoItem.GetItemCount(); ++i )
                {
                int x, y;
                cargoItem.GetItemSize( i, x, y );
                currentWeight += x * y;
                }
                float percentFilled = 1-((maxWeight-currentWeight)/maxWeight);
                // Print("Percent filled: " + percentFilled);
                return percentFilled >= GetPercentWeightToRemoveSprint();
            }
        }
        return false;
    }
    float GetPercentWeightToRemoveSprint()
    {
        return 0.45;
    }
    //========================================= HEAT BASED CRAFTABLES
    bool IsSmeltable()
    {
        return false;
    }
    bool IsForgeHardened()
    {
        return false;
    }
    bool IsTransformedByHeat()
    {
        return false;
    }
    void IncrementHeatTimer(int increment = 1)
    {
        m_HeatCounter += increment;
    }
    void ResetHeatTimer()
    {
        m_HeatCounter = 0;
    }
    int GetHeatTimer()
    {
        return m_HeatCounter;
    }
    int GetHeatTimerThreshold()
    {
        return -1;
    }
    void HandleHeatTransformation()
    {
        // Print("Item is max heat and can transform: " + GetType());
    }
    bool IsHotEnough(int expectedTemperature)
    {
        return (GetTemperature() >= expectedTemperature);
    }
    TStringArray GetSmeltableOptions()
    {
        return {};
    }
    string GetSmeltableOutput(string forceOverride="")
    {
        if (forceOverride != "")
        return forceOverride;
        return GetSmeltableOptions().GetRandomElement();
    }
    int GetSmeltableYield()
    {
        return 0;
    }
    //========================================= ELECTRONICS BASED CRAFTABLES
    string GetColor()
    {
        return ConfigGetString("color");
    }
    int GetResistorDigit()
    {
        return -1;
    }
    int GetResistorMultiplier()
    {
        return 0;
    }
    float GetResistorTolerance()
    {
        return 0;
    }
    int GetResistorTemperaturCoeffcient()
    {
        return 0;
    }
    int GetTrasformerRepairValue()
    {
        return 0;
    }
    //========================================= SELECTION FLAGGING FUNCTIONS
    bool CanAcceptPropaneTanks()
    {
        return false;
    }
};
