class SRP_ActionCraftOnWorkbench extends ActionSRPVariantIdOption
{
    void SRP_ActionCraftOnWorkbench()
	{
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_ASSEMBLE;
		m_FullBody = true;
	}
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
    }
    override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
        SRP_CraftingBench_Base craftingWorkbench;
        if (Class.CastTo(craftingWorkbench, target.GetObject()))
        {
            if (craftingWorkbench.HasCraftableMatches())
                m_Text = "Craft " + craftingWorkbench.GetCraftableItemDisplayNameByIndex(m_VariantID);
        }
	}
    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
        if (!target)
            return false;
        SRP_CraftingBench_Base craftingWorkbench;
        if (Class.CastTo(craftingWorkbench, target.GetObject()))
        {
            // is item in hands an item this bench considers the tool?
            if (!craftingWorkbench.CanAcceptTool(item))
                return false;
            // string.Format("Looking at the correct bench, has recipes? %1", craftingWorkbench.HasCraftableMatches());
            return craftingWorkbench.HasCraftableMatches();
        }
		return false;
	}
	override void OnFinishProgressServer( ActionData action_data )
	{
        SRP_CraftingBench_Base craftingWorkbench;
        if (Class.CastTo(craftingWorkbench, action_data.m_Target.GetObject()))
        {
            int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;
            SRP_CraftableItem newItem = craftingWorkbench.GetCraftableItemByIndex(variantId);
            craftingWorkbench.ReduceAttachedQuantities(newItem);
            // because players are fucking huge ass babies
            // craftingWorkbench.DecreaseHealth( craftingWorkbench.GetCraftingDamage(), false );
            // Print(string.Format("Creating %1 from inded %2",newItem.GetDisplayName(), variantId));

            int numObjects = 1;
            int itemQuantityMax = 1;
            float itemHealthMax 1;
            // always craft the first item
            Object newObject = GetGame().CreateObjectEx(newItem.GetItemClassName(), craftingWorkbench.GetMemoryPointPosition("item_spawn_position"), ECE_SETUP|ECE_NOSURFACEALIGN|ECE_KEEPHEIGHT|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY);

            // set the hp
            if (newItem.GetMaxHP() < 1)
                newObject.SetHealth(newItem.GetMaxHP() * newObject.GetMaxHealth());

            // handle first item quantity
            Magazine ammo;
            ItemBase newItemBase;
            if (newItem.GetItemQuantity() > 1)
            {
                if (Class.CastTo(ammo, newObject))
                {
                    itemQuantityMax = ammo.GetAmmoMax();
                    ammo.ServerSetAmmoCount(Math.Min(newItem.GetItemQuantity(), itemQuantityMax));
                }
                else if (Class.CastTo(newItemBase, newObject))
                {
                    itemQuantityMax = newItemBase.GetQuantityMax();
                    newItemBase.SetQuantity(Math.Min(newItem.GetItemQuantity(), itemQuantityMax));
                }

                if (itemQuantityMax < newItem.GetItemQuantity())
                {
                    numObjects = newItem.GetItemQuantity() / itemQuantityMax;
                    int remaineder = newItem.GetItemQuantity() % itemQuantityMax;
                    if (remaineder > 0)
                        numObjects++;
                    }

                // PrintFormat("numobj: %1 quantmax: %2 recipequant: %3", numObjects, itemQuantityMax, newItem.GetItemQuantity());
                // when we have more than 1 object to spawn
                if (numObjects > 1)
                {
                    // get the total quantity
                    int remainingQuantity = newItem.GetItemQuantity();
                    // in the case of last item not max size, get the remaining quantity
                    int itemCount = 0;
                    // Print("need to make another item");
                    for(int i = 1; i < numObjects; i++)
                    {
                        // Print("making new item");
                        newObject = GetGame().CreateObjectEx(newItem.GetItemClassName(), craftingWorkbench.GetMemoryPointPosition("item_spawn_position"), ECE_SETUP|ECE_NOSURFACEALIGN|ECE_KEEPHEIGHT|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY);
                        // set hp
                        if (newItem.GetMaxHP() < 1)
                            newObject.SetHealth(newItem.GetMaxHP() * newObject.GetMaxHealth());

                        // subtract existing
                        remainingQuantity = remainingQuantity - itemQuantityMax;
                        itemCount = Math.Min(remainingQuantity, itemQuantityMax);
                        if (Class.CastTo(ammo, newObject))
                            ammo.ServerSetAmmoCount(itemCount);
                        else if (Class.CastTo(newItemBase, newObject))
                            newItemBase.SetQuantity(itemCount);
                    }
                }
            }
        }
	}
    override void OnUpdateActions( Object item, Object target, int component_index )
	{
        SRP_CraftingBench_Base craftingWorkbench;
		if (Class.CastTo(craftingWorkbench, target))
		{
            if (craftingWorkbench.HasCraftableMatches())
                GetVariantManager().SetActionVariantCount(craftingWorkbench.GetPotentialCraftableItemCount());
		}
		else
			GetVariantManager().Clear();
	}
    override bool SetupAction(PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL)
	{
		if (super.SetupAction(player, target, item, action_data, extra_data))
		{
            if (!GetGame().IsDedicatedServer())
            {
                if (!target || !target.GetObject())
                    return false;
                SetupAnimation(target.GetObject().GetType());
            }
            return true;
		}
		return false;
	}
    void SetupAnimation(string targetBench)
	{
        switch(targetBench)
        {
            case "SRP_PrefabCrafting_carpentry":
            case "SRP_PrefabCrafting_metalworking":
            case "SRP_PrefabCrafting_smithing":
                m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_ASSEMBLE;
            break;
            case "SRP_PrefabCrafting_drugtub":
            case "SRP_PrefabCrafting_tailoring":
            case "SRP_PrefabCrafting_printingpress":
            case "SRP_PrefabCrafting_ammocrafting":
                m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_RESTRAINTARGET;
            break;
        }
	}
};
