class AlcoholEffectSymptom extends SymptomBase
{
  PPERequester_SRPAlcoholEffect m_RequesterDrugEffect;

  float startingPointSaturation = 1;
  float endingPointSaturation = 1.5;
  float currentSaturation = 1;
  float accumulatedSaturation = 0;
  float saturationMultiplier = 0.1;

  float startingPointBlur = 0;
  float endingPointBlur = 0.5;
  float currentBlur = 0;
  float accumulatedBlur = 0;
  float blurMultiplier = 0.1;

  float startingPointOffsetX = 0;
  float endingPointOffsetX = 0.3;
  float currentOffsetX = 0;
  float accumulatedOffsetX = 0;
  float offsetXMultiplier = 0.1;

  float startingPointOffsetY = 0;
  float endingPointOffsetY = 0.2;
  float currentOffsetY = 0;
  float accumulatedOffsetY = 0;
  float offsetYMultiplier = 0.1;

  float laughCounter = 0;

	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_SymptomIDs.SYMPTOM_ALCOHOL;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;
		m_SyncToClient = true;
    if ( !GetGame().IsDedicatedServer() )
		{
			Class.CastTo(m_RequesterDrugEffect,PPERequester_SRPAlcoholEffect.Cast(PPERequesterBank.GetRequester(PPERequester_SRPAlcoholEffect)));
		}
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
    player.m_IsUnderAlcoholEffect = true;
    // Print("Water Pre reduction: " + player.GetStatWater().Get().ToString() + " Food Pree reduction: " + player.GetStatEnergy().Get().ToString() + " reduced by amount: " + (deltatime * -0.2));
    player.GetStatWater().Add(deltatime * -0.2);
    player.GetStatEnergy().Add(deltatime * -0.1);

    if (laughCounter > 35)
    {
      if (Math.RandomFloatInclusive(0,1) <= 0.1)
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
        laughCounter = 0;
      }
    }
    laughCounter += deltatime;
	}
	
	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    // Print("alcohol effect active");
    player.m_IsUnderAlcoholEffect = true;
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

    if (currentOffsetX > endingPointOffsetX && offsetXMultiplier > 0)
    {
      offsetXMultiplier *= -1;
    }
    else if (currentOffsetX < startingPointOffsetX && offsetXMultiplier < 0)
    {
      offsetXMultiplier *= -1;
    }
    if (currentOffsetY > endingPointOffsetY && offsetYMultiplier > 0)
    {
      offsetYMultiplier *= -1;
    }
    else if (currentOffsetY < startingPointOffsetY && offsetYMultiplier < 0)
    {
      offsetYMultiplier *= -1;
    }

    currentSaturation = Math.Lerp(startingPointSaturation, endingPointSaturation, accumulatedSaturation);  
    currentBlur = Math.Lerp(startingPointBlur, endingPointBlur, accumulatedBlur);
    currentOffsetX = Math.Lerp(startingPointOffsetX, endingPointOffsetX, accumulatedOffsetX);
    currentOffsetY = Math.Lerp(startingPointOffsetY, endingPointOffsetY, accumulatedOffsetY);

    m_RequesterDrugEffect.SetGlowSaturation(currentSaturation);
    m_RequesterDrugEffect.SetRadialBlur(currentBlur, currentBlur, currentOffsetX, currentOffsetY);
    
    accumulatedSaturation += (deltatime * saturationMultiplier);
    accumulatedBlur += (deltatime * blurMultiplier);
    accumulatedOffsetX += (deltatime * offsetXMultiplier);
    accumulatedOffsetY += (deltatime * offsetYMultiplier);
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
    player.m_IsUnderAlcoholEffect = false;
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
    laughCounter = 0;    
    player.m_IsUnderAlcoholEffect = false;
    m_RequesterDrugEffect.SetGlowSaturation();
    m_RequesterDrugEffect.SetRadialBlur();
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
}
