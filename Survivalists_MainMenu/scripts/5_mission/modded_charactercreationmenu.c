modded class CharacterCreationMenu
{
	protected Widget										m_SettingsButton;
	protected Widget										m_Exit;
	protected Widget										m_HomeButton;

	protected ref OptionSelectorMultistateCharacterMenu		m_BeardSelector;

	override Widget Init()
	{
        layoutRoot = GetGame().GetWorkspace().CreateWidgets( "Survivalists_MainMenu/gui/layouts/srp_character_creation.layout" );

		m_CharacterRotationFrame			= layoutRoot.FindAnyWidget( "character_rotation_frame" );
		m_Apply								= layoutRoot.FindAnyWidget( "apply" );
		m_Save 								= layoutRoot.FindAnyWidget( "save" );
        m_Version							= TextWidget.Cast(layoutRoot.FindAnyWidget("version"));
		m_RandomizeCharacter				= layoutRoot.FindAnyWidget( "randomize_character" );
		m_HomeButton						= layoutRoot.FindAnyWidget( "home" );
		m_SettingsButton					= layoutRoot.FindAnyWidget( "settings" );
		m_Exit								= layoutRoot.FindAnyWidget( "exit" );
        m_DetailsRoot 						= layoutRoot.FindAnyWidget( "menu_details_tooltip" );
		m_DetailsLabel						= TextWidget.Cast( m_DetailsRoot.FindAnyWidget( "menu_details_label" ) );
		m_DetailsText						= RichTextWidget.Cast( m_DetailsRoot.FindAnyWidget( "menu_details_tooltip_content" ) );
		m_CharacterHeaderText 				= TextWidget.Cast(layoutRoot.FindAnyWidget( "char_header_text" ));
		m_PlayedCharacterInfo 				= layoutRoot.FindAnyWidget( "played_char_info" );

		string version;
		GetGame().GetVersion( version );
		version = "#main_menu_version" + " " + version;
		m_Version.SetText( version );

		if( m_Scene && m_Scene.GetIntroCharacter() )
		{
			m_OriginalCharacterID = m_Scene.GetIntroCharacter().GetCharacterID();
		}

		m_NameSelector		= new OptionSelectorEditbox( layoutRoot.FindAnyWidget( "character_name_setting_option" ), m_Scene.GetIntroCharacter().GetCharacterName(), null, false );
		m_GenderSelector	= new OptionSelectorMultistateCharacterMenu( layoutRoot.FindAnyWidget( "character_gender_setting_option" ), 0, null, false, m_Scene.GetIntroCharacter().GetCharGenderList() );
		if ( m_Scene.GetIntroCharacter().IsCharacterFemale() )
		{
			m_GenderSelector.SetValue( "Female" );
			m_SkinSelector	= new OptionSelectorMultistateCharacterMenu( layoutRoot.FindAnyWidget( "character_head_setting_option" ), 0, null, false, m_Scene.GetIntroCharacter().GetCharList( ECharGender.Female ) );
		}
		else
		{
			m_GenderSelector.SetValue( "Male" );
			m_SkinSelector	= new OptionSelectorMultistateCharacterMenu( layoutRoot.FindAnyWidget( "character_head_setting_option" ), 0, null, false, m_Scene.GetIntroCharacter().GetCharList( ECharGender.Male ) );
		}

		m_TopSelector		= new OptionSelectorMultistateCharacterMenu( layoutRoot.FindAnyWidget( "character_top_setting_option" ), 0, null, false, m_Scene.GetIntroCharacter().GetCharShirtsList() );
		m_BeardSelector		= new OptionSelectorMultistateCharacterMenu( layoutRoot.FindAnyWidget( "character_beard_setting_option" ), 0, null, false, m_Scene.GetIntroCharacter().GetCharBeardsList() );
		m_BottomSelector	= new OptionSelectorMultistateCharacterMenu( layoutRoot.FindAnyWidget( "character_bottom_setting_option" ), 0, null, false, m_Scene.GetIntroCharacter().GetCharPantsList() );
		m_ShoesSelector		= new OptionSelectorMultistateCharacterMenu( layoutRoot.FindAnyWidget( "character_shoes_setting_option" ), 0, null, false, m_Scene.GetIntroCharacter().GetCharShoesList() );

		PlayerBase scene_char = GetPlayerObj();
		if( scene_char )
		{
			Object obj = scene_char.GetInventory().FindAttachment(InventorySlots.BODY);
			if( obj )
				m_TopSelector.SetValue( obj.GetType() );

			obj = scene_char.GetInventory().FindAttachment(InventorySlots.MASK);
			if( obj )
				m_BeardSelector.SetValue( obj.GetType() );

			obj = scene_char.GetInventory().FindAttachment(InventorySlots.LEGS);
			if( obj )
				m_BottomSelector.SetValue( obj.GetType() );

			obj = scene_char.GetInventory().FindAttachment(InventorySlots.FEET);
			if( obj )
				m_ShoesSelector.SetValue( obj.GetType() );

			m_SkinSelector.SetValue( scene_char.GetType() );
		}

        m_GenderSelector.m_OptionChanged.Insert( GenderChanged );
		m_SkinSelector.m_OptionChanged.Insert( SkinChanged );
		m_TopSelector.m_OptionChanged.Insert( TopChanged );
		m_BottomSelector.m_OptionChanged.Insert( BottomChanged );
		m_ShoesSelector.m_OptionChanged.Insert( ShoesChanged );

		m_BeardSelector.m_OptionChanged.Insert( BeardChanged );

		Refresh();
		SetCharacter();
		CheckNewOptions();
		return layoutRoot;
	}

    //================================================== VANILLA OVERRIDE
    void ~CharacterCreationMenu()
	{
		m_BeardSelector.m_OptionChanged.Remove( BeardChanged );
	}
	//Coloring functions (Until WidgetStyles are useful)
	override void ColorHighlight( Widget w )
	{
		if( w.IsInherited( ButtonWidget ) )
		{
			ButtonWidget button = ButtonWidget.Cast( w );
			button.SetTextColor( ARGB( 255, 0, 255, 0 ) );
		}

		w.SetColor( ARGB( 255, 0, 0, 0) );

		TextWidget text1	= TextWidget.Cast(w.FindAnyWidget( w.GetName() + "_text" ) );
		TextWidget text2	= TextWidget.Cast(w.FindAnyWidget( w.GetName() + "_label" ) );
		TextWidget text3	= TextWidget.Cast(w.FindAnyWidget( w.GetName() + "_text_1" ) );
		ImageWidget image	= ImageWidget.Cast( w.FindAnyWidget( w.GetName() + "_image" ) );
		Widget option		= Widget.Cast( w.FindAnyWidget( w.GetName() + "_option_wrapper" ) );
		Widget option_label = w.FindAnyWidget( "option_label" );

		if( text1 )
		{
			text1.SetColor( ARGB( 255, 0, 255, 0 ) );
		}

		if( text2 )
		{
			text2.SetColor( ARGB( 255, 0, 255, 0 ) );
		}

		if( text3 )
		{
			text3.SetColor( ARGB( 255, 0, 255, 0 ) );
			w.SetAlpha(1);
		}

		if( image )
		{
			image.SetColor( ARGB( 255, 0, 255, 0 ) );
		}

		if ( option )
		{
			option.SetColor( ARGB( 255, 0, 255, 0 ) );
		}

		#ifndef PLATFORM_CONSOLE
		if ( option_label )
		{
			option_label.SetColor( ARGB( 255, 0, 255, 0 ) );
		}
		#endif
	}
    override bool OnModalResult( Widget w, int x, int y, int code, int result )
	{
		if( code == IDC_MAIN_QUIT )
		{
			if( result == 2 )
				GetGame().GetCallQueue(CALL_CATEGORY_GUI).Call(g_Game.RequestExit, IDC_MAIN_QUIT);
			#ifdef PLATFORM_WINDOWS
			if( result == 3 )
				ColorNormal( GetFocus() );
			#endif
			return true;
		}
		return false;
	}
    override void CheckNewOptions()
	{
        super.CheckNewOptions();
		bool show_widgets = m_Scene.GetIntroCharacter().IsDefaultCharacter();
		layoutRoot.FindAnyWidget( "character_beard_button" ).Show( show_widgets );
	}
    override bool OnClick( Widget w, int x, int y, int button )
	{
        // do our logic first
		if ( w == m_SettingsButton )
		{
			OpenSettings();
			return true;
		}
		else if ( w == m_Exit )
		{
			Exit();
			return true;
		}
		else if ( w == m_HomeButton )
		{
			Back();
			return true;
		}
        // return vanilla logic if ours didnt catch
		return super.OnClick(w, x, y, button);
	}

    //================================================== CUSTOM
    void BeardChanged()
	{
		GetGame().GetMenuDefaultCharacterData().SetDefaultAttachment(InventorySlots.MASK,m_BeardSelector.GetStringValue());
		GetGame().GetMenuDefaultCharacterData().EquipDefaultCharacter(m_Scene.GetIntroCharacter().GetCharacterObj());
		SetCharacterSaved(false);
		m_Scene.GetIntroCharacter().SetAttachment( m_BeardSelector.GetStringValue(), InventorySlots.MASK);
	}

    void OpenSettings()
	{
		EnterScriptedMenu(MENU_OPTIONS);
	}
	void Exit()
	{
		GetGame().GetUIManager().ShowDialog("#main_menu_exit", "#main_menu_exit_desc", IDC_MAIN_QUIT, DBT_YESNO, DBB_YES, DMT_QUESTION, this);
	}
}