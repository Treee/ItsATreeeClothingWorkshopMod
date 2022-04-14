class ActionConvertStarterForgeKit: ActionSingleUseBase
{
	void ActionConvertStarterForgeKit()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CLEANHANDSBOTTLE;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_CLEANHANDSBOTTLE;
		m_StanceMask        = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override bool HasTarget()
	{
		return false;
	}
		
	override string GetText()
	{
		return "Apply Labor";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_StoneForgeWorkbenchStarter_Kit workbenchkit = SRP_StoneForgeWorkbenchStarter_Kit.Cast(item);
    ItemBase smallRocks = ItemBase.Cast( workbenchkit.FindAttachmentBySlotName("Stones") );
    ItemBase largeRocks = ItemBase.Cast( workbenchkit.FindAttachmentBySlotName("Material_FPole_Stones") );
    ItemBase mortar = ItemBase.Cast( workbenchkit.FindAttachmentBySlotName("Material_Mortar") );
    bool hasSmallRocks = smallRocks && smallRocks.GetQuantity() == 16;
    bool hasLargeRocks = largeRocks && largeRocks.GetQuantity() == 32;
    bool hasMortar = mortar && mortar.GetQuantity() == 4;

		return (hasSmallRocks && hasLargeRocks && hasMortar);
	}

	override void OnEndServer( ActionData action_data )
	{
    if (action_data.m_MainItem)
    {
      action_data.m_MainItem.Delete();
    }		
		GetGame().CreateObjectEx("SRP_StoneForgeWorkbenchIntermediate_Kit", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE);
	}
};