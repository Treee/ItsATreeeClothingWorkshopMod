modded class DayZGame
{
  protected ref IAT_TestWorkbenchRecipes m_TestWorckbenchRecipes;

  void DayZGame()
  {
    m_TestWorckbenchRecipes = new IAT_TestWorkbenchRecipes();
  }
  IAT_TestWorkbenchRecipes GetIATTestWorkbenchRecipes()
  {
    return m_TestWorckbenchRecipes;
  }
};