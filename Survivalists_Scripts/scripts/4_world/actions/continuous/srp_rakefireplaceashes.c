class ActionSRPRakeFireplaceAshes: ActionContinuousBase
{		
	void ActionSRPRakeFireplaceAshes()
	{
		m_CallbackClass		= ActionDigInStashCB;
		m_CommandUID		= DayZPlayerConstants.CMD_ACTIONFB_DIGMANIPULATE;
		m_FullBody			= true;
		m_StanceMask		= DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight	= UASoftSkillsWeight.ROUGH_LOW;
    m_Text = "Rake Coals";
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionTarget	= new CCTObject(UAMaxDistances.DEFAULT);
		m_ConditionItem		= new CCINonRuined();
	}
	
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		FireplaceBase targetIB;
		if (Class.CastTo(targetIB, target.GetObject()) && targetIB.IsFireplace() && !targetIB.IsDamageDestroyed())
		{
      return targetIB.HasAshes();
		}
		return false;
	}

	override void OnFinishProgressServer(ActionData action_data)
	{
    if (Math.RandomIntInclusive(1,20) > 12)
    {
		  ItemBase coke;
      Class.CastTo(coke, GetGame().CreateObjectEx("SRP_Mining_StoneChunk_Coke", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
      coke.SetQuantity(Math.RandomIntInclusive(1,3));
    }
    MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, Math.RandomIntInclusive(4,10));
    MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_Target.GetObject(), 5);
	}
};