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

  override void ReadBook(InventoryItem book)
	{
    ItemBook selectedBook;
    if (Class.CastTo(selectedBook, book))
    {
      m_content.LoadFile(selectedBook.GetBookFilePath());
      m_author.SetText(selectedBook.GetBookAuthor());
      m_title.SetText(selectedBook.GetBookTitle());
      m_content_total_height = m_content.GetContentHeight();
      m_content_pos = 0;
      NextPrevPage(false);
    }
	}
};