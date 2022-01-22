class TobaccoEffectSymptom extends SymptomBase
{
  PPERequester_SRPTobaccoEffect m_RequesterDrugEffect;

  float startingPointSaturation = 1;
  float endingPointSaturation = 2;
  float currentSaturation = 1;
  float accumulatedSaturation = 0;
  float saturationMultiplier = 0.1;

  float startingPointBlur = 0;
  float endingPointBlur = 0.08;
  float currentBlur = 0;
  float accumulatedBlur = 0;
  float blurMultiplier = 0.2;

  float coughCounter = 0;

	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_SymptomIDs.SYMPTOM_TOBACCO;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;
		m_SyncToClient = true;
    if ( !GetGame().IsDedicatedServer() )
		{
			Class.CastTo(m_RequesterDrugEffect,PPERequester_SRPTobaccoEffect.Cast(PPERequesterBank.GetRequester(PPERequester_SRPTobaccoEffect)));
		}
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
    player.m_IsUnderTobaccoEffect = true;
    player.GetStatWater().Add(deltatime * -0.2);
    player.GetStatEnergy().Add(deltatime * 0.1);

    if (coughCounter > 35)
    {
      if (Math.RandomFloatInclusive(0,1) <= 0.1)
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
        coughCounter = 0;
      }
    }
    coughCounter += deltatime;
	}

	
	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    player.m_IsUnderTobaccoEffect = true;
    if (currentSaturation > endingPointSaturation && saturationMultiplier > 0)
    {
      saturationMultiplier *= -1;
    }
    else if (currentSaturation < startingPointSaturation && saturationMultiplier < 0)
    {
      saturationMultiplier *= -1;
    }
    currentSaturation = Math.Lerp(startingPointSaturation, endingPointSaturation, accumulatedSaturation);  

    if (currentBlur > endingPointBlur && blurMultiplier > 0)
    {
      blurMultiplier *= -1;
    }
    else if (currentBlur < startingPointBlur && blurMultiplier < 0)
    {
      blurMultiplier *= -1;
    }
    currentBlur = Math.Lerp(startingPointBlur, endingPointBlur, accumulatedBlur);

    m_RequesterDrugEffect.SetGlowSaturation(currentSaturation);
    m_RequesterDrugEffect.SetRadialBlur(currentBlur, currentBlur);
    accumulatedSaturation += (deltatime * saturationMultiplier);
    accumulatedBlur += (deltatime * blurMultiplier);
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
    player.m_IsUnderTobaccoEffect = false;
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
    coughCounter = 0;
    saturationMultiplier = 0;
    player.m_IsUnderTobaccoEffect = false;
    m_RequesterDrugEffect.SetGlowSaturation();
    m_RequesterDrugEffect.SetRadialBlur();
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
}
