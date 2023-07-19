class SRP_ActionDismantlePlacedObjectCB: ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		float time = SetCallbackDuration(m_ActionData.m_MainItem);
		m_ActionData.m_ActionComponent = new CAContinuousTime( time );
	}
	float SetCallbackDuration( ItemBase item )
	{
		return UATimeSpent.BASEBUILDING_DECONSTRUCT_SLOW;
	}
};

class SRP_ActionDismantlePlacedObject: ActionContinuousBase
{
	void SRP_ActionDismantlePlacedObject()
	{
		m_CallbackClass = SRP_ActionDismantlePlacedObjectCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;	
		
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
		m_Text = "#dismantle";
	}
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.REPAIR );
	}
	override bool CanBeUsedLeaning()
	{
		return false;
	}
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		if ( player.IsPlacingLocal() )
			return false;				
		if (player.GetBrokenLegs() == eBrokenLegs.BROKEN_LEGS)
			return false;  
    if (player.m_MovementState.m_iStanceIdx == DayZPlayerConstants.STANCEIDX_PRONE)
      return false;
		
    House house;
    if (!Class.CastTo(house, target.GetObject()))
      return false;

    if (!house.CanBeDeconstructed())
      return false;

    PowerTool_ElectricHandDrill powerTool;
    if (!Class.CastTo(powerTool, item))   
      return false; 
    
    return powerTool.HasBatteryAttached() && powerTool.HasRequiredEnergy(400);        
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{	
    House house;
    if (Class.CastTo(house, action_data.m_Target.GetObject()))
    {
      TurnItemIntoItemLambda_KitDeployment lambda = new TurnItemIntoItemLambda_KitDeployment(house, house.GetKitName(), action_data.m_Player, action_data.m_Player.GetPosition());
      lambda.SetTransferParams(false, false, false);
      lambda.SetAdvancedDismantle(true);
      MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, lambda);
      PowerTool_ElectricHandDrill tool;
      if (Class.CastTo(tool, action_data.m_MainItem))
      {
        tool.ConsumeBattery(Math.RandomIntInclusive(200,400));
      }      
    }
	}
	
	override string GetAdminLogMessage(ActionData action_data)
	{
    string message = "Player dismantled something but it wasn't a house.";
    House house;
    if (Class.CastTo(house, action_data.m_Target.GetObject()))
    {
      PowerTool_ElectricHandDrill tool;
      if (Class.CastTo(tool, action_data.m_MainItem))
      {
        message = string.Format("||DISMANTLE|| %1 taken down with %2", house.GetType(), tool.GetType());
      }
    }
    return message;
	}
}