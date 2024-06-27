modded class ActionCheckPulse
{
    override static string GetPulseMessage(EPulseType pulse_type, int blood_level)
	{
		string pulse_msg = string.Format("%1 BPM", Math.RandomIntInclusive(100, 120));

		if(pulse_type == EPulseType.IRREGULAR)
			pulse_msg = string.Format("%1 BPM", Math.RandomIntInclusive(200, 220));
		else if( blood_level == EStatLevels.HIGH )
			pulse_msg = string.Format("%1 BPM", Math.RandomIntInclusive(80, 100));
		else if( blood_level == EStatLevels.MEDIUM )
			pulse_msg = string.Format("%1 BPM", Math.RandomIntInclusive(60, 80));
		else if( blood_level == EStatLevels.LOW )
			pulse_msg = string.Format("%1 BPM", Math.RandomIntInclusive(40, 60));
		else if( blood_level == EStatLevels.CRITICAL )
			pulse_msg = string.Format("%1 BPM", Math.RandomIntInclusive(10, 40));

		return pulse_msg;
	}
};