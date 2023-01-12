modded class DayZGame
{
  protected ref SRPConfig m_SRPConfig;
  protected ref SRP_SmithingRecipes m_SmithingRecipes;

  void DayZGame()
  {  
    RemoveMutantSurvivorClassTypes();
    m_SmithingRecipes = new SRP_SmithingRecipes();
  }

  void ~DayZGame()
  {
    delete m_SRPConfig;
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