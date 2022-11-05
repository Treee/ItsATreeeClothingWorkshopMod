class TurnItemIntoItemLambda_UnsealedLetterToSealed extends TurnItemIntoItemLambda
{
	override void CopyOldPropertiesToNew (notnull EntityAI old_item, EntityAI new_item)
	{
		super.CopyOldPropertiesToNew(old_item, new_item);
    SRP_SealedLetter_ColorBase sealedLetter;
		if (new_item && Class.CastTo(sealedLetter, new_item)) 
		{			
      sealedLetter.SealLetter(m_Player.GetIdentity().GetId(), m_Player.GetIdentity().GetName());
		}
		else
		{
			Debug.LogError("TurnItemIntoItemLambda_UnsealedLetterToSealed: failed to create new item and place it","static");
		}
	}
};

class ActionSRPSealLetterCB extends ActionSingleUseBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CASingleUseQuantityEdible(UAQuantityConsumed.DEFAULT);
	}
};

class ActionSRPSealLetter: ActionSingleUseBase
{	
	void ActionSRPSealLetter()
	{
		m_CallbackClass = ActionSRPSealLetterCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INJECTIONTARGET;
		m_StanceMask = DayZPlayerConstants.STANCEIDX_ERECT | DayZPlayerConstants.STANCEIDX_CROUCH;
		m_FullBody = true;
		m_Text = "Seal Letter";
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
      SRP_UnSealedLetter unsealedLetter;
      SRP_SealPress_ColorBase seal;
      if (Class.CastTo(seal,item) && Class.CastTo(unsealedLetter, target.GetObject()))
      {
        return seal.HasWaxApplied() && unsealedLetter.CanBeSealed();
      }
    }
		return false;
	}

	override void OnEndServer( ActionData action_data)
	{
    if (action_data.m_Target && action_data.m_Target.GetObject())
    {
      SRP_UnSealedLetter unsealedLetter = SRP_UnSealedLetter.Cast(action_data.m_Target.GetObject());
      SRP_SealPress_ColorBase seal = SRP_SealPress_ColorBase.Cast(action_data.m_MainItem);

      seal.AddHealth(-1);

      TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(seal, "SRP_SealPress_NoWax", action_data.m_Player);
      lambda.SetTransferParams();
      action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);		

      TurnItemIntoItemLambda_UnsealedLetterToSealed sealedLambda = new TurnItemIntoItemLambda_UnsealedLetterToSealed(unsealedLetter, string.Format("SRP_SealedLetter_%1",seal.ConfigGetString("color")), action_data.m_Player);
      sealedLambda.SetTransferParams(true, true, true, false, 1);
      action_data.m_Player.ServerReplaceItemWithNew(sealedLambda);		
    }
	}
};