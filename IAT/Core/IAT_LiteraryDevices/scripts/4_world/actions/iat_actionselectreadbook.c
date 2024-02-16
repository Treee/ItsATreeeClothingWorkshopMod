class IAT_ActionSelectReadBook extends ActionSingleUseBase
{
	void IAT_ActionSelectReadBook()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_DROPITEM_HANDS;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_PRONE;
    if (!GetGame().IsDedicatedServer())
    {
      GetVariantManager().GetOnUpdateInvoker().Insert(OnUpdateActions);
    }
	}
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    IAT_LiteraryDevices_MultiSelectBook_Colorbase multiSelectBook;    
    if (Class.CastTo(multiSelectBook, item))
    {
      if (multiSelectBook.HasSelectableBooks())
			  m_Text = "Read " + multiSelectBook.GetBookTitleByIndex(m_VariantID);
    }
	}
	override bool HasTarget()
	{
		return false;
	}
  void OnUpdateActions( Object item, Object target, int component_index )
	{
    IAT_LiteraryDevices_MultiSelectBook_Colorbase multiSelectBook;    
    if (Class.CastTo(multiSelectBook, item))
		{
      if (multiSelectBook.HasSelectableBooks())
        GetVariantManager().SetActionVariantCount(multiSelectBook.GetReadableBooksCount());
		}
		else
			GetVariantManager().Clear();
	}  
  override void OnExecuteClient( ActionData action_data )
	{
    PlayerBase player;
    IAT_LiteraryDevices_MultiSelectBook_Colorbase book;
    // sanity check
    if (Class.CastTo(player, action_data.m_Player) && Class.CastTo(book, action_data.m_MainItem))
    {
      if (GetGame().GetMission())
      {
        ItemBook selectedBook = book.GetBookByIndex(m_VariantID);

        		// m_content.LoadFile( book.ConfigGetString("file") );
		// m_author.SetText( book.ConfigGetString("author") );
		// m_title.SetText( book.ConfigGetString("title") );

        // disable input and do vanilla dance
        GetGame().GetMission().AddActiveInputExcludes({"menu"});
        GetGame().GetMission().OnItemUsed(book, player);
      }
    }
	}
};
