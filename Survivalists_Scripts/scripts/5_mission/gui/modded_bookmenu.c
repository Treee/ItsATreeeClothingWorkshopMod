modded class BookMenu
{
  override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("gui/layouts/day_z_book.layout");
		Class.CastTo(m_content, layoutRoot.FindAnyWidget("HtmlWidget"));
		Class.CastTo(m_author, layoutRoot.FindAnyWidget("Author")); 
		Class.CastTo(m_title, layoutRoot.FindAnyWidget("Title"));
		Class.CastTo(m_page, layoutRoot.FindAnyWidget("Page"));

		float width;
		m_content.GetScreenSize(width, m_page_height);

    PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
    if (player && player.currentBookInHands)
    {
      GetGame().GetMission().PlayerControlDisable(INPUT_EXCLUDE_ALL);
      ReadBook(player.currentBookInHands);
    }

		return layoutRoot;
	}

  void ~BookMenu()
  {
    MissionGameplay mission = MissionGameplay.Cast( GetGame().GetMission() );
    if( mission )
    {
      mission.PlayerControlEnable(false);
    }
  }
};