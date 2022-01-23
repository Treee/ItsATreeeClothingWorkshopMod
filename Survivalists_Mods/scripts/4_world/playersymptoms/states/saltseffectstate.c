class SaltsEffectSymptom extends SymptomBase
{
  PPERequester_SRPBathSaltEffect m_RequesterDrugEffect;

  float startingPointSaturation = 1;
  float endingPointSaturation = 5;
  float currentSaturation = 1;
  float accumulatedSaturation = 0;
  float saturationMultiplier = 0.1;

  float startingPointBlur = 0;
  float endingPointBlur = 2;
  float currentBlur = 0;
  float accumulatedBlur = 0;
  float blurMultiplier = 0.1;

  float foodBuildUp = 0;
  float waterBuildUp = 0;

  float scarySoundBuildUp = 0;
  float happysoundBuildUp = 0;

	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_SymptomIDs.SYMPTOM_BATHSALTS;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;
		m_SyncToClient = true;
    if ( !GetGame().IsDedicatedServer() )
		{
			Class.CastTo(m_RequesterDrugEffect,PPERequester_SRPBathSaltEffect.Cast(PPERequesterBank.GetRequester(PPERequester_SRPBathSaltEffect)));
		}
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
    player.m_IsUnderBathEffect = true;
    // Print("Water Pre reduction: " + player.GetStatWater().Get().ToString() + " Food Pree reduction: " + player.GetStatEnergy().Get().ToString() + " reduced by amount: " + (deltatime * -0.2));
    player.GetStatWater().Add(deltatime * 1);
    player.GetStatEnergy().Add(deltatime * 1);
    player.AddHealth("", "Blood", (-2.5 * deltatime));
    foodBuildUp += (deltatime * 1);
    waterBuildUp += (deltatime * 1);
	}

	
	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    // Print("Salt effect active");
    player.m_IsUnderBathEffect = true;
    if (currentSaturation > endingPointSaturation && saturationMultiplier > 0)
    {
      saturationMultiplier *= -1;
    }
    else if (currentSaturation < startingPointSaturation && saturationMultiplier < 0)
    {
      saturationMultiplier *= -1;
    }
    currentSaturation = Math.Lerp(startingPointSaturation, endingPointSaturation, accumulatedSaturation);  
    m_RequesterDrugEffect.SetGlowSaturation(currentSaturation);
    accumulatedSaturation += (deltatime * saturationMultiplier);

    if (currentBlur > endingPointBlur && blurMultiplier > 0)
    {
      blurMultiplier *= -1;
    }
    else if (currentBlur < startingPointBlur && blurMultiplier < 0)
    {
      blurMultiplier *= -1;
    }
    currentBlur = Math.Lerp(startingPointBlur, endingPointBlur, accumulatedBlur);  
    m_RequesterDrugEffect.SetRadialBlur(currentBlur, currentBlur);
    accumulatedBlur += (deltatime * blurMultiplier);

    float m_randomChance = Math.RandomFloatInclusive(0,1);
    if (m_randomChance < 0.05 && scarySoundBuildUp >= 35) 
    {
      player.PlayScarySound();
      scarySoundBuildUp = 0;
    } 
    else if (m_randomChance >= 0.05 && m_randomChance < 0.1 && happysoundBuildUp >= 75) 
    {
      player.PlayHappySound();
      happysoundBuildUp = 0;
    }
    scarySoundBuildUp += deltatime;
    happysoundBuildUp += deltatime;
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
    player.m_IsUnderBathEffect = false;
    player.GetStatEnergy().Add(-(foodBuildUp + (foodBuildUp * 0.5)));
    player.GetStatWater().Add(-(waterBuildUp + (waterBuildUp * 0.5)));
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
    player.m_IsUnderBathEffect = false;
    m_RequesterDrugEffect.SetGlowSaturation();
    m_RequesterDrugEffect.SetRadialBlur();
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
}
