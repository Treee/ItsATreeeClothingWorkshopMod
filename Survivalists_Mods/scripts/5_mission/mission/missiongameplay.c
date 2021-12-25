modded class MissionGameplay
{
  private ref CompassHeadingMenu m_CompassHeadingMenu;
	
  void ~MissionGameplay()
  {
    delete m_CompassHeadingMenu;
  }
	
	override void OnUpdate(float timeslice) 
	{
    super.OnUpdate(timeslice);
    // compass UI stuff
    if (GetUApi()) 
    {
      UAInput inp = GetUApi().GetInputByName("UACompassToggle");
      if (inp && inp.LocalPress()) {
        if (m_CompassHeadingMenu) {
            m_CompassHeadingMenu.CompassToggleHeading();
        } else {
            m_CompassHeadingMenu = new CompassHeadingMenu(true);
        }
      }
    }
  }
};