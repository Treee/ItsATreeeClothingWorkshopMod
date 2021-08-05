class WorkbenchGUICraftingHud extends UIScriptedMenu
{
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
  // ref array<ref TailorOneRecipe> AllRecipes;
  // ref array<ref TailorOneRecipe> AllPosRecipes;
  // ref array<ref TailorOneItemForCraft> TempIngrsArray;

  // ref TailorCraftItem crItm;

  private int m_characterRotationX;
	private int m_characterRotationY;
	private int m_characterScaleDelta;
	private vector m_characterOrientation;
  private EntityAI m_MainEnt;

  private float progressCounter;

  PlayerBase targetPlayer;

  private const string RedBtn = "Survivalists_Mods/gui/redBtn.edds";
  private const string GrnBtn = "Survivalists_Mods/gui/greenBtn.edds";

  void WorkbenchGUICraftingHud()
  {
    Print("WorkbenchGUICraftingHud: Opened");
    targetPlayer = PlayerBase.Cast(GetGame().GetPlayer());
    Print("currently selected workbench: " + targetPlayer.selectedCraftingBench);
    // if(targetPlayer)
    //   targetPlayer.CanCraft = true;

    // TailorScanItems();
    progressCounter = 0;
    // crItm = new TailorCraftItem();
    AllWidgetRecipes = new array<Widget>();
    PossibleWidgetRecipes = new array<Widget>();
    // AllRecipes  = new array<ref TailorOneRecipe>();
    // AllPosRecipes  = new array<ref TailorOneRecipe>();
    // TempIngrsArray = new array<ref TailorOneItemForCraft>();
    // g_Game.SetKeyboardHandle(this);
    GetGame().GetMission().PlayerControlDisable( INPUT_EXCLUDE_ALL );
  }

  void ~WorkbenchGUICraftingHud()
  {
    Print("WorkbenchGUICraftingHud: Destroyed");
    // TempIngrsArray.Clear();
    AllWidgetRecipes.Clear();
    PossibleWidgetRecipes.Clear();
    // AllRecipes.Clear();
    // AllPosRecipes.Clear();
    if (m_MainEnt) GetGame().ObjectDeleteOnClient(m_MainEnt);
    GetGame().GetMission().PlayerControlEnable( true );
    targetPlayer.selectedCraftingBench = "";
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
    // TailorFillRecipes();
    // TailorFillPosibleRecipes();
		return layoutRoot;
	}

	Widget GetWid(string val)
	{
		return layoutRoot.FindAnyWidget(val);
	}

  // void TailorFillRecipes()
  // {
  //   PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
  //   if (player)
  //   {
  //     for (int i = 0; i < player.m_TailorCraftClasses.TailorCraftItems.Count(); i++)
  //     {
  //       TailorCraftItem ci = player.m_TailorCraftClasses.TailorCraftItems.Get(i);
  //       TailorOneRecipe recipe = new TailorOneRecipe();
  //       Widget w = recipe.Init(m_WrapSpacerWidgetRecipes, ci.RecipeName, ci.CraftType);
  //       recipe.SetData(ci);
  //       AllWidgetRecipes.Insert(w);
  //       AllRecipes.Insert(recipe);
  //     }
  //   }
  // }

  // void TailorFillPosibleRecipes()
  // {
  //   PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
  //   if (player)
  //   {
  //     for (int i = 0; i < player.m_TailorCraftClasses.TailorCraftItems.Count(); i++)
  //     {
  //       TailorCraftItem ci = player.m_TailorCraftClasses.TailorCraftItems.Get(i);
  //       if (TWBHasAllAttachments(ci))
  //       {
  //         TailorOneRecipe recipe = new TailorOneRecipe();
  //         Widget w = recipe.Init(m_WrapSpacerWidgetPosRecipes, ci.RecipeName, ci.CraftType);
  //         recipe.SetData(ci);
  //         PossibleWidgetRecipes.Insert(w);
  //         AllPosRecipes.Insert(recipe);
  //       }
  //     }
  //   }
  // }

  // bool TWBHasAllAttachments(TailorCraftItem ci)
  // {
  //   int attCounter = 0;
  //   int finalAttCount = ci.AttachmentsNeed.Count();
  //   int attCount = g_TailorCraftManager.GetTWB().GetInventory().AttachmentCount();
  //   string name;
  //   for (int j = 0; j < finalAttCount; j++)
  //   {
  //     name = ci.AttachmentsNeed.Get(j);
  //     for (int i = 0; i < attCount; i++)
  //     {
  //       ItemBase item = ItemBase.Cast( g_TailorCraftManager.GetTWB().GetInventory().GetAttachmentFromIndex( i ) );
  //       if (item && (item.GetType() == name))
  //       {
  //           attCounter++;
  //       }
  //     }
  //   }
  //   return (attCounter == finalAttCount);
  // }

  override bool OnClick(Widget w, int x, int y, int button)
	{
    Print("clicked pre");
		super.OnClick(w, x, y, button);
		if (ButtonWidget.Cast(w))
		{
      if (w.GetParent().GetParent().GetName() == "WrapSpacerWidgetPosRecipes")
      {
        // ShowMoreInfo(w, 1);
        return true;
      }
      if (w.GetParent().GetName() == "RecipeItem")
      {
        // ShowMoreInfo(w, 0);
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
          // TailorTryCraftItem();
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

  // void ShowMoreInfo(Widget w, int type)
  // {
  //   int idx;
  //   TailorOneRecipe recipe;
  //   Widget pw = w.GetParent();
  //   g_TailorCraftManager.DeleteEntities();
  //   TailorClearCraftItemsBuffer();
  //   if (type)
  //   {
  //     idx = PossibleWidgetRecipes.Find(pw);
  //     if (idx != -1)
  //     {
  //         recipe = AllPosRecipes.Get(idx);
  //         TailorSetupItems(recipe.m_TailorCraftItem);
  //     }
  //   }
  //   else
  //   {
  //     idx = AllWidgetRecipes.Find(pw);
  //     if (idx != -1)
  //     {
  //         recipe = AllRecipes.Get(idx);
  //         TailorSetupItems(recipe.m_TailorCraftItem);
  //     }
  //   }
  // }

  void TailorClearCraftItemsBuffer()
  {
    while (m_WrapSpacerWidget.GetChildren())
    {
        m_WrapSpacerWidget.RemoveChild(m_WrapSpacerWidget.GetChildren());
    }
  }

  // void TailorScanItems()
  // {
  //   if (!g_TailorCraftManager.GetTWB())
  //   {
  //       g_TailorCraftManager.SelfChatMessage("Error workbench not found.");
  //       return;
  //   }

  //   if (!g_TailorCraftManager.GetTWB().HasAnyCargo())
  //   {
  //       return;
  //   }

  //   CargoBase cargoBase;
  //   int cargoCount;
  //   int quant;
    
  //   cargoBase = g_TailorCraftManager.GetTWB().GetInventory().GetCargo();
  //   cargoCount = cargoBase.GetItemCount();
  //   for (int c = 0; c < cargoCount; c++)
  //   {
  //     ItemBase cargoItemIB;
  //     if ( Class.CastTo(cargoItemIB, cargoBase.GetItem(c)) && cargoItemIB.IsItemBase() )
  //     {
  //       if (cargoItemIB.IsRuined()) continue;
  //       if (cargoItemIB.HasQuantity())
  //       {
  //           quant = cargoItemIB.GetQuantity();
  //       }
  //       else
  //       {
  //           quant = 1;
  //       }

  //       if (!g_TailorCraftManager.m_ExItems.Contains(cargoItemIB.GetType()))
  //       {
  //           g_TailorCraftManager.m_ExItems.Insert(cargoItemIB.GetType(), quant);
  //       }
  //       else
  //       {
  //           int nowQuant = g_TailorCraftManager.m_ExItems.Get(cargoItemIB.GetType());
  //           g_TailorCraftManager.m_ExItems.Set(cargoItemIB.GetType(), (nowQuant + quant));
  //       }
  //     }
  //   }
  // }



  // void TailorTryCraftItem()
  // {
  //   PlayerBase pl = PlayerBase.Cast(GetGame().GetPlayer());
  //   if (pl)
  //   {
  //     if (pl.CanCraft())
  //     {
  //       pl.CanCraft = false;
  //       m_ProgressCraftBar.SetCurrent(0);
  //       m_ProgressCraftBar.Show(true);
  //       EffectSound sound =	SEffectManager.PlaySoundOnObject( "Craft_SoundSet", GetGame().GetPlayer() );
  //       sound.SetSoundAutodestroy( true );
  //       TailorStartProgress();
  //       m_BtnCraft.Enable(false);
  //       m_ImgCraft.SetImage(0);
  //     }
  //     else
  //     {
  //       g_TailorCraftManager.SelfChatMessage("Not so fast.");
  //     }
  //   }
  // }

  // void TailorStartProgress()
  // {
  //   GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( TailorStartProgress, 10, false);
  //   progressCounter += 0.5;
  //   m_ProgressCraftBar.SetCurrent(progressCounter);
  //   if (m_ProgressCraftBar.GetCurrent() == 100)
  //   {
  //     PlayerBase pl = PlayerBase.Cast(GetGame().GetPlayer());
  //     if (pl)
  //     {
  //         pl.RPCSingleParam(SRPc.CLIENT_REQUEST_CRAFT_TAILORITEMS, new Param2<TailorCraftItem, ItemBase>(crItm, g_TailorCraftManager.GetTWB()), true, null);
  //     }
  //     GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).Remove(TailorStartProgress);
  //     progressCounter = 0;
  //     m_ProgressCraftBar.Show(false);
  //     GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( TailorReloadBench, 1000, false);
  //   }
  // }

  // void TailorReloadBench()
  // {
  //   PlayerBase pl = PlayerBase.Cast(GetGame().GetPlayer());
  //   g_TailorCraftManager.m_ExItems.Clear();
  //   TailorScanItems();
  //   g_TailorCraftManager.DeleteEntities();
  //   TailorClearCraftItemsBuffer();
  //   TailorSetupItems(crItm);
  //   pl.CanCraft = true;
  // }

  //--------------------------------------------------------------------------
  // void TailorSetupItems(TailorCraftItem crItem)
  // {
  //   string attchts = "";
  //   m_NedeedAttachms.SetText(attchts);
  //   m_BtnCraft.Enable(false);
  //   m_ImgCraft.SetImage(0);
  //   TempIngrsArray.Clear();
  //   if (m_MainEnt) GetGame().ObjectDeleteOnClient(m_MainEnt);
  //   m_MainEnt = EntityAI.Cast(GetGame().CreateObject(crItem.Result, vector.Zero, true));
  //   if (m_MainEnt)
  //   {
  //     crItm = crItem;
  //     m_ItemPreviewWidget.SetItem(m_MainEnt);
  //     m_ItemPreviewWidget.SetView(m_MainEnt.GetViewIndex());
  //     m_ItemPreviewWidget.SetModelPosition(Vector(0,0,1));
  //     m_TextItemName.SetText(m_MainEnt.GetDisplayName());
  //     m_ItemResultCount.SetText(crItem.ResultCount.ToString());
  //     for (int i = 0; i < crItem.CraftComponents.Count(); i++)
  //     {
  //         FillIngrsWidget(crItem.CraftComponents.Get(i));
  //     }
  //     for (int j = 0; j < crItem.AttachmentsNeed.Count(); j++)
  //     {
  //         attchts = attchts + crItem.AttachmentsNeed.Get(j);
  //         if ((crItem.AttachmentsNeed.Count() - j) != 1 )
  //         attchts = attchts + ",";
  //     }
  //     m_NedeedAttachms.SetText(attchts);
  //   }
  //   if (CheckCondition() && TWBHasAllAttachments(crItem))
  //   {
  //       m_BtnCraft.Enable(true);
  //       m_ImgCraft.SetImage(1);
  //   }
  // }

  // void FillIngrsWidget(TailorCraftComponent cc)
  // {
  //   TailorOneItemForCraft itCraft = new TailorOneItemForCraft();
  //   Widget w = itCraft.Init(m_WrapSpacerWidget, cc);
  //   TempIngrsArray.Insert(itCraft);
  // }

  // bool CheckCondition()
  // {
  //   for (int i = 0; i < TempIngrsArray.Count(); i++)
  //   {
  //     TailorOneItemForCraft tmp = TempIngrsArray.Get(i);
  //     if (!(tmp && tmp.EnoughIngrs))
  //     {
  //         return false;
  //     }
  //   }
  //     return true;
  // }

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
      Print("widget id is 25 " + w);
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