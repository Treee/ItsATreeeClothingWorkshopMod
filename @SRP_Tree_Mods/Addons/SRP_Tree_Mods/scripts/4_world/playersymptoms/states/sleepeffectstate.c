class SleepEffectSymptom extends SymptomBase
{
  float m_radialOffsetX = 0;  
  float m_radialOffsetY = 0;

  float degreesOffset = 0;

	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_SymptomIDs.SYMPTOM_SLEEP;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;
		m_SyncToClient = true;
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
	}

	
	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    degreesOffset += deltatime;

    // oscilate between 0 and 1.5
    float radialOffsetXValue = 20 * Math.Cos(degreesOffset) + 15;
    float radialOffsetYValue = 20 * Math.Sin(degreesOffset) + 15;


    CameraEffects.changeRadBlurXOffsetEffect(radialOffsetXValue);
    CameraEffects.changeRadBlurYOffsetEffect(radialOffsetYValue);
    // CameraEffects.changeHue(m_hue);
	}
	
	//!gets called once on an Symptom which is being activated
	override void OnGetActivatedServer(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated", m_Player.ToString());
	}

	override void OnGetActivatedClient(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated", m_Player.ToString());
	}

	override void OnGetDeactivatedServer(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
    CameraEffects.changeRadBlurXOffsetEffect(0);
    CameraEffects.changeRadBlurYOffsetEffect(0);
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
}
