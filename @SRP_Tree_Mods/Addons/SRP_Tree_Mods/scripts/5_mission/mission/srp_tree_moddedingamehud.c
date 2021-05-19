modded class IngameHud
{
  protected Widget m_sleepPanelWidget;  

  string panelSleep = "Sleep";
  string iconSleepName = "IconSleep";
  string iconSleepArrowUp3 = "SleepArrowUp3";
  string iconSleepArrowUp2 = "SleepArrowUp2";
  string iconSleepArrowUp1 = "SleepArrowUp1";
  string iconSleepArrowDown1 = "SleepArrowDown1";
  string iconSleepArrowDown2 = "SleepArrowDown2";
  string iconSleepArrowDown3 = "SleepArrowDown3";

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
    // m_sleepPanelWidget.Show(true);
    DisplayNotifier(NTFKEY_SRP_TIREDNESS, 0, 0)
  }

  override void RefreshHudVisibility()
  {
    Print("SRP Tree Mods In Game Hud RefreshHudVisibility!! SUPER");
    super.RefreshHudVisibility();
    Print("SRP Tree Mods In Game Hud RefreshHudVisibility!! after SUPER");
    SetSleepWidgetVisibility(( !m_HudHidePlayer && !m_HudHideUI && m_HudState ) || m_HudInventory);
  }

  override void DisplayNotifier( int key, int tendency, int status )
	{
    super.DisplayNotifier(key, tendency, status);
    ImageWidget w;
    Print("Tiredness DisplayNotifier: " + key);
		if( key == NTFKEY_SRP_TIREDNESS )
		{
			DisplayTendencyNormal( key, tendency, status );
      // tendency arrows
      string arrow_name = "SleepArrowUp";
      if ( tendency < 0 )
      {
        arrow_name = "SleepArrowDown";
      }
      tendency = Math.AbsInt( tendency );

      for ( int x = 1; x < 4; x++ )
      { 
        Print("Hiding Arrows: " + x.ToString());
        Class.CastTo(w,  m_sleepPanelWidget.FindAnyWidget( String("SleepArrowUp" + x.ToString() ) ) );
        if( w )
          w.Show( false );
        Class.CastTo(w,  m_sleepPanelWidget.FindAnyWidget( String("SleepArrowDown" + x.ToString() ) ) );
        if( w )
          w.Show( false );
      }
      
      if( tendency > 0 )
      {
        Print("Sleep Tendency " + tendency);
        string widget_name = arrow_name + Math.Clamp( tendency, 1, 3 );
        Class.CastTo(w, m_sleepPanelWidget.FindAnyWidget( widget_name ) );
        if( w )
          w.Show( true );
      }
    }
	}

  override void DisplayTendencyNormal( int key, int tendency, int status )
	{
    super.DisplayTendencyNormal(key, tendency, status);
		ImageWidget w;
		Class.CastTo(w,  m_sleepPanelWidget.FindAnyWidget(iconSleepName));
		Print("Override DisplayTendencyNormal " + w);
		if( w )
		{
			w.SetImage( Math.Clamp( status - 1, 0, 4 ) );
			float alpha = w.GetAlpha();
			
			switch( status )
			{
				case 3:
					w.SetColor( ARGB( alpha * 255, 220, 220, 0 ) );		//yellow
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 4:
					w.SetColor( ARGB( alpha * 255, 220, 0, 0 ) );		//red
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 5:
					if ( !m_TendencyStatusCritical.Contains( w ) )
					{
						m_TendencyStatusCritical.Insert( w, ARGB( alpha * 255, 220, 0, 0 ) );	//add to blinking group
					}
					break;
				default:
					w.SetColor( ARGB( alpha * 255, 220, 220, 220 ) );	//white
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
			}
		}	
	}

  void SetSleepWidgetVisibility(bool visible) 
  {
    Print("SRP Tree Mods In Game Hud SetSleepWidgetVisibility!! visible=" + visible);
    Print("SRP Tree Mods In Game Hud SetSleepWidgetVisibility!! widget=" + m_sleepPanelWidget);
    if (m_sleepPanelWidget) 
    {
      Print("SRP Tree Mods In Game Hud sleep widget is not null");
      m_sleepPanelWidget.Show(visible);
      if (visible) 
      {
        // hide the widgets that are not correct for the current tiredness state

      }
    }
  }
}
