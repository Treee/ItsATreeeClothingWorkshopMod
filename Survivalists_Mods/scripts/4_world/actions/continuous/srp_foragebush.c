class ActionForageBushCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousMineWood(30);
	}
};

class ActionForageBush extends ActionMineBushByHand
{
	void ActionForageBush()
	{
		m_CallbackClass = ActionForageBushCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionTarget = new CCTCursor(UAMaxDistances.DEFAULT);
		m_ConditionItem = new CCINone;
	}

  override ActionData CreateActionData()
	{
		MineActionData data = new MineActionData;
		data.m_HarvestType = SRP_EHarvestType.BUSH_FORAGE;
		return data;
	}

  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
		m_Text =  "Forage Fruits and Vegetables";
	}
};
