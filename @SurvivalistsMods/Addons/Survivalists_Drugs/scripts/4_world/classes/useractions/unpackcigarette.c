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
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_OPENITEM;		
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

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		return CanEmpty(item);
	}
		
	override void OnFinishProgressServer( ActionData action_data )
	{
    action_data.m_MainItem.AddQuantity(-1);

    vector m4[4];
    action_data.m_Player.GetTransformWS(m4);
    InventoryLocation target_gnd = new InventoryLocation;
    target_gnd.SetGround(null, m4);
    EntityAI entity = GameInventory.LocationCreateEntity(target_gnd, "ZWeed_Joint",ECE_IN_INVENTORY,RF_DEFAULT);
	}
};