class RadioInterActReciveData : ActionReciveData
{
	int m_selectedRadioActionIndex;
}
class RadioInterActData : ActionData
{
	int m_selectedRadioActionIndex;
}
class RadioInteractionCB : ActionContinuousBaseCB
{
  private float m_repeatDelay = 2.0;
	
	override void CreateActionComponent()
	{
    if (m_ActionData.m_Player.GetRadioInterActionData().IsSingleLoop())
    {
      m_repeatDelay = 1.0;
    }

		m_ActionData.m_ActionComponent = new CAContinuousTime(m_repeatDelay);
	}
};

class RadioInterAction: ActionContinuousBase
{	
	void RadioInterAction()
	{
		m_CallbackClass = RadioInteractionCB;
    m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_TUNE;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_ITEM_TUNE;		
	}

	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}
		
	override string GetText()
	{
		PlayerBase player;
		if( Class.CastTo(player, GetGame().GetPlayer()) )
		{
      return player.GetRadioInterActionData().GetActionPrompt();
		}
		return "Default Radio text(bad)";
	}

  override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // Print("RadioInterAction::ActionCondition: " + item);
    return player.GetRadioInterActionData().RadioActionCondition(item);
  }

  override bool ActionConditionContinue( ActionData action_data )
	{
    // Print("RadioInterAction::ActionConditionContinue: " + action_data);    
    // only continue if it truly can AND we have a looping action
		return action_data.m_Player.GetRadioInterActionData().RadioActionCondition(action_data.m_MainItem);
	}

	override bool SetupAction(PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{
		if (super.SetupAction(player, target, item, action_data, extra_data ))
		{
			if (GetGame().IsClient() || !GetGame().IsMultiplayer())
			{
				RadioInterActData action_data_wc;
				Class.CastTo(action_data_wc, action_data);
				action_data_wc.m_selectedRadioActionIndex = player.GetRadioInterActionData().GetSelectedIndex();
			}
			return true;
		}
		return false;
	}
	
	override void Start( ActionData action_data ) //Setup on start of action
	{
		super.Start(action_data);
		// if ( action_data.m_Player ) action_data.m_Player.TryHideItemInHands(true);
	}
	
	override void OnEndServer( ActionData action_data )
	{
		// if ( action_data.m_Player ) action_data.m_Player.TryHideItemInHands(false);
	}
	
	override void OnEndClient( ActionData action_data )
	{
		// if ( action_data.m_Player ) action_data.m_Player.TryHideItemInHands(false);
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
    // Print("RadioInterAction::OnFinishProgressServer: " + action_data);
    action_data.m_Player.GetRadioInterActionData().DoInteraction(action_data.m_MainItem, action_data.m_Player);    
	}
	
	override void OnFinishProgressClient( ActionData action_data )
	{
    // Print("RadioInterAction::OnFinishProgressClient: " + action_data);
    action_data.m_Player.GetRadioInterActionData().DoInteraction(action_data.m_MainItem, action_data.m_Player);
	}
	
	override void WriteToContext(ParamsWriteContext ctx, ActionData action_data)
	{
		super.WriteToContext(ctx, action_data);
		
		RadioInterActData action_data_wc = RadioInterActData.Cast(action_data);
		
		ctx.Write(action_data_wc.m_selectedRadioActionIndex);
	}
	
	override bool ReadFromContext(ParamsReadContext ctx, out ActionReciveData action_recive_data )
	{
		if (!action_recive_data)
		{
			action_recive_data = new RadioInterActReciveData;
		}
		
		super.ReadFromContext(ctx, action_recive_data);

		int m_selectedRadioActionIndex;    
		if (!ctx.Read(m_selectedRadioActionIndex))
			return false;
		
		RadioInterActReciveData recive_data_wc = RadioInterActReciveData.Cast(action_recive_data);
		recive_data_wc.m_selectedRadioActionIndex = m_selectedRadioActionIndex;
		
		return true;
	}
	
	override void HandleReciveData(ActionReciveData action_recive_data, ActionData action_data)
	{
		
		RadioInterActReciveData recive_data_wc = RadioInterActReciveData.Cast(action_recive_data);
		RadioInterActData action_data_wc = RadioInterActData.Cast(action_data);
		
		action_data_wc.m_MainItem = recive_data_wc.m_MainItem;
		if (!action_recive_data.m_Target)
		{
			action_data.m_Target = new ActionTarget(NULL, NULL, -1, vector.Zero, 0); 
		}
		else
		{
			action_data_wc.m_Target = recive_data_wc.m_Target;
		}
		action_data_wc.m_selectedRadioActionIndex = recive_data_wc.m_selectedRadioActionIndex;
	}
	
};