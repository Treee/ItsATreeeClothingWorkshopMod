class SRP_ActionPatDownTargetCB extends ActionContinuousBaseCB
{
	const float DEFAULT_RESTRAIN_TIME = 6;
	
	override void CreateActionComponent()
	{
		float time = DEFAULT_RESTRAIN_TIME;
		
		if ( m_ActionData.m_Player.IsQuickRestrain() )		
			time = DEBUG_QUICK_UNRESTRAIN_TIME;	
		
		m_ActionData.m_ActionComponent = new CAContinuousTime(time);
	}
};

class SRP_PatDownTarget extends ActionContinuousBase
{	
	void SRP_PatDownTarget()
	{
		m_CallbackClass = SRP_ActionPatDownTargetCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_RESTRAINTARGET;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_Text = "Pat Down";
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
		m_ConditionItem = new CCINone;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		// if ( player.GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER )
		// {
    PlayerBase other_player;
    if (Class.CastTo(other_player, target.GetObject()))
    {
      return true;
			// return other_player.CanBeRestrained();
    }
		// }
		return false;
		// return true;
	}

	// override bool ActionConditionContinue(ActionData action_data)
	// {
	// 	PlayerBase target_player = PlayerBase.Cast(action_data.m_Target.GetObject());
		
	// 	if ( GetGame().IsServer() && GetGame().IsMultiplayer() )
	// 	{
	// 		if ( target_player.IsSurrendered() || !target_player.CanBeRestrained() )
	// 		{
	// 			return false;
	// 		}
	// 	}
	// 	if ( GetGame().IsServer() )
	// 	{
	// 		SRP_ActionPatDownTargetCB callback = SRP_ActionPatDownTargetCB.Cast(action_data.m_Callback);
			
	// 		if ( callback.GetActionComponentProgress() > 0.75 && !target_player.IsRestrainPrelocked() )
	// 		{
	// 			target_player.SetRestrainPrelocked(true);
	// 		}
			
	// 		return !GetGame().GetMission().IsPlayerDisconnecting(target_player);
			
	// 	}
	// 	return true;
	// }
	
	override void OnStartServer(ActionData action_data)
	{
		PlayerBase target_player = PlayerBase.Cast(action_data.m_Target.GetObject());

		if ( !target_player.IsSurrendered() )
		{
      // target_player.GetEmoteManager().StartSurrenderEmote();
			// SurrenderDataRestrain sdr = new SurrenderDataRestrain;
			// target_player.EndSurrenderRequest(sdr);
		}
		else if ( target_player.IsEmotePlaying() )
		{
			// target_player.m_EmoteManager.ServerRequestEmoteCancel();
		}
		
		// target_player.SetRestrainStarted(true);
	}
	
	// override void OnEndServer(ActionData action_data)
	// {
	// 	PlayerBase target_player = PlayerBase.Cast(action_data.m_Target.GetObject());
	// 	if (target_player)
	// 	{
	// 		target_player.SetRestrainStarted(false);
	// 		target_player.SetRestrainPrelocked(false);
	// 	}
	// }

	// override void OnFinishProgressServer( ActionData action_data )
	// {
	// 	PlayerBase target_player = PlayerBase.Cast(action_data.m_Target.GetObject());
	// 	PlayerBase source_player = PlayerBase.Cast(action_data.m_Player);
	
	// 	EntityAI item_in_hands_target = target_player.GetHumanInventory().GetEntityInHands();
	// 	EntityAI item_in_hands_source = source_player.GetHumanInventory().GetEntityInHands();
		
	// 	if ( !item_in_hands_source )
	// 	{
	// 		Error("Restraining target failed, nothing in hands");
	// 		return;
	// 	}

	// 	string new_item_name = MiscGameplayFunctions.ObtainRestrainItemTargetClassname(item_in_hands_source);
	// 	if (item_in_hands_target)
	// 	{
	// 		Print("Restraining player with item in hands, first drop & then restrain");

	// 		ChainedDropAndRestrainLambda lambda2 = new ChainedDropAndRestrainLambda(item_in_hands_target, item_in_hands_target.GetType(), target_player, false, source_player);
	// 		MiscGameplayFunctions.TurnItemInHandsIntoItemEx(target_player, lambda2);
	// 	}
	// 	else
	// 	{
	// 		Print("Restraining player with empty hands");
	// 		RestrainTargetPlayerLambda lambda = new RestrainTargetPlayerLambda(item_in_hands_source, new_item_name, target_player);
	// 		source_player.LocalReplaceItemInHandsWithNewElsewhere(lambda);
	// 	}
		
	// 	action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
	// }
	
	// override void OnFinishProgressClient( ActionData action_data )
	// {
	// 	super.OnFinishProgressClient( action_data );
		
	// 	GetGame().GetAnalyticsClient().OnActionRestrain();
	// }
};
