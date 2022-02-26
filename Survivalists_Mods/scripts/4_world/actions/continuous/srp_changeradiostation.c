class ActionTuneCrypticFrequencyCB : ActionContinuousBaseCB
{
	private const float REPEAT_AFTER_SEC = 1.0;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(REPEAT_AFTER_SEC);
	}
}

class ActionTuneCrypticFrequency: ActionContinuousBase
{
	void ActionTuneCrypticFrequency()
	{
		m_CallbackClass = ActionTuneCrypticFrequencyCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_TUNE;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_ITEM_TUNE;		
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTNone;
		m_ConditionItem = new CCINonRuined;
	}
	
	override bool HasProneException()
	{
		return true;
	}

	override bool HasTarget()
	{
		return false;
	}

	override string GetText()
	{
		return "#tune_frequency";
	}

	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		if ( item ) 
		{
			SRP_PersonalRadio_NumberStations radio = SRP_PersonalRadio_NumberStations.Cast( item );
			
			if ( radio.GetCompEM().IsWorking() ) 
			{				
				return true;
			}
		}
		return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_PersonalRadio_NumberStations radio = SRP_PersonalRadio_NumberStations.Cast( action_data.m_MainItem );
		radio.SetNextFrequency( );
	}
}