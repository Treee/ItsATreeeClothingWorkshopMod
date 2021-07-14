class ActionSRPConstructCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.DEFAULT_CONSTRUCT);
	}
};

class ActionSRPConstruct: ActionContinuousBase
{
	void ActionSRPConstruct()
	{
		m_CallbackClass = ActionSRPConstructCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
	}
	
	override void CreateConditionComponents()  
	{		
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "Construct";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    Object target_object = target.GetObject();
    if (target_object && item && item.GetType() == "Hammer"){      
      if (target_object.IsInherited(SRP_BaseBuildingBase)) {
        SRP_BaseBuildingBase srp_buildingbase = SRP_BaseBuildingBase.Cast(target_object);
        // Print("TargetObject: " +target_object+ " TargetType: " +target_object.GetType()+ " ISKindOfSRPBase: " +target_object.IsInherited(SRP_BaseBuildingBase));      
        return srp_buildingbase.IsUnderConstruction();
      }
    }
    return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{	
    Print("my wall OnFinishProgressServer: " + action_data.m_Target.GetObject());
    if (action_data && action_data.m_Target) 
    {
      Object target_object = action_data.m_Target.GetObject();
      if (target_object && target_object.IsInherited(SRP_BaseBuildingBase))
      {
        Print("Construct wall complete");
        SRP_BaseBuildingBase srp_buildingbase = SRP_BaseBuildingBase.Cast(target_object);
        srp_buildingbase.CompleteConstruction();
        string selection = target_object.GetActionComponentName( action_data.m_Target.GetComponentIndex() );
        Print("OnFinishProgressServer Selection: " + selection)
      }
    }
	}

  override void OnFinishProgressClient( ActionData action_data )
	{	
    // Print("my wall OnFinishProgressClient");
    if (action_data && action_data.m_MainItem) 
    {
      SRP_BaseBuildingBase srp_basebuilding = SRP_BaseBuildingBase.Cast(action_data.m_MainItem);
      if (srp_basebuilding) {
        srp_basebuilding.CompleteConstruction();
      }
    }
	}
};