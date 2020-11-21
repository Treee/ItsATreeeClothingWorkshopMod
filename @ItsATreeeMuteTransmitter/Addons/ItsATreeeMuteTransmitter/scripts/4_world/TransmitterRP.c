modded class TransmitterBase extends ItemTransmitter
{
	bool m_Muted = false;
	
	bool IsMuted()
	{
		return m_Muted;
	}
	
	void MuteTransmitter()
	{
		EnableBroadcast(false);
		m_Muted = true;
	}
	
	void UnMuteTransmitter()
	{
		EnableBroadcast(true);
		m_Muted = false;
	}

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionToggleMuteTransmitter);
	}
}