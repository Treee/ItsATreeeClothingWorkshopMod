class SRP_ActionEmptyPlantPulpIntoFrameCB : ActionContinuousBaseCB
{
	bool m_RPCStopAlreadySent;//since stopping contains a sound tail, we need to stop it only once, this bool ensures that
	override void CreateActionComponent()
	{
		float EmptiedQuantity;
		Bottle_Base bottle = Bottle_Base.Cast(m_ActionData.m_MainItem);
		if (bottle)
			EmptiedQuantity = bottle.GetLiquidEmptyRate() * bottle.GetLiquidThroughputCoef();
		m_ActionData.m_ActionComponent = new CAContinuousEmpty(EmptiedQuantity);
	}
};

class SRP_ActionEmptyPlantPulpIntoFrame: ActionContinuousBase
{
	void SRP_ActionEmptyPlantPulpIntoFrame()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_EMPTY_VESSEL;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;

		m_CallbackClass = SRP_ActionEmptyPlantPulpIntoFrameCB;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_Text = "Empty Pulp";
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINotRuinedAndEmpty;
		m_ConditionTarget = new CCTNonRuined(UAMaxDistances.DEFAULT);
	}

	override bool HasTarget()
	{
		return true;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
        if (!target || !target.GetObject())
            return false;

        DUB_Flagframe frame;
        if (Class.CastTo(frame, target.GetObject()))
        {
            if ( GetGame().IsServer() && GetGame().IsMultiplayer() )
                return true;

            if (item.IsLiquidPresent())
            {
                return true;
            }
        }
		return false;
	}

	override bool ActionConditionContinue( ActionData action_data )
	{
		if (action_data.m_MainItem.GetQuantity() > action_data.m_MainItem.GetQuantityMin())
		{
			return true;
		}
		return false;
	}

	override void OnStartAnimationLoop( ActionData action_data )
	{
		SendRPC(action_data,true);
	}

	override void OnEndAnimationLoop( ActionData action_data )
	{
		SendRPC(action_data,false);
	}

	override void OnEndServer( ActionData action_data )
	{
		SendRPC(action_data,false);
        Pot pot;
        if (Class.CastTo(pot, action_data.m_MainItem))
        {
            int totalPulp = pot.GetPlantPulpInCargo();
            pot.RemovePlantPulpInCargo();
            int numLargeSheets = Math.Max(1, (totalPulp / 200));
            EntityAI newPaper;
            for(int i = 0; i < numLargeSheets; i++)
            {
                if (Class.CastTo(newPaper, GetGame().CreateObjectEx("SRP_Paper_LargeSheetRaw", action_data.m_Target.GetObject().GetPosition(), ECE_PLACE_ON_SURFACE|ECE_SETUP|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY)))
                {
                    newPaper.SetWet(2);
                }
            }
        }
	}

	protected void SendRPC(ActionData actionData, bool enable)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsServer() )
		{
			SRP_ActionEmptyPlantPulpIntoFrameCB comp = SRP_ActionEmptyPlantPulpIntoFrameCB.Cast(actionData.m_Callback);
			if (comp.m_RPCStopAlreadySent)
				return;

			Bottle_Base target_vessel = Bottle_Base.Cast( actionData.m_MainItem );
			Param1<bool> play = new Param1<bool>( enable );
			GetGame().RPCSingleParam( target_vessel, SoundTypeBottle.EMPTYING, play, true );
			if (!enable)
				comp.m_RPCStopAlreadySent = true;
		}
	}
};