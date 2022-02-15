class CocaineEffectSymptom extends SymptomBase
{  
  float scarySoundBuildUp = 0;
  float happysoundBuildUp = 0;
  float randomSymptomBuildUp = 0;
  float foodBuildUp = 0;

	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_DrugSymptomIDs.SYMPTOM_COCAINE;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;
		m_SyncToClient = true;
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
    player.m_IsUnderCocaineEffect = true;
    // Print("Water Pre reduction: " + player.GetStatWater().Get().ToString() + " Food Pree reduction: " + player.GetStatEnergy().Get().ToString() + " reduced by amount: " + (deltatime * -0.2));
    player.GetStatEnergy().Add(deltatime * 0.1);
    foodBuildUp += (deltatime * 0.1);

    float m_randomChance = Math.RandomFloatInclusive(0,1);
    if (m_randomChance >= 0 && m_randomChance < 0.03 && randomSymptomBuildUp >= 20) 
    {
      m_randomChance = Math.RandomFloatInclusive(0,1);
      if (m_randomChance < 0.3) 
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_LAUGHTER);
      } 
      else if (m_randomChance >= 0.3 && m_randomChance < 0.6)
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_HOT);
      } 
      else if (m_randomChance >= 0.6 && m_randomChance < 1)
      {
        player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_SNEEZE);
      } 
      randomSymptomBuildUp = 0;
    }
    randomSymptomBuildUp += deltatime;
	}

	
	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    // Print("skull acid effect active");
    player.m_IsUnderCocaineEffect = true;                

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
    player.m_IsUnderCocaineEffect = false;
    player.GetStatEnergy().Add(-(foodBuildUp + (foodBuildUp * 0.5)));
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
    player.m_IsUnderCocaineEffect = false;
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
};
