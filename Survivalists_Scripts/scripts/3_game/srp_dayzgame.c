modded class DayZGame
{
  protected ref SRPConfig m_SRPConfig;
  protected ref SRP_SmithingRecipes m_SmithingRecipes;
  protected ref SRP_TailoringRecipes m_TailoringRecipes;
  protected ref SRP_DrugRecipes m_DrugRecipes;
  protected ref SRP_DynamicTreasureHunt m_DynamicDreasureHunt;
  protected ref SRP_AdminHelper m_AdminHelper;
  
  private ref SRPProfileOptions m_SRPProfileOptions;

  void DayZGame()
  {  
    RemoveMutantSurvivorClassTypes();
    m_SmithingRecipes = new SRP_SmithingRecipes();
    m_TailoringRecipes = new SRP_TailoringRecipes();
    m_DrugRecipes = new SRP_DrugRecipes();
    m_DynamicDreasureHunt = new SRP_DynamicTreasureHunt();
    m_AdminHelper = new SRP_AdminHelper();
    m_SRPProfileOptions = new SRPProfileOptions();
  }

  void ~DayZGame()
  {
    delete m_SRPConfig;
  }

  override void DeferredInit()
	{
		super.DeferredInit();
		//Register custom option 
		m_SRPProfileOptions.RegisterProfileOption(SRP_EDayZProfilesOptions.SHOW_UISTAT_COLOR, "UI Stats Colors");
	}
  float GetSRPProfileVal(SRP_EDayZProfilesOptions option)
	{
		return m_SRPProfileOptions.GetProfileOptionVal(option);
	}
	void SetSRPProfileVal(SRP_EDayZProfilesOptions option, float value)
	{
		m_SRPProfileOptions.SetProfileOptionVal(option, value);
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
  SRP_DrugRecipes GetSRPDrugRecipesGlobal()
  {
    return m_DrugRecipes;
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