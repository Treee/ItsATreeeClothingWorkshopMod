modded class MissionBase
{
  const int SRP_COMPASS_MENU = 543;

  override UIScriptedMenu CreateScriptedMenu(int id)
	{
		UIScriptedMenu menu = super.CreateScriptedMenu(id);
		switch (id)
		{
      case SRP_COMPASS_MENU:
        menu = new SRPCompassMenu;
      break;
    }
    return menu;
  }
};