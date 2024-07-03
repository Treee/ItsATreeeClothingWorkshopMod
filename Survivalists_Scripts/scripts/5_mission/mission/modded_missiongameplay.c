modded class MissionGameplay
{
  override void OnUpdate(float timeslice)
  {
    super.OnUpdate(timeslice);

    Input input = GetGame().GetInput();
    PlayerBase missionPlayer;
    if ( input.LocalPress("UAOpenVPPMap", false) )
    {
      if (instance != null)
      {
        if (instance.IsMenuOpen())
        {
          if (Class.CastTo(missionPlayer, GetGame().GetPlayer()))
          {
            if (missionPlayer.IsRestrained())
            {
              //Hide Menu
              g_Game.HideAll3dMarkers();
              instance.SetMenuOpen(false);
              GetGame().GetUIManager().HideScriptedMenu(instance);
              UnlockControls();
            }
          }
        }
      }
    }
    else if ( input.LocalPress("UAToggleVPPMap3DMarkers", false) )
    {
      if (!g_Game.IsKeyboardBusy())
      {
        if (Class.CastTo(missionPlayer, GetGame().GetPlayer()))
        {
          if (missionPlayer.IsRestrained())
          {
            g_Game.TempToggleAll3dMarkers();
          }
        }
      }
    }
  }
};