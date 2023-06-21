modded class VPPAdminHud
{
	override void DefineButtons()
	{
		super.DefineButtons();
		InsertButton("AdminBulkComp", "Admin Bulk Comp", "set:dayz_gui_vpp image:vpp_icon_item_manager","Spawn multiple items from a list.");
	}
};

class AdminBulkComp extends AdminHudSubMenu
{
	private ButtonWidget m_AcceptButton;
	private ButtonWidget m_DeleteButton;
  private EditBoxWidget m_SearchEditText;

  private TextListboxWidget m_ItemList;
  private MultilineTextWidget m_ItemCompText;
  private bool m_Loaded;
	private int m_SearchBoxCount = 0;

  private ref array<ref SRP_BulkCompRecord> m_BulkCompRecords;

	void AdminBulkComp()
	{
    m_BulkCompRecords = new array<ref SRP_BulkCompRecord>;
		// Print("AdminBulkComp()");
    GetRPCManager().AddRPC("RPC_AdminBulkComp", "HandleAdminBulkData", this);
	}

	override void OnCreate(Widget RootW)
	{
		super.OnCreate(RootW);

		M_SUB_WIDGET  = CreateWidgets("Survivalists_Scripts/gui/layouts/srp_admincompmenu.layout");
    M_SUB_WIDGET.SetHandler(this);
		m_TitlePanel  = Widget.Cast( M_SUB_WIDGET.FindAnyWidget( "Title") );
		m_closeButton = ButtonWidget.Cast( M_SUB_WIDGET.FindAnyWidget( "BtnCancel") );
		m_AcceptButton = ButtonWidget.Cast( M_SUB_WIDGET.FindAnyWidget( "BtnAccept") );
		m_DeleteButton = ButtonWidget.Cast( M_SUB_WIDGET.FindAnyWidget( "BtnDelete") );
		m_SearchEditText = EditBoxWidget.Cast( M_SUB_WIDGET.FindAnyWidget( "EditTxtSearch") );
		m_ItemList = TextListboxWidget.Cast( M_SUB_WIDGET.FindAnyWidget( "TxtListItems") );
		m_ItemCompText = MultilineTextWidget.Cast( M_SUB_WIDGET.FindAnyWidget( "TxtCompDetails") );
		// ShowSubMenu();
    UpdateFilter();
    GetRPCManager().VSendRPC("RPC_VPPItemManager", "GetAdminBulkData", null, true, null);
    m_Loaded = true;
	}
	
	override bool OnClick(Widget w, int x, int y, int button)
	{		
    super.OnClick(w, x, y, button);
    // Print("Yay!! /my widgets: " + button);
    switch(w)
    {
      case m_AcceptButton:
        AcknowledgeSelectedCompRequest();
      break;
      case m_DeleteButton:
			  DeleteSelectedCompRequest();
      break;
      case m_ItemList:
        DisplaySelectedCompRequest();
      break;
      case m_SearchEditText:
        DisplaySelectedCompRequest();
      break;
    }
    return false;
  }

	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);
		if (!IsSubMenuVisible() && !m_Loaded) return; //Update cancels if sub menu is not visible.
		
		int newSrchCount = m_SearchEditText.GetText().Length();
		if (newSrchCount != m_SearchBoxCount)
		{
			//Update Filter
			UpdateFilter();
			m_SearchBoxCount = newSrchCount;
		}
	}

  SRP_BulkCompRecord GetSelectedItem()
	{
		int oRow = m_ItemList.GetSelectedRow();
		if (oRow != -1)
		{
		  SRP_BulkCompRecord itemData;
			m_ItemList.GetItemData(oRow, 0, itemData);
      if (itemData != NULL) 
        return itemData;
		}
		return NULL;
	}
  void UpdateFilter()
  {
    m_ItemList.ClearItems();
    foreach(SRP_BulkCompRecord record : m_BulkCompRecords)
    {
      if (record.MatchesSearchQuery(m_SearchEditText.GetText()))
        m_ItemList.AddItem( record.GetDisplayListText(), record, 0 );
    }
  }
  void DisplaySelectedCompRequest()
  {
    SRP_BulkCompRecord selectedRecord = GetSelectedItem();
    if (selectedRecord == NULL)
      m_ItemCompText.SetText("...NULL RECORD...");
    else
      m_ItemCompText.SetText(selectedRecord.GetPrettyCompText());
  }
  void DeleteSelectedCompRequest()
  {
    SRP_BulkCompRecord selectedRecord = GetSelectedItem();
    if (selectedRecord != NULL)
    {
      // send rpc to delete data
      GetRPCManager().VSendRPC("RPC_VPPItemManager", "DeleteAdminBulkData", new Param2<string,string>(selectedRecord.GetDateTimeStamp(), selectedRecord.GetBohemiaId()), true, null);
    }
  }
  void AcknowledgeSelectedCompRequest()
  {
    SRP_BulkCompRecord selectedRecord = GetSelectedItem();
    if (selectedRecord != NULL)
    {
      // send rpc to spawn gear
      GetRPCManager().VSendRPC("RPC_VPPItemManager", "SpawnAdminBulkData", new Param2<string,string>(selectedRecord.GetDateTimeStamp(), selectedRecord.GetBohemiaId()), true, null);
    }
  }

	void HandleAdminBulkData(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
	{
		Param1<ref array<ref SRP_BulkCompRecord>> data;
		if(!ctx.Read(data)) return;
		
		if(type == CallType.Client)
		{
			m_BulkCompRecords = data.param1;
      UpdateFilter();
		}
	}
};
