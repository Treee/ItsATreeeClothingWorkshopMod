class ActionPaintFaceCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.SHAVE);
		// m_ActionData.m_ActionComponent = new CAContinuousTime(1.0);
	}
};

class ActionPaintFace: ActionContinuousBase
{	
  void ActionPaintFace()
	{
		m_CallbackClass = ActionPaintFaceCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_SHAVE;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}  

  override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    return true;
	}

  override string GetText()
	{
		return "Apply " + GetCamoName();
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    if (action_data.m_MainItem)
		{
      SRP_FacePaintStick paintStick = SRP_FacePaintStick.Cast(action_data.m_MainItem);
      if (paintStick)
      {        
        action_data.m_Player.m_facepaintState = action_data.m_Player.m_currentCamoIndex;
        action_data.m_Player.SetSynchDirty();
      }			
		}
	}

  override void OnFinishProgressClient( ActionData action_data )
	{	
    if (action_data.m_MainItem)
		{
      SRP_FacePaintStick paintStick = SRP_FacePaintStick.Cast(action_data.m_MainItem);
      if (paintStick)
      {        
        action_data.m_Player.m_facepaintState = action_data.m_Player.m_currentCamoIndex;
        action_data.m_Player.SetSynchDirty();
      }			
		}
	}

  string GetCamoName()
  {
    string selectedCamo = "";
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if ( player )
		{
      selectedCamo = player.GetCurrentCamoIndexName();
      if (selectedCamo == "")
      {
        selectedCamo = "Clear";
      }
      else
      {
        selectedCamo.Replace("fp_", "");
      }
    }
    return selectedCamo;
  }
};


class ActionFacePaintStickSwitch: ActionSingleUseBase
{
	void ActionFacePaintStickSwitch()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_PICKUP_HANDS;
	}
	
	override void CreateConditionComponents()  
	{		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
		
	override bool IsInstant()
	{
		return true;
	}
	
	override bool UseAcknowledgment()
	{
		return true;
	}		
	
	override string GetText()
	{
		return "Next Camo";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{		
		return true;
	}
	
	//-------------------------------------------------
	override void OnStartClient(ActionData action_data)
	{
		super.OnStartClient( action_data );
		
		SetNextIndex(action_data);
	}
	
	override void OnStartServer(ActionData action_data)
	{
		super.OnStartServer( action_data );
		
		if (!GetGame().IsMultiplayer())
			SetNextIndex(action_data);
	}
	
	void SetNextIndex(ActionData action_data)
	{    
    if (action_data.m_Player.m_currentCamoIndex >= action_data.m_Player.m_facepaintCountMax)
    {
		  action_data.m_Player.m_currentCamoIndex = 0;
    }
    else
    {
      action_data.m_Player.m_currentCamoIndex++;
    }
	}
}