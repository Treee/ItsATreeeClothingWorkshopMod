modded class PluginPlayerStatus
{
	void PluginPlayerStatus()
	{
		m_NotifiersIcons.Insert( NTFKEY_SRP_TIREDNESS, "iconSleep" );
	}

  override void DisplayTendency( int key, int tendency, int status = 1 )
	{
    super.DisplayTendency(key, tendency, status);    
		if ( key == NTFKEY_SRP_TIREDNESS)
		{
      Print("Modded PLugin PLayer Status " + key);
      Mission mission = GetGame().GetMission();
      if ( mission )
      {
        Hud hud = mission.GetHud();
        if ( hud )
        {
          Print("Modded PLugin PLayer Status display notifier");
          hud.DisplayNotifier( key, tendency, status );
        }
      }
		}
	}
}
