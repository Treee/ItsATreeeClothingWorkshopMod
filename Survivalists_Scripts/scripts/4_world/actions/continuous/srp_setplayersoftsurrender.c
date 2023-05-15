modded class UAMaxDistances
{
	const float SOFT_SURRENDER = 1.0;
};

class SRP_ActionSetPlayerSoftSurrender: ActionContinuousBase
{
	void SRP_ActionSetPlayerSoftSurrender()
	{
		m_CallbackClass = ActionSearchPlayerAtWallCB;
		m_CommandUID = 62000; // survivor animation pat down
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_Sound = "craft_universal_0";
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTMan(UAMaxDistances.SOFT_SURRENDER);
		m_ConditionItem = new CCINone;
	}
	override string GetText()
	{
		return "Search Person - Inspect";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    PlayerBase target_player;
    if (Class.CastTo(target_player, target.GetObject()))
      return !target_player.IsRestrained();
		return false;	
	}

	override void OnFinishProgressServer( ActionData action_data )
	{	
		PlayerBase target;
		if (Class.CastTo(target, action_data.m_Target.GetObject()))
    {
			target.SetIsSoftSurrendered(true);
			target.AutoCloseSoftSurrender();
    }		
	}
};