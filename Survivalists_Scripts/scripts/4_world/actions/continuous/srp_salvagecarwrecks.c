class ActionSalvageCarWreckCB : ActionContinuousBaseCB
{
	static const float TIME_SAW_HANDSAW = 45;
	static const float TIME_SAW_HACKSAW = 20;
	static const float TIME_AXES = 60;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(GetDefaultTime());
	}
	
	float GetDefaultTime()
	{
		string item_type = m_ActionData.m_MainItem.GetType();
		
		switch(item_type)
		{
			case "Hacksaw": 
				return TIME_SAW_HACKSAW;
			break;
		
			case "HandSaw": 
				return TIME_SAW_HANDSAW;
			break;
		
			default: // axes
				return TIME_AXES;
			break
		}
		Print("ActionSalvageCarWreckCB | Item detection error, assigning negative time");
		return -1;
	}
};

class ActionSalvageCarWreck extends ActionContinuousBase
{	
	void ActionSalvageCarWreck()
	{
		m_CallbackClass = ActionSalvageCarWreckCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DISASSEMBLE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_MEDIUM;
		m_Text = "Salvage Car Wreck - Metal";
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTNonRuined(UAMaxDistances.DEFAULT);
		m_ConditionItem = new CCINonRuined;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object target_O = target.GetObject();
		// Print("Target object: " + target_O + " type: " +target_O.GetType());
		if ( item && target_O.GetType().Contains("_Wreck_"))
		{
			// Print("type: " + target_O.GetType());
			return true;
		}
		
		return false;
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
    ItemBase metal = ItemBase.Cast( GetGame().CreateObjectEx("MetalPlate", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE) );
    metal.SetQuantity(Math.RandomIntInclusive(1,4));
						
		action_data.m_MainItem.DecreaseHealth(10000);
		
	}
};