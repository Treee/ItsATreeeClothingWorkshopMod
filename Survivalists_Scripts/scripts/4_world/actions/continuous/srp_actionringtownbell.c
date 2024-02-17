class SRP_ActionRingBellCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(1.5);
	}
}

class SRP_ActionRingBell: ActionContinuousBase
{
	void SRP_ActionRingBell()
	{
		m_CallbackClass		= SRP_ActionRingBellCB;
		m_CommandUID		= DayZPlayerConstants.CMD_ACTIONFB_DISASSEMBLE;
		m_FullBody			= true;
		m_StanceMask		= DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight	= UASoftSkillsWeight.ROUGH_LOW;
		m_Text = "Ring Bell";
	}
  override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget	= new CCTCursor(UAMaxDistances.DEFAULT);
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
    SRP_BellTower_Base bellTower;
    if (Class.CastTo(bellTower, target.GetObject()))
    {
      return true;
      // return item.CanRingBell();
    }
    return false;
	}

	override void OnFinishProgressServer(ActionData action_data)
	{
		SRP_BellTower_Base bellTower;
    if (Class.CastTo(bellTower, action_data.m_Target.GetObject()))
    {      
      bellTower.RequestSoundEvent();
    }
	}
}