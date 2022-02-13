class SkullAcidEffectSymptom extends SymptomBase
{
  PPERequester_SRPDrugEffect m_RequesterDrugEffect;

  float scarySoundBuildUp = 0;
  float happysoundBuildUp = 0;
  float randomSymptomBuildUp = 0;

	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_SymptomIDs.SYMPTOM_ACIDSKULL;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;
		m_SyncToClient = true;
    if ( !GetGame().IsDedicatedServer() )
		{
			Class.CastTo(m_RequesterDrugEffect,PPERequester_SRPDrugEffect.Cast(PPERequesterBank.GetRequester(PPERequester_SRPDrugEffect)));
		}
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
    player.m_IsUnderAcidSkullEffect = true;
    // Print("Water Pre reduction: " + player.GetStatWater().Get().ToString() + " Food Pree reduction: " + player.GetStatEnergy().Get().ToString() + " reduced by amount: " + (deltatime * -0.2));
    player.AddHealth("", "Blood", (-1.5 * deltatime));

    float m_randomChance = Math.RandomFloatInclusive(0,1);
    if (m_randomChance >= 0 && m_randomChance < 0.03 && randomSymptomBuildUp >= 20) 
    {
      m_randomChance = Math.RandomFloatInclusive(0,1);
      if (m_randomChance < 0.2) 
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
      } 
      else if (m_randomChance >= 0.2 && m_randomChance < 0.4)
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_FREEZE);
      } 
      else if (m_randomChance >= 0.4 && m_randomChance < 0.6)
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_HOT);
      } 
      else if (m_randomChance >= 0.6 && m_randomChance < 0.8)
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_SNEEZE);
      } 
      else if (m_randomChance >= 0.8 && m_randomChance < 1)
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_COUGH);
      }	
      randomSymptomBuildUp = 0;
    }
    randomSymptomBuildUp += deltatime;
	}

	
	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    // Print("skull acid effect active");
    player.m_IsUnderAcidSkullEffect = true;
    m_RequesterDrugEffect.SetGlowSaturation(deltatime, 0.01, "lsdS");
    m_RequesterDrugEffect.SetRadialBlur(deltatime, deltatime, 0.5, 0.5, 0.05, "lsdS");      
    m_RequesterDrugEffect.SetRadialBlurOffset(deltatime, deltatime, 0.03, 0.05, "lsdS");      
    m_RequesterDrugEffect.SetCromaticAberration(deltatime, deltatime, 1.2, 0.9, "lsdS");     

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
    player.m_IsUnderAcidSkullEffect = false;
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
    player.m_IsUnderAcidSkullEffect = false;
    // Print("client deactivate: " + player.IsUnderTheInfluence());
    if (!player.IsUnderTheInfluence())
    {
      // Print("stop requester: " + player.IsUnderTheInfluence());
      m_RequesterDrugEffect.Stop();
    }
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
};
