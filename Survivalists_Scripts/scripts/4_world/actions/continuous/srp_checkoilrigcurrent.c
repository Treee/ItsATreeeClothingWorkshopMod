class ActionCheckOilRigCurrentCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(5);
	}
};

class ActionCheckOilRigCurrent extends ActionContinuousBase
{
	void ActionCheckOilRigCurrent()
	{
		m_CallbackClass = SRP_ActionRepairOilRigPumpCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_Text = "Measure Current";
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
    if (!target)
      return false;
    
		SRP_OilRigTransformer transformer;
		if (Class.CastTo(transformer, target.GetObject()))    
      return true;    
		return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_OilRigTransformer transformer;
    if (Class.CastTo(transformer, action_data.m_Target.GetObject()))      
    {
      SendMessageToClient(action_data.m_Player, string.Format("%1/2000 GW/hr stored.", transformer.GetRigEnergy()));
    }
	}
};
