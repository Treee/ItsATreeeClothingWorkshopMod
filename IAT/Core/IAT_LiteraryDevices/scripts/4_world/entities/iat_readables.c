class IAT_LiteraryDevices_Book_Colorbase extends ItemBook
{
  override void SetActions()
	{
		super.SetActions();

		AddAction(IAT_ActionReadBook);
	}
};

class IAT_LiteraryDevices_Scroll_Colorbase extends ItemBook
{
  override void SetActions()
	{
		super.SetActions();

		AddAction(IAT_ActionReadBook);
	}
};


class IAT_LiteraryDevices_MultiSelectBook_Colorbase extends ItemBook
{
  protected ref array<string> m_BooksInArchive;
  // attempted optimizations
  // protected int m_LastIndex = -1;
  // protected string m_LastBookTitle;
  protected string m_LastBookClassName;
//========================================= EVENTS
  override void SetActions()
	{
		super.SetActions();

		AddAction(IAT_ActionSelectReadBook);
	}
	override bool HasFlammableMaterial()
	{
		return false;
	}
	override bool CanBeIgnitedBy( EntityAI igniter = NULL )
	{
		return false;
	}
	override bool CanIgniteItem( EntityAI ignite_target = NULL )
	{
		return false;
	}
	override void OnIgnitedTarget( EntityAI ignited_item ){}
	override void OnIgnitedThis( EntityAI fire_source ){}
	override bool IsThisIgnitionSuccessful( EntityAI item_source = NULL )
	{
		return false;
	}	
//========================================= CUSTOM
  override void InitItemVariables()
	{
    super.InitItemVariables();
    IAT_InitItemVariables();
  };
  void IAT_InitItemVariables()
  {
    // Print("Initing item: " + GetType());
    m_BooksInArchive = new array<string>;
    if (ConfigIsExisting("booksInArchive"))
    {
      ConfigGetTextArray("booksInArchive", m_BooksInArchive);
    }
  }
  TStringArray GetBooksInArchive()
  {
    return m_BooksInArchive;
  }
  bool HasSelectableBooks()
  {
    return m_BooksInArchive.Count() > 0;
  }
  string GetBookTitleByIndex(int index)
  {
    // short circuit not working for some reason. probly move to book name array that is lazy loaded
    // short circuit the last book checked so we are not scraping the config each frame
    // if (m_LastIndex == index)
    //   return m_LastBookTitle;
    // if this thing has books, check for valid index
    if (HasSelectableBooks() && m_BooksInArchive.IsValidIndex(index))
    {
      string bookName = m_BooksInArchive.Get(index);
      // scrape the config
      string title = "";
      GetGame().ConfigGetText(string.Format("CfgVehicles %1 %2", bookName, "title"), title);
      // m_LastIndex = index;
      // m_LastBookTitle = title;
      // Print("Scraping the config for book title: " + m_LastBookTitle + " index: " + index);
      return title;
    }
    return "";
  }
  string GetBookClassByIndex(int index)
  {
    // if this thing has books, check for valid index
    if (HasSelectableBooks() && m_BooksInArchive.IsValidIndex(index))
    {
      return m_BooksInArchive.Get(index);
    }
    return "";
  }
  void SetBookByIndex(int index)
  {
    string bookName = GetBookClassByIndex(index);

    string title = "";
    GetGame().ConfigGetText(string.Format("CfgVehicles %1 title", bookName), title);
    SetBookTitle(title);

    string author = "";
    GetGame().ConfigGetText(string.Format("CfgVehicles %1 author", bookName), author);
    SetBookAuthor(author);

    string file = "";
    GetGame().ConfigGetText(string.Format("CfgVehicles %1 file", bookName), file);
    SetBookFilePath(file);
    // Print(string.Format("Title: %1 Author: %2 File: %3 Book: %4", title, author, file, bookName))
  }
  int GetReadableBooksCount()
  {
    return m_BooksInArchive.Count();
  }
};

class IAT_LiteraryDevices_HandHeldTablet_Colorbase extends IAT_LiteraryDevices_MultiSelectBook_Colorbase{};
