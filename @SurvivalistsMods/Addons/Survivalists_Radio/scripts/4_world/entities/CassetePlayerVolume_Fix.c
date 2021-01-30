modded class GGRadio_Radio_Base
{
  override void SetActions()
	{
    super.SetActions();

    // make it placeable
    AddAction(ActionTogglePlaceObject);
    AddAction(ActionPlaceObject);

    // actions for the radio
    AddAction(SwitchRadioAction);
    AddAction(RadioInterAction);

    // remove actions on the base item
    RemoveAction(ActionTurnOnWhileInHands);
    RemoveAction(ActionTurnOffWhileInHands);
    RemoveAction(ActionTurnOnWhileOnGround);
		RemoveAction(ActionTurnOffWhileOnGround);
		RemoveAction(ActionTurnOnSpotlight);
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
  override bool IsDeployable() 
  {
    return true;
  }
};