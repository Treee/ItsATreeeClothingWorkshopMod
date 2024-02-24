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
      mission.RemoveActiveInputExcludes({"inventory"}, true);  
      mission.RemoveActiveInputRestriction(EInputRestrictors.INVENTORY);  
      mission.GetHud().ShowQuickbarUI(true);
    }
  }  
};