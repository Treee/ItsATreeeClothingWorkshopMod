modded class MissionGameplay
{
  override void OnUpdate(float timeslice)
	{
    super.OnUpdate(timeslice);
    UIScriptedMenu menu = m_UIManager.GetMenu();

    SRP_FP_RadialMenuDisplay facePaintMenu = SRP_FP_RadialMenuDisplay.Cast( m_UIManager.FindMenu(MENU_NOTE) );
    if (!m_UIManager.IsDialogVisible())
		{
			if (menu)
			{
				if (menu == facePaintMenu && !facePaintMenu.IsMenuClosing() && !IsInputExcludeActive("radialmenu"))
				{
					AddActiveInputExcludes({"radialmenu"});
					GetUApi().GetInputByID(UAUIGesturesOpen).Unlock();
				}			
			}
		}
  }
};