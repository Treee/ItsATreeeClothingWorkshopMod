modded class SRP_LabTube_MutantLiquidSterilizedIrradiated
{
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( eModifiers.MDF_CONTAMINATION2 );
      player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 300);
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
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
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( eModifiers.MDF_CONTAMINATION2 );
      player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 300);
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
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
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( eModifiers.MDF_CONTAMINATION2 );
      player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 300);
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
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
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( eModifiers.MDF_CONTAMINATION2 );
      player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 300);
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
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
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( eModifiers.MDF_CONTAMINATION2 );
      player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 300);
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
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
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( eModifiers.MDF_CONTAMINATION2 );
      player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 300);
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
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
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( eModifiers.MDF_CONTAMINATION2 );
      player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 300);
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
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
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( eModifiers.MDF_CONTAMINATION2 );
      player_PB.InsertAgent(eAgents.CHEMICAL_POISON, 300);
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB && GetGame().IsDedicatedServer())
    {
      if( player_PB.GetModifiersManager().IsModifierActive(eModifiers.MDF_CONTAMINATION2) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CONTAMINATION2, false );
      }
    }
  }
};