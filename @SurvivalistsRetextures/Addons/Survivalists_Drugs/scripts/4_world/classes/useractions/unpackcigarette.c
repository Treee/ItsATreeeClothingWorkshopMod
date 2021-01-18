class UnPackCigaretteCB : ActionContinuousBaseCB
{
	private const float REPEAT_AFTER_SEC = 1.5;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(REPEAT_AFTER_SEC);
	}
};

class UnPackCigarette: ActionContinuousBase
{
	void UnPackCigarette()
	{
		m_CallbackClass = UnPackCigaretteCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_EMPTYMAG;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_EMPTYMAG;		
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionTarget = new CCTNone;
		m_ConditionItem = new CCINonRuined;
	}

  override bool HasProneException()
	{
		return true;
	}

	override bool HasTarget()
	{
		return false;
	}

  bool CanEmpty(ItemBase item)
	{
		CigarettePack_ZWeed jointPack;
		return ( item && Class.CastTo(jointPack, item) && jointPack.GetQuantity() > 0 );
	}
		
	override string GetText()
	{
		return "Unpack Joint";
	}

  override bool ActionConditionContinue( ActionData action_data )
	{	
    Print("ActionConditionContinue::" + action_data.m_MainItem);
		return CanEmpty(action_data.m_MainItem);
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    Print("ActionCondition::" + item);
		return CanEmpty(item);
	}
		
	override void OnFinishProgressServer( ActionData action_data )
	{	
    Print("OnFinishProgressServer::" + action_data.m_MainItem);
    action_data.m_MainItem.AddQuantity(-1);
		GetGame().CreateObjectEx("joint_mung", "0 0 0", ECE_IN_INVENTORY);
	}

  override void OnFinishProgressClient( ActionData action_data )
	{	
    Print("OnFinishProgressClient::" + action_data.m_MainItem);
    action_data.m_MainItem.AddQuantity(-1);
		GetGame().CreateObjectEx("joint_mung", "0 0 0", ECE_IN_INVENTORY);
	}
};