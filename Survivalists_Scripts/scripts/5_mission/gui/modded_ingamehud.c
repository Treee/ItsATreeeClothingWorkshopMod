modded class IngameHud
{
  protected Widget m_sleepPanelWidget;

  private Widget m_CompassHeadingRootWidget;
  private TextWidget m_CompassHeadingText;
  private Widget m_CompassFrameWidget;
  private ImageWidget m_CompassImageWidget;
  private int m_CompassUIState = 0; //0,1,2: hidden,sundial,heading
  protected float debouncer = 0.0;
  void ~IngameHud()
  {
    if(m_sleepPanelWidget)
		{
			m_sleepPanelWidget.Show(false);
			m_sleepPanelWidget.Unlink();
		}
    if (!m_CompassHeadingRootWidget)
    {
			m_CompassHeadingRootWidget.Show(false);
			m_CompassHeadingRootWidget.Unlink();
    }
  }

	override void Init( Widget hud_panel_widget )
	{
    super.Init(hud_panel_widget);
    // Print("SRP Mods IngameHud before Init()");
    if (!m_CompassHeadingRootWidget && (GetGame().IsClient() || !GetGame().IsMultiplayer()))
    {
      m_CompassHeadingRootWidget = GetGame().GetWorkspace().CreateWidgets("Survivalists_Scripts/gui/layouts/compass.layout");
      m_CompassHeadingText = TextWidget.Cast(m_CompassHeadingRootWidget.FindAnyWidget("TextHeading"));
      m_CompassFrameWidget = m_CompassHeadingRootWidget.FindAnyWidget("FrameCompass");
      m_CompassImageWidget = ImageWidget.Cast(m_CompassHeadingRootWidget.FindAnyWidget("ImageCompass"));
      if (m_CompassHeadingRootWidget)
        m_CompassHeadingRootWidget.Show(false);
    }
  }

  override void InitBadgesAndNotifiers()
  {
    super.InitBadgesAndNotifiers();
    if (!m_sleepPanelWidget && (GetGame().IsClient() || !GetGame().IsMultiplayer()))
    {
      m_sleepPanelWidget = GetGame().GetWorkspace().CreateWidgets("Survivalists_Scripts/gui/layouts/srp_sleep_layout.layout");
    }
		m_StatesWidgetNames.Set( SRP_NTFKEY_TIREDNESS, "Sleep" );
    m_sleepPanelWidget.Show(true);

  	ImageWidget w;
		Class.CastTo(w,  m_sleepPanelWidget.FindAnyWidget("IconSleep"));
    m_StatesWidgets.Set(SRP_NTFKEY_TIREDNESS, w);
    w.Show( true );
    for ( int y = 0; y < 5; y++ )
    {
      w.LoadImageFile( y, string.Format("set:srp_sleep_iconset image:iconSleep%1", y) );
    }

    w.SetImage( 0 );
    float alpha = w.GetAlpha();
    w.SetColor( ARGB( alpha * 255, 220, 220, 220 ) );	//white
    m_TendencyStatusCritical.Remove( w );
    // clear all arrows
    for ( int x = 1; x < 4; x++ )
    {
      Class.CastTo(w,  m_sleepPanelWidget.FindAnyWidget( string.Format("SleepArrowUp%1",x) ) );
      w.Show( false );
      Class.CastTo(w,  m_sleepPanelWidget.FindAnyWidget( string.Format("SleepArrowDown%1",x) ) );
      w.Show( false );
    }
  }

  override void DisplayNotifier( int key, int tendency, int status )
	{
    // do vanilla stuff for vanilla keys
    if (key <= NTFKEY_HEARTBEAT)
      super.DisplayNotifier(key, tendency, status);
    else // otherwise do my stuff
      DisplaySRPNotifiers_Sleep(key, tendency, status);
  }
	override void DisplayTendencyNormal( int key, int tendency, int status )
  {
    if (g_Game.GetSRPProfileVal(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR))
      super.DisplayTendencyNormal(key, tendency, status);
    else
      DisplaySRPTendencyColors(key, tendency, status);
  }
  override void RefreshHudVisibility()
  {
    super.RefreshHudVisibility();
    bool genericShow = ( !m_HudHidePlayer && !m_HudHideUI && m_HudState ) || m_HudInventory;
    // show the sleep icon like the other status icons
    m_sleepPanelWidget.Show(genericShow);
    m_CompassHeadingRootWidget.Show(genericShow);
  }
  override void Update( float timeslice )
	{
		super.Update( timeslice );
		if( debouncer > 0.15 && GetGame() && GetGame().GetInput() && GetGame().GetInput().LocalPress("UACompassToggle", false) )
		{
			CompassToggleHeading();
      debouncer = 0.0;
		}
    CompassUpdate();
    debouncer+= timeslice;
	}
//========================== TENDENCY DISPLAY
  void DisplaySRPNotifiers_Sleep( int key, int tendency, int status )
	{
    ImageWidget w;
    DisplayTendencyNormal(key, tendency, status);
    // tendency arrows
    string arrow_name = "ArrowUp";
    if ( tendency < 0 )
    {
      arrow_name = "ArrowDown";
    }
    tendency = Math.AbsInt( tendency );

    for ( int x = 1; x < 4; x++ )
    {
      Class.CastTo(w,  m_sleepPanelWidget.FindAnyWidget( string.Format("%1ArrowUp%2",m_StatesWidgetNames.Get( key ), x) ) );
      if( w )
        w.Show( false );
      Class.CastTo(w,  m_sleepPanelWidget.FindAnyWidget( string.Format("%1ArrowDown%2",m_StatesWidgetNames.Get( key ), x) ) );
      if( w )
        w.Show( false );
    }
    if( tendency > 0 )
    {
      string widget_name = m_StatesWidgetNames.Get( key ) + arrow_name + Math.Clamp( tendency, 1, 3 );
      Class.CastTo(w, m_sleepPanelWidget.FindAnyWidget( widget_name ) );
      if( w )
        w.Show( true );
    }
  }
  void DisplaySRPTendencyColors(int key, int tendency, int status)
  {
    switch(key)
    {
      case NTFKEY_SICK:
        DisplayTendencyHealth(key, tendency, status);
      break;
      case NTFKEY_BLEEDISH:
        DisplayTendencyBlood(key, tendency, status);
      break;
      case NTFKEY_HUNGRY:
        DisplayTendencyHunger(key, tendency, status);
      break;
      case NTFKEY_THIRSTY:
        DisplayTendencyThirst(key, tendency, status);
      break;
      case SRP_NTFKEY_TIREDNESS:
        DisplayTendencySleep(key, tendency, status);
      break;
      default:
        DisplayTendencyDefault(key, tendency, status);
      break;
    }
  }

	void DisplayTendencySleep( int key, int tendency, int status )
	{
    ImageWidget w;
    Class.CastTo(w,  m_sleepPanelWidget.FindAnyWidget( string.Format("Icon%1",m_StatesWidgetNames.Get( key ) ) ) );
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
          w.SetColor( ARGB( alpha * 255, 200, 200, 200 ) );	//white
          m_TendencyStatusCritical.Remove( w );				//remove from blinking group
          break;
      }
    }
	}
  void DisplayTendencyHealth( int key, int tendency, int status )
	{
		ImageWidget w;
		Class.CastTo(w,  m_Notifiers.FindAnyWidget( String( "Icon" + m_StatesWidgetNames.Get( key ) ) ) );

		if( w )
		{
			w.SetImage( Math.Clamp( status - 1, 0, 4 ) );
			float alpha = w.GetAlpha();

			switch( status )
			{
				case 3:
					w.SetColor( ARGB( alpha * 255, 150, 200, 0 ) );		//yellow
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 4:
					w.SetColor( ARGB( alpha * 255, 200, 100, 0 ) );		//red
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 5:
					if ( !m_TendencyStatusCritical.Contains( w ) )
					{
						m_TendencyStatusCritical.Insert( w, ARGB( alpha * 255, 200, 50, 0 ) );	//add to blinking group
					}
					break;
				default:
					w.SetColor( ARGB( alpha * 255, 0, 200, 0 ) );	//white
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
			}
		}
	}
  void DisplayTendencyBlood( int key, int tendency, int status )
	{
		ImageWidget w;
		Class.CastTo(w,  m_Notifiers.FindAnyWidget( String( "Icon" + m_StatesWidgetNames.Get( key ) ) ) );

		if( w )
		{
			w.SetImage( Math.Clamp( status - 1, 0, 4 ) );
			float alpha = w.GetAlpha();

			switch( status )
			{
				case 3:
					w.SetColor( ARGB( alpha * 255, 225, 0, 0 ) );		//yellow
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 4:
					w.SetColor( ARGB( alpha * 255, 225, 0, 0 ) );		//red
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 5:
					if ( !m_TendencyStatusCritical.Contains( w ) )
					{
						m_TendencyStatusCritical.Insert( w, ARGB( alpha * 255, 225, 0, 0 ) );	//add to blinking group
					}
					break;
				default:
					w.SetColor( ARGB( alpha * 255, 225, 0, 0 ) );	//white
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
			}
		}
	}
  void DisplayTendencyHunger( int key, int tendency, int status )
	{
		ImageWidget w;
		Class.CastTo(w,  m_Notifiers.FindAnyWidget( String( "Icon" + m_StatesWidgetNames.Get( key ) ) ) );

		if( w )
		{
			w.SetImage( Math.Clamp( status - 1, 0, 4 ) );
			float alpha = w.GetAlpha();

			switch( status )
			{
				case 3:
					w.SetColor( ARGB( alpha * 255, 225, 145, 0 ) );		//yellow
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 4:
					w.SetColor( ARGB( alpha * 255, 225, 100, 0 ) );		//red
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 5:
					if ( !m_TendencyStatusCritical.Contains( w ) )
					{
						m_TendencyStatusCritical.Insert( w, ARGB( alpha * 255, 225, 80, 0 ) );	//add to blinking group
					}
					break;
				default:
					w.SetColor( ARGB( alpha * 255, 225, 190, 0 ) );	//white
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
			}
		}
	}
  void DisplayTendencyThirst( int key, int tendency, int status )
	{
		ImageWidget w;
		Class.CastTo(w,  m_Notifiers.FindAnyWidget( String( "Icon" + m_StatesWidgetNames.Get( key ) ) ) );

		if( w )
		{
			w.SetImage( Math.Clamp( status - 1, 0, 4 ) );
			float alpha = w.GetAlpha();

			switch( status )
			{
				case 3:
					w.SetColor( ARGB( alpha * 255, 0, 206, 209 ) );		//yellow
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 4:
					w.SetColor( ARGB( alpha * 255, 30, 144, 220 ) );		//red
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 5:
					if ( !m_TendencyStatusCritical.Contains( w ) )
					{
						m_TendencyStatusCritical.Insert( w, ARGB( alpha * 255, 30, 144, 220 ) );	//add to blinking group
					}
					break;
				default:
					w.SetColor( ARGB( alpha * 255, 0, 206, 209 ) );	//white
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
			}
		}
	}
  void DisplayTendencyDefault( int key, int tendency, int status )
	{
		ImageWidget w;
		Class.CastTo(w,  m_Notifiers.FindAnyWidget( String( "Icon" + m_StatesWidgetNames.Get( key ) ) ) );

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

//========================== COMPASS
  void CompassUpdate()
	{
		if(HasCompass())
		{
      float angle = CompassGetAngle();
      SetCompassPos(angle);
      switch(m_CompassUIState)
      {
        case 0: // no UI
          m_CompassHeadingRootWidget.Show(false);
        break;
        case 1: // sun dial UI
          m_CompassFrameWidget.Show(true);
          m_CompassHeadingText.Show(false);
          m_CompassHeadingText.SetText(CompassGetHeading(angle));
          m_CompassHeadingRootWidget.Update();
          m_CompassHeadingRootWidget.Show(true);
        break;
        case 2: // heading only
          m_CompassFrameWidget.Show(false);
          m_CompassHeadingText.Show(true);
          m_CompassHeadingText.SetText(CompassGetHeading(angle));
          m_CompassHeadingRootWidget.Update();
          m_CompassHeadingRootWidget.Show(true);
        break;
      }
    }
    else
    {
      m_CompassHeadingRootWidget.Show(false);
		}
  }
  string CompassGetHeading(float angle)
	{
    float rounded = Math.Round(5 * Math.Round(angle / 5.0));
    return rounded.ToString();
  }
  void SetCompassPos(float angle)
	{
    float width, height, x, y;
    m_CompassImageWidget.GetPos(x, y);
    m_CompassImageWidget.GetSize(width, height);

    float center_offset = width / -2.0 + 0.5;

    if(angle > 180)
		{
      angle = angle - 360;
    }
    float offset = angle *(center_offset / 180.0) + center_offset;

    m_CompassImageWidget.SetPos(offset, y);
  }
  float CompassGetAngle()
	{
    vector direction = GetGame().GetCurrentCameraDirection();
    float angle = direction.VectorToAngles()[0];
    return angle;
  }
  void CompassToggleHeading()
	{
		if(HasCompass())
		{
      IncrementCompassUIState();
		}
	}
  void IncrementCompassUIState()
  {
    m_CompassUIState = (m_CompassUIState + 1) % 3;
  }
  bool HasCompass()
  {
    PlayerBase pb;
    if(Class.CastTo(pb, GetGame().GetPlayer()))
		{
      return pb.HasNavigationItem();
    }
    return false;
  }
//==========================END

};