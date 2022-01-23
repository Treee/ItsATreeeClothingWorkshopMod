class SmileAcidEffectSymptom extends SymptomBase
{
  PPERequester_SRPAcidEffect m_RequesterDrugEffect;

  float startingPointSaturation = 1;
  float endingPointSaturation = 5;
  float currentSaturation = 1;
  float accumulatedSaturation = 0;
  float saturationMultiplier = 0.1;

  float startingPointBlur = 0;
  float endingPointBlur = 1;
  float currentBlur = 0;
  float accumulatedBlur = 0;
  float blurMultiplier = 0.1;

  float startingPointChromaX = 0;
  float endingPointChromaX = 1.5;
  float currentChromaX = 0;
  float accumulatedChromaX = 0;
  float chromaXMultiplier = 0.1;

  float startingPointChromaY = 0;
  float endingPointChromaY = 1.5;
  float currentChromaY = 0;
  float accumulatedChromaY = 0;
  float chromaYMultiplier = 0.1;

  float scarySoundBuildUp = 0;
  float happysoundBuildUp = 0;
  float randomSymptomBuildUp = 0;

	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_SymptomIDs.SYMPTOM_ACIDSMILE;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;
		m_SyncToClient = true;
    if ( !GetGame().IsDedicatedServer() )
		{
			Class.CastTo(m_RequesterDrugEffect,PPERequester_SRPAcidEffect.Cast(PPERequesterBank.GetRequester(PPERequester_SRPAcidEffect)));
		}
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
    player.m_IsUnderAcidEffect = true;
    // Print("Water Pre reduction: " + player.GetStatWater().Get().ToString() + " Food Pree reduction: " + player.GetStatEnergy().Get().ToString() + " reduced by amount: " + (deltatime * -0.2));
    player.AddHealth("", "Blood", (0.5 * deltatime));
    
    float m_randomChance = Math.RandomFloatInclusive(0,1);
    if (m_randomChance >= 0 && m_randomChance < 0.03 && randomSymptomBuildUp >= 20) 
    {
      m_randomChance = Math.RandomFloatInclusive(0,1);
      if (m_randomChance < 0.4) 
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
      } 
      else if (m_randomChance >= 0.4 && m_randomChance < 0.6)
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_HOT);
      } 
      else if (m_randomChance >= 0.6 && m_randomChance < 0.1)
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_SNEEZE);
      } 
      randomSymptomBuildUp = 0;
    }
    randomSymptomBuildUp += deltatime;
	}

	
	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    // Print("smile acid effect active");
    player.m_IsUnderAcidEffect = true;
    if (currentSaturation > endingPointSaturation && saturationMultiplier > 0)
    {
      saturationMultiplier *= -1;
    }
    else if (currentSaturation < startingPointSaturation && saturationMultiplier < 0)
    {
      saturationMultiplier *= -1;
    }

    if (currentBlur > endingPointBlur && blurMultiplier > 0)
    {
      blurMultiplier *= -1;
    }
    else if (currentBlur < startingPointBlur && blurMultiplier < 0)
    {
      blurMultiplier *= -1;
    }

    if (currentChromaX > endingPointChromaX && chromaXMultiplier > 0)
    {
      chromaXMultiplier *= -1;
    }
    else if (currentChromaX < startingPointChromaX && chromaXMultiplier < 0)
    {
      chromaXMultiplier *= -1;
    }

    if (currentChromaY > endingPointChromaY && chromaYMultiplier > 0)
    {
      chromaYMultiplier *= -1;
    }
    else if (currentChromaY < startingPointChromaY && chromaYMultiplier < 0)
    {
      chromaYMultiplier *= -1;
    }

    currentSaturation = Math.Lerp(startingPointSaturation, endingPointSaturation, accumulatedSaturation);  
    currentBlur = Math.Lerp(startingPointBlur, endingPointBlur, accumulatedBlur);  
    currentChromaX = Math.Lerp(startingPointChromaX, endingPointChromaX, accumulatedChromaX);  
    currentChromaY = Math.Lerp(startingPointChromaY, endingPointChromaY, accumulatedChromaY);  
    
    m_RequesterDrugEffect.SetGlowSaturation(currentSaturation);
    m_RequesterDrugEffect.SetRadialBlur(currentBlur, currentBlur);
    m_RequesterDrugEffect.SetCromaticAberration(currentChromaX, currentChromaY);

    accumulatedSaturation += (deltatime * saturationMultiplier);
    accumulatedBlur += (deltatime * blurMultiplier);
    accumulatedChromaY += (deltatime * chromaYMultiplier);
    accumulatedChromaX += (deltatime * chromaXMultiplier);

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
    player.m_IsUnderAcidEffect = false;
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
    player.m_IsUnderAcidEffect = false;
    m_RequesterDrugEffect.SetGlowSaturation();
    m_RequesterDrugEffect.SetRadialBlur();
    m_RequesterDrugEffect.SetCromaticAberration();
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
}
