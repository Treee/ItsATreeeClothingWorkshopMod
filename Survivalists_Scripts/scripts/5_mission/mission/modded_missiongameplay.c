modded class MissionGameplay
{  	
  override void OnUpdate(float timeslice) 
  {
    super.OnUpdate(timeslice);

    Input input = GetGame().GetInput();
    Man player = GetGame().GetPlayer();
    PlayerBase pb_player;
    if ( input.LocalPress("UAOpenVPPMap", false) ) 
    {
      if (instance != null) 
      {
        if (instance.IsMenuOpen()) 
        {
          if (Class.CastTo(pb_player, player))
          {
            if (pb_player.IsRestrained())
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
    if ( input.LocalPress("UAToggleVPPMap3DMarkers", false) ) 
    {
      if (!g_Game.IsKeyboardBusy())
      {
        if (Class.CastTo(pb_player, player))
        {
          if (pb_player.IsRestrained())
          {
            g_Game.TempToggleAll3dMarkers();
          }
        }
      }
    }
  }
};