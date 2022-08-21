modded class SRP_LabTube_MutantLiquidSterilizedIrradiatedNeutral
{
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
    {
      if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
      {
	  	  player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 99);
      }
    }
  }
};

modded class SRP_LabTube_MutantLiquidSterilizedIrradiated
{
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
    {
      if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
      {
	  	  player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 99);
      }
    }
  }
};
