modded class NoteMenu
{
  void NoteMenu()
  {
    MissionGameplay mission = MissionGameplay.Cast( GetGame().GetMission() );
    if( mission )
    {
      mission.PlayerControlDisable(INPUT_EXCLUDE_INVENTORY);
    }
  }

  void ~NoteMenu()
  {
    MissionGameplay mission = MissionGameplay.Cast( GetGame().GetMission() );
    if( mission )
    {
      mission.PlayerControlEnable(false);
    }
  }
}