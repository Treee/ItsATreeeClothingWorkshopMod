class SRP_UnPackDrugPackCB : ActionContinuousBaseCB
{
	private const float REPEAT_AFTER_SEC = 1.5;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(REPEAT_AFTER_SEC);
	}
};

class SRP_UnPackDrugPack: ActionContinuousBase
{
	void SRP_UnPackDrugPack()
	{
		m_CallbackClass = SRP_UnPackDrugPackCB;
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
		SRP_DrugPack_ColorBase drugPack;
		return ( item && Class.CastTo(drugPack, item) && drugPack.GetQuantity() > 0 );
	}
		
	override string GetText()
	{
		return "Unpack";
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
    
    EntityAI entity;
    if (action_data.m_MainItem.ClassName() == "SRP_DrugPack_ZWeed"){
      entity = GameInventory.LocationCreateEntity(target_gnd, "SRP_Smokable_ZWeed",ECE_IN_INVENTORY,RF_DEFAULT);
    } else if (action_data.m_MainItem.ClassName() == "SRP_DrugPack_Cigarette") {
      entity = GameInventory.LocationCreateEntity(target_gnd, "SRP_Smokable_Cigarette",ECE_IN_INVENTORY,RF_DEFAULT);
    }
	}
};