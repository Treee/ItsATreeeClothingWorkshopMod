class ActionInteractWithGUICraftingWorkbench : ActionInteractBase
{
	void ActionInteractWithGUICraftingWorkbench()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_INTERACTONCE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_HUDCursorIcon = CursorIcons.CloseHood;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}

  override bool IsInstant()
  {
    return true;
  }

	override string GetText()
	{
		return "Read Manual";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{            
			string objectType = target.GetObject().GetType();
			if( (objectType == "SRP_AdvancedWorkbench" || objectType == "SRP_SewingMachine" || objectType == "SRP_DrugWorkbench"))
			{
        // Print("after check. objecttype " + objectType);
				return true;
			}
			return false;
		}
		return true; //server side?
	}

  override protected void OnStart(ActionData action_data)
  {
    // ItemBase ntarget = ItemBase.Cast( action_data.m_Target.GetObject() );    
    if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
      Print("OnStart");
      Print(action_data.m_MainItem);
      Print(action_data.m_MainItem.GetType());
      if (!GetGame().GetUIManager().FindMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting))
      {
        GetGame().GetUIManager().EnterScriptedMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting, NULL );
      }
      // action_data.m_Player.OpenGUICraftingMenu();
      // ScriptRPC rpc = new ScriptRPC();
			// rpc.Send(ntarget, SRP_RPC.OPEN_CRAFTING_MENU, true, action_data.m_Player.GetIdentity() );
    }
  }

  override protected void OnExecute( ActionData action_data )
	{
    Print("OnExecute");
	}	

  override protected void OnExecuteServer( ActionData action_data )
	{
    Print("OnExecuteServer");
	}


  override protected void OnExecuteClient( ActionData action_data )
	{
    Print("OnExecuteClient");
	}

  override void OnStartClient(ActionData action_data)
	{
    Print("OnStartClient");
  }
	
	override void OnStartServer(ActionData action_data)
	{
    Print("OnStartServer");
  }
	
	override void OnEnd(ActionData action_data)
	{
    Print("OnEnd");
  }
	
	override void OnEndClient(ActionData action_data)
	{
    Print("OnEndClient");
    if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{
      Print("OnEndClient");
      Print(action_data.m_MainItem);
      Print(action_data.m_MainItem.GetType());
      if (!GetGame().GetUIManager().FindMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting))
      {
        GetGame().GetUIManager().EnterScriptedMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting, NULL );
      }
      // action_data.m_Player.OpenGUICraftingMenu();
      // ScriptRPC rpc = new ScriptRPC();
			// rpc.Send(ntarget, SRP_RPC.OPEN_CRAFTING_MENU, true, action_data.m_Player.GetIdentity() );
    }
  }
	
	override void OnEndServer(ActionData action_data)
	{
    Print("OnEndServer");
  }

}