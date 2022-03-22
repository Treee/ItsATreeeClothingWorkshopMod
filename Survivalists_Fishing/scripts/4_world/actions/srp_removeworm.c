class ActionUnpackWormCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.UNPACK);
	}
};

class ActionUnpackWorm: ActionContinuousBase
{	
	void ActionUnpackWorm()
	{
		m_CallbackClass = ActionUnpackWormCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_OPENITEM;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	
	override void CreateConditionComponents()  
	{		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
	
	override bool HasProneException()
	{
		return true;
	}

	override bool HasTarget()
	{
		return false;
	}
		
	override string GetText()
	{
		return "Remove Worm";
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		if ( action_data.m_MainItem && action_data.m_MainItem.GetHierarchyRootPlayer() == action_data.m_Player )
		{
      ItemBase worm = ItemBase.Cast( GetGame().CreateObjectEx("Worm", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE) );
      if (worm)
      {
        action_data.m_MainItem.AddQuantity(-1);
      }
		}
	}
};
