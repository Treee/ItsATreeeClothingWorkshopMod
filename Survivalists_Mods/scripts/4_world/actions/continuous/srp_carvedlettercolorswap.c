class CarvedSymbolColorActionReciveData extends ActionReciveData
{
  int m_CarvedSymbolColorId;
}

class CarvedSymbolColorActionData extends ActionData
{
  int m_CarvedSymbolColorId;
};

class ActionSwitchLetterColorOptionCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(4.0);
	}
};

class ActionSwitchLetterColorOption extends ActionContinuousBase
{	
  void ActionSwitchLetterColorOption()
	{
		m_CallbackClass = ActionSwitchLetterColorOptionCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
    m_Text = "Color - ";

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
		string letterColor = GetLetterColorOptions().Get(m_VariantID);
		if (letterColor && letterColor != "" )
		{
			m_Text = "Color - " + letterColor;
		}
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	

    Spraycan_ColorBase sprayCan;
		if (Class.CastTo(sprayCan, item) && item.GetQuantity() < 25)
		{
      return false;
    }

    SRP_Letter_Colorbase target_letter;
		if ( target && Class.CastTo(target_letter, target.GetObject()) )
		{
			return true;	
		}
    return false;
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    Spraycan_ColorBase sprayCan;
		if (action_data.m_MainItem && Class.CastTo(sprayCan, action_data.m_MainItem))
		{
      SRP_Letter_Colorbase target_letter;
      if ( action_data.m_Target && Class.CastTo(target_letter, action_data.m_Target.GetObject()) )
      {
        int variantId = CarvedSymbolColorActionData.Cast(action_data).m_CarvedSymbolColorId;
        string newItemName = "SRP_Letter_" + target_letter.GetLetterSymbol() + "_" + GetLetterColorOptions().Get(variantId);
        
        ReplaceCarvedLetterWithNewColorLambda lambda = new ReplaceCarvedLetterWithNewColorLambda(target_letter, newItemName);
        MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, lambda);        
        sprayCan.AddQuantity(-25);
      }
		}
	}

  override ActionData CreateActionData()
	{
		CarvedSymbolColorActionData action_data = new CarvedSymbolColorActionData;
		return action_data;
	}

  override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{	
		if ( super.SetupAction( player, target, item, action_data, extra_data ) )
		{			
			if ( !GetGame().IsDedicatedServer() )
			{
				CarvedSymbolColorActionData.Cast(action_data).m_CarvedSymbolColorId = m_VariantID;
			}
			return true;
		}		
		return false;
	}

  override void WriteToContext(ParamsWriteContext ctx, ActionData action_data)
	{
		super.WriteToContext(ctx, action_data);
		ctx.Write(CarvedSymbolColorActionData.Cast(action_data).m_CarvedSymbolColorId);
	}

	override bool ReadFromContext(ParamsReadContext ctx, out ActionReciveData action_recive_data )
	{
		action_recive_data = new CarvedSymbolColorActionReciveData;
		super.ReadFromContext(ctx, action_recive_data);
		
		int variantId;
		if ( ctx.Read(variantId) )
		{
      // Print("[ReadFromContext] - " + variantId)
			CarvedSymbolColorActionReciveData.Cast( action_recive_data ).m_CarvedSymbolColorId = variantId;
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
		CarvedSymbolColorActionData.Cast(action_data).m_CarvedSymbolColorId = CarvedSymbolColorActionReciveData.Cast( action_recive_data ).m_CarvedSymbolColorId;
	}


  void OnUpdateActions( Object item, Object target, int component_index )
	{
		Spraycan_ColorBase sprayCan;
		if (Class.CastTo(sprayCan, item))
		{
      GetVariantManager().SetActionVariantCount(GetLetterColorOptions().Count());
		}
		else
		{
			GetVariantManager().Clear();
		}
	}

  TStringArray GetLetterColorOptions()
  {
    return {
      "Ash",
      "Birch",
      "Blue",
      "Burnt",
      "Coal",
      "Green",
      "Lavender",
      "Lime",
      "Mossy",
      "Pink",
      "Purple",
      "Red",
      "Redwood",
      "Sky",
      "Teal",
      "Yellow",
    };
  }
};


class ReplaceCarvedLetterWithNewColorLambda extends ReplaceItemWithNewLambdaBase
{
	override void CopyOldPropertiesToNew (notnull EntityAI old_item, EntityAI new_item)
	{
		super.CopyOldPropertiesToNew( old_item, new_item );

    new_item.SetPosition( old_item.GetPosition() );
    new_item.SetOrientation( old_item.GetOrientation() );
	}
}