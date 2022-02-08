modded class PlayerBase extends ManBase
{
  EffectSound m_AcidSounds;
  EffectSound m_SleepSounds;

  string selectedCraftingBench = "";
  EntityAI guiCraftingBench = null;

  SRP_ActionOpenMapCB m_OpenMapCallback;

  ItemBook currentBookInHands;

  int	m_facepaintState;
  int m_currentCamoIndex;
  int m_facepaintCountMax;

  bool m_IsUnderWeedEffect = false;
  bool m_IsUnderTobaccoEffect = false;
  bool m_IsUnderMethEffect = false;
  bool m_IsUnderBathEffect = false;
  bool m_IsUnderAcidSmileEffect = false;
  bool m_IsUnderAcidSkullEffect = false;
  bool m_IsUnderAlcoholEffect = false;
  bool m_IsUnderCocaineEffect = false;

  override void Init()
	{
    super.Init();

    m_facepaintState = 0;
    m_currentCamoIndex = 0;
    m_facepaintCountMax = GetPlayerCamoNames().Count() - 1;
    RegisterNetSyncVariableInt("m_facepaintState", 0, m_facepaintCountMax);
  }


  override void OnVariablesSynchronized()
	{
    // Print("face paint sync: mainState: " + m_facepaintState + " index: " + m_currentCamoIndex);
    if (m_facepaintState != m_currentCamoIndex)
    {
      // Print("sync");
      m_facepaintState = m_currentCamoIndex;
    }
		super.OnVariablesSynchronized();
	}


  void SetCamoTexture()
  {
    m_facepaintState = m_currentCamoIndex;
    SetSynchDirty();
  }

  string GetSelectedCamoName()
  {
    string selectedCamo = "";
    if (m_facepaintState > 0){
      selectedCamo = GetPlayerCamoNames().Get(m_facepaintState);
      // Print("GetSelectedCamoName selected camo name from list: " + selectedCamo);
    }
    return selectedCamo;
  }

  string GetCurrentCamoIndexName()
  {
    string selectedCamo = "";
    selectedCamo = GetPlayerCamoNames().Get(m_currentCamoIndex);
    // Print("GetCurrentCamoIndexName selected camo name from list: " + selectedCamo);
    return selectedCamo;
  }

  TStringArray GetPlayerCamoNames()
  {
    return {
      "",
      "fp_bosnia",
      "fp_bulgaria1",
      "fp_bulgaria2",
      "fp_croatia",
      "fp_czech1",
      "fp_czech2",
      "fp_desert",
      "fp_digital",
      "fp_france",
      "fp_germany",
      "fp_hungary1",
      "fp_hungary2",
      "fp_macedonia",
      "fp_poland1",
      "fp_poland2",
      "fp_romania1",
      "fp_romania2",
      "fp_slovenia",
      "fp_uk",
      "fp_usa",
      "fp_winter",
      "fp_woodland",
      "fp_yugoslavia",
    };
  }
}
