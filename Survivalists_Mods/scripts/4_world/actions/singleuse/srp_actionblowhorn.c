class ActionBlowIntoHornCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.FIREPLACE_IGNITE );
	}
};

class ActionBlowIntoHorn extends ActionContinuousBase
{	
	void ActionBlowIntoHorn()
	{
		m_CallbackClass = ActionBlowIntoHornCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;	
		m_Text = "Blow Horn";
	}

	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
		m_ConditionItem = new CCINotPresent;
	}
		
	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object target_object = target.GetObject();
		Land_srp_warhorn_large warhornTarget = Land_srp_warhorn_large.Cast( target_object );

		if ( warhornTarget )
		{			
      return !warhornTarget.IsPlaying();
		}
		return false;
	}

  override void OnStartAnimationLoopServer( ActionData action_data )
	{
		super.OnStartAnimationLoopServer(action_data);
    Object target_object = action_data.m_Target.GetObject();
		Land_srp_warhorn_large warhornTarget = Land_srp_warhorn_large.Cast( target_object );
		
		if ( warhornTarget )
		{			
      warhornTarget.SetPlaying(true);
    }
	}
};
