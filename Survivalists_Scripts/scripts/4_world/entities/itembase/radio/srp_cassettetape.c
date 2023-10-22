class SRPRadio_CassetteTape_Base extends ItemBase
{
  protected string m_CassetteSoundSet;

  override void InitItemVariables()
	{
    super.InitItemVariables();
    IntializeCassetteVariables();
  };

  void IntializeCassetteVariables()
  {
    string cfgPath = string.Format("CfgVehicles %1 CfgCassette soundSet", GetType());
    if (GetGame().ConfigIsExisting(cfgPath))
    {
      m_CassetteSoundSet = GetGame().ConfigGetTextOut(cfgPath);
    }
  }
  string GetCassetteSoundSet()
  {
    return m_CassetteSoundSet;
  }
};