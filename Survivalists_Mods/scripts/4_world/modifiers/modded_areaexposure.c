modded class AreaExposureMdfr
{
	override void OnActivate(PlayerBase player)
	{
    // Print("AreaExposureMdfr::OnActivate::Start");
    if (player && player.SRPIgnoreContaminatedArea(0.0))
    {
      if (player.GetSingleAgentCount(DUB_MutantAgent.MUTANT_AGENT) >= 9600)
      {
        // Print("OnActivate::Turn on biohazard heal");
        player.GetModifiersManager().ActivateModifier(DUB_Modifiers.MDF_BioHazardHeal);
      }
      // Print("OnActivate::Mutant: return from activation");
      return;
    }
    else
    {
      // Print("call super");
      super.OnActivate(player);
    }
	}

  override void OnDeactivate(PlayerBase player)
	{
    // Print("AreaExposureMdfr::OnDeactivate::Start");
    if (player && player.GetSingleAgentCount(DUB_MutantAgent.MUTANT_AGENT) >= 9600)
    {
      // Print("AreaExposureMdfr::OnDeactivate:: we are a level 3 mutant");
      player.GetModifiersManager().DeactivateModifier(DUB_Modifiers.MDF_BioHazardHeal);
    }
  }

  override void OnTick(PlayerBase player, float deltaT)
	{
    // Print("AreaExposureMdfr::OnTick::Start");
    if (player && player.SRPIgnoreContaminatedArea(deltaT))
    {
      // Print("OnTick::Mutant: return from activation");
      return;
    }
    else
    {
      // Print("call super");
      super.OnTick(player, deltaT);
    }  
  }
}