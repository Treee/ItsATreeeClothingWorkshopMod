modded class MissionGameplay
{
  protected Widget m_sleepRootWidget;
  // protected Widget m_SleepPanelWidget; // sleeping panel
  protected ImageWidget m_SleepImageWidget; // sleep icon


  override void OnInit()
  {
    Print("SRP Tree Mods Mission Gameplay Register!! Super Call");
    super.OnInit();
    Print("SRP Tree Mods Mission Gameplay Register!! After Super Call");

    if (!m_sleepRootWidget)
    {
      m_sleepRootWidget = GetGame().GetWorkspace().CreateWidgets("SRP_Tree_Mods\\gui\\layouts\\srp_tree_layout.layout");
      Print("SRP Tree Mods Mission Gameplay Register!! CreatedLayout");

      m_SleepImageWidget = ImageWidget.Cast(m_sleepRootWidget.FindAnyWidget("Sleep"));
      m_SleepImageWidget.Show(true);
    }

  }

  // override void OnUpdate(float timeslice)
  // {
  //   Print("SRP Tree Mods Mission Gameplay OnUpdate!! Super Call");
  //   super.OnUpdate(timeslice);
  //   Print("SRP Tree Mods Mission Gameplay OnUpdate!! After Super Call");
  //   if (m_sleepRootWidget)
  //   {
  //     m_sleepRootWidget.Show(true);
  //   }
  // }

  override void OnMissionFinish()
  {
    delete m_sleepRootWidget;
  }
}
