modded class MissionBase
{
    override void InitialiseWorldData()
	{
		string worldName = "empty";
		GetGame().GetWorldName(worldName);
		worldName.ToLower();
        // JMC hard overrides this method so do our magic
        if (worldName == "deerisle")
        {
            m_WorldData = new DeerisleData();
            m_DynamicMusicPlayerRegistry = new DynamicMusicPlayerRegistrySurvivalists();
        }
        else
            super.InitialiseWorldData();
	}
}