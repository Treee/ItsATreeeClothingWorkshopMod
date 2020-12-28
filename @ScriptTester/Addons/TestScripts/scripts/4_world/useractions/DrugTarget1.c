class ActionDrugOthers1: ActionContinuousBase
{
	void ActionDrugOthers1()
	{
		m_CallbackClass = ActionGiveSalineTargetCB;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_FORCEFEED;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
	}
		
	override string GetText()
	{
		return "Give Person Drug"; //change this to what gets shown when you have the option
	}

	override void ApplyModifiers( ActionData action_data )
	{
		action_data.m_MainItem.OnApply(PlayerBase.Cast(action_data.m_Target.GetObject()));
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
		PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
		ntarget.AddHealth("GlobalHealth", "Health", -10); //change the health if you want to -30 removes 30 hp)
		action_data.m_MainItem.Delete();
		
		ntarget.GiveShock(1000);
		ntarget.GetStaminaHandler().SetStamina(100);

		ntarget.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
		ntarget.GetModifiersManager().ActivateModifier( eModifiers.MDF_MORPHINE );	
		ntarget.GetModifiersManager().ActivateModifier( eModifiers.MDF_PAINKILLERS );
	}
}