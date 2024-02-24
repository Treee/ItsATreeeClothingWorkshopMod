modded class NoteMenu
{
  void NoteMenu()
	{
    GetGame().GetMission().GetHud().ShowQuickbarUI(false);
  }

  void ~NoteMenu()
  {
    MissionGameplay mission;
    if(Class.CastTo(mission, GetGame().GetMission()))
    {      
      mission.RemoveActiveInputExcludes({"menu"}, true);    
      mission.GetHud().ShowQuickbarUI(true);
    }
  }  
};