class SRP_ActionDismantleOwnedPlacedObjectCB: ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		float time = SetCallbackDuration(m_ActionData.m_MainItem);
		m_ActionData.m_ActionComponent = new CAContinuousTime( time );
	}
	float SetCallbackDuration( ItemBase item )
	{
		return UATimeSpent.BASEBUILDING_DECONSTRUCT_SLOW;
	}
};

class SRP_ActionDismantleOwnedPlacedObject: ActionContinuousBase
{
	void SRP_ActionDismantleOwnedPlacedObject()
	{
		m_CallbackClass = SRP_ActionDismantleOwnedPlacedObjectCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;	
		m_FullBody = true;
		
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
		m_Text = "#dismantle";
	}
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.REPAIR );
	}
	override bool CanBeUsedLeaning()
	{
		return false;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		if ( player.IsPlacingLocal() )
			return false;				
		if (player.GetBrokenLegs() == eBrokenLegs.BROKEN_LEGS)
			return false;  
    if (player.m_MovementState.m_iStanceIdx == DayZPlayerConstants.STANCEIDX_PRONE)
      return false;

    SRP_PostBox_Base postBox;
    if (Class.CastTo(postBox, target.GetObject()))
    {
      if (postBox.HasBeenChecked() && postBox.IsEmpty())
      {
        if (!postBox.HasOwner())
        {
          return true;
        }
        else if (postBox.IsPlayerOwner(player.GetIdentity().GetId()))
        {
          return true;
        }
      }
    }
    return false;
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_PostBox_Base postBox;
    if (Class.CastTo(postBox, action_data.m_Target.GetObject()))
    {
      TurnItemIntoItemLambda_KitDeployment lambda = new TurnItemIntoItemLambda_KitDeployment(postBox, string.Format("%1_Kit", postBox.GetType()), action_data.m_Player, action_data.m_Player.GetPosition());
      lambda.SetTransferParams(false, false, false);
      MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, lambda);
    }
	}
	
	override string GetAdminLogMessage(ActionData action_data)
	{
    string message = "Player dismantled post box.";
    return message;
	}
}