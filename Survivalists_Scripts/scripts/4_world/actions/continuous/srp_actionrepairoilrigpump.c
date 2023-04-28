class SRP_ActionRepairOilRigPumpCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(1);
	}
};

class SRP_ActionRepairOilRigPump: ActionContinuousBase
{	
	void SRP_ActionRepairOilRigPump()
	{
		m_CallbackClass = SRP_ActionRepairOilRigPumpCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_FullBody = true;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_Text = "Repair Pump Transformer";
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (!target)
      return false;
    
		SRP_OilRigTransformer transformer;
		if (Class.CastTo(transformer, target.GetObject()))
    {
      if ( GetGame().IsDedicatedServer() )
        return true;
			return transformer.NeedsRepairs() || !transformer.IsMaxEnergy();
    }
		return false;
	}
	

	override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_OilRigTransformer transformer;
		if (Class.CastTo(transformer, action_data.m_Target.GetObject()))
    {
      int amountToRepair = action_data.m_MainItem.GetTrasformerRepairValue();
      transformer.DoRepairEvent(amountToRepair);
      action_data.m_MainItem.Delete();
    }
	}
};