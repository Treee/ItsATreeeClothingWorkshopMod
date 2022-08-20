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
    // GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(ResetPlaying, 8640000, false);
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(ResetPlaying, 8640000, false);
  }

  void ResetPlaying()
  {
    m_IsPlayingSound = false;
    SetSynchDirty();
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

  override void SetActions()
	{
    super.SetActions();

    AddAction(ActionBlowIntoHorn);
	}
};
