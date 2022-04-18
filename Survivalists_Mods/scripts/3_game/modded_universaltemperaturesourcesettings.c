modded class UniversalTemperatureSourceSettings
{
  bool m_IsRadioactiveSource = false;
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
};