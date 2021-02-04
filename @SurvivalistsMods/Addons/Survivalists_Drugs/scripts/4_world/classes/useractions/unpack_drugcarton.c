class SRP_UnPackDrugCartonCB : ActionContinuousBaseCB
{
	private const float REPEAT_AFTER_SEC = 1.5;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(REPEAT_AFTER_SEC);
	}
};

class SRP_UnPackDrugCarton: ActionContinuousBase
{
	void SRP_UnPackDrugCarton()
	{
		m_CallbackClass = SRP_UnPackDrugCartonCB;
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
		SRP_DrugCarton_ColorBase drugCarton;
		return ( item && Class.CastTo(drugCarton, item) && drugCarton.GetQuantity() > 0 );
	}
		
	override string GetText()
	{
		return "Unpack Carton";
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
    if (action_data.m_MainItem.ClassName() == "SRP_DrugCarton_ZWeed"){
      entity = GameInventory.LocationCreateEntity(target_gnd, "SRP_DrugPack_ZWeed",ECE_IN_INVENTORY,RF_DEFAULT);      
    } else if (action_data.m_MainItem.ClassName() == "SRP_DrugCarton_Cigarette") {
      entity = GameInventory.LocationCreateEntity(target_gnd, "SRP_DrugPack_Cigarette",ECE_IN_INVENTORY,RF_DEFAULT);
    }

    if (entity)
    {
      ItemBase casted = ItemBase.Cast(entity);
      casted.AddQuantity(10);    
    }
	}
};