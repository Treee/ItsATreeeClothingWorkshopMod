class Land_srp_warhorn_large extends House
{
  protected EffectSound m_ActiveSound;
  
  protected bool m_IsPlayingSound;

  void Land_srp_warhorn_large()
  {
    m_IsPlayingSound = false;
    RegisterNetSyncVariableBool("m_IsPlayingSound");
  }

  void SetPlaying(bool isPlaying)
  {
    m_IsPlayingSound = isPlaying;
    SetSynchDirty();
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(ResetPlaying, 1000, false);
  }

  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
    if (m_IsPlayingSound)      
    {
      PlaySound();
    }
  };

  void PlaySound()
  {
    PlaySoundSet(m_ActiveSound, GetHornSounds().GetRandomElement(), 0, 0);
  }

  void ResetPlaying()
  {
    SetPlaying(false);
  }

  bool IsPlaying()
  {
    return m_IsPlayingSound;
  }

  TStringArray GetHornSounds()
  {
    return {
      "Survivalists_Mods_Ambience_WarHorn1_SoundSet",
      "Survivalists_Mods_Ambience_WarHorn2_SoundSet",
      "Survivalists_Mods_Ambience_WarHorn3_SoundSet",
      "Survivalists_Mods_Ambience_WarHorn4_SoundSet",
      "Survivalists_Mods_Ambience_WarHorn5_SoundSet",
      "Survivalists_Mods_Ambience_WarHorn6_SoundSet",
      "Survivalists_Mods_Ambience_WarHorn7_SoundSet",
      "Survivalists_Mods_Ambience_WarHorn8_SoundSet",
      "Survivalists_Mods_Ambience_WarHorn9_SoundSet",
      "Survivalists_Mods_Ambience_WarHorn10_SoundSet",
    };
  }
};
