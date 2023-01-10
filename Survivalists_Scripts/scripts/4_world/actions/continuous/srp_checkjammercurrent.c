class ActionCheckJammerCurrentCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(5);
	}
};

class ActionCheckJammerCurrent extends ActionContinuousBase
{
	void ActionCheckJammerCurrent()
	{
		m_CallbackClass = ActionCheckJammerCurrentCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
		m_Text = "Measure Current";
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionTarget = new CCTNonRuined(UAMaxDistances.DEFAULT);
		m_ConditionItem = new CCINonRuined;
	}


	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
    if (item && item.GetType() == "BatteryCharger_VoltMeter")
    {
      SRP_ElectronicsJammer_Base jammer = SRP_ElectronicsJammer_Base.Cast(target.GetObject());
      if (jammer && jammer.HasHackingKitAttached())
      {
        // Print("has hacking kit: " + jammer.HasHackingKitAttached());
        return jammer.HasHackingKitAttached();
      }      
    }
    return false;	
	}

	override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_ElectronicsJammer_Base jammer = SRP_ElectronicsJammer_Base.Cast(action_data.m_Target.GetObject());
    if (jammer)
    {      
      action_data.m_Player.SendMessageToClient(action_data.m_Player, string.Format("%1 Volts", jammer.GetPriorityHackingKitCurrent()));
    }
	}
};
