modded class MainMenu
{
	protected TextWidget m_WelcomeBack;

	private Widget m_Discord;
	private Widget m_Steam;
	private Widget m_Facebook;
	private Widget m_Twitter;
	private Widget m_Reddit;
	private Widget m_Youtube;
	private Widget m_PayPal;

	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets( "Survivalists_MainMenu/gui/layouts/new_ui/srp_main_menu.layout" );

		m_Discord					= layoutRoot.FindAnyWidget( "DiscordButton" );
		m_Steam						= layoutRoot.FindAnyWidget( "SteamButton" );
		m_Facebook					= layoutRoot.FindAnyWidget( "FacebookButton" );
		m_Twitter					= layoutRoot.FindAnyWidget( "TwitterButton" );
		m_Reddit					= layoutRoot.FindAnyWidget( "RedditButton" );
		m_Youtube					= layoutRoot.FindAnyWidget( "YoutubeButton" );
		m_PayPal					= layoutRoot.FindAnyWidget( "PayPalButton" );

		m_Play						= layoutRoot.FindAnyWidget( "PlayButton" );
		m_ChooseServer				= layoutRoot.FindAnyWidget( "ServerButton" );
		m_CustomizeCharacter		= layoutRoot.FindAnyWidget( "CharacterButton" );
		m_PlayVideo					= layoutRoot.FindAnyWidget( "play_video" );
		m_Tutorials					= layoutRoot.FindAnyWidget( "tutorials" );
		m_TutorialButton			= layoutRoot.FindAnyWidget( "tutorial_button" );
		m_MessageButton				= layoutRoot.FindAnyWidget( "message_button" );
		m_SettingsButton			= layoutRoot.FindAnyWidget( "SettingsButton" );
		m_Exit						= layoutRoot.FindAnyWidget( "ExitButton" );
		m_PrevCharacter				= layoutRoot.FindAnyWidget( "prev_character" );
		m_NextCharacter				= layoutRoot.FindAnyWidget( "next_character" );

		m_Version					= TextWidget.Cast( layoutRoot.FindAnyWidget( "version" ) );
		m_ModdedWarning				= TextWidget.Cast( layoutRoot.FindAnyWidget( "ModdedWarning" ) );
		m_CharacterRotationFrame	= layoutRoot.FindAnyWidget( "character_rotation_frame" );

		m_LastPlayedTooltip			= layoutRoot.FindAnyWidget( "last_server_info" );
		m_LastPlayedTooltip.Show(false);
		m_LastPlayedTooltipLabel	= m_LastPlayedTooltip.FindAnyWidget( "last_server_info_label" );
		m_LastPlayedTooltipName 	= TextWidget.Cast( m_LastPlayedTooltip.FindAnyWidget( "last_server_info_name" ) );
		m_LastPlayedTooltipIP		= TextWidget.Cast( m_LastPlayedTooltip.FindAnyWidget( "last_server_info_ip" ) );
		m_LastPlayedTooltipPort		= TextWidget.Cast( m_LastPlayedTooltip.FindAnyWidget( "last_server_info_port" ) );

		m_LastPlayedTooltipTimer	= new WidgetFadeTimer();

		m_Stats						= new MainMenuStats( layoutRoot.FindAnyWidget( "character_stats_root" ) );

		m_Mission					= MissionMainMenu.Cast( GetGame().GetMission() );

		m_LastFocusedButton = 		m_Play;

		m_ScenePC					= m_Mission.GetIntroScenePC();

		if( m_ScenePC )
		{
			m_ScenePC.ResetIntroCamera();
		}

		m_PlayVideo.Show( false );

		m_WelcomeBack = TextWidget.Cast(layoutRoot.FindAnyWidget("WelcomeBack"));
		m_PlayerName = TextWidget.Cast(layoutRoot.FindAnyWidget("character_name_text"));
		SetPlayerName();

		string version;
		GetGame().GetVersion( version );
		m_Version.SetText( "#main_menu_version" + " " + version );

		GetGame().GetUIManager().ScreenFadeOut(0);
		SetFocus( null );
		Refresh();
		LoadMods();
		GetDayZGame().GetBacklit().MainMenu_OnShow();

		g_Game.SetLoadState( DayZLoadState.MAIN_MENU_CONTROLLER_SELECT );

		return layoutRoot;
	}

	void SetPlayerName()
	{
		if (m_PlayerName && m_WelcomeBack)
		{
            m_PlayerName.SetText(GetPlayerName());
		};
	};
    string GetPlayerName()
    {
        string name;
        // get player name from launcher
        GetCLIParam("name", name);
        // if that doesnt exist, get the name from last play session
        if (!name)
        {
            if (m_ScenePC)
            {
                int charID = m_ScenePC.GetIntroCharacter().GetCharacterID();
                name = m_ScenePC.GetIntroCharacter().GetCharacterNameById(charID);
            }
        }
        // otherwise just default to survivor
        else
            name = "Survivor";

        return name;
    }

	override bool OnClick(Widget w, int x, int y, int button)
	{
		if( w == m_Play )
		{
            string playerName = GetPlayerName();
			m_LastFocusedButton = m_Play;
            // if (playerName == "Dev42069")
            // g_Game.ConnectFromServerBrowser( "127.0.0.1", 2302, "" );
            // else
            g_Game.ConnectFromServerBrowser( "92.118.18.74", 2302, "" );

            // one day switch to domain
            // g_Game.ConnectFromServerBrowser( "the-survivalists.net/dayz", 2302, "" );

			return true;
		}
		else if (w == m_Discord)
		{
			GetGame().OpenURL("https://discord.gg/survivalists");
			return true;
		}
		else if (w == m_Steam)
		{
			GetGame().OpenURL("https://steamcommunity.com/sharedfiles/filedetails/?id=2360418775");
			return true;
		}
		else if (w == m_Twitter)
		{
			GetGame().OpenURL("https://twitter.com/_Survivalists");
			return false;
		}
		else if (w == m_Youtube)
		{
			GetGame().OpenURL("https://www.youtube.com/channel/UC79uVzUEczmlDIK-Spgj9FA");
			return false;
		}
		else if (w == m_PayPal)
		{
			GetGame().OpenURL("https://www.paypal.com/paypalme/survivalists");
			return false;
		}
		return super.OnClick(w, x, y, button);
	};

	override void OnChangeCharacter(bool create_character = true)
	{
		if ( m_ScenePC && m_ScenePC.GetIntroCharacter() )
		{
			int charID = m_ScenePC.GetIntroCharacter().GetCharacterID();
			m_ScenePC.GetIntroCharacter().CreateNewCharacterById( charID );
			m_PlayerName.SetText( "Welcome" + " " + m_ScenePC.GetIntroCharacter().GetCharacterNameById( charID ) );

			Widget w = m_CustomizeCharacter.FindAnyWidget( m_CustomizeCharacter.GetName() + "_label");

			if ( w )
			{
				TextWidget text = TextWidget.Cast( w );
                text.SetText(m_ScenePC.GetIntroCharacter().GetCharacterNameById( charID ));
			}
			if (m_ScenePC.GetIntroCharacter().GetCharacterObj() )
			{
				if ( m_ScenePC.GetIntroCharacter().GetCharacterObj().IsMale() )
					m_ScenePC.GetIntroCharacter().SetCharacterGender(ECharGender.Male);
				else
					m_ScenePC.GetIntroCharacter().SetCharacterGender(ECharGender.Female);
			}

			//update character stats
			m_Stats.UpdateStats();
		}
	}

	override void ColorHighlight( Widget w )
	{
		if( !w )
			return;

		int color_pnl = ARGB(255, 0, 255, 0);
		int color_lbl = ARGB(255, 0, 255, 0);
		int color_img = ARGB(255, 255, 0, 0);

		ButtonSetColor(w, color_pnl);
		ButtonSetTextColor(w, color_lbl);
		ImagenSetColor(w, color_img);
	};
};