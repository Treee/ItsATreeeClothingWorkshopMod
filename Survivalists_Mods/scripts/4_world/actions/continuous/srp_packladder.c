class ActionPackLadderCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(8);
	}
};

class ActionPackLadder: ActionContinuousBase
{	
	void ActionPackLadder()
	{
		m_CallbackClass = ActionPackLadderCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_Text = "Fold Ladder";
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
		m_ConditionItem = new CCINotPresent;
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target || !player) return false;

    Print("targets " + target.GetObject());

		SRP_Ladder_Opened ladder;
		if( Class.CastTo(ladder, target.GetObject()))
		{
      return true;
		}
		return false;
	}
	

	override void OnFinishProgressServer( ActionData action_data )
	{	
    EntityAI.Cast(GetGame().CreateObjectEx("SRP_Ladder_Opened_Kit", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
	}
};