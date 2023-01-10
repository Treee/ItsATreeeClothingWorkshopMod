class ActionBlowIntoHornCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( 9.0 );
	}
};

class ActionBlowIntoHorn extends ActionContinuousBase
{	
	void ActionBlowIntoHorn()
	{
		m_CallbackClass = ActionBlowIntoHornCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_TAKETEMPSELF;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;	
		m_Text = "Blow Horn";
	}

	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor;
	}
		
	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object target_object = target.GetObject();
		Land_srp_warhorn_large warhornTarget = Land_srp_warhorn_large.Cast( target_object );

		if ( warhornTarget )
		{			
      if (!warhornTarget.IsPlaying())
      {
        if ( GetGame().IsDedicatedServer() )
        {
          return true;
        }
        string name = warhornTarget.GetActionComponentName(target.GetComponentIndex());
        // Print("what am i looking at? " + name);
        name.ToLower();
        if (name == "component01")
        {
          return true;
        }
      }
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
    if (action_data.m_MainItem)
    {
      action_data.m_MainItem.Delete();
    }
	}
};
