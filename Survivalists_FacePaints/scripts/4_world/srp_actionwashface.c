class ActionWashFaceCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		// m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.SHAVE);
		m_ActionData.m_ActionComponent = new CAContinuousTime(1.0);
	}
};

class ActionWashFace: ActionContinuousBase
{	
  void ActionWashFace()
	{
		m_CallbackClass = ActionWashFaceCB;
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
		return "Wash Face";
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    if (action_data.m_Player)
		{     
      action_data.m_Player.ClearPaint();		
		}
	}
};

class ActionWashFaceTargetCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		// m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.SHAVE);
    m_ActionData.m_ActionComponent = new CAContinuousTime(1.0);
	}
};

class ActionWashFaceTarget: ActionContinuousBase
{
	void ActionWashFaceTarget()
	{
		m_CallbackClass = ActionWashFaceTargetCB;
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
    PlayerBase man;
    if (target && Class.CastTo(man, target.GetObject()) )
    {
      int slot_id = InventorySlots.GetSlotIdFromString("Mask");	
      EntityAI equipedMask = man.GetInventory().FindPlaceholderForSlot( slot_id );

      slot_id = InventorySlots.GetSlotIdFromString("Eyewear");	
      EntityAI equipedGlasses = man.GetInventory().FindPlaceholderForSlot( slot_id );
      // cannot apply when wearing eyewear or masks
      return !(equipedMask || equipedGlasses);
    }
    return false;
	}
		
	override string GetText()
	{
		return "Wash Face";
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    PlayerBase man;
    if (action_data.m_Target && Class.CastTo(man, action_data.m_Target.GetObject()) )
    {    
      man.ClearPaint();		
		}
	}
};