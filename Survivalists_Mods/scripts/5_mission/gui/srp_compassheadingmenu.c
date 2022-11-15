class SRPCompassMenu extends UIScriptedMenu 
{
  private Widget m_CompassHeadingRootWidget;
  private TextWidget m_CompassHeadingText;
  private Widget m_CompassFrameWidget;
  private ImageWidget m_CompassImageWidget;

  private int m_CompassUIState = 0; //0,1,2: hidden,sundial,heading

  override Widget Init()
	{
    m_CompassHeadingRootWidget = GetGame().GetWorkspace().CreateWidgets("Survivalists_Mods/gui/layouts/compass.layout");
    m_CompassHeadingText = TextWidget.Cast(m_CompassHeadingRootWidget.FindAnyWidget("TextHeading"));
    m_CompassFrameWidget = m_CompassHeadingRootWidget.FindAnyWidget("FrameCompass");
    m_CompassImageWidget = ImageWidget.Cast(m_CompassHeadingRootWidget.FindAnyWidget("ImageCompass"));
		return m_CompassHeadingRootWidget;
	}

  override void Update( float timeslice )
	{
		super.Update( timeslice );		
		if( GetGame() && GetGame().GetInput() && GetGame().GetInput().LocalPress("UACompassToggle", false) )
		{
			CompassToggleHeading();
		}
    CompassUpdate();
	}

  override void OnShow()
	{
    super.OnShow();
    UnlockControls();
	}

  void CompassUpdate() 
	{
		if(HasCompass()) 
		{
      float angle = CompassGetAngle();
      SetCompassPos(angle);
      switch(m_CompassUIState)
      {
        case 0: // no UI
          Close();
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
      Close();
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
}