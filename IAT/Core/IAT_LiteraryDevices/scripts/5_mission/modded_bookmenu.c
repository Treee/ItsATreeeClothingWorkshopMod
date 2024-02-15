modded class BookMenu
{
  void ~BookMenu()
  {
    MissionGameplay mission;
    if(Class.CastTo(mission, GetGame().GetMission()))
    {
      mission.RemoveActiveInputExcludes({"menu"}, true);    
    }
  }
};