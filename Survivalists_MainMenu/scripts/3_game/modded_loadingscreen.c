class SRP_ImageFileHelper
{
    static protected int m_NumLoadingScreenImages = -1;
    static protected string m_LoadingScreenFolder = "Survivalists_MainMenu/gui/imagesets/loadingscreen";
    static protected string m_LoadingScreenPrefix = "srp_loadingscreen";

    static int GetTotalLoadingScreenImages()
    {
        if (m_NumLoadingScreenImages == -1)
        {
            m_NumLoadingScreenImages = 0;

            string fileName;
            FileAttr fileAttr;

            string folder = string.Format("%1/*", m_LoadingScreenFolder);
            FindFileHandle findFileHandle = FindFile( folder, fileName, fileAttr, FindFileFlags.ALL);
            // PrintFormat("No Images Loaded; Load Images From %1", folder);
            if ( findFileHandle )
            {
                if ( fileName.Length() > 0 && !( fileAttr & FileAttr.DIRECTORY) )
                {
                    if (IsLoadingScreenImage(fileName))
                        m_NumLoadingScreenImages++;
                }

                while ( FindNextFile( findFileHandle, fileName, fileAttr ) )
                {
                    if (IsLoadingScreenImage(fileName))
                        m_NumLoadingScreenImages++;
                }
            }
            CloseFindFile( findFileHandle );
            // PrintFormat("Loaded %1 images from %2", m_NumLoadingScreenImages, folder);
        }
        return m_NumLoadingScreenImages;
    }
    static bool IsLoadingScreenImage(string fileName)
    {
        fileName.ToLower();
        if (fileName.Contains(m_LoadingScreenPrefix))
        {
            TStringArray parts = {};
		    fileName.Split(".", parts);
            if (parts.Count() == 2)
            {
                string extension = parts.Get(1);
                if (extension == "edds")
                {
                    // PrintFormat("Loading Screen File Found: %1 with extension %2", fileName, extension);
                    return true;
                }
            }
        }
        return false;
    }
    static string ConstructLoadingScreenPath()
    {
        int count = GetTotalLoadingScreenImages() - 1;
        string path = string.Format("%1/%2%3.edds", m_LoadingScreenFolder, m_LoadingScreenPrefix, Math.RandomIntInclusive(0, count));
        // PrintFormat("Image Path Constructed: %1", path);
        return path;
    }
}

modded class LoadingScreen
{
	void LoadingScreen(DayZGame game)
	{
        m_ImageLogoMid = null;
        m_ImageLogoCorner = null;
        m_ImageLoadingIcon = null;
        m_ModdedWarning = null;
		m_WidgetRoot = game.GetLoadingWorkspace().CreateWidgets("Survivalists_MainMenu/gui/layouts/srp_loading.layout");
        Class.CastTo(m_TextWidgetTitle, m_WidgetRoot.FindAnyWidget("TextWidget"));
		Class.CastTo(m_TextWidgetStatus, m_WidgetRoot.FindAnyWidget("StatusText"));
		Class.CastTo(m_ImageBackground, m_WidgetRoot.FindAnyWidget("ImageBackground"));
		Class.CastTo(m_ProgressLoading, m_WidgetRoot.FindAnyWidget("LoadingBar"));

		string tmp;
		m_ProgressText = TextWidget.Cast(m_WidgetRoot.FindAnyWidget("ProgressText"));
		if (GetGame())
		{
			m_ProgressText.Show(GetGame().CommandlineGetParam("loadingTest", tmp));
		}
        m_ImageBackground.LoadMaskTexture("Survivalists_MainMenu/gui/imagesets/loadingscreen/srp_loadingscreen_mask.paa");
        m_ImageBackground.LoadImageFile(0, SRP_ImageFileHelper.ConstructLoadingScreenPath());
        m_ImageBackground.Show(true);

        ProgressAsync.SetProgressData(null);
		ProgressAsync.SetUserData(null);

		ProgressAsync.SetProgressData(m_ProgressLoading);
		ProgressAsync.SetUserData(m_ImageBackground);
	}
	override void Show()
	{
		Widget lIcon = m_ImageBackground;
		Widget pText = m_ProgressLoading;
		m_ProgressText.SetText("");
		m_ProgressLoading.SetCurrent(0.0);
		m_ImageBackground.SetMaskProgress(0.0);

		if (!m_WidgetRoot.IsVisible())
		{
			if (m_DayZGame.GetUIManager().IsDialogVisible())
				m_DayZGame.GetUIManager().HideDialog();

            // m_ImageBackground = ImageWidget.Cast(m_WidgetRoot.FindAnyWidget("ImageBackground"));
            m_ImageBackground.LoadImageFile(0, SRP_ImageFileHelper.ConstructLoadingScreenPath());
            m_ImageBackground.Show(true);

            if (m_DayZGame.GetMissionState() == DayZGame.MISSION_STATE_MAINMENU)
				m_TextWidgetStatus.Show(true);
			else
				m_TextWidgetStatus.Show(false);

			m_WidgetRoot.Show(true);
			m_TextWidgetTitle.SetText("");
			m_TextWidgetStatus.SetText("");
		}

		ProgressAsync.SetProgressData(pText);
		ProgressAsync.SetUserData(lIcon);
	}
}

modded class LoginTimeBase
{
    protected ImageWidget m_background;
	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("Survivalists_MainMenu/gui/layouts/srp_dialog_login_time.layout");

        m_txtDescription = TextWidget.Cast( layoutRoot.FindAnyWidget("txtDescription") );
		m_txtLabel = TextWidget.Cast( layoutRoot.FindAnyWidget("txtLabel") );
		m_btnLeave = ButtonWidget.Cast( layoutRoot.FindAnyWidget("btnLeave") );
        m_txtDescription.Show(true);

        m_background = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background"));
        m_background.LoadMaskTexture("Survivalists_MainMenu/gui/imagesets/loadingscreen/srp_loadingscreen_mask.paa");
		return layoutRoot;
	}

    override void Show()
	{
		if (layoutRoot)
		{
			layoutRoot.Show(true);
			m_HintPanel	= new UiHintPanelLoading(layoutRoot.FindAnyWidget("hint_frame0"));
            m_background.LoadImageFile(0, SRP_ImageFileHelper.ConstructLoadingScreenPath());
		}
	}
}

modded class LoginQueueBase
{
    protected ImageWidget m_background;
	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("Survivalists_MainMenu/gui/layouts/srp_dialog_queue_position.layout");
		m_HintPanel	= new UiHintPanelLoading(layoutRoot.FindAnyWidget("hint_frame0"));
		m_txtPosition = TextWidget.Cast( layoutRoot.FindAnyWidget("txtPosition") );
		m_txtNote = TextWidget.Cast( layoutRoot.FindAnyWidget("txtNote") );
		m_btnLeave = ButtonWidget.Cast( layoutRoot.FindAnyWidget("btnLeave") );

        m_background = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background"));
        m_background.LoadMaskTexture("Survivalists_MainMenu/gui/imagesets/loadingscreen/srp_loadingscreen_mask.paa");
        m_txtNote.Show(true);

        return layoutRoot;
	}

    override void Show()
	{
		if (layoutRoot)
		{
			layoutRoot.Show(true);
            m_background.LoadImageFile(0, SRP_ImageFileHelper.ConstructLoadingScreenPath());
		}
	}
}