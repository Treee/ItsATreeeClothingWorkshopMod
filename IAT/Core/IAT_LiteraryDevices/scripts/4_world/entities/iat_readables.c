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
    if (HasSelectableBooks() && m_BooksInArchive.IsValidIndex(index))
    {
      return m_BooksInArchive.Get(index);
    }
    return "";
  }
  ItemBook GetBookByIndex(int index)
  {
    string bookName = GetBookTitleByIndex(index);
    return NULL;
  }
  int GetReadableBooksCount()
  {
    return m_BooksInArchive.Count();
  }

};

class IAT_LiteraryDevices_HandHeldTablet_Colorbase extends IAT_LiteraryDevices_MultiSelectBook_Colorbase{};
