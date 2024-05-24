class SRP_PressWaterFromPaperCB : ActionContinuousBaseCB
{
	protected const float QUANTITY_WRINGLED_PER_SECOND = 0.02;

	override void CreateActionComponent()
	{
		//m_ActionData.m_ActionComponent = new CAContinuousWringClothes(QUANTITY_WRINGLED_PER_SECOND, UATimeSpent.WASH_HANDS);
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(UATimeSpent.WRING);
	}
};

class SRP_PressWaterFromPaper: ActionContinuousBase
{
	void SRP_PressWaterFromPaper()
	{
		m_CallbackClass = SRP_PressWaterFromPaperCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_WRING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;
		m_Text = "Press Water From Paper";
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
	}

	override bool HasTarget()
	{
		return true;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
        if (!target || !target.GetObject())
            return false;

        SRP_PrefabCrafting_printingpress press;
        if (!Class.CastTo(press, target.GetObject()))
            return false;

		if ( item && item.GetWet() > 0.05 )
			return true;
        return false;
	}
	override void OnFinishProgressServer( ActionData action_data )
	{
		float wetness = action_data.m_MainItem.GetWet();
		float wet_change;

		if (wetness >= GameConstants.STATE_DRENCHED)
		{
			wet_change = Math.RandomFloat(GameConstants.STATE_SOAKING_WET,GameConstants.STATE_DRENCHED);
		}
		else if (wetness >= GameConstants.STATE_SOAKING_WET)
		{
			wet_change = Math.RandomFloat(GameConstants.STATE_WET,GameConstants.STATE_SOAKING_WET);
		}
		else if (wetness >= GameConstants.STATE_WET)
		{
			wet_change = Math.RandomFloat(GameConstants.STATE_DAMP,GameConstants.STATE_WET);
		}

		//Print(wet_change);
		action_data.m_MainItem.SetWet(wet_change);

		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
	}
};