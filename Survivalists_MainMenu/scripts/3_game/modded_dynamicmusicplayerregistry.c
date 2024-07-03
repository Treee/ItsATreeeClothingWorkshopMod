class DynamicMusicPlayerRegistrySurvivalists extends DynamicMusicPlayerRegistry
{
	void DynamicMusicPlayerRegistrySurvivalists()
	{
		m_WorldName = "deerisle";
	}

    override protected void RegisterTracksMenu()
	{
		m_TracksMenu = new array<ref DynamicMusicTrackData>();

		RegisterTrackMenu("Survivalists_MainMenu_1_SoundSet");
		RegisterTrackMenu("Survivalists_MainMenu_2_SoundSet");
		RegisterTrackMenu("Survivalists_MainMenu_3_SoundSet");
		RegisterTrackMenu("Survivalists_MainMenu_4_SoundSet");
		RegisterTrackMenu("Survivalists_MainMenu_5_SoundSet");
		RegisterTrackMenu("Survivalists_MainMenu_6_SoundSet");
		RegisterTrackMenu("Survivalists_MainMenu_7_SoundSet");
	}

	override protected void RegisterTracksLocationStatic()
	{
		super.RegisterTracksLocationStatic();
        // eventually add points of interest to this
	}
}