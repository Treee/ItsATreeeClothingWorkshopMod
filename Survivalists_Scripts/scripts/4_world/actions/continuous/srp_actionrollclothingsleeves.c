class SRP_ActionRollClothingCB: ActionContinuousBaseCB
{
    override void CreateActionComponent()
    {
        m_ActionData.m_ActionComponent = new CAContinuousTime(2);
    };
};

class SRP_ActionRollClothing: ActionContinuousBase
{
    void SRP_ActionRollClothing()
    {
        m_CallbackClass = SRP_ActionRollClothingCB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
        m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_OPENITEM;
        m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
    };

    override void CreateConditionComponents()
    {
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTNone;
    };

    override bool HasProneException()
    {
        return true;
    };

    override bool HasTarget()
    {
        return false;
    };

    override string GetText()
    {
        return "Roll Sleeves";
    };

    override void OnFinishProgressServer(ActionData action_data)
    {
        if(action_data.m_MainItem && action_data.m_MainItem.GetHierarchyRootPlayer() == action_data.m_Player)
        {
            string itemName = "";
            if (action_data.m_MainItem.ConfigIsExisting("actionVariant"))
            {
                itemName = action_data.m_MainItem.ConfigGetString("actionVariant");
            }
            string itemColor = action_data.m_MainItem.GetColor();
            string newItemName = string.Format("%1_%2", itemName, itemColor);
            MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, new SRP_RollClothingLambda(action_data.m_MainItem, newItemName, action_data.m_Player));
        }
    };
};

class SRP_RollClothingLambda: TurnItemIntoItemLambda
{
    void SRP_RollClothingLambda(EntityAI old_item, string new_item_type, PlayerBase player)
    {
        InventoryLocation hands = new InventoryLocation;
        hands.SetHands(player, null);
        OverrideNewLocation(hands);
    };
};

class SRP_ActionUnRollClothingCB: ActionContinuousBaseCB
{
    override void CreateActionComponent()
    {
        m_ActionData.m_ActionComponent = new CAContinuousTime(2);
    };
};

class SRP_ActionUnRollClothing: ActionContinuousBase
{
    void SRP_ActionUnRollClothing()
    {
        m_CallbackClass = SRP_ActionUnRollClothingCB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
        m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_OPENITEM;
        m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
    };

    override void CreateConditionComponents()
    {
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTNone;
    };

    override bool HasProneException()
    {
        return true;
    };

    override bool HasTarget()
    {
        return false;
    };

    override string GetText()
    {
        return "Unroll Sleeves";
    };

    override void OnFinishProgressServer(ActionData action_data)
    {
        if(action_data.m_MainItem && action_data.m_MainItem.GetHierarchyRootPlayer() == action_data.m_Player)
        {
            string itemName = "";
            if (action_data.m_MainItem.ConfigIsExisting("actionVariant"))
            {
                itemName = action_data.m_MainItem.ConfigGetString("actionVariant");
            }
            string itemColor = action_data.m_MainItem.GetColor();
            string newItemName = string.Format("%1_%2", itemName, itemColor);
            MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, new SRP_UnRollClothingLambda(action_data.m_MainItem, newItemName, action_data.m_Player));
        }
    };
};

class SRP_UnRollClothingLambda: TurnItemIntoItemLambda
{
    void SRP_UnRollClothingLambda(EntityAI old_item, string new_item_type, PlayerBase player)
    {
        InventoryLocation hands = new InventoryLocation;
        hands.SetHands(player, null);
        OverrideNewLocation(hands);
    };
};