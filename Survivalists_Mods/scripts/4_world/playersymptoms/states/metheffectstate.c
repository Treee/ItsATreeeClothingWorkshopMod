class MethEffectSymptom extends SymptomBase
{
  PPERequester_SRPMethEffect m_RequesterDrugEffect;

  float startingPointBlur = 0;
  float endingPointBlur = 0.1;
  float currentBlur = 0;
  float accumulatedBlur = 0;
  float blurMultiplier = 0.1;

  float foodBuildUp = 0;

  float scarySoundBuildUp = 0;
  float happysoundBuildUp = 0;

	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_SymptomIDs.SYMPTOM_METH;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;
		m_SyncToClient = true;
    if ( !GetGame().IsDedicatedServer() )
		{
			Class.CastTo(m_RequesterDrugEffect,PPERequester_SRPMethEffect.Cast(PPERequesterBank.GetRequester(PPERequester_SRPMethEffect)));
		}
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
    // Print("Water Pre reduction: " + player.GetStatWater().Get().ToString() + " Food Pree reduction: " + player.GetStatEnergy().Get().ToString() + " reduced by amount: " + (deltatime * -0.2));
    player.GetStatWater().Add(deltatime * -0.5);
    player.GetStatEnergy().Add(deltatime * 0.3);
    // player.AddHealth("", "Blood", (-2.5 * deltatime));
    foodBuildUp += (deltatime * 0.5);
	}

	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    currentBlur = Math.Lerp(startingPointBlur, endingPointBlur, accumulatedBlur);

    m_RequesterDrugEffect.SetRadialBlur(currentBlur, currentBlur, 100, 100);
    if (accumulatedBlur < 1)
    {
      accumulatedBlur += (deltatime * blurMultiplier);
    }

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
    // reduce food by 1.5 of gained amount during effect
    player.GetStatEnergy().Add(-(foodBuildUp + (foodBuildUp * 0.5)));
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
    m_RequesterDrugEffect.SetRadialBlur();
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
}
