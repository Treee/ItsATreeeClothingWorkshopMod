class SRP_MusicalInstrument_Base extends ItemBase
{
  EffectSound m_ActiveSound;
  bool m_Playing;
  bool m_SyncPlaying;
  int m_SoundIndex;

  void SRP_MusicalInstrument_Base()
  {
    RegisterNetSyncVariableBool( "m_SyncPlaying" );
    RegisterNetSyncVariableInt( "m_SoundIndex", 0, GetSoundsCount() );    
  }

  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
        
    if( m_SyncPlaying && !m_Playing )
    {
      PlaySound(m_SoundIndex);
    } 
    else if( !m_SyncPlaying && m_Playing )
    {
      StopSound();
    }

    // if (m_Playing)
    // {
    //   m_ActiveSound.SetSoundVolume(0.5);
    // }
	}
  override void SetActions()
  {
    super.SetActions();    
    AddAction(ActionPlayMusicalInstrumentOption);
  }
  bool CanPlaySound()
  {
    return !m_SyncPlaying;    
  }
  void PlaySound(int soundIndex)
  {
    if (!GetGame().IsDedicatedServer())
    {
      if ( m_ActiveSound )
        StopSound();
      PlaySoundSetLoop(m_ActiveSound, BuildSoundSetString(m_SoundIndex), 0, 0);
      m_Playing = true;
    }
    else
    {
      m_Playing = true;
      m_SyncPlaying = true;
      m_SoundIndex = soundIndex;
      SetSynchDirty();
    }   
  }
  void StopSound()
  {
    if (!GetGame().IsDedicatedServer())
    {
      m_Playing = false;
      StopSoundSet( m_ActiveSound );
    }
    else
    {
      m_SyncPlaying = false;
      SetSynchDirty();
    }
  }
  int GetSoundsCount()
  {
    return GetVariantIdOptions().Count();
  }
  string GetSoundName(int index)
  {
    return GetVariantIdOptions().Get(index);
  }
  string GetSoundSetName()
  {
    return "%1";
  }
  string BuildSoundSetString(int index)
  {
    return string.Format(GetSoundSetName(), GetSoundName(index));
  }
  TStringArray GetVariantIdOptions()
  {
    return {
      "TheStranger",
      "ImprovLoop",
      "Avante",
      "LostWords",
      "TheJourney",
    };
  }
};

class SRP_Guitar_Alpocalypse extends SRP_MusicalInstrument_Base
{
  override string GetSoundSetName()
  {
    return "SRPRadio_AcousticGuitar_%1_SoundSet1";
  }
  override TStringArray GetVariantIdOptions()
  {
    return {
      "TheStranger",
      "ImprovLoop",
      "Avante",
      "LostWords",
      "TheJourney",
    };
  }
};

class SRP_Guitar_Alpocalypse_Blue extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_Green extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_Pastel extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_Pink extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_Sunset extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_Teal extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_TieDye extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_Yellow extends SRP_Guitar_Alpocalypse{};


class SRP_Biwa_ColorBase extends SRP_MusicalInstrument_Base
{
  override string GetSoundSetName()
  {
    return "SRPRadio_Biwa_%1_SoundSet1";
  }
  override TStringArray GetVariantIdOptions()
  {
    return {
      "DemonSlayer",
      "LittleSoldierBoy",
    };
  }
};

class SRP_Biwa_Basic extends SRP_Biwa_ColorBase{};