modded class EmoteManager
{
  private bool m_PrevIsLayDown;
  bool m_IsLayDown;

  bool m_IsUnconscious;

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
    Print("OnEmoteEnd::CurrentGesture: " + m_CurrentGestureID);
    m_PrevIsLayDown = m_IsLayDown;
    super.OnEmoteEnd();      
    if (m_PrevIsLayDown)
    {
      EndLayDownRequest();
    }
    else if (m_IsUnconscious)
    {
      EndUnconsciousRequest();
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
    else if (m_CurrentGestureID == EmoteConstants.ID_EMOTE_UNCONSCIOUS && m_IsUnconscious)
    {
      StartUnconsciousRequest();
    }
    SetSynchDirtyIfChanged();
    return ret_val;
  }

  void StartLayDownRequest()
  {
    m_PrevIsLayDown = m_IsLayDown;
    PPEffects.Init();
    PPEffects.EnableBurlapSackBlindness();			
    m_Player.SetMasterAttenuation("BurlapSackAttenuation"); 
    // Print("PlayEmote::SLEEPING! COVER HEAD");
  }

  void EndLayDownRequest()
  {
    PPEffects.Init();
    PPEffects.DisableBurlapSackBlindness();			
    m_Player.SetInventorySoftLock(false);
    m_Player.SetMasterAttenuation("");
    m_IsLayDown = false;
    // Print("OnEmoteEnd::NOT SLEEPING!! UNCOVER HEAD");
  }

  void StartUnconsciousRequest()
  {
    // shock the player for 0 damage
    m_Player.SetHealth("", "Shock", 0);
    m_Player.GetModifiersManager().ActivateModifier(eModifiers.MDF_UNCONSCIOUSNESS);
    // m_Player.RequestUnconsciousness(true);
    // Print("StartUnconsciousRequest");
  }
  void EndUnconsciousRequest()
  {
    m_Player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_UNCONSCIOUSNESS);
    m_IsUnconscious = false;
    // m_Player.RequestUnconsciousness(false); 
    // Print("EndUnconsciousRequest");
  }
}
