class SRP_ActionSawPlanksCB : ActionContinuousBaseCB
{
	static const float TIME_HANDPLANE_CRUDE = 12.0;
	static const float TIME_HANDPLANE_METAL = 6.0;
	static const float TIME_BAND_SAW = 3.0;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(GetDefaultTime());
	}
	
  float GetDefaultTime()
	{
		string item_type = m_ActionData.m_MainItem.GetType();
		
		switch(item_type)
		{
			case "SRP_HandPlane_Metal": 
				return TIME_HANDPLANE_METAL;
			break;
		
			case "SRP_HandPlane_Crude": 
				return TIME_HANDPLANE_CRUDE;
			break;
		
			default: // axes
				return TIME_BAND_SAW;
			break
		}
		Print("SRP_ActionSawPlanksCB | Item detection error, assigning negative time");
		return -1;
	}
};

class SRP_ActionSawPlanks: ActionContinuousBase
{
	void SRP_ActionSawPlanks()
	{
		m_CallbackClass = SRP_ActionSawPlanksCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_MEDIUM;
		m_Text = "#saw_planks";
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTNonRuined(UAMaxDistances.DEFAULT);
		m_ConditionItem = new CCINonRuined;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (!target)
      return false;
    
		WoodenLog woodenlog;
		if (Class.CastTo(woodenlog, target.GetObject()))
		{		
			return true;
		}
		
		return false;
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
    WoodenLog woodenlog;
    if (action_data.m_Target && Class.CastTo(woodenlog, action_data.m_Target.GetObject()))
    {
      ReplaceItemWithNewLambda_SawWoodenLogs lambda = new ReplaceItemWithNewLambda_SawWoodenLogs(woodenlog, "WoodenPlank", action_data.m_Player, GetPlankYield(action_data.m_MainItem.GetType()));
      MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, lambda);    
      MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, GetToolDamage(action_data.m_MainItem.GetType()));    
    }
	}

  int GetToolDamage(string itemName)
  {	
		switch(itemName)
		{
			case "SRP_HandPlane_Metal": 
				return 5;
			break;
		
			case "SRP_HandPlane_Crude": 
				return Math.RandomIntInclusive(3,7);
			break;
		
			default: // axes
				return 1;
			break
		}
		Print("SRP_ActionSawPlanksCB | Item detection error, assigning negative time");
		return -1;
  }

  int GetPlankYield(string itemName)
  {	
		switch(itemName)
		{
			case "SRP_HandPlane_Metal": 
				return 3;
			break;
		
			case "SRP_HandPlane_Crude": 
				return Math.RandomIntInclusive(1,2);
			break;
		
			default: // axes
				return 4;
			break
		}
		Print("SRP_ActionSawPlanksCB | Item detection error, assigning negative time");
		return -1;
  }
};