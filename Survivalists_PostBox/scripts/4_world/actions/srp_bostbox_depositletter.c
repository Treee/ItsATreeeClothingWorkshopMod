class ActionSRPDepositLetterCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{	
		m_ActionData.m_ActionComponent = new CAContinuousTime(2.0);
	}
};
class ActionSRPDepositLetter extends ActionContinuousBase
{	
	void ActionSRPDepositLetter()
	{
    m_CallbackClass = ActionSRPDepositLetterCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_RESTRAINTARGET;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_Text = "Deposit Letter";
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (target && target.GetObject())
    {
      SRP_PostBox_Base postBox = SRP_PostBox_Base.Cast(target.GetObject());
      SRP_SealedLetter_ColorBase sealedLetter = SRP_SealedLetter_ColorBase.Cast(item);
      if (postBox && sealedLetter)
      {
        return postBox.CanDepositLetter();
      }
			return false;
		}
    return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		if (GetGame().IsMultiplayer())
			return; // multiplayer handled on client side via OnExecuteClient
		else
			OnFinishImpl(action_data); // single player
	}
  override void OnFinishProgressClient( ActionData action_data )
	{
		ClearInventoryReservationEx(action_data);
		OnFinishImpl(action_data);
	}

  protected void OnFinishImpl(ActionData action_data)
  {
    if (action_data.m_Target && action_data.m_Target.GetObject())
    {
      SRP_PostBox_Base postBox = SRP_PostBox_Base.Cast(action_data.m_Target.GetObject());
      SRP_SealedLetter_ColorBase sealedLetter = SRP_SealedLetter_ColorBase.Cast(action_data.m_MainItem);      
      if (postBox && sealedLetter)
      {
        InventoryLocation target_location = new InventoryLocation;
        if ( postBox.GetInventory().FindFirstFreeLocationForNewEntity( sealedLetter.GetType(), FindInventoryLocationType.ATTACHMENT, target_location ) )
        {
          action_data.m_Player.PredictiveTakeEntityToTargetAttachmentEx( postBox, sealedLetter, target_location.GetSlot() );
        }
      }
    }
  }
};
