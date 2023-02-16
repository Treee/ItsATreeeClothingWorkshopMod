// modded class OptionsMenuGame 
// {
// 	protected Widget 						m_SRP_Section;
// 	protected Widget 						m_WidgetUIStatColors;

// 	protected ref OptionSelectorMultistate	m_ShowUIStatColorSelector;
	
//   void OptionsMenuGame( Widget parent, Widget details_root, GameOptions options, OptionsMenu menu )
// 	{
// 		//Create SRP section
// 		m_SRP_Section = GetGame().GetWorkspace().CreateWidgets("Survivalists_Scripts/gui/layouts/SRP_GameMenuOptions.layout", m_Root.FindAnyWidget("game_settings_root"));
// 		m_Root.FindAnyWidget("game_settings_root").Update();

// 		//UI Stat Colors
// 		m_WidgetUIStatColors = GetGame().GetWorkspace().CreateWidgets(VPPATUIConstants.SettingsMenuElement, m_Root.FindAnyWidget("srp_gamesettings_root"));
// 		TextWidget.Cast(m_WidgetUIStatColors.FindAnyWidget("setting_label")).SetText("UI Stats Colors");
//     m_ShowUIStatColorSelector = new OptionSelectorMultistate(m_Root.FindAnyWidget("setting_option"), g_Game.GetProfileOption(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR), this, false, { "#options_controls_enabled", "#options_controls_disabled" });
// 		m_ShowUIStatColorSelector.m_OptionChanged.Insert(OnSRPSettingsChanged);
// 	}
	
// 	override void Apply()
// 	{
// 		super.Apply();
//     g_Game.SetProfileOption(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR, m_ShowUIStatColorSelector.GetValue());
// 	}
//   override void Revert()
// 	{
// 		super.Revert();
// 		if (m_ShowUIStatColorSelector)
// 			m_ShowUIStatColorSelector.SetValue(g_Game.GetProfileOption(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR), false);
// 	}
//   override void SetToDefaults()
// 	{
//     super.SetToDefaults();
// 		if (m_ShowUIStatColorSelector)
// 			m_ShowUIStatColorSelector.SetValue(g_Game.GetProfileOption(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR), false);
//   }
// 	override bool IsChanged()
//   {
//     bool srp_changed = m_ShowUIStatColorSelector.GetValue() != g_Game.GetProfileOption(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR);
    
//     return super.IsChanged() || srp_changed;
//   }
// 	override void SetOptions( GameOptions options )
// 	{
// 		super.SetOptions( options );
// 		if (m_ShowUIStatColorSelector)
// 			m_ShowUIStatColorSelector.SetValue(g_Game.GetProfileOption(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR), false);
// 	}

//   protected void OnSRPSettingsChanged(float new_value)
// 	{
// 		m_Menu.OnChanged();
// 	}

// };
