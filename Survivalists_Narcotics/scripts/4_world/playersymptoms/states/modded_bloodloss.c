modded class BloodLoss extends SymptomBase
{
  override void OnUpdateClient(PlayerBase player, float deltatime)
	{
		if( player.IsPlayerSelected() && player.GetTransferValues() && player.GetTransferValues().GetBlood() != m_BloodSet ) 
		{
			m_BloodSet = player.GetTransferValues().GetBlood();
			if (m_BloodSet < 1.0 && !player.IsUnderTheInfluence())
			{
        // Print("player is not under the influence AND blood is less than 1")
				m_RequesterBloodLoss.SetBloodLossLevel(m_BloodSet);
			}
			else
			{
        // Print("requester is stopped");
				m_RequesterBloodLoss.Stop();
			}
		}
	}
};