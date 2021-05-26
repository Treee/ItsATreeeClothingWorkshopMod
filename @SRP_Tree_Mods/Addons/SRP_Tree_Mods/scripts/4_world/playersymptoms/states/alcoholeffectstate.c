class AlcoholEffectSymptom extends SymptomBase
{
  float m_hue = 65;

  float m_radial = 0;
  float m_radialMax = 4;
  float m_radialMin = 0;
  float m_radialIntensity = 0.5;

	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_SymptomIDs.SYMPTOM_ALCOHOL;
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
    if (m_radial > m_radialMax) {
      m_radialIntensity *= -1;
    } else if (m_radial < m_radialMin) {
      m_radialIntensity *= -1;
    }
    m_radial += (m_radialIntensity * deltatime);
    CameraEffects.changeRadBlurXEffect(m_radial);
    CameraEffects.changeRadBlurYEffect(m_radial);
    CameraEffects.changeHue(m_hue);
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
    CameraEffects.changeRadBlurXEffect(0);
    CameraEffects.changeRadBlurYEffect(0);
    CameraEffects.changeHue(60);
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
}
