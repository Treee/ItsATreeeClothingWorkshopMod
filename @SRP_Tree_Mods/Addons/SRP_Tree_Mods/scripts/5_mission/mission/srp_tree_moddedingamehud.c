modded class IngameHud
{
  protected Widget m_sleepPanelWidget;  

  void IngameHud()
  {
    if (!m_sleepPanelWidget)
    {
      m_sleepPanelWidget = GetGame().GetWorkspace().CreateWidgets("SRP_Tree_Mods\\gui\\layouts\\srp_tree_layout.layout");
      Print("SRP Tree Mods IngameHud!! CreatedLayout" + m_sleepPanelWidget);
      m_sleepPanelWidget.Show(false);
    }
  }

  void ~IngameHud() 
  {
    if(m_sleepPanelWidget)
		{
			m_sleepPanelWidget.Show(false);
			m_sleepPanelWidget.Unlink();
		}
  }

	override void Init( Widget hud_panel_widget )
	{
    Print("SRP Tree Mods In Game Hud Init!! Super Call");
    super.Init(hud_panel_widget);
    Print("SRP Tree Mods In Game Hud Init!! After Super Call");
    m_sleepPanelWidget.Show(true);
  }

  void SetSleepWidgetVisibility(bool visible) 
  {
    Print("SRP Tree Mods In Game Hud SetSleepWidgetVisibility!! visible=" + visible);
    Print("SRP Tree Mods In Game Hud SetSleepWidgetVisibility!! widget=" + m_sleepPanelWidget);
    if (m_sleepPanelWidget) 
    {
      Print("SRP Tree Mods In Game Hud sleep widget is not null");
      m_sleepPanelWidget.Show(visible);
    }
  }

  override void RefreshHudVisibility()
  {
    Print("SRP Tree Mods In Game Hud RefreshHudVisibility!! SUPER");
    super.RefreshHudVisibility();
    Print("SRP Tree Mods In Game Hud RefreshHudVisibility!! after SUPER");
    SetSleepWidgetVisibility(( !m_HudHidePlayer && !m_HudHideUI && m_HudState ) || m_HudInventory);
  }
}
