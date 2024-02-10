class SRP_ActionRingBellCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(1);
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
	
	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTCursor(UAMaxDistances.DEFAULT);
		m_ConditionItem		= new CCINonRuined();
	}
	
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
    // Print("trying to riung bell: " + target.GetObject().GetType());
    SRP_BellTower_Base bellTower;
    if (Class.CastTo(bellTower, target.GetObject()))
    {      
      Print("looking at bell");
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
      Print("bell rung");
      bellTower.RequestSoundEvent();
    }
	}
}