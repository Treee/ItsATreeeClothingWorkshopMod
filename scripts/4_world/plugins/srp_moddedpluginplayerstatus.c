modded class PluginPlayerStatus
{
	void PluginPlayerStatus()
	{
		m_NotifiersIcons.Insert( NTFKEY_SRP_TIREDNESS, "iconSleep" );
	}

  void DisplayTirednessTendency(int key, int currentTirednessCount, int tirednessDelta, int status )
  {
    // Print("Modded Plugin Player Status " + key);
    Mission mission = GetGame().GetMission();
    if ( mission )
    {
      Hud hud = mission.GetHud();
      if ( hud )
      {
        // Print("Modded Plugin Player Status display notifier");
        hud.DisplayTirednessNotifier( key, currentTirednessCount, tirednessDelta, status );
      }
    }
  }
}
