modded class InGameMenu
{
	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("Survivalists_MainMenu/gui/layouts/srp_day_z_ingamemenu.layout");

		m_ContinueButton	= layoutRoot.FindAnyWidget( "continuebtn" );
		m_ExitButton		= layoutRoot.FindAnyWidget( "exitbtn" );
		m_RestartButton		= layoutRoot.FindAnyWidget( "restartbtn" );
		m_RespawnButton		= layoutRoot.FindAnyWidget( "restartdeadbtn" );
		m_OptionsButton		= layoutRoot.FindAnyWidget( "optionsbtn" );
		m_HintPanel					= new UiHintPanel(layoutRoot.FindAnyWidget("hint_frame"));

		if (GetGame().IsMultiplayer())
		{
			ButtonSetText(m_RestartButton, "#main_menu_respawn");
		}
		else
		{
			ButtonSetText(m_RestartButton, "#main_menu_restart");
		}

		HudShow( false );

		return layoutRoot;
	}

	override bool OnClick(Widget w, int x, int y, int button)
	{
		if ( w == m_ContinueButton )
		{
			OnClick_Continue();
			return true;
		}
		else if ( w == m_RestartButton )
		{
			OnClick_Restart();
			return true;
		}
		else if ( w == m_RespawnButton )
        {
            OnClick_Respawn();
            return true;
        }
		else if ( w == m_OptionsButton )
		{
			OnClick_Options();
			return true;
		}
		else if ( w == m_ExitButton )
		{
			OnClick_Exit();
			return true;
		}
		return super.OnClick(w, x, y, button);
	}
}
