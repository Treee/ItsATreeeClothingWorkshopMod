class IAT_ActionOpenClamCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.UNPACK);
	}
};

class IAT_ActionOpenClam extends ActionContinuousBase
{	
	void IAT_ActionOpenClam()
	{
		m_CallbackClass = IAT_ActionOpenClamCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;
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
		return "Open";
	}
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return true;
	}
	override void OnFinishProgressServer( ActionData action_data )
	{
		IAT_Fishing_Clam_ColorBase clam;
    if (Class.CastTo(clam, action_data.m_MainItem))
    {
      IAT_OpenClamLambda lambda = new IAT_OpenClamLambda(action_data.m_MainItem, "IAT_Fishing_Clam_Blue_Opened");
      action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);
    }
	}
};

class IAT_OpenClamLambda extends ReplaceItemWithNewLambdaBase
{	
	// void IAT_OpenClamLambda(EntityAI old_item, string new_item_type, PlayerBase player) {};
	override void CopyOldPropertiesToNew(notnull EntityAI old_item, EntityAI new_item)
	{
		super.CopyOldPropertiesToNew(old_item, new_item);

    IAT_Fishing_Clam_ColorBase_Opened openedClam;
    if (Class.CastTo(openedClam, new_item))
    {
      float removeHP = new_item.GetMaxHealth() * Math.RandomFloatInclusive(0.4,0.9);
      new_item.AddHealth(-removeHP);
      openedClam.TryAddPearl();
    }
	}
};