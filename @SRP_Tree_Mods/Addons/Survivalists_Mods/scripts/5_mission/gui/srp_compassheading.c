class CompassHeadingMenu extends UIScriptedMenu 
{
  private Widget m_SchanaHeadingRootWidget;

  private TextWidget m_SchanaHeadingTextWidget;
  private Widget m_SchanaCompassFrameWidget;
  private ImageWidget m_SchanaCompassImageWidget;

  private bool m_SchanaIsVisible;
  private bool m_SchanaHeadingVisible = false;

  void CompassHeadingMenu(bool visible) 
	{
    m_SchanaHeadingRootWidget = GetGame().GetWorkspace().CreateWidgets("Survivalists_Mods/gui/layouts/compass.layout");
    m_SchanaHeadingTextWidget = TextWidget.Cast(m_SchanaHeadingRootWidget.FindAnyWidget("TextHeading"));
    m_SchanaCompassFrameWidget = m_SchanaHeadingRootWidget.FindAnyWidget("FrameCompass");
    m_SchanaCompassImageWidget = ImageWidget.Cast(m_SchanaHeadingRootWidget.FindAnyWidget("ImageCompass"));
    m_SchanaIsVisible = visible;

    GetGame().GetCallQueue(CALL_CATEGORY_GUI).CallLater(this.CompassUpdate, 16, true);
  }

  void ~CompassHeadingMenu() 
	{
    GetGame().GetCallQueue(CALL_CATEGORY_GUI).Remove(this.CompassUpdate);
    if(m_SchanaHeadingRootWidget != null) {
        m_SchanaHeadingRootWidget.Show(false);
    }
  }

  void CompassUpdate() 
	{
		bool hasCompass = true;
		array<EntityAI> itemsArray = new array<EntityAI>;
    PlayerBase pb;
    if(Class.CastTo(pb,GetGame().GetPlayer()))
		{
      pb.GetInventory().EnumerateInventory(InventoryTraversalType.INORDER, itemsArray);            
      for(int i = 0; i < itemsArray.Count(); i++)
			{
        if(itemsArray[i] != null)
				{
          if(itemsArray[i].IsInherited(ItemCompass) || itemsArray[i].IsKindOf("ItemCompass"))
					{
            hasCompass = false;
						break;
					}
        }
      }
    }
		if(!hasCompass) 
		{
			if(m_SchanaIsVisible && m_SchanaHeadingRootWidget != null && GetGame().GetPlayer()) 
			{
				float angle = CompassGetAngle();
	
				m_SchanaCompassFrameWidget.Show(!m_SchanaHeadingVisible);
				m_SchanaHeadingTextWidget.Show(m_SchanaHeadingVisible);
				
				m_SchanaHeadingTextWidget.SetText(CompassGetHeading(angle));
				SetCompassPos(angle);
				m_SchanaHeadingRootWidget.Update();
				m_SchanaHeadingRootWidget.Show(true);
			} 
      else if(m_SchanaHeadingRootWidget != null) 
			{
				m_SchanaHeadingRootWidget.Show(false);
			}
    } 
    else {
			if(m_SchanaHeadingRootWidget != null) 
			{
				m_SchanaHeadingRootWidget.Show(false);
			}
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
    m_SchanaCompassImageWidget.GetPos(x, y);
    m_SchanaCompassImageWidget.GetSize(width, height);

    float center_offset = width / -2.0 + 0.5;

    if(angle > 180) 
		{
      angle = angle - 360;
    }
    float offset = angle *(center_offset / 180.0) + center_offset;

    m_SchanaCompassImageWidget.SetPos(offset, y);
  }

  float CompassGetAngle() 
	{
    vector direction = GetGame().GetCurrentCameraDirection();
    float angle = direction.VectorToAngles()[0];
    return angle;
  }

  void CompassSetHeadingVisible(bool visible) 
	{
    m_SchanaIsVisible = visible;
  }

  void CompassToggleHeading() 
	{
		bool hasCompass = true;
		array<EntityAI> itemsArray = new array<EntityAI>;
    PlayerBase pb;
    if(Class.CastTo(pb,GetGame().GetPlayer()))
		{
      pb.GetInventory().EnumerateInventory(InventoryTraversalType.INORDER, itemsArray);            
      for(int i = 0; i < itemsArray.Count(); i++)
			{
        if(itemsArray[i] != null){
          if(itemsArray[i].IsInherited(ItemCompass) || itemsArray[i].IsKindOf("ItemCompass"))
					{
            hasCompass = false;
						break;
					}
        }
      }
    }
		if(!hasCompass)
		{
			if(!m_SchanaIsVisible) 
			{
				m_SchanaIsVisible = true;
			} 
      else 
			{
				if(m_SchanaHeadingVisible) 
				{
					m_SchanaIsVisible = false;
				}
				m_SchanaHeadingVisible = !m_SchanaHeadingVisible;
			}
		}
	}
}