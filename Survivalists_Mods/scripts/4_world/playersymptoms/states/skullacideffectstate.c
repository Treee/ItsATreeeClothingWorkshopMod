class SkullAcidEffectSymptom extends SymptomBase
{
  float m_chromaX = 0;  
  float m_chromaXIntensity = 0.1;
  float m_chromaY = 0;
  float m_chromaYIntensity = 0.1;

  float m_hue = 60;
  float m_hueMax = 60;
  float m_hueMin = 30;
  float m_hueIntensity = 0.1;

	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_SymptomIDs.SYMPTOM_ACIDSKULL;
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
    if (m_hue > m_hueMax && m_hueIntensity > 0) {
      m_hueIntensity *= -1;
    } else if (m_hue < m_hueMin && m_hueIntensity < 0) {
      m_hueIntensity *= -1;
    }
    m_hue += (m_hueIntensity * deltatime); 

    if (m_chromaX > 4 && m_chromaXIntensity > 0) {
      m_chromaXIntensity *= -1;
    } else if (m_chromaX < 2 && m_chromaXIntensity < 0) {
      m_chromaXIntensity *= -1;
    }
    m_chromaX += (m_chromaXIntensity * deltatime);

    if (m_chromaY > 4 && m_chromaYIntensity > 0) {
      m_chromaYIntensity *= -1;
    } else if (m_chromaY < 2 && m_chromaYIntensity < 0) {
      m_chromaYIntensity *= -1;
    }
    m_chromaY += (m_chromaYIntensity * deltatime);


    CameraEffects.changeRadBlurXEffect(4);
    CameraEffects.changeRadBlurYEffect(4);

    CameraEffects.changeChromaX(m_chromaX);
    CameraEffects.changeChromaY(m_chromaY);
    
    CameraEffects.changeHue(m_hue);
	}
	
	//!gets called once on an Symptom which is being activated
	override void OnGetActivatedServer(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated", m_Player.ToString());
	}

	override void OnGetActivatedClient(PlayerBase player)
	{
    // m_chromaX = Math.RandomFloat(2, 3);
    // m_chromaY = Math.RandomFloat(2, 4);

    m_hue = 60;
    m_hueMax = 60;
    m_hueMin = 30;
    m_hueIntensity = -1; // we want to decrease from 60 for starters

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
    CameraEffects.changeChromaX(0);
    CameraEffects.changeChromaY(0);

    CameraEffects.changeHue(60);
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
}
