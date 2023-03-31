// enum SRP_RadialMenuCategories
// {
// 	CATEGORIES,				//special category selection
// 	CATEGORY_1,
// 	CATEGORY_2,
// 	CATEGORY_3,
// 	CATEGORY_4,
// 	CATEGORY_5
// }

// class SRP_RadialMenuItem
// {
// 	protected int 					m_ID;
// 	protected string 				m_Name;
// 	protected SRP_RadialMenuCategories 	m_Category;
// 	//radial menu
// 	protected Widget 				m_RadialMenuSelector;
// 	protected Widget				m_RadialMenuItemCard;
	
// 	void SRP_RadialMenuItem(int id, string name, SRP_RadialMenuCategories category)
// 	{
// 		m_ID				= id;
// 		m_Name 				= name;
// 		m_Category 			= category;
// 	}
	
// 	string GetName()
// 	{
// 		return m_Name;
// 	}

// 	int GetID()
// 	{
// 		return m_ID;
// 	}
	
// 	SRP_RadialMenuCategories GetCategory()
// 	{
// 		return m_Category;
// 	}
	
// 	Widget GetRadialItemCard()
// 	{
// 		return m_RadialMenuItemCard;
// 	}
	
// 	void SetRadialItemCard( Widget widget )
// 	{
// 		m_RadialMenuItemCard = widget;
// 	}
// };

// class SRP_RadialMenuDisplay_SingleCategory
// {

// };
// class SRP_RadialMenuDisplay_MultiCategory extends UIScriptedMenu
// {
// 	protected Widget 							m_SRPItemCardPanel;
// 	protected ref array<ref SRP_RadialMenuItem> 	m_SRPRadialItems;
// 	protected Widget 							m_ToolbarPanel;
	
// 	protected TextWidget						m_CategoryNameText;
	
// 	//
// 	const string 								GESTURE_TEXT	= "GestureNameText";
// 	const string 								INPUT_TEXT		= "InputActionText";
// 	const string 								CATEGORY_NAME	= "CategoryName";
// 	//selections
// 	protected Widget 							m_SelectedItem;
// 	protected bool 								m_IsCategorySelected;
// 	protected bool 								m_IsMenuClosing;
// 	protected int 								m_CurrentCategory;
	
// 	//instance
// 	static SRP_RadialMenuDisplay_MultiCategory							instance;
	
// 	//============================================
// 	// SRP_RadialMenuDisplay_MultiCategory
// 	//============================================
// 	void SRP_RadialMenuDisplay_MultiCategory()
// 	{
// 		m_SRPRadialItems = new ref array<ref SRP_RadialMenuItem>;
		
// 		if ( !instance )
// 		{
// 			instance = this;
// 		}
// 	}
	
// 	void ~SRP_RadialMenuDisplay_MultiCategory()
// 	{
// 		if (GetGame() && GetGame().GetMission())
// 		{
// 			GetGame().GetMission().RemoveActiveInputExcludes({"radialmenu"},false);
// 		}
// 	}

// 	//============================================
// 	// Menu Controls
// 	//============================================	
// 	static void OpenMenu()
// 	{
// 		GetGame().GetUIManager().EnterScriptedMenu( SRP_MENU_RADIAL_MULTI, NULL );
// 	}
	
// 	static void CloseMenu()
// 	{
// 		//execute on menu release
// 		instance.OnMenuRelease();
// 		GetGame().GetUIManager().Back();
// 	}
	
// 	//============================================
// 	// Init & Widget Events
// 	//============================================
// 	override Widget Init()
// 	{
// 		m_CurrentCategory = -1;
		
// 		layoutRoot = GetGame().GetWorkspace().CreateWidgets( "gui/layouts/radial_menu/radial_gestures/day_z_gestures.layout" );
// 		m_SRPItemCardPanel = layoutRoot.FindAnyWidget( RadialMenu.RADIAL_ITEM_CARD_CONTAINER );
		
// 		//register radial menu
// 		RadialMenu.GetInstance().RegisterClass( this );
		
// 		//delay updates until fully initialized
// 		RadialMenu.GetInstance().SetWidgetInitialized(false);
		
// 		//set radial menu properties
// 		RadialMenu.GetInstance().SetWidgetProperties( "gui/layouts/radial_menu/radial_gestures/day_z_gesture_delimiter.layout" );
		
// 		//create content (widgets) for items
// 		RefreshGestures();
		
// 		m_ToolbarPanel = layoutRoot.FindAnyWidget( "toolbar_bg" );
// 		m_ToolbarPanel.Show( true );
		
// 		//clear category name text
// 		UpdateCategoryName( "" );
		
// 		return layoutRoot;
// 	}
	
// 	override void OnShow()
// 	{
// 		super.OnShow();
		
// 		Mission mission = GetGame().GetMission();
// 		if (mission)
// 		{
// 			IngameHud hud = IngameHud.Cast(mission.GetHud());
// 			if (hud)
// 			{
// 				hud.ShowQuickbarUI(false);
// 			}
// 		}
		
// 		SetFocus(layoutRoot);
// 		m_IsMenuClosing = false;
// 	}
	
// 	override void OnHide()
// 	{
// 		super.OnHide();
		
// 		Mission mission = GetGame().GetMission();
// 		if (mission)
// 		{
// 			IngameHud hud = IngameHud.Cast(mission.GetHud());
// 			if (hud)
// 			{
// 				hud.ShowQuickbarUI(true);
// 			}
// 		}
		
// 		m_IsMenuClosing = true;
// 	}
	
// 	override bool OnController( Widget w, int control, int value )
// 	{
// 		super.OnController( w, control, value );
		
// 		RadialMenu.GetInstance().SetControlType( RadialMenuControlType.CONTROLLER );

// 		return false;
// 	}	
		
// 	override bool OnMouseEnter( Widget w, int x, int y )
// 	{
// 		super.OnMouseEnter( w, x, y );
		
// 		RadialMenu.GetInstance().SetControlType( RadialMenuControlType.MOUSE );

// 		return false;
// 	}
	
// 	override bool UseMouse()
// 	{
// 		return true;
// 	}
	
// 	override bool UseGamepad()
// 	{
// 		return true;
// 	}
	
// 	override void Update(float timeslice)
// 	{
// 		super.Update(timeslice);
		
// 		//RefreshGestures(m_CurrentCategory);
// 		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
// 		if (m_CurrentCategory != SRP_RadialMenuCategories.CATEGORIES && m_CurrentCategory != -1 && player)
// 		{
// 			for (int i = 0; i < m_SRPRadialItems.Count(); i++)
// 			{
// 				UpdateQuickbarItemCard(m_SRPRadialItems[i]);
// 			}
// 		}
// 	}
	
// 	void ProcessEmoteConditionRequest(SRP_RadialMenuItem gesture_item)
// 	{
// 		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
// 		if (player && m_CurrentCategory != -1)
// 		{
// 			bool can = player.GetEmoteManager().CanPlayEmote(gesture_item.GetID()) && !player.GetEmoteManager().IsEmotePlaying();
// 			gesture_item.SetCanPerformEmote(can);
// 		}
// 	}
	
// 	//============================================
// 	// Gestures
// 	//============================================
// 	protected void RefreshGestures( SRP_RadialMenuCategories category_id = -1 )
// 	{
// 		//create gestures content (widgets) based on categories
// 		if ( category_id > -1 )
// 		{
// 			GetGestureItems( m_SRPRadialItems, category_id);
// 			m_CurrentCategory = category_id;
// 		}
// 		else
// 		{
// 			GetGestureItems( m_SRPRadialItems, SRP_RadialMenuCategories.CATEGORIES );
// 			m_CurrentCategory = -1;
// 			instance.m_IsCategorySelected = false;
// 		}
		
// 		CreateGestureContent();
// 		UpdateControlsElements();
// 	}
	
// 	protected void GetGestureItems( out ref array<ref SRP_RadialMenuItem> gesture_items, SRP_RadialMenuCategories category )
// 	{
// 		gesture_items.Clear();
		
// 		//PC PLATFORM
// 		//All categories
// 		if ( category == SRP_RadialMenuCategories.CATEGORIES )
// 		{
// 			gesture_items.Insert( new SRP_RadialMenuItem( SRP_RadialMenuCategories.CATEGORY_1, 		"#STR_USRACT_EMOTE_CATEGORY_COMMS", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( SRP_RadialMenuCategories.CATEGORY_2, 		"#STR_USRACT_EMOTE_CATEGORY_INTERACTIONS", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( SRP_RadialMenuCategories.CATEGORY_3, 		"#STR_USRACT_EMOTE_CATEGORY_POSES", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( SRP_RadialMenuCategories.CATEGORY_4, 		"#STR_USRACT_EMOTE_CATEGORY_MISC", 	category ) );
// 		}
// 		//Category 1 - commands
// 		else if ( category == SRP_RadialMenuCategories.CATEGORY_1 )
// 		{
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_POINT, 		"#STR_USRACT_ID_EMOTE_POINT", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_MOVE, 		"#STR_USRACT_ID_EMOTE_MOVE", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_HOLD, 		"#STR_USRACT_ID_EMOTE_HOLD", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_LISTENING, 	"#STR_USRACT_ID_EMOTE_LISTENING", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_DOWN, 		"#STR_USRACT_ID_EMOTE_DOWN", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_SILENT, 		"#STR_USRACT_ID_EMOTE_SILENT", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_WATCHING, 	"#STR_USRACT_ID_EMOTE_WATCHING", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_POINTSELF, 	"#STR_USRACT_ID_EMOTE_POINTSELF",	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_COME, 		"#STR_USRACT_ID_EMOTE_COME", 		category ) );
// 		}
// 		//Category 2 - interaction
// 		else if ( category == SRP_RadialMenuCategories.CATEGORY_2 )
// 		{
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_GREETING, 	"#STR_USRACT_ID_EMOTE_GREETING", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_TAUNT, 		"#STR_USRACT_ID_EMOTE_TAUNT", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_SHAKE, 		"#STR_USRACT_ID_EMOTE_SHAKE", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_NOD, 		"#STR_USRACT_ID_EMOTE_NOD", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_LOOKATME, 	"#STR_USRACT_ID_EMOTE_LOOKATME", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_TAUNTELBOW, 	"#STR_USRACT_ID_EMOTE_TAUNTELBOW", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_THUMB, 		"#STR_USRACT_ID_EMOTE_THUMB", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_THUMBDOWN, 	"#STR_USRACT_ID_EMOTE_THUMBDOWN", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_CLAP, 		"#STR_USRACT_ID_EMOTE_CLAP", 		category ) );
// 		}
// 		//Category 3 - poses
// 		else if ( category == SRP_RadialMenuCategories.CATEGORY_3 )
// 		{
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_SUICIDE, 	"#STR_USRACT_ID_EMOTE_SUICIDE", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_SURRENDER, 	"#STR_USRACT_ID_EMOTE_SURRENDER", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_SALUTE, 		"#STR_USRACT_ID_EMOTE_SALUTE", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_SITB, 		"#STR_USRACT_ID_EMOTE_SITB", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_LYINGDOWN, 	"#STR_USRACT_ID_EMOTE_LYINGDOWN", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_SITA, 		"#STR_USRACT_ID_EMOTE_SITA", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_CAMPFIRE, 	"#STR_USRACT_ID_EMOTE_CAMPFIRE", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_SHRUG, 		"#STR_USRACT_ID_EMOTE_SHRUG", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_SOS, 		"#STR_USRACT_ID_EMOTE_SOS", 		category ) );
// 		}
// 		//Category 4 - special
// 		else if ( category == SRP_RadialMenuCategories.CATEGORY_4 )
// 		{
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_DANCE, 		"#STR_USRACT_ID_EMOTE_DANCE", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_HEART, 		"#STR_USRACT_ID_EMOTE_HEART", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_FACEPALM, 	"#STR_USRACT_ID_EMOTE_FACEPALM", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_TIMEOUT,		"#STR_USRACT_ID_EMOTE_TIMEOUT", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_THROAT, 		"#STR_USRACT_ID_EMOTE_THROAT", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_VOMIT, 		"#STR_USRACT_ID_EMOTE_VOMIT", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_RPS, 		"#STR_USRACT_ID_EMOTE_RPS", 		category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_TAUNTTHINK, 	"#STR_USRACT_ID_EMOTE_TAUNTTHINK", 	category ) );
// 			gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_TAUNTKISS, 	"#STR_USRACT_ID_EMOTE_TAUNTKISS", 	category ) );
// 			//gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_RPS_R, 	"#STR_USRACT_ID_EMOTE_RPS_R", 		category ) );
// 			//gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_RPS_P, 	"#STR_USRACT_ID_EMOTE_RPS_P", 		category ) );
// 			//gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_RPS_S, 	"#STR_USRACT_ID_EMOTE_RPS_S", 		category ) );
// 			//gesture_items.Insert( new SRP_RadialMenuItem( EmoteConstants.ID_EMOTE_DEBUG, 	"ID_EMOTE_DEBUG", 					category ) );
// 		}
// 	}
	
// 	protected void CreateGestureContent()
// 	{
// 		//delete existing gesture widgets
// 		DeleteRadialMenuItems();
		
// 		for ( int i = 0; i < m_SRPRadialItems.Count(); ++i )
// 		{
// 			SRP_RadialMenuItem srp_radialmenu_item = m_SRPRadialItems.Get( i );
			
// 			//create item card
// 			Widget srp_menuitem_card_widget = Widget.Cast( GetGame().GetWorkspace().CreateWidgets( "gui/layouts/radial_menu/radial_gestures/day_z_gesture_item_card.layout", m_SRPItemCardPanel ) );
// 			srp_radialmenu_item.SetRadialItemCard( srp_menuitem_card_widget );
			
// 			//update item card widget
// 			UpdateQuickbarItemCard( srp_radialmenu_item );
			
// 			//set data
// 			srp_menuitem_card_widget.SetUserData( srp_radialmenu_item );
// 		}
		
// 		//set radial parameters for content
// 		if ( m_SRPRadialItems.Count() > 0 ) 
// 		{
// 			RadialMenu radial_menu = RadialMenu.GetInstance();
// 			radial_menu.SetRadiusOffset( 0 );
// 			radial_menu.SetExecuteDistOffset( 0.5 );
// 			radial_menu.SetOffsetFromTop( 0 );
// 			radial_menu.SetItemCardRadiusOffset( 0.25 );
// 			radial_menu.ActivateControllerTimeout( false );
// 		}
		
// 		//refresh radial menu
// 		RadialMenu.GetInstance().Refresh();
// 	}
	
// 	protected void UpdateQuickbarItemCard( SRP_RadialMenuItem srp_radialmenu_item )
// 	{
// 		Widget srp_menuitem_card_widget = srp_radialmenu_item.GetRadialItemCard();
// 		//texts
// 		RichTextWidget srp_radialmenu_name_text = RichTextWidget.Cast( srp_menuitem_card_widget.FindAnyWidget( GESTURE_TEXT ) );
// 		RichTextWidget srp_radialmenu_input_text = RichTextWidget.Cast( srp_menuitem_card_widget.FindAnyWidget( INPUT_TEXT ) );
// 		srp_radialmenu_name_text.SetText( srp_radialmenu_item.GetName() );
// 		bool input_name_available = srp_radialmenu_item.GetBoundButtonText() != "";
// 		srp_radialmenu_input_text.Show(input_name_available);
// 		if (input_name_available)
// 		{
// 			srp_radialmenu_input_text.SetText(srp_radialmenu_item.GetBoundButtonText());
// 		}
// 		//coloring
// 		ProcessEmoteConditionRequest(srp_radialmenu_item);
// 		if (srp_radialmenu_item.GetCanPerformEmote())
// 		{
// 			srp_menuitem_card_widget.SetFlags(WidgetFlags.DISABLED); //flag just seems to be...'there', useful for showing radial selector. Still...
// 			srp_radialmenu_name_text.SetColor(ARGB(255,255,255,255));
// 			srp_radialmenu_input_text.SetColor(ARGB(255,255,255,255));
// 		}
// 		else
// 		{
// 			srp_menuitem_card_widget.ClearFlags(WidgetFlags.DISABLED);
// 			srp_radialmenu_name_text.SetColor(ARGB(255,150,150,150));
// 			srp_radialmenu_input_text.SetColor(ARGB(255,150,150,150));
// 		}
// 	} 
	
// 	protected void DeleteRadialMenuItems()
// 	{
// 		Widget child;
// 		Widget child_to_destroy;
		
// 		child = m_SRPItemCardPanel.GetChildren();
// 		while ( child )
// 		{
// 			child_to_destroy = child;
// 			child = child.GetSibling();
			
// 			delete child_to_destroy;
// 		}		
// 	}
	
// 	protected void UpdateCategoryName( string name )
// 	{
// 		if ( !m_CategoryNameText )
// 		{
// 			m_CategoryNameText = TextWidget.Cast( layoutRoot.FindAnyWidget( CATEGORY_NAME ) );
// 		}
		
// 		m_CategoryNameText.SetText( name );
// 	}
	
// 	//============================================
// 	// Radial Menu Events
// 	//============================================
// 	//Common
// 	void OnControlsChanged( RadialMenuControlType type )
// 	{
// 	}
	
// 	//Mouse
// 	void OnMouseSelect( Widget w )
// 	{
// 		MarkSelected( w );
// 	}

// 	void OnMouseDeselect( Widget w )
// 	{
// 		UnmarkSelected( w );
// 	}

// 	void OnMouseExecute( Widget w )
// 	{
// 	}
	
// 	//! LMB
// 	void OnMousePressLeft( Widget w )
// 	{
// 		if (instance.m_IsCategorySelected)
// 		{
// 			ExecuteSelectedItem();
// 		}
// 		else
// 		{
// 			ExecuteSelectedCategory( w );
// 		}
// 	}
	
// 	//! RMB
// 	void OnMousePressRight( Widget w )
// 	{
// 		BackOneLevel();
// 	}
			
// 	//Controller
// 	void OnControllerSelect( Widget w )
// 	{
// 		MarkSelected( w );
// 	}

// 	void OnControllerDeselect( Widget w )
// 	{
// 		UnmarkSelected( w );
// 	}

// 	void OnControllerExecute( Widget w )
// 	{
// 	}
	
// 	void OnControllerPressSelect( Widget w )
// 	{
// 		if (instance.m_IsCategorySelected)
// 		{
// 			ExecuteSelectedItem();
// 		}
// 		else
// 		{
// 			ExecuteSelectedCategory( w );
// 		}
// 	}
	
// 	void OnControllerPressBack( Widget w )
// 	{
// 		BackOneLevel();
// 	}
	
// 	//Actions
// 	protected void MarkSelected( Widget w )
// 	{
// 		instance.m_SelectedItem = w;
		
// 		if ( w )
// 		{
// 			SRP_RadialMenuItem srp_radialmenu_item;
// 			w.GetUserData( srp_radialmenu_item );
// 		}
// 	}
	
// 	protected void UnmarkSelected( Widget w )
// 	{
// 		instance.m_SelectedItem = NULL;
		
// 		if ( w )
// 		{
// 			SRP_RadialMenuItem srp_radialmenu_item;
// 			w.GetUserData( srp_radialmenu_item );
// 		}
// 	}
	
// 	protected void ExecuteSelectedCategory( Widget w )
// 	{
// 		//only when category is not picked yet
// 		if ( w )
// 		{
// 			SRP_RadialMenuItem srp_radialmenu_item;
// 			w.GetUserData( srp_radialmenu_item );
			
// 			//is category
// 			if ( !instance.m_IsCategorySelected && srp_radialmenu_item.GetCategory() == SRP_RadialMenuCategories.CATEGORIES )
// 			{
// 				//set category selected
// 				instance.m_IsCategorySelected = true;
				
// 				//show selected category gestures
// 				GetGestureItems( m_SRPRadialItems, srp_radialmenu_item.GetID() );
// 				CreateGestureContent();
// 				RefreshGestures( srp_radialmenu_item.GetID() );
				
// 				//update category name text
// 				UpdateCategoryName( srp_radialmenu_item.GetName() );
// 			}
// 		}
// 	}
	
// 	protected void ExecuteSelectedItem()
// 	{
// 		if ( instance.m_IsCategorySelected && instance.m_SelectedItem )
// 		{
// 			if ( !GetGame().IsDedicatedServer() )
// 			{
// 				PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
				
// 				SRP_RadialMenuItem srp_radialmenu_item;
// 				instance.m_SelectedItem.GetUserData( srp_radialmenu_item );
			
// 				if ( srp_radialmenu_item ) 
// 				{
// 					if( player.GetEmoteManager() ) 
// 					{
// 						player.GetEmoteManager().CreateEmoteCBFromMenu( gesture_item.GetID() );
// 					}
// 				}
// 			}
// 		}
// 	}
	
// 	//only moves to the SRP_RadialMenuCategories.CATEGORIES for now
// 	protected void BackOneLevel()
// 	{
// 		RefreshGestures();
// 		UpdateCategoryName( "" );
// 	}
	
// 	bool IsMenuClosing()
// 	{
// 		return m_IsMenuClosing;
// 	}
	
// 	void SetMenuClosing(bool state)
// 	{
// 		m_IsMenuClosing = state;
// 	}
	
// 	protected void UpdateControlsElements()
// 	{
// 		Widget toolbarBackSpacer = layoutRoot.FindAnyWidget("BackSpacer");
// 		//Widget toolbarNavigateSpacer = layoutRoot.FindAnyWidget("NavigateSpacer");
		
// 		RichTextWidget toolbarSelectIcon = RichTextWidget.Cast(layoutRoot.FindAnyWidget("SelectIcon"));
// 		RichTextWidget toolbarBackIcon = RichTextWidget.Cast(layoutRoot.FindAnyWidget("BackIcon"));
		
// 		string selectAction;
// 		string backAction;
// 		int controllerID;
		
// 		if (GetGame().GetInput().IsEnabledMouseAndKeyboardEvenOnServer())
// 		{
// 			selectAction = "UAMenuSelect";
// 			backAction = "UAMenuBack";
// 			controllerID = EUAINPUT_DEVICE_KEYBOARDMOUSE;
// 		}
// 		else
// 		{
// 			selectAction = "UAUISelect";
// 			backAction = "UAUIBack";
// 			controllerID = EUAINPUT_DEVICE_CONTROLLER;
// 		}
		
// 		toolbarSelectIcon.SetText(InputUtils.GetRichtextButtonIconFromInputAction(selectAction, "", controllerID, InputUtils.ICON_SCALE_TOOLBAR));
// 		toolbarBackIcon.SetText(InputUtils.GetRichtextButtonIconFromInputAction(backAction, "", controllerID, InputUtils.ICON_SCALE_TOOLBAR));
// 		toolbarBackSpacer.Show(instance.m_IsCategorySelected);
// 	}
	
// //-----------------------------------------------------------------
// 	//!DEPRECATED
// 	protected void OnMenuRelease()
// 	{
// 	}
// }	