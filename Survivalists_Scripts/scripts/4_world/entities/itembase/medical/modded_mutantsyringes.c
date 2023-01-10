modded class DUB_Mutantsyringe_Pure
{
	override void OnInventoryEnter(Man player)
	{
		super.OnInventoryEnter(player);
		PlayerBase player_PB = PlayerBase.Cast( player );
    ItemBase itemInHands;
    if (Class.CastTo(itemInHands, player.GetHumanInventory().GetEntityInHands()))
    {
      if (itemInHands.GetType() != "SRP_SmallProtectorCase_Syringe")
      {
        if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
        {
          if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
          {
            player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 99);
          }
        }        
      }
    }
    else
    {
      if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
      {
        if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
        {
          player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 99);
        }
      }
    }
	}
};
modded class DUB_Mutant_Accel
{
	override void OnInventoryEnter(Man player)
	{
		super.OnInventoryEnter(player);
		PlayerBase player_PB = PlayerBase.Cast( player );
    ItemBase itemInHands;
    if (Class.CastTo(itemInHands, player.GetHumanInventory().GetEntityInHands()))
    {
      if (itemInHands.GetType() != "SRP_SmallProtectorCase_Syringe")
      {
        if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
        {
          if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
          {
            player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 99);
          }
        }        
      }
    }
    else
    {
      if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
      {
        if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
        {
          player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 99);
        }
      }
    }
	}
};
modded class DUB_Mutant_Accel_2
{
	override void OnInventoryEnter(Man player)
	{
		super.OnInventoryEnter(player);
		PlayerBase player_PB = PlayerBase.Cast( player );
    ItemBase itemInHands;
    if (Class.CastTo(itemInHands, player.GetHumanInventory().GetEntityInHands()))
    {
      if (itemInHands.GetType() != "SRP_SmallProtectorCase_Syringe")
      {
        if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
        {
          if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
          {
            player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 99);
          }
        }        
      }
    }
    else
    {
      if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
      {
        if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
        {
          player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 99);
        }
      }
    }
	}
};
modded class DUB_Mutant_Accel_4
{
	override void OnInventoryEnter(Man player)
	{
		super.OnInventoryEnter(player);
		PlayerBase player_PB = PlayerBase.Cast( player );
    ItemBase itemInHands;
    if (Class.CastTo(itemInHands, player.GetHumanInventory().GetEntityInHands()))
    {
      if (itemInHands.GetType() != "SRP_SmallProtectorCase_Syringe")
      {
        if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
        {
          if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
          {
            player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 99);
          }
        }        
      }
    }
    else
    {
      if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
      {
        if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
        {
          player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 99);
        }
      }
    }
	}
};
modded class DUB_MutantSuppressor
{
  override void OnInventoryEnter(Man player)
	{
		super.OnInventoryEnter(player);
		PlayerBase player_PB = PlayerBase.Cast( player );
    ItemBase itemInHands;
    if (Class.CastTo(itemInHands, player.GetHumanInventory().GetEntityInHands()))
    {
      if (itemInHands.GetType() != "SRP_SmallProtectorCase_Syringe")
      {
        if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
        {
          if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
          {
            player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 99);
          }
        }        
      }
    }
    else
    {
      if (GetGame().IsDedicatedServer() && player_PB && (!player_PB.SRPIgnoreContaminatedArea()))
      {
        if (player_PB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
        {
          player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 99);
        }
      }
    }
	}
};
