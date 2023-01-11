modded class IngameHud
{
  protected Widget m_sleepPanelWidget;  

  string panelSleep = "Sleep";
  string iconSleepName = "IconSleep";

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
    // Print("SRP Mods IngameHud before Init()");
    super.Init(hud_panel_widget);
    if (!m_sleepPanelWidget && (GetGame().IsClient() || !GetGame().IsMultiplayer()))
    {
      m_sleepPanelWidget = GetGame().GetWorkspace().CreateWidgets("Survivalists_Scripts/gui/layouts/srp_sleep_layout.layout");
      if (m_sleepPanelWidget) {
        m_sleepPanelWidget.Show(false);
      }
    }
    if (!m_CompassHeadingRootWidget && (GetGame().IsClient() || !GetGame().IsMultiplayer()))
    {
      m_CompassHeadingRootWidget = GetGame().GetWorkspace().CreateWidgets("Survivalists_Scripts/gui/layouts/compass.layout");
      m_CompassHeadingText = TextWidget.Cast(m_CompassHeadingRootWidget.FindAnyWidget("TextHeading"));
      m_CompassFrameWidget = m_CompassHeadingRootWidget.FindAnyWidget("FrameCompass");
      m_CompassImageWidget = ImageWidget.Cast(m_CompassHeadingRootWidget.FindAnyWidget("ImageCompass"));
      if (m_CompassHeadingRootWidget)
        m_CompassHeadingRootWidget.Show(false);
    }

    // Print("SRP Mods IngameHud after Init()");
    DisplayTirednessNotifier(NTFKEY_SRP_TIREDNESS, 0, 0, 4);
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

  override void RefreshHudVisibility()
  {
    super.RefreshHudVisibility();
    bool genericShow = ( !m_HudHidePlayer && !m_HudHideUI && m_HudState ) || m_HudInventory;
    // show the sleep icon like the other status icons
    SetSleepWidgetVisibility(genericShow);
    m_CompassHeadingRootWidget.Show(genericShow);
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

  //========================== SLEEP
  void DisplayTirednessNotifier( int key, int currentTirednessCount, int tirednessDelta, int status )
	{
		if( key == NTFKEY_SRP_TIREDNESS )
		{
      ImageWidget w;
      // Print("Tiredness DisplayNotifier: " + key);
			DisplayTirednessTendencyNormal( key, status );
      SetTirednessState(status);
    }
	}
  void DisplayTirednessTendencyNormal( int key, int status )
	{
		ImageWidget w;
		Class.CastTo(w,  m_sleepPanelWidget.FindAnyWidget(iconSleepName));
		// Print("Override DisplayTendencyNormal " + w);
		if( w )
		{
			w.SetImage( Math.Clamp( status - 1, 0, 4 ) );
			float alpha = w.GetAlpha();
			
			switch( status )
			{
				case 2:
					w.SetColor( ARGB( alpha * 255, 220, 220, 0 ) );		//yellow
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 1:
					w.SetColor( ARGB( alpha * 255, 220, 0, 0 ) );		//red
					m_TendencyStatusCritical.Remove( w );				//remove from blinking group
					break;
				case 0:
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
  void SetTirednessState( int state )
	{
    // Print("Tiredness state " + state);
		ImageWidget tiredness = ImageWidget.Cast( m_sleepPanelWidget.FindAnyWidget(iconSleepName) );
		tiredness.LoadImageFile( 0, "set:srp_sleep_iconset image:iconSleep" + state );
	}
  void SetSleepWidgetVisibility(bool visible) 
  {
    if (m_sleepPanelWidget) 
    {
      // Print("SRP Mods In Game Hud SetSleepWidgetVisibility!! visible=" + visible);      
      m_sleepPanelWidget.Show(visible);
    }
  }
};