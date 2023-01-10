modded class UniversalTemperatureSourceSettings
{
  bool m_IsRadioactiveSource = false;
  bool m_IsComfortHeat = false;
};

modded class UniversalTemperatureSource
{
  bool IsRadioactiveSource()
	{
		return m_Settings.m_IsRadioactiveSource;
	}

  void SetIsRadioactiveSource(bool isRadioactive)
	{
		m_Settings.m_IsRadioactiveSource = isRadioactive;
	}

  bool IsComfortHeatSource()
  {
    return m_Settings.m_IsComfortHeat;
  }

  void SetIsComfortHeatSource(bool isComfortHeat)
  {
    m_Settings.m_IsComfortHeat = isComfortHeat;
  }
};