class ActionPaintFaceCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		// m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.SHAVE);
		m_ActionData.m_ActionComponent = new CAContinuousTime(1.0);
	}
};

class ActionPaintFace: ActionContinuousBase
{	
  void ActionPaintFace()
	{
		m_CallbackClass = ActionPaintFaceCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_SHAVE;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}  

  override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    if (target.GetObject())
    return false;
    
    int slot_id = InventorySlots.GetSlotIdFromString("Mask");	
		EntityAI equipedMask = player.GetInventory().FindPlaceholderForSlot( slot_id );

    slot_id = InventorySlots.GetSlotIdFromString("Eyewear");	
		EntityAI equipedGlasses = player.GetInventory().FindPlaceholderForSlot( slot_id );
    // cannot apply when wearing eyewear or masks
    return !(equipedMask || equipedGlasses);
	}

  override string GetText()
	{
		return "Apply " + GetCamoName();
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    if (action_data.m_MainItem)
		{
      SRP_FacePaintStick paintStick = SRP_FacePaintStick.Cast(action_data.m_MainItem);
      if (paintStick)
      {        
        paintStick.OnApply(action_data.m_Player);
      }			
		}
	}

  string GetCamoName()
  {
    string selectedCamo = "";
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if ( player )
		{
      SRP_FacePaintStick paintStick = SRP_FacePaintStick.Cast(player.GetItemInHands());
      if (paintStick)
      {
        selectedCamo = player.GetCurrentCamoIndexName(paintStick.camoIndex);
      }
    }
    return selectedCamo;
  }
};






class ActionPaintFaceTargetCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		// m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.SHAVE);
    m_ActionData.m_ActionComponent = new CAContinuousTime(1.0);
	}
};

class ActionPaintFaceTarget: ActionContinuousBase
{
	void ActionPaintFaceTarget()
	{
		m_CallbackClass = ActionPaintFaceTargetCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
	}

  override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    int slot_id = InventorySlots.GetSlotIdFromString("Mask");	
		EntityAI equipedMask = player.GetInventory().FindPlaceholderForSlot( slot_id );

    slot_id = InventorySlots.GetSlotIdFromString("Eyewear");	
		EntityAI equipedGlasses = player.GetInventory().FindPlaceholderForSlot( slot_id );
    // cannot apply when wearing eyewear or masks
    return !(equipedMask || equipedGlasses);
	}
		
	override string GetText()
	{
		return "Apply " + GetCamoName();
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    if (action_data.m_MainItem)
		{
      SRP_FacePaintStick paintStick = SRP_FacePaintStick.Cast(action_data.m_MainItem);
      if (paintStick)
      { 
        PlayerBase man;
        if (action_data.m_Target && Class.CastTo(man, action_data.m_Target.GetObject()) )
        {
          paintStick.OnApply(man);
        }
      }			
		}
	}

  string GetCamoName()
  {
    string selectedCamo = "";
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if ( player )
		{
      SRP_FacePaintStick paintStick = SRP_FacePaintStick.Cast(player.GetItemInHands());
      if (paintStick)
      {
        selectedCamo = player.GetCurrentCamoIndexName(paintStick.camoIndex);
      }
    }
    return selectedCamo;
  }
};











class ActionFacePaintStickSwitch: ActionSingleUseBase
{
	void ActionFacePaintStickSwitch()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_PICKUP_HANDS;
	}
	
	override void CreateConditionComponents()  
	{		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
		
	override bool IsInstant()
	{
		return true;
	}
	
	override bool UseAcknowledgment()
	{
		return true;
	}		
	
	override string GetText()
	{
		return "Next Camo";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{		
		return true;
	}
	
	//-------------------------------------------------
	override void OnStartClient(ActionData action_data)
	{
		super.OnStartClient( action_data );
		
		SetNextIndex(action_data);
	}
	
	override void OnStartServer(ActionData action_data)
	{
		super.OnStartServer( action_data );
		
    SetNextIndex(action_data);
	}
	
	void SetNextIndex(ActionData action_data)
	{
    if (action_data.m_MainItem)
    {
      SRP_FacePaintStick paintStick = SRP_FacePaintStick.Cast(action_data.m_MainItem);
      if (paintStick)
      {
        paintStick.camoIndex++;
      }
    }
	}
};
