modded class EmoteManager
{
  private bool m_PrevIsLayDown;
  bool m_IsLayDown;

  private void SetSynchDirtyIfChanged()
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
    SetSynchDirtyIfChanged();
  }

  override void OnEmoteEnd()
  {
    // Print("OnEmoteEnd::CurrentGesture: " + m_CurrentGestureID);
    m_PrevIsLayDown = m_IsLayDown;
    super.OnEmoteEnd();      
    if (m_PrevIsLayDown)
    {
      EndLayDownRequest();
    }
    SetSynchDirtyIfChanged();
  }

  override bool PlayEmote( int id )
  {
    bool ret_val = super.PlayEmote( id );
    if (m_CurrentGestureID == EmoteConstants.ID_EMOTE_LYINGDOWN && m_IsLayDown)
    {
      StartLayDownRequest();
    }
    SetSynchDirtyIfChanged();
    return ret_val;
  }

  void StartLayDownRequest()
  {
    m_PrevIsLayDown = m_IsLayDown;
    // Print("PlayEmote::SLEEPING! COVER HEAD");
  }

  void EndLayDownRequest()
  {
    m_IsLayDown = false;
    // Print("OnEmoteEnd::NOT SLEEPING!! UNCOVER HEAD");
  }
}