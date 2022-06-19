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

modded class DUB_Mutantsyringe_Pure
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
modded class DUB_Mutantsyringe_Pure_Accel
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
modded class DUB_Mutantsyringe_Admin2
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
modded class DUB_Mutantsyringe_Admin4
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
modded class DUB_Mutantsyringe_Pure_Sup
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
modded class DUB_Mutantsyringe_Crude
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
modded class DUB_Mutantsyringe_Crude_Cure
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