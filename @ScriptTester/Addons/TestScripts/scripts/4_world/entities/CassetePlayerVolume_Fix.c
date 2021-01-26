modded class GGRadio_Radio_Base
{
  override void SetActions()
	{
    super.SetActions();

		AddAction( IncreaseVolume );
		AddAction( DecreaseVolume );
		
		AddAction( TurnOnRadio );
		AddAction( TurnOffRadio );

		AddAction( ActionTurnOffTransmitter );

    RemoveAction(ActionTurnOnWhileInHands);
    RemoveAction(ActionTurnOffWhileInHands);
	}

  void IncreaseVolume() {
    m_ActiveSound.SetSoundVolume(m_ActiveSound.GetSoundVolume() + 0.25);
  }
  void DecreaseVolume() {
    m_ActiveSound.SetSoundVolume(m_ActiveSound.GetSoundVolume() - 0.25);
  }

  float GetVolume() {
    return m_ActiveSound.GetSoundVolume();
  }
};