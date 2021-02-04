// This is the old way how I did it. Replaced with the menu system in RadioInterAction.c and SwitchRadioAction.c
// class IncreaseVolumeCB : ActionContinuousBaseCB
// {
// 	private const float REPEAT_AFTER_SEC = 2.0;
	
// 	override void CreateActionComponent()
// 	{
// 		m_ActionData.m_ActionComponent = new CAContinuousRepeat(REPEAT_AFTER_SEC);
// 	}
// }

// class IncreaseVolume: ActionContinuousBase	
// {
// 	void IncreaseVolume()
// 	{
// 		m_CallbackClass = IncreaseVolumeCB;
// 		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_TUNE;
// 		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_ITEM_TUNE;		
// 		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;
// 	}
	
// 	override void CreateConditionComponents()  
// 	{	
// 		m_ConditionItem = new CCINonRuined;
// 		m_ConditionTarget = new CCTNone;
// 	}

// 	override bool HasProneException()
// 	{
// 		return true;
// 	}

// 	override bool HasTarget()
// 	{
// 		return false;
// 	}

// 	override string GetText()
// 	{
// 		return "Increase Volume";
// 	}

// 	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
// 	{	
//     BaseRadio radio;
//     Class.CastTo(radio, item);
//     // Print("Current Radio Volume" + radio.GetVolume());
//     if (radio.IsReceiving() && radio.GetVolume() < 1 ) {
//       // Print("low volume!! increase it!");
//       return true;
//     }
// 		return false;
// 	}

// 	override void OnFinishProgressServer( ActionData action_data )
// 	{	
//     GGRadio_Radio_Base radio;
//     Class.CastTo(radio, action_data.m_MainItem);
//     radio.IncreaseVolume();
// 	}
// }