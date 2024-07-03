modded class IntroSceneCharacter
{
	protected ref TStringArray	m_CharBeardList					= new TStringArray; //legacy

	//==============================================
	// GetCharBeardsList
	//==============================================
	TStringArray GetCharBeardsList()
	{
		return m_CharBeardList;
	}

	//==============================================
	// LoadCharacterData
	//==============================================
	override void LoadCharacterData(vector char_pos, vector char_rot, bool default_char = false)
	{
        super.LoadCharacterData(char_pos, char_rot, default_char);
		g_Game.ConfigGetTextArray("cfgCharacterCreation mask",	m_CharBeardList);
	}
}