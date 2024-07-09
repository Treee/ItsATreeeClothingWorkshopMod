modded class NoteMenu
{
    void NoteMenu()
    {
        GetGame().GetMission().GetHud().ShowQuickbarUI(false);
    }

    void ~NoteMenu()
    {
        MissionGameplay mission;
        if(Class.CastTo(mission, GetGame().GetMission()))
        {
            mission.RemoveActiveInputExcludes({"inventory"}, true);
            mission.RemoveActiveInputRestriction(EInputRestrictors.INVENTORY);
            mission.GetHud().ShowQuickbarUI(true);
        }
    }
    // shim in our layout, connect the buttons
    override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("IAT/Core/LiteraryDevices/gui/iat_notemenu.layout");
		m_edit = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("EditWidget"));
		m_html = HtmlWidget.Cast(layoutRoot.FindAnyWidget("HtmlWidget"));
		m_confirm_button = ButtonWidget.Cast(layoutRoot.FindAnyWidgetById(IDC_OK));

		return layoutRoot;
	}
};