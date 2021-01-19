class UnPackCigaretteBagCB : ActionContinuousBaseCB
{
	private const float REPEAT_AFTER_SEC = 1.5;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(REPEAT_AFTER_SEC);
	}
};

class UnPackCigaretteBag: ActionContinuousBase
{
	void UnPackCigaretteBag()
	{
		m_CallbackClass = UnPackCigaretteBagCB;
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
		Bag_CigarettePack_ZWeed_DryBag_Black jointPackBag;
		return ( item && Class.CastTo(jointPackBag, item) && jointPackBag.GetQuantity() > 0 );
	}
		
	override string GetText()
	{
		return "Unpack Joint Pack";
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
    EntityAI entity = GameInventory.LocationCreateEntity(target_gnd, "CigarettePack_ZWeed",ECE_IN_INVENTORY,RF_DEFAULT);
    ItemBase casted = ItemBase.Cast(entity);
    casted.AddQuantity(10);
	}
};