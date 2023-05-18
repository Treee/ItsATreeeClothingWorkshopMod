modded class MissionBase
{
  override UIScriptedMenu CreateScriptedMenu(int id)
	{
    UIScriptedMenu menu = NULL;
		if (id == SRP_MENU_RADIAL_MULTI)
      menu = new SRP_FP_RadialMenuDisplay;

    if (menu)
    {
			menu.SetID(id);
      return menu;
    }
    return super.CreateScriptedMenu(id);
  }
};