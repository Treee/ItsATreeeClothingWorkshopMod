class ToggleMuteTransmitterActionInput : DefaultActionInput
{
	ref ActionTarget target_new;
	
	void ToggleMuteTransmitterActionInput(PlayerBase player)
	{
		SetInput("UAToggleMuteTransmitter");
		m_InputType = ActionInputType.AIT_HOLDSINGLE;
	}
  void ~ToggleMuteTransmitterActionInput()
	{
		delete target_new;
	}
	
	override void UpdatePossibleActions(PlayerBase player, ActionTarget target, ItemBase item, int action_condition_mask)
	{
		// if the player is already being forced to take an action
		if( ForceActionCheck(player) )
		{
			// set the action to the forced action
			m_SelectAction = m_ForcedActionData.m_Action;
			return;
		}		
		
		// the action is not explicit so declare it here
		m_SelectAction = NULL;
		// create a list of basic possible actions
		array<ActionBase_Basic> possible_actions;
		// temporary action
		ActionBase action;
    
		m_MainItem = NULL;

		// if the player exists
		if ( player ) 
		{
			// get the item in the players' hands, cast it to a "transmitter" to see if it is a radio
			TransmitterBase radio = TransmitterBase.Cast(player.GetHumanInventory().GetEntityInHands());

			// if the item is a radio
			if ( radio )
			{
				// create a new action target for the radio
				target_new = new ActionTarget(radio, null, -1, vector.Zero, -1);
				// force the action on the target
				ForceActionTarget(target_new);
			}
			else
			{	
        // the item is not a radio so clear any fored target we may have set
        ClearForcedTarget();
			}
		}
		
		// reassign the target and m_target to the forced target 
		target = m_ForcedTarget;
		m_Target = m_ForcedTarget;
		int i;

		// if the target is not null and the target has an object
		if(target && target.GetObject())
		{
			// get all possible actions of the target's type
			target.GetObject().GetActions(this.Type(), possible_actions);
			// if any actions exists
			if(possible_actions)
			{
				// loop through each action
				for (i = 0; i < possible_actions.Count(); i++)
				{
					// set the action to the action base by casting
					action = ActionBase.Cast(possible_actions.Get(i));
					// if the action can be performed
					if ( action.Can(player, target, m_MainItem, action_condition_mask) )
					{
						// set the current action
						m_SelectAction = action;
						return;
					}
				}
			}
		}
	}
};
