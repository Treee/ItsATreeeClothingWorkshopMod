class DecreaseVolumeCB : ActionContinuousBaseCB
{
	private const float REPEAT_AFTER_SEC = 2.0;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(REPEAT_AFTER_SEC);
	}
}

class DecreaseVolume: ActionContinuousBase	
{
	void DecreaseVolume()
	{
		m_CallbackClass = DecreaseVolumeCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_TUNE;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_ITEM_TUNE;		
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
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
		return "Decrease Volume";
	}

	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    GGRadio_Radio_Base radio;
    Class.CastTo(radio, item);
    // Print("Current Radio Volume" + radio.GetVolume());
    if (radio.IsPlaying() && radio.GetVolume() > 0 ) {
      // Print("high volume!! Decrease it!");
      return true;
    }
		return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{	
    GGRadio_Radio_Base radio;
    Class.CastTo(radio, action_data.m_MainItem);
    radio.DecreaseVolume();
	}
}