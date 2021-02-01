modded class EmoteManager
{
    private bool m_PrevIsLayDown;
    bool m_IsLayDown;

    private void SetSynchDirtyIfLayDownChanged()
    {
      if ( m_PrevIsLayDown != m_IsLayDown )
      {
        m_Player.SetSynchDirty();
      }
    }

    override void Update( float deltaT )
    {
      m_PrevIsLayDown = m_IsLayDown;
      super.Update( deltaT );
      SetSynchDirtyIfLayDownChanged();
    }

    override void OnEmoteEnd()
    {
      m_PrevIsLayDown = m_IsLayDown;
      super.OnEmoteEnd();      
      if (m_PrevIsLayDown)
      {
        EndLayDownRequest();
      }
      SetSynchDirtyIfLayDownChanged();
    }

    override bool PlayEmote( int id )
    {
      m_PrevIsLayDown = m_IsLayDown;
      bool ret_val = super.PlayEmote( id );
      if (m_CurrentGestureID == EmoteConstants.ID_EMOTE_LYINGDOWN && m_IsLayDown)
      {
        StartLayDownRequest();
      }
      SetSynchDirtyIfLayDownChanged();
      return ret_val;
    }

    void StartLayDownRequest()
    {
      m_PrevIsLayDown = m_IsLayDown;    
      // Print("PlayEmote::SLEEPING! COVER HEAD");
      PPEffects.Init();
      PPEffects.EnableBurlapSackBlindness();			
      m_Player.SetMasterAttenuation("BurlapSackAttenuation"); 
    }

    void EndLayDownRequest()
    {
        // Print("OnEmoteEnd::NOT SLEEPING!! UNCOVER HEAD");
        PPEffects.Init();
        PPEffects.DisableBurlapSackBlindness();			
        m_Player.SetInventorySoftLock(false);
        m_Player.SetMasterAttenuation("");
        m_IsLayDown = false;
    }


}
