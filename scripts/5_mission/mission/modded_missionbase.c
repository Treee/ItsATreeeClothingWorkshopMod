modded class MissionBase {

  override UIScriptedMenu CreateScriptedMenu(int id) {
    UIScriptedMenu menu = NULL;
    menu = super.CreateScriptedMenu(id);
    if (!menu) {
      switch (id) {
      case GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting:
        menu = new WorkbenchGUICraftingHud;
        break;
      }
      if (menu) {
        menu.SetID(id);
      }
    }
    return menu;
  }
}