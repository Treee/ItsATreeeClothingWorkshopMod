class SRP_OptionsMenuSurvivalists extends ScriptedWidgetEventHandler
{
  protected Widget						m_Root;
	protected Widget						m_DetailsRoot;

  protected GameOptions					m_Options;
	protected OptionsMenu					m_Menu;

	protected ref OptionSelectorMultistate	m_ShowUIStatColorSelector;
	
  void SRP_OptionsMenuSurvivalists( Widget parent, Widget details_root, GameOptions options, OptionsMenu menu )
	{
    m_Root = GetGame().GetWorkspace().CreateWidgets( "Survivalists_Scripts/gui/layouts/SRP_ConfigOptions.layout", parent );
		m_Options = options;
		m_Menu = menu;
    m_DetailsRoot = details_root;
    
    SetOptions( options );

		m_Root.FindAnyWidget("uistats_color_setting_option").SetUserID(SRP_OptionIDsScript.SRP_OPTION_UISTAT_COLORS);

		array<string> opt2	= { "#options_controls_enabled", "#options_controls_disabled" };

		//UI Stat Colors
		m_ShowUIStatColorSelector	= new OptionSelectorMultistate(m_Root.FindAnyWidget("uistats_color_setting_option"), g_Game.GetSRPProfileVal(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR), this, false, opt2);
		m_ShowUIStatColorSelector.m_OptionChanged.Insert(OnSRPSettingsChanged);

		m_Root.SetHandler(this);
		m_DetailsRoot.Show(false);
	}
  override bool OnMouseEnter(Widget w, int x, int y)
	{
		m_Menu.ColorHighlight(w);
		return true;
	}
  override bool OnMouseLeave(Widget w, Widget enterW, int x, int y)
	{
		m_Menu.ColorNormal(w);
		return true;
	}
  override bool OnFocus(Widget w, int x, int y)
	{
		if (m_Menu)
		{
			m_Menu.OnFocus(w, x, y);
		}
		m_DetailsRoot.Show(false);
		return (w != null);
	}
  void Focus(){}
  void ToggleDependentOptions(int mode, bool state){}
	void Apply()
	{
    g_Game.SetSRPProfileVal(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR, m_ShowUIStatColorSelector.GetValue());
	}
  void Revert()
	{
		if (m_ShowUIStatColorSelector)
			m_ShowUIStatColorSelector.SetValue(g_Game.GetSRPProfileVal(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR), false);
	}
  void SetToDefaults()
	{
    g_Game.ResetProfileOptions();

		if (m_ShowUIStatColorSelector)
			m_ShowUIStatColorSelector.SetValue(g_Game.GetSRPProfileVal(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR), false);
  }
	bool IsChanged()
  {
    bool srp_changed = m_ShowUIStatColorSelector.GetValue() != g_Game.GetSRPProfileVal(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR);
    
    return srp_changed;
  }
	void SetOptions( GameOptions options )
	{
    m_Options = options;
	}
  protected void OnSRPSettingsChanged(float new_value)
	{
		m_Menu.OnChanged();
	}
};
