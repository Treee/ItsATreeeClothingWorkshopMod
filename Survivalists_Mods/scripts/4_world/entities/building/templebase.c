class SRP_AmbientSoundEmiter_Base extends House
{
  protected EffectSound 		m_TempleSound;
  protected int m_SoundIndex;
  protected int m_SoundIndexMax;

  void SRP_AmbientSoundEmiter_Base() 
  {
    m_SoundIndexMax = GetTemplateSounds().Count();
    m_SoundIndex = Math.RandomIntInclusive(0, m_SoundIndexMax);
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(RequestSoundEvent, 500, false);
  }

  void ~SRP_AmbientSoundEmiter_Base()
  {
    StopSoundSet(m_TempleSound);
  }
	
	string GetSoundSet()
	{
    m_SoundIndex = ((m_SoundIndex + 1) % m_SoundIndexMax);
		return GetTemplateSounds().Get(m_SoundIndex);
	}

  TStringArray GetTemplateSounds()
  {
    return {
      "Survivalists_Mods_Ambience_Chanting1_SoundSet",
      "Survivalists_Mods_Ambience_Chanting2_SoundSet",
      "Survivalists_Mods_Ambience_Chanting3_SoundSet",
      "Survivalists_Mods_Ambience_Chanting4_SoundSet",
      "Survivalists_Mods_Ambience_Chanting5_SoundSet",
      "Survivalists_Mods_Ambience_Chanting6_SoundSet",
      "Survivalists_Mods_Ambience_Chanting7_SoundSet",
      "Survivalists_Mods_Ambience_Chanting8_SoundSet",
      "Survivalists_Mods_Ambience_Chanting9_SoundSet",
      "Survivalists_Mods_Ambience_Chanting10_SoundSet",
      "Survivalists_Mods_Ambience_Chanting11_SoundSet",
      "Survivalists_Mods_Ambience_Chanting12_SoundSet",
      "Survivalists_Mods_Ambience_Chanting13_SoundSet",
      "Survivalists_Mods_Ambience_Chanting14_SoundSet",
      "Survivalists_Mods_Ambience_Chanting15_SoundSet",
      "Survivalists_Mods_Ambience_Chanting16_SoundSet",
      "Survivalists_Mods_Ambience_Chanting17_SoundSet",
      "Survivalists_Mods_Ambience_Tribal1_SoundSet",
      "Survivalists_Mods_Ambience_Tribal2_SoundSet",
    };
  }

	void RequestSoundEvent()
	{
    if (!GetGame().IsDedicatedServer())
		{
      PlaySoundSet(m_TempleSound, GetSoundSet(), 3, 3);
      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(RequestSoundEvent, 450000, false);
		}
	}

  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }
};

class SRP_AmbientSoundEmiter_BunkerMonster extends SRP_AmbientSoundEmiter_Base
{
  override TStringArray GetTemplateSounds()
  {
    return {
      "Survivalists_Mods_Ambience_MonsterLowGrowl1_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl2_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl3_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl4_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl5_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl6_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl7_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl8_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl9_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl10_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl11_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl12_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl13_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl14_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowl15_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowGrowll6_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowPounding1_SoundSet",
      "Survivalists_Mods_Ambience_MonsterLowPounding2_SoundSet",
    };
  }
};

class Land_srp_templebeacon extends SRP_AmbientSoundEmiter_Base{};
class Land_srp_bunkermonsterbeacon extends SRP_AmbientSoundEmiter_BunkerMonster{};

