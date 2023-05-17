class FacePaintTypeActionReciveData extends ActionReciveData
{
  int m_FacePaintIndex;
}

class FacePaintTypeActionData extends ActionData
{
  int m_FacePaintIndex;
};

class ActionPaintFaceCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.SHAVE);
		// m_ActionData.m_ActionComponent = new CAContinuousTime(1.0);
	}
};


class ActionPaintFace extends ActionContinuousBase
{	
  void ActionPaintFace()
	{
		m_CallbackClass = ActionPaintFaceCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_SHAVE;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
    m_Text = "Apply Pattern";

    if ( GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{
			GetVariantManager().GetOnUpdateInvoker().Insert(OnUpdateActions);
		}
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
		string facepaintPattern = player.GetCurrentCamoIndexName(m_VariantID);
    // Print("[ActionPaintFace] - [OnActionInfoUpdate] " + m_VariantID + " action data: ");
		if ( facepaintPattern != "" )
		{
			m_Text = "Apply Pattern - " + facepaintPattern;
		}
	}
  
  override bool CanBeUsedLeaning()
	{
		return true;
	}

  override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    PlayerBase man;
    if (target && Class.CastTo(man, target.GetObject()) )
    {
      return false;
    }

		EntityAI equipedMask = player.FindAttachmentBySlotName("Mask");

		EntityAI equipedGlasses = player.FindAttachmentBySlotName("Eyewear");
    // cannot apply when wearing eyewear or masks
    return !(equipedMask || equipedGlasses);
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_FacePaintStick paintStick;
    if (action_data.m_MainItem && Class.CastTo(paintStick, action_data.m_MainItem))
		{           
      // Print("[ActionPaintFace] - [OnFinishProgressServer] - actiondata: " + FacePaintTypeActionData.Cast(action_data).m_FacePaintIndex)
      paintStick.SetCamoIndex(FacePaintTypeActionData.Cast(action_data).m_FacePaintIndex);
      paintStick.OnApply(action_data.m_Player);     		
		}
	}

  override ActionData CreateActionData()
	{
		FacePaintTypeActionData action_data = new FacePaintTypeActionData;
		return action_data;
	}

  //setup
	override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{	
		if ( super.SetupAction( player, target, item, action_data, extra_data ) )
		{			
			if ( !GetGame().IsDedicatedServer() )
			{
				FacePaintTypeActionData.Cast(action_data).m_FacePaintIndex = m_VariantID;
			}
			return true;
		}
		
		return false;
	}

	override void WriteToContext(ParamsWriteContext ctx, ActionData action_data)
	{
		super.WriteToContext(ctx, action_data);
		// Print("[WriteToContext] - " + FacePaintTypeActionData.Cast(action_data).m_FacePaintIndex)
		ctx.Write(FacePaintTypeActionData.Cast(action_data).m_FacePaintIndex);
	}
	
	override bool ReadFromContext(ParamsReadContext ctx, out ActionReciveData action_recive_data )
	{
		action_recive_data = new FacePaintTypeActionReciveData;
		super.ReadFromContext(ctx, action_recive_data);
		
		int facePaintIndex;
		if ( ctx.Read(facePaintIndex) )
		{
      // Print("[ReadFromContext] - " + facePaintIndex)
			FacePaintTypeActionReciveData.Cast( action_recive_data ).m_FacePaintIndex = facePaintIndex;
			return true;
		}
		else
		{
			return false;
		}
  }

  override void HandleReciveData(ActionReciveData action_recive_data, ActionData action_data)
	{
		super.HandleReciveData(action_recive_data, action_data);
    // Print("[HandleReciveData] - " + FacePaintTypeActionReciveData.Cast( action_recive_data ).m_FacePaintIndex);
		FacePaintTypeActionData.Cast(action_data).m_FacePaintIndex = FacePaintTypeActionReciveData.Cast( action_recive_data ).m_FacePaintIndex;
	}

  void OnUpdateActions( Object item, Object target, int component_index )
	{
		SRP_FacePaintStick m_PaintStickItem;
		if (Class.CastTo(m_PaintStickItem, item))
		{
      PlayerBase target_player;
      if (Class.CastTo(target_player, GetGame().GetPlayer()))
      {
        // Print("me actions " + target_player.GetPlayerFacePaintCount());
        GetVariantManager().SetActionVariantCount(target_player.GetPlayerFacePaintCount());
      }
		}
		else
		{
			GetVariantManager().Clear();
		}
	}
};

class ActionPaintFaceTargetCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.SHAVE);
    // m_ActionData.m_ActionComponent = new CAContinuousTime(1.0);
	}
};

class ActionPaintFaceTarget extends ActionContinuousBase
{
	void ActionPaintFaceTarget()
	{
    m_CallbackClass = ActionPaintFaceTargetCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
    m_Text = "Apply To Target";

    if ( GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{
			GetVariantManager().GetOnUpdateInvoker().Insert(OnUpdateActions);
		}
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
	}

  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
		string facepaintPattern = player.GetCurrentCamoIndexName(m_VariantID);
    // Print("[ActionPaintFace] - [OnActionInfoUpdate] " + m_VariantID + " action data: ");
		if ( facepaintPattern != "" )
		{
			m_Text = "Apply To Target - " + facepaintPattern;
		}
	}
  
  override bool CanBeUsedLeaning()
	{
		return true;
	}

  override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    PlayerBase man;
    if (target && Class.CastTo(man, target.GetObject()) )
    {
      EntityAI equipedMask = man.FindAttachmentBySlotName("Mask");

		  EntityAI equipedGlasses = man.FindAttachmentBySlotName("Eyewear");

      // cannot apply when wearing eyewear or masks
      return !(equipedMask || equipedGlasses);
    }
    return false;
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_FacePaintStick paintStick;
    if (action_data.m_MainItem && Class.CastTo(paintStick, action_data.m_MainItem))
		{           
      PlayerBase targetPlayer;
      if (action_data.m_Target && Class.CastTo(targetPlayer, action_data.m_Target.GetObject()) )
      {
        paintStick.SetCamoIndex(FacePaintTypeActionData.Cast(action_data).m_FacePaintIndex);
        paintStick.OnApply(targetPlayer);      
        // Print("[ActionPaintFace] - [OnFinishProgressServer] - actiondata: " + FacePaintTypeActionData.Cast(action_data).m_FacePaintIndex)
      }
		}
	}

  override ActionData CreateActionData()
	{
		FacePaintTypeActionData action_data = new FacePaintTypeActionData;
		return action_data;
	}

  //setup
	override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{	
		if ( super.SetupAction( player, target, item, action_data, extra_data ) )
		{			
			if ( !GetGame().IsDedicatedServer() )
			{
				FacePaintTypeActionData.Cast(action_data).m_FacePaintIndex = m_VariantID;
			}
			return true;
		}
		
		return false;
	}

	override void WriteToContext(ParamsWriteContext ctx, ActionData action_data)
	{
		super.WriteToContext(ctx, action_data);
		// Print("[WriteToContext] - " + FacePaintTypeActionData.Cast(action_data).m_FacePaintIndex)
		ctx.Write(FacePaintTypeActionData.Cast(action_data).m_FacePaintIndex);
	}
	
	override bool ReadFromContext(ParamsReadContext ctx, out ActionReciveData action_recive_data )
	{
		action_recive_data = new FacePaintTypeActionReciveData;
		super.ReadFromContext(ctx, action_recive_data);
		
		int facePaintIndex;
		if ( ctx.Read(facePaintIndex) )
		{
      // Print("[ReadFromContext] - " + facePaintIndex)
			FacePaintTypeActionReciveData.Cast( action_recive_data ).m_FacePaintIndex = facePaintIndex;
			return true;
		}
		else
		{
			return false;
		}
  }

  override void HandleReciveData(ActionReciveData action_recive_data, ActionData action_data)
	{
		super.HandleReciveData(action_recive_data, action_data);
    // Print("[HandleReciveData] - " + FacePaintTypeActionReciveData.Cast( action_recive_data ).m_FacePaintIndex);
		FacePaintTypeActionData.Cast(action_data).m_FacePaintIndex = FacePaintTypeActionReciveData.Cast( action_recive_data ).m_FacePaintIndex;
	}

  void OnUpdateActions( Object item, Object target, int component_index )
	{
		SRP_FacePaintStick m_PaintStickItem;
		if (Class.CastTo(m_PaintStickItem, item))
		{
      PlayerBase target_player;
      // Print("[OnUpdateActions] = target " + target);
      if (Class.CastTo(target_player, target))
      {
        GetVariantManager().SetActionVariantCount(target_player.GetPlayerFacePaintCount());        
      }
		}
		else
		{
			GetVariantManager().Clear();
		}
	}
};