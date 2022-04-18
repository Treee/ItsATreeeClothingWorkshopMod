class LongWoodenStick_Irradiated extends LongWoodenStick
{
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
    {
      if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
      {
	  	  player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 25);
      }
    }
  }
};
class WoodenStick_Irradiated extends WoodenStick
{
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
    {
      if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
      {
	  	  player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 25);
      }
    }
  }
};
class Firewood_Irradiated extends Firewood
{
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
    {
      if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
      {
	  	  player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 25);
      }
    }
  }
};
class WoodenLog_Irradiated extends WoodenLog
{
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
    {
      if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
      {
	  	  player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 25);
      }
    }
  }
};
class Bark_Oak_Irradiated extends Bark_Oak
{
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
    {
      if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
      {
	  	  player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 25);
      }
    }
  }
};
class Bark_Birch_Irradiated extends Bark_Birch
{
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
    {
      if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
      {
	  	  player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 25);
      }
    }
  }
};