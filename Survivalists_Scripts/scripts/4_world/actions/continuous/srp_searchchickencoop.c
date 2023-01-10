class ActionSearchChickenCoopCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(45);
	}
};

class ActionSearchChickenCoop extends ActionContinuousBase
{
	void ActionSearchChickenCoop()
	{
		m_CallbackClass = ActionSearchChickenCoopCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
    m_Text = "Gather Feathers";
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionTarget = new CCTCursor(UAMaxDistances.DEFAULT);
		m_ConditionItem = new CCINone;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Land_misc_chickenCoop coop;

    if (target && Class.CastTo(coop, target.GetObject()))    
    {
      return !coop.HasBeenSearched();
    }
		return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
    Land_misc_chickenCoop coop;
    if (action_data.m_Target && Class.CastTo(coop, action_data.m_Target.GetObject()))    
    {
      coop.SetSearched(true);
      coop.SetSynchDirty();
    }
    ItemBase feathers = ItemBase.Cast(GetGame().CreateObjectEx("ChickenFeather", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
    if (feathers)
    {
      feathers.SetQuantity(Math.RandomIntInclusive(4,15));
    }
	}
};
