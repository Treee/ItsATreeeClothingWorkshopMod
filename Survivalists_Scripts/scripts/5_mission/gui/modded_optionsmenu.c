modded class OptionsMenu
{
  protected ref SRP_OptionsMenuSurvivalists m_SRPOptionsMenu;
  protected int m_SurvivalistsTabIndex;
  override Widget Init()
	{
    super.Init();

		AppendSRPTabs();		
    AppendSRPOptionsPanel();
		return layoutRoot;
	}

  void AppendSRPTabs()
  {
    m_SurvivalistsTabIndex = m_Tabber.AddTab("SURVIVALISTS");
  }
  void AppendSRPOptionsPanel()
  {
    m_SRPOptionsMenu = new SRP_OptionsMenuSurvivalists(m_Tabber.GetTab(m_SurvivalistsTabIndex), m_Details, m_Options, this);
  }

  override void OnTabSwitch(int tab)
	{
    super.OnTabSwitch(tab);		
    if (tab == 4)
    {
      m_SRPOptionsMenu.Focus();
      // Print("survivalists tab switch");
    }
	}
  override void Apply()
	{
    super.Apply();
    if (m_SRPOptionsMenu.IsChanged())
    {
      m_SRPOptionsMenu.Apply();
    }   
  }
  override bool IsAnyTabChanged()
	{
    bool tabChange = super.IsAnyTabChanged();
    if (m_SRPOptionsMenu)
      tabChange |= m_SRPOptionsMenu.IsChanged();
    
    return tabChange;
	}
  override void Reset()
	{
    super.Reset();
    m_SRPOptionsMenu.Revert();
  }
  override void ResetCurrentTab()
	{
    if (m_ActiveTabIdx == 4 && m_SRPOptionsMenu.IsChanged())
    {
      m_SRPOptionsMenu.Revert();
      // Print("survivalists tab switch");
    }
    super.ResetCurrentTab();
	}
  override void PerformSetToDefaults()
	{
    if (m_ActiveTabIdx == 4)
    {
      m_SRPOptionsMenu.SetToDefaults();
      // Print("survivalists tab switch");
    }
    super.PerformSetToDefaults();
	}
  override void ToggleDependentOptions(int mode, bool state)
	{
    super.ToggleDependentOptions(mode, state);
		m_SRPOptionsMenu.ToggleDependentOptions(mode,state);
	}
  override void ReloadOptions()
	{
    super.ReloadOptions();
    m_SRPOptionsMenu.SetOptions(m_Options);
	}
};
