modded class SkullAcidEffectSymptom
{
  PPERequester_SRPDrugEffect m_RequesterDrugEffect;

	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		super.OnInit();
    if ( !GetGame().IsDedicatedServer() )
		{
			Class.CastTo(m_RequesterDrugEffect,PPERequester_SRPDrugEffect.Cast(PPERequesterBank.GetRequester(PPERequester_SRPDrugEffect)));
		}
	}

	override void OnUpdateClient(PlayerBase player, float deltatime)
	{
    // Print("skull acid effect active");
    super.OnUpdateClient(player, deltatime);
    m_RequesterDrugEffect.SetGlowSaturation(deltatime, 0.01, "lsdS");
    m_RequesterDrugEffect.SetRadialBlur(deltatime, deltatime, 0.5, 0.5, 0.05, "lsdS");      
    m_RequesterDrugEffect.SetRadialBlurOffset(deltatime, deltatime, 0.03, 0.05, "lsdS");      
    m_RequesterDrugEffect.SetCromaticAberration(deltatime, deltatime, 1.2, 0.9, "lsdS");     
	}

	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
    super.OnGetDeactivatedClient(player);
    // Print("client deactivate: " + player.IsUnderTheInfluence());
    if (!player.IsUnderTheInfluence())
    {
      // Print("stop requester: " + player.IsUnderTheInfluence());
      m_RequesterDrugEffect.Stop();
    }
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
};
