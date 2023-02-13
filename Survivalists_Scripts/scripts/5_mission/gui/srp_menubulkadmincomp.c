modded class VPPAdminHud
{
	override void DefineButtons()
	{
		super.DefineButtons();
		InsertButton("AdminBulkComp", "Admin Bulk Comp", "set:dayz_gui_vpp image:vpp_icon_item_manager","Spawn multiple items from a list.");
	}
};

class AdminBulkComp extends AdminHudSubMenu
{
	private ButtonWidget m_acceptButton;
  private MultilineEditBoxWidget m_editText;

	void AdminBulkComp()
	{
		// Print("AdminBulkComp()");
	}

	override void OnCreate(Widget RootW)
	{
		super.OnCreate(RootW);

		M_SUB_WIDGET  = CreateWidgets("Survivalists_Scripts/gui/layouts/srp_admincompmenu.layout");
    M_SUB_WIDGET.SetHandler(this);
		m_TitlePanel  = Widget.Cast( M_SUB_WIDGET.FindAnyWidget( "Title") );
		m_closeButton = ButtonWidget.Cast( M_SUB_WIDGET.FindAnyWidget( "BtnCancel") );
		m_acceptButton = ButtonWidget.Cast( M_SUB_WIDGET.FindAnyWidget( "BtnAccept") );
		m_editText = MultilineEditBoxWidget.Cast( M_SUB_WIDGET.FindAnyWidget( "EditBoxCompText") );
		ShowSubMenu();
	}
	
	override bool OnClick(Widget w, int x, int y, int button)
	{		
    super.OnClick(w, x, y, button);
    // Print("Yay!! /my widgets: " + button);
    switch(w)
    {
      case m_acceptButton:
			Print("comp this shiz! || " + GetCompText());
      // if (m_CurrentPresetData != null)
      //   GetRPCManager().VSendRPC("RPC_VPPItemManager", "EditPreset", new Param1<ref PresetItemData>(m_CurrentPresetData), true, null);
      break;
    }
    return false;
  }

  override bool OnKeyPress(Widget w, int x, int y, int key)
	{
    super.OnKeyPress(w, x, y, key);
    if ( g_Game.IsLeftCtrlDown() && key == KeyCode.KC_V )
		{
			Print("Pasted yo! || " + GetCompText());
			return true;
		}		
		return false;
	}

  string GetCompText()
  {
    string compText;// = m_editText.GetText();   
    string lineText;    
    int numLines = 20;
    for(int i = 0; i < numLines; i++)
    {
      m_editText.GetLine(i, lineText);
      compText = string.Format("%1::%2", compText, lineText);
    }
    Print("text in box: " + compText);
    return compText;
  }
};
