// full override because it looks to be easier
// than modding and going over the list again
modded class ToggleNVGActionInput
{		
	override void UpdatePossibleActions(PlayerBase player, ActionTarget target, ItemBase item, int action_condition_mask)
	{
		if( ForceActionCheck(player) )
		{
			m_SelectAction = m_ForcedActionData.m_Action;
			return;
		}
		//ForceActionTarget(player.m_PlayerLightManager.
		
		m_SelectAction = NULL;
		array<ActionBase_Basic> possible_actions;
		ActionBase action;
		int i;

		m_MainItem = NULL;
		if ( player ) 
		{
			// Mich2001Helmet helmet = Mich2001Helmet.Cast(player.FindAttachmentBySlotName("Headgear"));
			// NVGHeadstrap headstrap; = NVGHeadstrap.Cast(player.FindAttachmentBySlotName("Eyewear"));

      HelmetBase helmet;
      NVGHeadstrap headstrap;
      if (Class.CastTo(helmet, player.FindAttachmentBySlotName("Headgear")))
      {
				//m_MainItem = Headtorch_ColorBase.Cast(player.FindAttachmentBySlotName("Headgear"));
				target_new = new ActionTarget(helmet, null, -1, vector.Zero, -1);
				ForceActionTarget(target_new);
			}
			else if ( Class.CastTo(headstrap, player.FindAttachmentBySlotName("Eyewear")) )
			{
				target_new = new ActionTarget(headstrap, null, -1, vector.Zero, -1);
				ForceActionTarget(target_new);
			}
			else
				ClearForcedTarget();
		}
		
		target = m_ForcedTarget;
		m_Target = m_ForcedTarget;
		
		if(target && target.GetObject())
		{
			target.GetObject().GetActions(this.Type(), possible_actions);
			if(possible_actions)
			{
				for (i = 0; i < possible_actions.Count(); i++)
				{
					action = ActionBase.Cast(possible_actions.Get(i));
					if ( action.Can(player, target, m_MainItem, action_condition_mask) )
					{
						m_SelectAction = action;
						return;
					}
				}
			}
		}
	}
};