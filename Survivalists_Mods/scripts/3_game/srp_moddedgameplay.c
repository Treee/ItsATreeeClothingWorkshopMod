modded class CfgGameplayHandler
{
  // force 3d map.
  override static bool GetUse3DMap()
	{
		return true;
	}
};

modded class Hud
{
  void DisplayTirednessNotifier( int key, int currentTirednessCount, int tirednessDelta, int status );
};

modded class MenuDefaultCharacterData
{
  override string GetCharacterType()
	{
    if (m_CharacterType == "DUB_SurMutant_M" || m_CharacterType == "DUB_SurMutant_M_2")
      return "SurvivorM_Mirek";
    else if (m_CharacterType == "DUB_SurMutant_F" || m_CharacterType == "DUB_SurMutant_F_2")
      return "SurvivorF_Eva";
		else 
      return m_CharacterType;
	}
};