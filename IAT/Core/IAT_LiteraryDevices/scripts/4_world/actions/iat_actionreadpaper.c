class IAT_ActionReadPaperCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		EnableStateChangeCallback();
		m_ActionData.m_ActionComponent = new CAContinuousTime(-1.0);
	}
	
	override void EndActionComponent(){}
	
	override void OnStateChange(int pOldState, int pCurrentState)
	{
		if (pCurrentState == STATE_NONE && (!GetGame().IsDedicatedServer()))
		{
      Print("IAT_ActionReadPaperCB ======= OnStateChange ======== No State, check if note menu is already open");
      // close menu if it is open
			if (GetGame().GetUIManager() && GetGame().GetUIManager().IsMenuOpen(MENU_NOTE))
				GetGame().GetUIManager().FindMenu(MENU_NOTE).Close();
		}
		else if (pCurrentState == STATE_LOOP_LOOP && pOldState != STATE_LOOP_LOOP && (!GetGame().IsMultiplayer() || GetGame().IsServer()))
		{
			ItemBase paper_item = ItemBase.Cast(m_ActionData.m_MainItem);
			Param1<string> text = new Param1<string>(paper_item.GetWrittenNoteData().GetNoteText());
			paper_item.RPCSingleParam(ERPCs.RPC_READ_NOTE, text, true,m_ActionData.m_Player.GetIdentity());
      Print("IAT_ActionReadPaperCB ======= OnStateChange ======== loop state - read note");      
		}
	}
};

class IAT_ActionReadPaper: ActionContinuousBase
{
	const float TARGET_DISTANCE = 2;

	void IAT_ActionReadPaper()
	{
		m_CallbackClass = IAT_ActionReadPaperCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_VIEWNOTE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_PRONE;
		m_Text = "#read";
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;//CCTNonRuined(TARGET_DISTANCE);
	}

	// override bool HasTarget()
	// {
	// 	return false;
	// }

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{    
    Paper paper;
    if (Class.CastTo(paper, item))
      return true
    
    if (Class.CastTo(paper, target.GetObject()))
      return true;

		return false;
	}
	
	override void OnUpdate(ActionData action_data)
	{
		super.OnUpdate(action_data);
		
		if(!GetGame().IsDedicatedServer())
		{
      Print("IAT_ActionReadPaper OnUpdate =================");
			if (action_data.m_State == UA_FINISHED && GetGame().GetUIManager() && !GetGame().GetUIManager().IsMenuOpen(MENU_NOTE))
			{
				ActionManagerClient.Cast(action_data.m_Player.GetActionManager()).RequestEndAction();
      Print("IAT_ActionReadPaper OnUpdate ================= finished");
			}
		}
	}
	
	override void OnEndRequest(ActionData action_data)
	{
		if (action_data.m_Callback)
		{
			action_data.m_Callback.InternalCommand(DayZPlayerConstants.CMD_ACTIONINT_INTERRUPT);
      Print("IAT_ActionReadPaper OnEndRequest =================");
		}
	}
};