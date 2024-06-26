class SRP_ActionSalvageGun extends ActionSRPVariantIdOption
{
    void SRP_ActionSalvageGun()
	{
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_RESTRAINTARGET;
		m_FullBody = true;
	}
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTObject( UAMaxDistances.DEFAULT );
    }
    override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
        Weapon_Base target_weapon;
        if (Class.CastTo(target_weapon, target.GetObject()))
        {
            if (target_weapon.HasSalvageParts())
                m_Text = "Salvage " + target_weapon.GetSalvageDisplayNameFromIndex(m_VariantID);
        }
	}
    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
        if (!target)
            return false;
        Weapon_Base target_weapon;
        if (Class.CastTo(target_weapon, target.GetObject()))
        {
            // is item in hands an item this bench considers the tool?
            if (target_weapon.GetNumberOfItems() > 0)
                return false;
            return target_weapon.HasSalvageParts();
        }
		return false;
	}
    override void OnFinishProgressServer( ActionData action_data )
    {
        ToolBase toolInHand;
        if (action_data.m_MainItem && Class.CastTo(toolInHand, action_data.m_MainItem))
        {
            Weapon_Base target_weapon;
            if ( action_data.m_Target && Class.CastTo(target_weapon, action_data.m_Target.GetObject()) )
            {
                int variantId = SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId;

                // string inheritedClass = GetInheritingClass(target_weapon.GetType());
                // Print("finish progress server: variantId: " + variantId + " items inheriting class: " + inheritedClass + " item Name: "+ target_weapon.GetType());

                string newItemName = "";

                if (target_weapon.HasSalvageParts())
                {
                    newItemName = target_weapon.GetSalvageOption(variantId);
                }

                TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(target_weapon, newItemName, action_data.m_Player);
                lambda.SetTransferParams(true, true, true, true);
                action_data.m_Player.ServerReplaceItemWithNew(lambda);

                toolInHand.AddHealth(-15);
            }
        }
    }
    override void OnUpdateActions( Object item, Object target, int component_index )
	{
        Weapon_Base target_weapon;
		if (Class.CastTo(target_weapon, target))
		{
            if (target_weapon.HasSalvageParts())
                GetVariantManager().SetActionVariantCount(target_weapon.GetTotalSalvageParts());
		}
		else
			GetVariantManager().Clear();
	}
};
