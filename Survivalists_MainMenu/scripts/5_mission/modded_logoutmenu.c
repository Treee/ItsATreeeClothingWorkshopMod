modded class LogoutMenu
{
	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("Survivalists_MainMenu/gui/layouts/srp_day_z_logout_dialog.layout");

		m_LogoutTimeText = TextWidget.Cast( layoutRoot.FindAnyWidget("txtLogoutTime") );
		m_DescriptionText = TextWidget.Cast( layoutRoot.FindAnyWidget("txtDescription") );
		m_bCancel = ButtonWidget.Cast( layoutRoot.FindAnyWidget("bCancel") );

		m_bCancel.Show( true );

		layoutRoot.FindAnyWidget("toolbar_bg").Show( false );

		// player should lay down if possible
		PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
		if (player.GetEmoteManager() && !player.IsRestrained() && !player.IsUnconscious())
		{
			player.GetEmoteManager().CreateEmoteCBFromMenu(EmoteConstants.ID_EMOTE_LYINGDOWN);
			player.GetEmoteManager().GetEmoteLauncher().SetForced(EmoteLauncher.FORCE_DIFFERENT);
		}

		return layoutRoot;
	}
    override void SetLogoutTime()
	{
		m_LogoutTimeText.SetText("You will be disconnected shortly");
	}
}