class SRP_Guitar_Alpocalypse extends ItemBase
{
  EffectSound m_ActiveSound;
  bool m_Playing;
  bool m_SyncPlaying;
  int m_SoundIndex;

  void SRP_Guitar_Alpocalypse()
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
    AddAction(ActionPlayGuitarOption);
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
      PlaySoundSetLoop(m_ActiveSound, GetSoundSetName(m_SoundIndex), 0, 0);
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
  string GetSoundSetName(int index)
  {
    return string.Format("SRPRadio_AcousticGuitar_%1_SoundSet1", GetVariantIdOptions().Get(index));
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

class SRP_Guitar_Alpocalypse_Blue extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_Green extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_Pastel extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_Pink extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_Sunset extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_Teal extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_TieDye extends SRP_Guitar_Alpocalypse{};
class SRP_Guitar_Alpocalypse_Yellow extends SRP_Guitar_Alpocalypse{};