modded class BookMenu
{
  override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("gui/layouts/day_z_book.layout");
		Class.CastTo(m_content, layoutRoot.FindAnyWidget("HtmlWidget"));
		Class.CastTo(m_author, layoutRoot.FindAnyWidget("Author")); 
		Class.CastTo(m_title, layoutRoot.FindAnyWidget("Title"));

    // this line seems to be pre code bohemia has in. it broke existing book mods
    // uncomment this when native reading books is added back.
		// Class.CastTo(m_page, layoutRoot.FindAnyWidget("Page"));


    PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
    if (player && player.currentBookInHands)
    {
      GetGame().GetMission().PlayerControlDisable(INPUT_EXCLUDE_ALL);
      ReadBook(player.currentBookInHands);
    }

		float width;
		m_content.GetScreenSize(width, m_page_height);
		return layoutRoot;
	}
};