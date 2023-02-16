// enum SRP_EDayZProfilesOptions
// {
// 	SHOW_UISTAT_COLOR = 13
// }

modded class DayZGame
{
  protected ref SRPConfig m_SRPConfig;
  protected ref SRP_SmithingRecipes m_SmithingRecipes;
  protected ref SRP_TailoringRecipes m_TailoringRecipes;
  protected ref SRP_DynamicTreasureHunt m_DynamicDreasureHunt;
  protected ref SRP_AdminHelper m_AdminHelper;

  void DayZGame()
  {  
    RemoveMutantSurvivorClassTypes();
    m_SmithingRecipes = new SRP_SmithingRecipes();
    m_TailoringRecipes = new SRP_TailoringRecipes();
    m_DynamicDreasureHunt = new SRP_DynamicTreasureHunt();
    m_AdminHelper = new SRP_AdminHelper();
  }

  void ~DayZGame()
  {
    delete m_SRPConfig;
  }

  override void RegisterProfilesOptions()
	{
    super.RegisterProfilesOptions();
		// m_DayZProfileOptions.RegisterProfileOption(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR, "UI Stats Colors");
  }

  void SetSRPConfigGlobal(SRPConfig config)
  {
    Print("Survivalists_Scripts Settings Confirmed");
    m_SRPConfig = config;
  }
  SRPConfig GetSRPConfigGlobal()
  {
    return m_SRPConfig;
  }
  SRP_SmithingRecipes GetSRPSmithingRecipesGlobal()
  {
    return m_SmithingRecipes;
  }
  SRP_TailoringRecipes GetSRPTailoringRecipesGlobal()
  {
    return m_TailoringRecipes;
  }
  SRP_DynamicTreasureHunt GetDynamicTreasureHunt()
  {
    return m_DynamicDreasureHunt;
  }
  SRP_AdminHelper GetAdminHelper()
  {
    return m_AdminHelper;
  }

  void RemoveMutantSurvivorClassTypes()
  {
    string path = "cfgVehicles";
		string child_name = "";
		int count = ConfigGetChildrenCount( path );
		m_CharClassNames.Clear();

		for (int p = 0; p < count; ++p)
		{
			ConfigGetChildName( path, p, child_name );
			
			if (ConfigGetInt(path + " " + child_name + " scope") == 2 && IsKindOf(child_name, "SurvivorBase"))
			{
        if (!child_name.Contains("DUB_"))
        {
          m_CharClassNames.Insert(child_name);
        }
      }
		}
  }
};