modded class PlayerBase
{
  ref RadioInterActionData m_RadioInterActionData;

	// void PlayerBase()
	// {		
	// }
	
  RadioInterActionData GetRadioInterActionData()
	{
		if (!m_RadioInterActionData)
		{
			m_RadioInterActionData  = new ref RadioInterActionData();
		}		
		return m_RadioInterActionData;
	}
	
	void ResetRadioInterActionData()
	{
		if (m_RadioInterActionData)
		{
			m_RadioInterActionData.ResetActionIndexes();
		}
	}
};



