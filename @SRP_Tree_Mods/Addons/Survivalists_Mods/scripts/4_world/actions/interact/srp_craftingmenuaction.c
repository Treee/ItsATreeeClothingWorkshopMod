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

	override string GetText()
	{
		return "Read Manual";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    // client side check for local offline or live server
		if (GetGame().IsClient() || !GetGame().IsMultiplayer())
		{            
			string objectType = target.GetObject().GetType();
			if( (objectType == "SRP_AdvancedWorkbench" || objectType == "SRP_SewingMachine" || objectType == "SRP_DrugWorkbench") && !GetGame().GetUIManager().IsMenuOpen(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting) )
			{
				return true;
			}
			return false;
		}
		return false;
	}

  override void OnExecuteServer( ActionData action_data )
	{
		ItemBase ntarget = ItemBase.Cast( action_data.m_Target.GetObject() );
    Print("execute server: " + ntarget);
    Print("execute server: " + ntarget.GetType());
		string message;
		if ( ntarget)
		{
      Print("not null");
			if (!GetGame().GetUIManager().FindMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting))
      {
        GetGame().GetUIManager().EnterScriptedMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting, NULL );
      }
		}
	}
	
	override void OnExecuteClient( ActionData action_data )
	{
		ItemBase ntarget = ItemBase.Cast( action_data.m_Target.GetObject() );
    Print("execute client: " + ntarget);
		string message;
		if ( ntarget)
		{
      if (!GetGame().GetUIManager().FindMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting))
      {
        GetGame().GetUIManager().EnterScriptedMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting, NULL );
      }
		}
	}	
}