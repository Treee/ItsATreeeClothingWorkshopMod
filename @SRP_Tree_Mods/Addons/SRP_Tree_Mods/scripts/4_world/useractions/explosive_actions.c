
// class ActionLightExplosivesInHands: ActionSingleUseBase
// {
// 	void ActionLightExplosivesInHands()
// 	{
//     m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_LIGHTFLARE;
// 	}
	
// 	override void CreateConditionComponents()  
// 	{	
// 		m_ConditionItem = new CCINonRuined;
// 		m_ConditionTarget = new CCTNone;
// 	}

// 	override bool HasTarget()
// 	{
// 		return false;
// 	}

// 	override string GetText()
// 	{
// 		return "Ignite";
// 	}

// 	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
// 	{	
//     SRP_Dynamite_Stick explosive = SRP_Dynamite_Stick.Cast(item);
// 		if (explosive && explosive.IsPinned()) // only allow the action if the dynamite is not ignited already
// 		{
// 			return true;
// 		}
// 		return false;
// 	}
	
// 	override void OnStartClient( ActionData action_data )
// 	{

// 	}
	
// 	override void OnStartServer( ActionData action_data )
// 	{
// 		if ( action_data.m_MainItem  &&  action_data.m_MainItem.IsInherited(SRP_Dynamite_Stick) )
// 		{
//       SRP_Dynamite_Stick explosive = SRP_Dynamite_Stick.Cast(action_data.m_MainItem);
//       if (explosive)
//       {
//         explosive.Unpin();
//       }
// 		}
// 	}
// };
