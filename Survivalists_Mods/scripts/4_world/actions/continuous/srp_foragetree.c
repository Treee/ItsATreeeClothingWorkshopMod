// change this to just be super low chance to get food but not destroy the tree. just a normal continuous action

// class ActionForageTreeCB : ActionContinuousBaseCB
// {
// 	override void CreateActionComponent()
// 	{
// 		m_ActionData.m_ActionComponent = new CAContinuousMineWood(45);
// 	}
// };

// class ActionForageTree extends ActionMineBase
// {
// 	void ActionForageTree()
// 	{
// 		m_CallbackClass = ActionForageTreeCB;
// 		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_HACKTREE;
// 		m_FullBody = true;
// 		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
// 		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
// 	}
	
// 	override void CreateConditionComponents()
// 	{	
// 		m_ConditionTarget = new CCTCursor(UAMaxDistances.SMALL);
// 		m_ConditionItem = new CCINonRuined;
// 	}

//   override ActionData CreateActionData()
// 	{
// 		MineActionData data = new MineActionData;
// 		data.m_HarvestType = SRP_EHarvestType.TREE_FORAGE;
// 		return data;
// 	}

//   override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
// 	{
// 		m_Text =  "Forage Fruits";
// 	}
// };