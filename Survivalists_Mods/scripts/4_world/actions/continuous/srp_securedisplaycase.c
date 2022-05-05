class ActionLockDisplayCaseCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(10);
	}
};

class ActionLockDisplayCase: ActionContinuousBase
{
	void ActionLockDisplayCase()
	{
		m_CallbackClass = ActionLockDisplayCaseCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_HIGH;
		m_Text = "Lock Case";
	}
	
	override void CreateConditionComponents()
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;
		
    if (target.GetObject())
    {
      SRP_DisplayCase_Base displayCase = SRP_DisplayCase_Base.Cast(target.GetObject());
      if (displayCase)
      {
        return !displayCase.IsDisplayCaseLocked();
      }
    }
		return false;
	}

	protected void LockDisplayCase(ActionTarget target)
	{
    SRP_DisplayCase_Base displayCase = SRP_DisplayCase_Base.Cast(target.GetObject());
    if (displayCase)
    {
      displayCase.ModifyDisplayCase(true);
    }
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		LockDisplayCase(action_data.m_Target);
		//Damage the Lockpick
		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
		
		float skillLevel = action_data.m_Player.GetSoftSkillsManager().GetSpecialtyLevel();
		float appliedDamage = 5 + 2*skillLevel; 
		MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, appliedDamage);
	}
};

class ActionUnLockDisplayCaseCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(15);
	}
};

class ActionUnLockDisplayCase: ActionContinuousBase
{
	void ActionUnLockDisplayCase()
	{
		m_CallbackClass = ActionUnLockDisplayCaseCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_HIGH;
		m_Text = "Unlock Case";
	}
	
	override void CreateConditionComponents()
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;
		
    if (target.GetObject())
    {
      SRP_DisplayCase_Base displayCase = SRP_DisplayCase_Base.Cast(target.GetObject());
      if (displayCase)
      {
        return displayCase.IsDisplayCaseLocked();
      }
    }
		return false;
	}

	protected void UnlockDisplayCase(ActionTarget target)
	{
    SRP_DisplayCase_Base displayCase = SRP_DisplayCase_Base.Cast(target.GetObject());
    if (displayCase)
    {
      displayCase.ModifyDisplayCase(false);
    }
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		UnlockDisplayCase(action_data.m_Target);
		//Damage the Lockpick
		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
		
		float skillLevel = action_data.m_Player.GetSoftSkillsManager().GetSpecialtyLevel();
		float appliedDamage = 5 + 2*skillLevel; 
		MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, appliedDamage);
	}
};