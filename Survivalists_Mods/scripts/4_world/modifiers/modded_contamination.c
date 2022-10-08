modded class ContaminationStage1Mdfr
{
  override protected bool ActivateCondition(PlayerBase player)
	{
    // Print("ContaminationStage1Mdfr::chemical poison: " + player.GetSingleAgentCount(eAgents.CHEMICAL_POISON));
    // Print("ContaminationStage1Mdfr::dub agent: " + player.GetSingleAgentCount(DUB_MutantAgent.MUTANT_AGENT));
    if (player && (player.SRPIgnoreContaminatedArea()))
    {
      // Print("ContaminationStage1Mdfr::no stage 1 contamination");
      return false;
    }
		return ( player.GetSingleAgentCount(eAgents.CHEMICAL_POISON) >= AGENT_THRESHOLD_ACTIVATE && player.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < AGENT_THRESHOLD_DEACTIVATE );
	}
};

modded class ContaminationStage2Mdfr
{
  override protected bool ActivateCondition(PlayerBase player)
	{
    // Print("ContaminationStage2Mdfr::chemical poison: " + player.GetSingleAgentCount(eAgents.CHEMICAL_POISON));
    // Print("ContaminationStage2Mdfr::dub agent: " + player.GetSingleAgentCount(DUB_MutantAgent.MUTANT_AGENT));
    if (player && (player.SRPIgnoreContaminatedArea()))
    {
      // Print("ContaminationStage2Mdfr::no stage 2 contamination");
      return false;
    }
		return ( player.GetSingleAgentCount(eAgents.CHEMICAL_POISON) >= AGENT_THRESHOLD_ACTIVATE && player.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < AGENT_THRESHOLD_DEACTIVATE);
	}
};

modded class ContaminationStage3Mdfr
{
	override protected bool ActivateCondition(PlayerBase player)
	{
    // Print("ContaminationStage3Mdfr::chemical poison: " + player.GetSingleAgentCount(eAgents.CHEMICAL_POISON));
    // Print("ContaminationStage3Mdfr::dub agent: " + player.GetSingleAgentCount(DUB_MutantAgent.MUTANT_AGENT));
    if (player && (player.SRPIgnoreContaminatedArea()))
    {
      // Print("ContaminationStage3Mdfr::no stage 3 contamination");
      return false;
    }
		return ( player.GetSingleAgentCount(eAgents.CHEMICAL_POISON) >= AGENT_THRESHOLD_ACTIVATE );
	}
};