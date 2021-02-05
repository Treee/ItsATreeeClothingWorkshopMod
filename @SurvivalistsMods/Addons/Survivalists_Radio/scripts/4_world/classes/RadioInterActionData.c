class RadioInterActionData
{	
	int m_selectedActionIndex; //used on client only, action synchronizes it to server to avoid mismatch
	// const int numRadioActions = 4;

	void RadioInterActionData()
	{
		ResetActionIndexes();
	}

	void SetNextAction(ItemBase item)
	{
    if (m_selectedActionIndex == 1) 
    {
      // if the radio can increase its volume
      if (CanIncreaseVolume(item))
      { // set the current action to "Increase Volume"
        m_selectedActionIndex = 2;
      }
      else 
      { // set the current action to "Decrease Volume"
        m_selectedActionIndex = 3;
      }
    } // if the current action is "Increase Volume"
    else if (m_selectedActionIndex == 2) 
    {
      // if the radio can decrease its volume
      if (CanDecreaseVolume(item))
      { // set the current action to "Decrease Volume"
        m_selectedActionIndex = 3;
      }
      else 
      { 
        // set the current action to "Turn Off"
        m_selectedActionIndex = 1;
      }
    }// if the current action is "Decrease Volume"
    else if (m_selectedActionIndex == 3) 
    {
      m_selectedActionIndex = 1;
    }
    // Print("RadioInterActionData::SetNextAction: " + m_selectedActionIndex);
	}


	//************************************************/
	//  Common
	//************************************************/
	void ResetActionIndexes()
	{
		m_selectedActionIndex = 0;
    // Print("RadioInterActionData::ResetActionIndexes: " + m_selectedActionIndex);
	}

  string GetActionPrompt() 
  {
    // Print("RadioInterActionData::GetActionPrompt: " + m_selectedActionIndex);
    if (m_selectedActionIndex == 0) {
      return "#turn_on";
    } 
    else if (m_selectedActionIndex == 1) {
      return "#turn_off";
    }
    else if (m_selectedActionIndex == 2) {
      return "Increase Volume";
    }
    else if (m_selectedActionIndex == 3) {
      return "Decrease Volume";
    }
    return "Default Radio InterAction Prompt";
  }

  int GetSelectedIndex()
  {
    // Print("RadioInterActionData::GetSelectedIndex: " + m_selectedActionIndex);
    return m_selectedActionIndex;
  }

  bool IsSingleLoop()
  { // turn on and off should be non repeating
    return (m_selectedActionIndex == 0 || m_selectedActionIndex == 1);
  }

  /* Active Conditions */

  bool RadioActionCondition(ItemBase item) 
  {
    // Print("RadioInterActionData::RadioActionCondition: " + m_selectedActionIndex);
    if (m_selectedActionIndex == 0) {
      return CanTurnOn(item);
    } 
    else if (m_selectedActionIndex == 1) {
      return CanTurnOff(item);
    }
    else if (m_selectedActionIndex == 2) {
      return CanIncreaseVolume(item);
    }
    else if (m_selectedActionIndex == 3) {
      return CanDecreaseVolume(item);
    }
    return false;
  }

  bool CanTurnOn(ItemBase item) 
  {
    if ( item.HasEnergyManager() && !item.GetCompEM().IsWorking() )
    {
      // Print("Has energy manager and is not currently working");
      return true;
		}		
		return false;
  }

  bool CanTurnOff(ItemBase item)
  {
    if ( item.HasEnergyManager() && item.GetCompEM().IsWorking() )
    {
      // Print("Has energy manager and is currently working");
      return true;
		}		
		return false;
  }

  bool CanIncreaseVolume(ItemBase item)
  {
    GGRadio_Radio_Base radio;
    Class.CastTo(radio, item);
    // Print("Current Radio Volume" + radio.GetVolume());
    if (radio.IsPlaying() && radio.GetVolume() < 1 ) {
      // Print("low volume!! increase it!");
      return true;
    }
		return false;
  }

  bool CanDecreaseVolume(ItemBase item)
  {
    GGRadio_Radio_Base radio;
    Class.CastTo(radio, item);
    // Print("Current Radio Volume" + radio.GetVolume());
    if (radio.IsPlaying() && radio.GetVolume() > 0 ) {
      // Print("high volume!! Decrease it!");
      return true;
    }
		return false;
  }

  /* Execution Functionality */
  void DoInteraction(ItemBase item, PlayerBase player)
	{
    // Print("RadioInterActionData::DoInteraction: " + m_selectedActionIndex);
    if (m_selectedActionIndex == 0) {
      TurnOn(item);
    } 
    else if (m_selectedActionIndex == 1) {
      TurnOff(item);
    }
    else if (m_selectedActionIndex == 2) {
      RaiseVolume(item);
      // if we have raised the volume to the max
      if (!CanIncreaseVolume(item))
      { // set the next menu action to decrease volume
        m_selectedActionIndex = 3
      }
    }
    else if (m_selectedActionIndex == 3) {
      LowerVolume(item);
      // if we have decreased the volume to the min
      if (!CanDecreaseVolume(item))
      { // set the next menu action to increase volume
        m_selectedActionIndex = 2
      }
    }
	}

  void TurnOn(ItemBase item)
  {
    item.GetCompEM().SwitchOn();      
    // set the next action to turn off
    m_selectedActionIndex = 1;  
  }

  void TurnOff(ItemBase item)
  {
    item.GetCompEM().SwitchOff();
    // reset the actions to 0 since we turned off
    ResetActionIndexes();
  }

  void RaiseVolume(ItemBase item)
  {
    GGRadio_Radio_Base radio;
    Class.CastTo(radio, item);
    radio.IncreaseVolume();
  }

  void LowerVolume(ItemBase item)
  {
    GGRadio_Radio_Base radio;
    Class.CastTo(radio, item);
    radio.DecreaseVolume();
  }

}
