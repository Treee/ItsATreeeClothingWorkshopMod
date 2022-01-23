class WorkbenchGUICraftingHud extends UIScriptedMenu
{
  SRPConfig config;

  private Widget              m_PanelWidgetMain;
  private Widget              m_PanelWidgetItem;
  private ButtonWidget        m_BtnAllRecipes;
  private ButtonWidget        m_BtnPossibleRecipes;
  private ScrollWidget        m_ScrollWidgetRecipes;
  private ScrollWidget        m_ScrollWidgetPosRecipes;
  private WrapSpacerWidget    m_WrapSpacerWidgetRecipes;
  private TextWidget          m_TextItemName;
  private ItemPreviewWidget   m_ItemPreviewWidget;
  private ButtonWidget        m_BtnCraft;
  private ScrollWidget        m_ScrollCraftItems;
  private WrapSpacerWidget    m_WrapSpacerWidget;
  private TextWidget          m_ItemResultCount;
  private ProgressBarWidget   m_ProgressCraftBar;
  private MultilineTextWidget m_NedeedAttachms;
  private WrapSpacerWidget    m_WrapSpacerWidgetPosRecipes;
  private Widget              m_PanelWrapperAllRecipes;
  private Widget              m_PanelWrapperPosRecipes;

  private ImageWidget         m_MainImg;
  private ImageWidget         m_ImgCraft;

  ref array<Widget> AllWidgetRecipes;
  ref array<Widget> PossibleWidgetRecipes;
  ref array<ref ItemRecipeWidget> AllRecipes;
  ref array<ref ItemRecipeWidget> AllPosRecipes;
  ref array<ref CraftedItemWidget> TempIngredientsArray;

  CraftedItem previouslyCraftedItem;

  private int m_characterRotationX;
	private int m_characterRotationY;
	private int m_characterScaleDelta;
	private vector m_characterOrientation;
  private EntityAI m_MainEnt;

  private float progressCounter;

  PlayerBase targetPlayer;
  bool isProgressBlocking;

  private const string RedBtn = "Survivalists_Mods/gui/redBtn.edds";
  private const string GrnBtn = "Survivalists_Mods/gui/greenBtn.edds";

  void WorkbenchGUICraftingHud()
  {
    // Print("WorkbenchGUICraftingHud: Opened");
    targetPlayer = PlayerBase.Cast(GetGame().GetPlayer());
    // Print("currently selected workbench: " + targetPlayer.selectedCraftingBench);
    isProgressBlocking = false;
    config = GetDayZGame().GetSRPConfigGlobal();
    // Print("config: " + config);
    // Print("tailorWorkbench: " + config.tailorWorkbench);
    // Print("tailorWorkbench: " + config.tailorWorkbench.craftingBenchType);
    // Print("advancedWorkbench: " + config.advancedWorkbench);
    // Print("advancedWorkbench: " + config.advancedWorkbench.craftingBenchType);
    // Print("drugWorkbench: " + config.drugWorkbench);
    // Print("drugWorkbench: " + config.drugWorkbench.craftingBenchType);
    // TailorScanItems();
    progressCounter = 0;
    // previouslyCraftedItem = new CraftedItem();
    AllWidgetRecipes = new array<Widget>();
    PossibleWidgetRecipes = new array<Widget>();
    AllRecipes  = new array<ref ItemRecipeWidget>();
    AllPosRecipes  = new array<ref ItemRecipeWidget>();
    TempIngredientsArray = new array<ref CraftedItemWidget>();
    // g_Game.SetKeyboardHandle(this);
    GetGame().GetMission().PlayerControlDisable( INPUT_EXCLUDE_ALL );
  }

  void ~WorkbenchGUICraftingHud()
  {
    // Print("WorkbenchGUICraftingHud: Destroyed");
    delete AllWidgetRecipes;
    delete PossibleWidgetRecipes;
    delete AllRecipes;
    delete AllPosRecipes;
    delete TempIngredientsArray;
    if (m_MainEnt) GetGame().ObjectDeleteOnClient(m_MainEnt);
    GetGame().GetMission().PlayerControlEnable( true );
    targetPlayer.selectedCraftingBench = "";
    targetPlayer.guiCraftingBench = null; 
    // delete config;
		// g_Game.SetKeyboardHandle(NULL);
  }

  override Widget Init()
	{
		layoutRoot 				    = 	GetGame().GetWorkspace().CreateWidgets("Survivalists_Mods/gui/layouts/CraftingGUIWorkbench.layout");
    m_PanelWidgetMain           =   Widget.Cast(GetWid("PanelWidgetMain"));
    m_PanelWidgetItem           =   Widget.Cast(GetWid("PanelWidgetItem"));
    m_BtnAllRecipes             =   ButtonWidget.Cast(GetWid("BtnAllRecipes"));
    m_BtnPossibleRecipes            =   ButtonWidget.Cast(GetWid("BtnPosbRecipes"));
    m_BtnCraft                  =   ButtonWidget.Cast(GetWid("BtnCraft"));
    m_ScrollWidgetRecipes       =   ScrollWidget.Cast(GetWid("ScrollWidgetRecipes"));
    m_ScrollCraftItems          =   ScrollWidget.Cast(GetWid("ScrollCraftItems"));
    m_ScrollWidgetPosRecipes    =   ScrollWidget.Cast(GetWid("ScrollWidgetPosRecipes"));
    m_WrapSpacerWidgetRecipes   =   WrapSpacerWidget.Cast(GetWid("WrapSpacerWidgetRecipes"));
    m_WrapSpacerWidget          =   WrapSpacerWidget.Cast(GetWid("WrapSpacerWidget"));
    m_TextItemName              =   TextWidget.Cast(GetWid("TextItemName"));
    m_ItemPreviewWidget         =   ItemPreviewWidget.Cast(GetWid("ItemPreviewWidget"));
    m_ItemResultCount           =   TextWidget.Cast(GetWid("ItemResultCount"));
    m_ProgressCraftBar          =   ProgressBarWidget.Cast(GetWid("ProgressCraftBar"));
    m_NedeedAttachms            =   MultilineTextWidget.Cast(GetWid("NedeedAttachms"));
    m_WrapSpacerWidgetPosRecipes=   WrapSpacerWidget.Cast(GetWid("WrapSpacerWidgetPosRecipes"));
    m_PanelWrapperAllRecipes    =   Widget.Cast(GetWid("PanelWrapperAllRecipes"));
    m_PanelWrapperPosRecipes    =   Widget.Cast(GetWid("PanelWrapperPosRecipes"));

    m_MainImg                   =   ImageWidget.Cast(GetWid("ImageWidgetRoot"));
    m_ImgCraft                  =   ImageWidget.Cast(GetWid("ImgBtn"));

    m_ImgCraft.LoadImageFile(0, RedBtn);
    m_ImgCraft.LoadImageFile(1, GrnBtn);
    m_ImgCraft.SetImage(0);


    // if(!m_MainImg.LoadImageFile(0, targetPlayer.m_TailorCraftClasses.m_TailorCustomizationSetting.PathToMainBackgroundImg))
    // {
      m_MainImg.LoadImageFile(0, "Survivalists_Mods/gui/CraftingWorkbench.edds");
    // }
    FillCraftingRecipes();
    FillPossibleRecipes();
		return layoutRoot;
	}

	Widget GetWid(string val)
	{
		return layoutRoot.FindAnyWidget(val);
	}

  CraftingConfig GetCraftingConfig(string workbenchType)
  {
    // Print("Get " + workbenchType + " Config");
    if (workbenchType == "SRP_SewingMachine")
    {      
      return config.tailorWorkbench;
    }
    else if (workbenchType == "SRP_AdvancedWorkbench")
    {
      return config.advancedWorkbench;
    }
    else if (workbenchType == "SRP_DrugWorkbench")
    {
      return config.drugWorkbench;
    }
    return null;
  }

  void FillCraftingRecipes()
  {
    if (targetPlayer)
    {
      CraftingConfig craftingConfig = GetCraftingConfig(targetPlayer.selectedCraftingBench);
      if (craftingConfig)
      {
        for (int i = 0; i < craftingConfig.craftedItems.Count(); i++)
        {
          CraftedItem craftedItem = craftingConfig.craftedItems.Get(i);
          if (craftedItem)
          {
            ItemRecipeWidget recipe = new ItemRecipeWidget();
            Widget w = recipe.Init(m_WrapSpacerWidgetRecipes, craftedItem.recipeName, craftedItem.craftType);
            recipe.SetData(craftedItem);
            AllWidgetRecipes.Insert(w);
            AllRecipes.Insert(recipe);
          }
        }
      }    
    }
  }

  void FillPossibleRecipes()
  {
    if (targetPlayer)
    {
      CraftingConfig craftingConfig = GetCraftingConfig(targetPlayer.selectedCraftingBench);
      if (craftingConfig)
      {
        for (int i = 0; i < craftingConfig.craftedItems.Count(); i++)
        {
          CraftedItem craftedItem = craftingConfig.craftedItems.Get(i);
          if (WorkbenchHasAllAttachmentsRequired(craftedItem))
          {
            ItemRecipeWidget recipe = new ItemRecipeWidget();
            Widget w = recipe.Init(m_WrapSpacerWidgetPosRecipes, craftedItem.recipeName, craftedItem.craftType);
            recipe.SetData(craftedItem);
            PossibleWidgetRecipes.Insert(w);
            AllPosRecipes.Insert(recipe);
          }
        }
      }
    }
  }

  bool WorkbenchHasAllAttachmentsRequired(CraftedItem craftedItem)
  {
    int attCounter = 0;
    string attachmentName;
    // for each required attachment
    for (int benchAtchIndex = 0; benchAtchIndex < craftedItem.requiredAttachments.Count(); benchAtchIndex++)
    {
      attachmentName = craftedItem.requiredAttachments.Get(benchAtchIndex);
      EntityAI correctAttachment = targetPlayer.guiCraftingBench.GetInventory().FindAttachmentByName(attachmentName);
      // if that attachment exists
      if (correctAttachment)
      {        
        attCounter++;
      }
    }
    // Print("#AtchRequired: " + finalAttCount + " #AtchMatch: " + attCounter);    
    return (attCounter == craftedItem.requiredAttachments.Count());
  }

  override bool OnClick(Widget w, int x, int y, int button)
	{    
		super.OnClick(w, x, y, button);
		if (ButtonWidget.Cast(w))
		{
      if (w.GetParent().GetParent().GetName() == "WrapSpacerWidgetPosRecipes")
      {
        ShowMoreInfo(w, 1);
        return true;
      }
      if (w.GetParent().GetName() == "RecipeItem")
      {
        ShowMoreInfo(w, 0);
        return true;
      }

      switch (w)
      {
        case m_BtnAllRecipes:
          SwitchPanel("AllRecipes");
        break;
        case m_BtnPossibleRecipes:
          SwitchPanel("PosbRecipes");
        break;
        case m_BtnCraft:
          TryCraftItem();
        break;
      }
		}		
		return false;
	}

  void SwitchPanel(string pan)
  {
    m_PanelWrapperAllRecipes.Show(false);
    m_PanelWrapperPosRecipes.Show(false);
    m_ScrollCraftItems.VScrollToPos01( 0 );
    m_ScrollWidgetRecipes.VScrollToPos01( 0 );
    m_ScrollWidgetPosRecipes.VScrollToPos01( 0 );

    switch (pan)
    {
      case "AllRecipes":
        m_PanelWrapperAllRecipes.Show(true);
      break;
      case "PosbRecipes":
        m_PanelWrapperPosRecipes.Show(true);
      break;
    }
  }

  void ShowMoreInfo(Widget w, int type)
  {
    int index;
    ItemRecipeWidget recipe;
    Widget parentWidget = w.GetParent();    
    ClearCraftItemsBuffer();
    // Print("Show more info click: " + w + " type: " + type);
    if (type)
    {
      index = PossibleWidgetRecipes.Find(parentWidget);
      if (index != -1)
      {
        recipe = AllPosRecipes.Get(index);
        // Print("AllPosRecipes recipe at index: " + index + " recipe: " + recipe);
        SetupCraftingItems(recipe.m_CraftedItem);
      }
    }
    else
    {
      index = AllWidgetRecipes.Find(parentWidget);
      if (index != -1)
      {
        recipe = AllRecipes.Get(index);
        // Print("AllRecipes recipe at index: " + index + " recipe: " + recipe);
        SetupCraftingItems(recipe.m_CraftedItem);
      }
    }
  }

  void ClearCraftItemsBuffer()
  {
    while (m_WrapSpacerWidget.GetChildren())
    {
      m_WrapSpacerWidget.RemoveChild(m_WrapSpacerWidget.GetChildren());
    }
  }
  
  void TryCraftItem()
  {
    if (targetPlayer)
    {
      if (isProgressBlocking)
      {        
        // targetPlayer.SendMessageToClient(targetPlayer, "Wait... Still Crafting.");
      }
      else 
      {
        m_ProgressCraftBar.SetCurrent(0);
        m_ProgressCraftBar.Show(true);
        EffectSound sound =	SEffectManager.PlaySoundOnObject( "Craft_SoundSet", targetPlayer );
        sound.SetSoundAutodestroy( true );
        StartCraftingProgress();
        m_BtnCraft.Enable(false);
        m_ImgCraft.SetImage(0);
        isProgressBlocking = true;
      }        
    }    
  }

  void StartCraftingProgress()
  {
    GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( StartCraftingProgress, 500, false);
    progressCounter += 50;
    m_ProgressCraftBar.SetCurrent(progressCounter);
    if (m_ProgressCraftBar.GetCurrent() == 100)
    {
      GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).Remove(StartCraftingProgress);
      progressCounter = 0;
      m_ProgressCraftBar.Show(false);

      // send RPC to craft the item server side
      auto craftingParams = new Param2<CraftedItem, EntityAI>(previouslyCraftedItem, targetPlayer.guiCraftingBench);
      // Print("Sending Craft Request to Server: " + targetPlayer.GetIdentity().GetName() + " RPC: " + SRP_RPC.CLIENT_REQUEST_CRAFT);
      GetGame().RPCSingleParam(targetPlayer, SRP_RPC.CLIENT_REQUEST_CRAFT, craftingParams, true, targetPlayer.GetIdentity() );

      GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( ReloadCraftingBench, 500, false);
    }
  }

  void ReloadCraftingBench()
  {        
    ClearCraftItemsBuffer();
    SetupCraftingItems(previouslyCraftedItem);
    isProgressBlocking = false;
  }

  //--------------------------------------------------------------------------

  void SetupCraftingItems(CraftedItem craftedItem)
  {
    string attchts = "";
    m_NedeedAttachms.SetText(attchts);
    m_BtnCraft.Enable(false);
    m_ImgCraft.SetImage(0);
    TempIngredientsArray.Clear();
    bool canCraftSingle = false;
    bool canCraftAll = true;
    string amount;

    if (m_MainEnt)
    {
      GetGame().ObjectDeleteOnClient(m_MainEnt);
    }
    // if the item doesn't exist, the recipe will show up but not be 'clickable' fyi
    // Using "CreateObject INSTEAD of CreateObjectEx" becasue this one only creates a client side object
    m_MainEnt = EntityAI.Cast(GetGame().CreateObject(craftedItem.result, vector.Zero, true));   
    // Print("main entity pre null: " + m_MainEnt) ;
    if (m_MainEnt)
    {
      previouslyCraftedItem = craftedItem;
      m_ItemPreviewWidget.SetItem(m_MainEnt);
      m_ItemPreviewWidget.SetView(m_MainEnt.GetViewIndex());
      m_ItemPreviewWidget.SetModelPosition(Vector(0,0,1));
      m_TextItemName.SetText(m_MainEnt.GetDisplayName());
      m_ItemResultCount.SetText(craftedItem.resultCount.ToString());

      for (int i = 0; i < craftedItem.craftingComponents.Count(); i++)
      {
        CraftingComponent itemToCheck = craftedItem.craftingComponents.Get(i);
        int totalInWorkbench = GetAmountInWorkbench(itemToCheck.className);
        amount = string.Format("%1/%2", totalInWorkbench, itemToCheck.amount);
        canCraftSingle = (totalInWorkbench / itemToCheck.amount) > 0;
        canCraftAll = canCraftAll && canCraftSingle; // aggregate all the booleans into one. && forces all bools to be true
        FillIngredientsWidget(craftedItem.craftingComponents.Get(i), amount, canCraftSingle);
      }
      for (int j = 0; j < craftedItem.requiredAttachments.Count(); j++)
      {
        attchts = attchts + craftedItem.requiredAttachments.Get(j);
        if ((craftedItem.requiredAttachments.Count() - j) != 1 )
        attchts = attchts + ",";
      }
      m_NedeedAttachms.SetText(attchts);

      if (canCraftAll && WorkbenchHasAllAttachmentsRequired(craftedItem))
      {
        m_BtnCraft.Enable(true);
        m_ImgCraft.SetImage(1);
      }
    }    
  }

  void FillIngredientsWidget(CraftingComponent cc, string amount, bool canCraft)
  {
    CraftedItemWidget ingredientWidget = new CraftedItemWidget();
    Widget w = ingredientWidget.Init(m_WrapSpacerWidget, cc, amount, canCraft);
    TempIngredientsArray.Insert(ingredientWidget);
  }

  int GetAmountInWorkbench(string itemClassName)
  {
    for(int i = 0; i < targetPlayer.guiCraftingBench.GetInventory().GetCargo().GetItemCount(); i++)
    {
      ItemBase itemInBench = ItemBase.Cast(targetPlayer.guiCraftingBench.GetInventory().GetCargo().GetItem(i));
      if (itemInBench.GetType() == itemClassName)
      {
        if (itemInBench.IsRuined())
        {
          continue;
        }
        if (itemInBench.HasQuantity())
        {
          return itemInBench.GetQuantity();
        }
        else
        {
          return 1;
        }
        // Print("Checking amount of " + itemInBench.GetType() + " Has x amount: " + itemInBench.GetQuantity() + " entity: " + itemInBench);
        // Print("quantity max " + itemInBench.GetQuantityMax());        
      }
    }
    return 0;
  }

  override void Update( float timeslice )
	{
		if( GetGame().GetInput().LocalPress( "UAUIBack", false ) )
		{
			if (GetGame().GetUIManager().FindMenu(GameConstants.UI_SRP_CUSTOM_MENU_GUICrafting))
      {
        Close();
      }
		}		
	}

  override bool OnMouseEnter(Widget w, int x, int y)
	{
		super.OnMouseEnter(w, x, y);
    if (w.GetUserID() == 25)
    {
      // Print("widget id is 25 " + w);
      w.FindAnyWidget("CraftItemPanel").Show(true);
      w.FindAnyWidget("CraftItemPreview").Show(false);
    }
		return false;
	}

	override bool OnMouseLeave(Widget w, Widget enterW, int x, int y)
	{
		super.OnMouseLeave(w, enterW, x, y);
		
    if (w.GetUserID() == 25)
    {
        w.FindAnyWidget("CraftItemPanel").Show(false);
        w.FindAnyWidget("CraftItemPreview").Show(true);
    }

		return false;
	}

  //--------------------------------------------------------------------------
	override bool OnMouseButtonDown(Widget w, int x, int y, int button)
	{
		super.OnMouseButtonDown(w, x, y, button);
		
		if (w == m_ItemPreviewWidget)
		{
			GetGame().GetDragQueue().Call(this, "UpdateRotation");
			g_Game.GetMousePos(m_characterRotationX, m_characterRotationY);
			return true;
		}
		return false;
	}
	
	//--------------------------------------------------------------------------
	void UpdateRotation(int mouse_x, int mouse_y, bool is_dragging)
	{
		vector o = m_characterOrientation;
		o[0] = o[0] + (m_characterRotationY - mouse_y);
		o[1] = o[1] - (m_characterRotationX - mouse_x);
		
		m_ItemPreviewWidget.SetModelOrientation( o );
		
		if (!is_dragging)
		{
			m_characterOrientation = o;
		}
	}
	
	//--------------------------------------------------------------------------
	override bool OnMouseWheel(Widget  w, int  x, int  y, int wheel)
	{
		super.OnMouseWheel(w, x, y, wheel);
		
		if ( w == m_ItemPreviewWidget )
		{
			m_characterScaleDelta = wheel;
			UpdateScale();
		}
		return false;
	}
	
	//--------------------------------------------------------------------------
	void UpdateScale()
	{
		float w, h, x, y;		
		m_ItemPreviewWidget.GetPos(x, y);
		m_ItemPreviewWidget.GetSize(w,h);
		w = w + ( m_characterScaleDelta / 4);
		h = h + ( m_characterScaleDelta / 4 );
		if ( w > 0.5 && w < 3 )
		{
			m_ItemPreviewWidget.SetSize( w, h );
	
			int screen_w, screen_h;
			GetScreenSize(screen_w, screen_h);
			float new_x = x - ( m_characterScaleDelta / 8 );
			float new_y = y - ( m_characterScaleDelta / 8 );
			m_ItemPreviewWidget.SetPos( new_x, new_y );
		}
	}
}