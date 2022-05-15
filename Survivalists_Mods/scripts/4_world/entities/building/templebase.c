class TempleBase extends House
{
  protected EffectSound 		m_TempleSound;
  protected int m_SoundIndex;
  protected int m_SoundIndexMax;

  void TempleBase() 
  {
    m_SoundIndexMax = GetTempleSounds().Count();
    m_SoundIndex = Math.RandomIntInclusive(0, m_SoundIndexMax);
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(RequestSoundEvent, 500, false);
  }

  void ~TempleBase()
  {
    StopLoopSound();
  }
	
	string GetSoundSet()
	{
    m_SoundIndex = ((m_SoundIndex + 1) % m_SoundIndexMax);
		return GetTempleSounds().Get(m_SoundIndex);
	}

  TStringArray GetTempleSounds()
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

  void StopLoopSound()
  {
    if (!GetGame().IsDedicatedServer())
		{
      StopSoundSet(m_TempleSound);
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

class Land_srp_templebeacon extends TempleBase{};

