class SRP_TirednessNotfr: NotifierBase
{
  // decrease
	protected const float 	DEC_TRESHOLD_LOW 			= 0;
	protected const float 	DEC_TRESHOLD_MED 			= -0.35;
	protected const float 	DEC_TRESHOLD_HIGH			= -0.57;
  // increase
	protected const float 	INC_TRESHOLD_LOW 			= 0;
	protected const float 	INC_TRESHOLD_MED 			= 0.35;
	protected const float 	INC_TRESHOLD_HIGH			= 0.57;
	
	void SRP_TirednessNotfr(NotifiersManager manager)
	{
	}

	override int GetNotifierType()
	{
		return SRP_eNotifiers.SRP_NTF_TIREDNESS;
	}

	override void DisplayTendency(float delta)
	{
		//PrintString("delta:"+delta.ToString());
		int tendency = CalculateTendency(delta, INC_TRESHOLD_LOW, INC_TRESHOLD_MED, INC_TRESHOLD_HIGH, DEC_TRESHOLD_LOW, DEC_TRESHOLD_MED, DEC_TRESHOLD_HIGH);
		//GetVirtualHud().SetStatus(eDisplayElements.DELM_TDCY_ENERGY,tendency);
		
		//DSLevels level = DetermineLevel( GetObservedValue(), PlayerConstants.THRESHOLD_ENERGY_WARNING, PlayerConstants.THRESHOLD_ENERGY_CRITICAL, PlayerConstants.THRESHOLD_ENERGY_BLINKING, PlayerConstants.THRESHOLD_ENERGY_EXTRA );
	
		EStatLevels tiredness_level = m_Player.GetStatLevelTiredness();
    Print(string.Format("tiredness level: %1 from value: %2", tiredness_level, m_Player.GetStatTiredness().Get()));
		DisplayElementTendency dis_elm = DisplayElementTendency.Cast(GetVirtualHud().GetElement(SRP_eDisplayElements.SRP_DELM_TDCY_TIREDNESS));
		
		if( dis_elm )
		{
			dis_elm.SetTendency(tendency);
			dis_elm.SetSeriousnessLevel(tiredness_level);
			
		}
		
		/*
		Print("-----------------------------------------------------------");
		Print("water:"+ typename.EnumToString(EStatLevels,m_Player.GetStatLevelWater()));
		Print("energy:"+ typename.EnumToString(EStatLevels,m_Player.GetStatLevelEnergy()));
		Print("health:"+ typename.EnumToString(EStatLevels,m_Player.GetStatLevelHealth()));
		Print("blood:"+ typename.EnumToString(EStatLevels,m_Player.GetStatLevelBlood()));
		*/
	}

	override void DisplayBadge()
	{
		
	}

	override void HideBadge()
	{
	}

	
	override float GetObservedValue()
	{
    Print("tiredness: " + m_Player.GetStatTiredness().Get());
		return m_Player.GetStatTiredness().Get();
	}
};