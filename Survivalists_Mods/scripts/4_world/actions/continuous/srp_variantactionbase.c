class SRP_VariantIdActionReciveData extends ActionReciveData
{
  int m_SRPVariantId;
}

class SRP_VariantIdActionData extends ActionData
{
  int m_SRPVariantId;
};

class ActionSRPVariantIdOptionCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(4.0);
	}
};

class ActionSRPVariantIdOption extends ActionContinuousBase
{	
  void ActionSRPVariantIdOption()
	{
		m_CallbackClass = ActionSRPVariantIdOptionCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
    m_Text = "Default - ";

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
    array<string> variantOptions = GetVariantIdOptions(item.GetType());
    if (variantOptions.Count() > 0)
    {
      string displayOption = variantOptions.Get(m_VariantID);
      if (displayOption && displayOption != "" )
      {
        m_Text = displayOption;
      }
    }
    else
    {
      m_Text = "No Option";
    }
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    return true;
	}

  override void OnFinishProgressServer(ActionData action_data){}

  override ActionData CreateActionData()
	{
		SRP_VariantIdActionData action_data = new SRP_VariantIdActionData;
		return action_data;
	}

  override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{	
		if ( super.SetupAction( player, target, item, action_data, extra_data ) )
		{			
			if ( !GetGame().IsDedicatedServer() )
			{
				SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId = m_VariantID;
			}
			return true;
		}		
		return false;
	}

  override void WriteToContext(ParamsWriteContext ctx, ActionData action_data)
	{
		super.WriteToContext(ctx, action_data);
		ctx.Write(SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId);
	}

	override bool ReadFromContext(ParamsReadContext ctx, out ActionReciveData action_recive_data )
	{
		action_recive_data = new SRP_VariantIdActionReciveData;
		super.ReadFromContext(ctx, action_recive_data);
		
		int variantId;
		if ( ctx.Read(variantId) )
		{
      // Print("[ReadFromContext] - " + variantId)
			SRP_VariantIdActionReciveData.Cast( action_recive_data ).m_SRPVariantId = variantId;
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
		SRP_VariantIdActionData.Cast(action_data).m_SRPVariantId = SRP_VariantIdActionReciveData.Cast( action_recive_data ).m_SRPVariantId;
	}


  void OnUpdateActions( Object item, Object target, int component_index ){}

  TStringArray GetVariantIdOptions(string itemType="")
  {
    return {};
  }
};
