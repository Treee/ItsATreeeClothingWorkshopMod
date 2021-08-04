class SRP_GUICraftingManager
{
  // move this hud to missiongameplay eventuall
  // ref WorkbenchGUICraftingHud m_workbenchCraftHud;
  // eventually remove ref. no need when reading client side config
  ref array<EntityAI> m_AllItems;
  ItemBase        m_selectedWorkbench;
  string m_WorkbenchType;
  ref map<string,int> m_ExItems;

  void SRP_GUICraftingManager()
  {
    m_ExItems = new map<string, int>();
    m_AllItems = new array<EntityAI>();
  }

  void SetActiveWorkbench(ItemBase wb)
  {
    m_selectedWorkbench = wb;
    m_WorkbenchType = wb.GetType();
  }

  ItemBase GetActiveWorkbench()
  {
    return m_selectedWorkbench;
  }

  void RequestCraft()
  {
    if (!GetGame().GetUIManager().FindMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting))
    {
      GetGame().GetUIManager().EnterScriptedMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting, NULL );
    }
  }

  void CloseCraft()
  {
    if (GetGame().GetUIManager().FindMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting))
    {
        GetGame().GetUIManager().FindMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting).Close();        
    }
  }

  static void SelfChatMessage( string message )
  { 
    GetGame().GetMission().OnEvent(ChatMessageEventTypeID, new ChatMessageEventParams(0, "", message, "")); 
  }

  void DeleteEntities()
  {
    for (int i = 0; i < m_AllItems.Count(); i++)
    {
        if (m_AllItems.Get(i))
        GetGame().ObjectDeleteOnClient(m_AllItems.Get(i));
    }
    m_AllItems.Clear();
  }
}
ref SRP_GUICraftingManager g_SRPGUICraftingManager;