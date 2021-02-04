modded class ActionSmokeCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(5);
	}
};

modded class ActionSmoke: ActionContinuousBase
{
  void ActionSmoke()
	{
		m_CallbackClass = ActionSmokeCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_TAKETEMPSELF;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_TAKETEMPSELF;
		//m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	override void OnFinishProgressServer( ActionData action_data )
	{	
    action_data.m_MainItem.AddQuantity(-1);
	}
};