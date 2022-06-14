class ActionPackSRPSleepingBagCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(8);
	}
};

class ActionPackSRPSleepingBag: ActionContinuousBase
{	
	void ActionPackSRPSleepingBag()
	{
		m_CallbackClass = ActionPackSRPSleepingBagCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_Text = "Pack Sleeping Back";
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
		m_ConditionItem = new CCINotPresent;
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target || !player) return false;

    // Print("targets " + target.GetObject());

		SRP_SleepingBag_ColorBase sleepingbag;
		if( Class.CastTo(sleepingbag, target.GetObject()))
		{
      return true;
		}
		return false;
	}
	

	override void OnFinishProgressServer( ActionData action_data )
	{	
    if(action_data.m_Target.GetObject())
    {
      EntityAI.Cast(GetGame().CreateObjectEx(action_data.m_Target.GetObject().GetType()+"_Kit", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
      action_data.m_Target.GetObject().Delete();
    }
	}
};