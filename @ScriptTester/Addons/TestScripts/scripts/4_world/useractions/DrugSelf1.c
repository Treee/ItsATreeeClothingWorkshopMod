class ActionDrugSelf1: ActionContinuousBase	
{
	void ActionDrugSelf1()
	{
		m_CallbackClass = ActionGiveSalineSelfCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;

		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_EAT;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_EAT;	
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

	override bool HasTarget()
	{
		return false;
	}
		
	override string GetText()
	{
		return "Take Drug"; //change this to what gets shown when you have the option
	}

	override void ApplyModifiers( ActionData action_data )
	{
		action_data.m_MainItem.OnApply(action_data.m_Player);
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{	
		action_data.m_Player.AddHealth("GlobalHealth", "Health", -50); //change the health if you want to -30 removes 30 hp)
		action_data.m_MainItem.Delete();
		
		action_data.m_Player.GiveShock(1000);
		action_data.m_Player.GetStaminaHandler().SetStamina(100);

		action_data.m_Player.GetModifiersManager().ActivateModifier( eModifiers.MDF_SHOCK );
		// action_data.m_Player.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
		// action_data.m_Player.GetModifiersManager().ActivateModifier( eModifiers.MDF_MORPHINE );	
		// action_data.m_Player.GetModifiersManager().ActivateModifier( eModifiers.MDF_PAINKILLERS );
	}
}