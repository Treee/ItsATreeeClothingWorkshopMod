class CarvedSymbolActionReciveData extends ActionReciveData
{
  int m_CarvedSymbolId;
}

class CarvedSymbolActionData extends ActionData
{
  int m_CarvedSymbolId;
};

class ActionSwitchLetterOptionCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(4.0);
	}
};

class ActionSwitchLetterOption extends ActionContinuousBase
{	
  void ActionSwitchLetterOption()
	{
		m_CallbackClass = ActionSwitchLetterOptionCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
    m_Text = "Letter - ";

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
		string letter = GetLetterOptions().Get(m_VariantID);
		if (letter && letter != "" )
		{
			m_Text = "Letter - " + letter;
		}
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    return true;
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_LetterKit_Kit carvedLetterKit;
		if (action_data.m_MainItem && Class.CastTo(carvedLetterKit, action_data.m_MainItem))
		{
      int variantId = CarvedSymbolActionData.Cast(action_data).m_CarvedSymbolId;
      string newKitName = "SRP_Letter_" + GetLetterOptions().Get(variantId) + "_Kit";
      // Print("New kit name: " + newKitName);
      GetGame().CreateObjectEx(newKitName, action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE);
      carvedLetterKit.Delete();
		}
	}

  override ActionData CreateActionData()
	{
		CarvedSymbolActionData action_data = new CarvedSymbolActionData;
		return action_data;
	}

  override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{	
		if ( super.SetupAction( player, target, item, action_data, extra_data ) )
		{			
			if ( !GetGame().IsDedicatedServer() )
			{
				CarvedSymbolActionData.Cast(action_data).m_CarvedSymbolId = m_VariantID;
			}
			return true;
		}		
		return false;
	}

  override void WriteToContext(ParamsWriteContext ctx, ActionData action_data)
	{
		super.WriteToContext(ctx, action_data);
		ctx.Write(CarvedSymbolActionData.Cast(action_data).m_CarvedSymbolId);
	}

	override bool ReadFromContext(ParamsReadContext ctx, out ActionReciveData action_recive_data )
	{
		action_recive_data = new CarvedSymbolActionReciveData;
		super.ReadFromContext(ctx, action_recive_data);
		
		int variantId;
		if ( ctx.Read(variantId) )
		{
      // Print("[ReadFromContext] - " + variantId)
			CarvedSymbolActionReciveData.Cast( action_recive_data ).m_CarvedSymbolId = variantId;
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
		CarvedSymbolActionData.Cast(action_data).m_CarvedSymbolId = CarvedSymbolActionReciveData.Cast( action_recive_data ).m_CarvedSymbolId;
	}


  void OnUpdateActions( Object item, Object target, int component_index )
	{
		SRP_LetterKit_Kit carvedLetterKit;
		if (Class.CastTo(carvedLetterKit, item))
		{
      GetVariantManager().SetActionVariantCount(GetLetterOptions().Count());
		}
		else
		{
			GetVariantManager().Clear();
		}
	}

  TStringArray GetLetterOptions()
  {
    return {
      "A",
      "B",
      "C",
      "D",
      "E",
      "F",
      "G",
      "H",
      "I",
      "J",
      "K",
      "L",
      "M",
      "N",
      "O",
      "P",
      "Q",
      "R",
      "S",
      "T",
      "U",
      "V",
      "W",
      "X",
      "Y",
      "Z",
      "0",
      "1",
      "2",
      "3",
      "4",
      "5",
      "6",
      "7",
      "8",
      "9",
      "Ampersand",
      "Asterisk",
      "Dollars",
      "Equals",
      "Exclamation",
      "Hash",
      "Parenthesis",
      "Percent",
      "Plus",
      "Question",
      "Slash",
      "Times",
      "ArrowUp",
      "ArrowDown",
      "ArrowLeft",
      "ArrowRight",
    };
  }
};
