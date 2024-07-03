class DynamicMusicPlayerRegistrySurvivalists : DynamicMusicPlayerRegistry
{
	void DynamicMusicPlayerRegistrySurvivalists()
	{
		m_WorldName = "deerisle";
	}

    override protected void RegisterTracksMenu()
	{
		m_TracksMenu = new array<ref DynamicMusicTrackData>();

		RegisterTrackMenu("Survivalists_MainMenu_1_SoundSet", true);
		RegisterTrackMenu("Music_Menu_SoundSet");
		RegisterTrackMenu("Music_Menu_2_SoundSet");
		RegisterTrackMenu("Music_Menu_3_SoundSet");
	}

	override protected void RegisterTracksLocationStatic()
	{
		super.RegisterTracksLocationStatic();
        // eventually add points of interest to this
	}

}
