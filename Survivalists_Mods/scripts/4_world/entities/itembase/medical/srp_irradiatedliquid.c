modded class SRP_LabTube_MutantLiquidSterilizedIrradiated
{
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB && (player_PB.GetPlayerRadiationProtection() < 6 || !player_PB.SRPIgnoreContaminatedArea(0.0)))
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_SRPBURNING );
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
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
    if (GetGame().IsDedicatedServer() && player_PB && (player_PB.GetPlayerRadiationProtection() < 6 || !player_PB.SRPIgnoreContaminatedArea(0.0)))
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_SRPBURNING );
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
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
    if (GetGame().IsDedicatedServer() && player_PB && (player_PB.GetPlayerRadiationProtection() < 6 || !player_PB.SRPIgnoreContaminatedArea(0.0)))
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_SRPBURNING );
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
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
    if (GetGame().IsDedicatedServer() && player_PB && (player_PB.GetPlayerRadiationProtection() < 6 || !player_PB.SRPIgnoreContaminatedArea(0.0)))
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_SRPBURNING );
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
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
    if (GetGame().IsDedicatedServer() && player_PB && (player_PB.GetPlayerRadiationProtection() < 6 || !player_PB.SRPIgnoreContaminatedArea(0.0)))
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_SRPBURNING );
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
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
    if (GetGame().IsDedicatedServer() && player_PB && (player_PB.GetPlayerRadiationProtection() < 6 || !player_PB.SRPIgnoreContaminatedArea(0.0)))
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_SRPBURNING );
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
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
    if (GetGame().IsDedicatedServer() && player_PB && (player_PB.GetPlayerRadiationProtection() < 6 || !player_PB.SRPIgnoreContaminatedArea(0.0)))
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_SRPBURNING );
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
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
    if (GetGame().IsDedicatedServer() && player_PB && (player_PB.GetPlayerRadiationProtection() < 6 || !player_PB.SRPIgnoreContaminatedArea(0.0)))
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//effectively resets the timer
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
      }
      player_PB.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_SRPBURNING );
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (GetGame().IsDedicatedServer() && player_PB)
    {
      if( player_PB.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_SRPBURNING) )//if activated, removed
      {
        player_PB.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_SRPBURNING, false );
      }
    }
  }
};