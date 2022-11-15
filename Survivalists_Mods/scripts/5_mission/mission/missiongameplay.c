modded class MissionGameplay
{
  protected SRPCompassMenu m_CompassUI;
	
	override void OnUpdate(float timeslice) 
	{
    super.OnUpdate(timeslice);
    // compass UI stuff
    if (GetUApi()) 
    {
      UAInput inp = GetUApi().GetInputByName("UACompassToggle");
      if (inp && inp.LocalPress())
      {
        if( !m_CompassUI )
        {
          m_CompassUI = GetGame().GetUIManager().EnterScriptedMenu( SRP_COMPASS_MENU, null);
        }
      }
    }
  }
};