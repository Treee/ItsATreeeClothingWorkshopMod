class SRP_ForgeIngotPlate_ColorBase extends Inventory_Base
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}

  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
};
class SRP_ForgeIngotPlate_Copper extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Tin extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Bronze extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Iron extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Gold extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Platinum extends SRP_ForgeIngotPlate_ColorBase{};

class SRP_ForgeIngotRod_ColorBase extends Inventory_Base
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}
  
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
};
class SRP_ForgeIngotRod_Copper extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Tin extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Bronze extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Iron extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Gold extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Platinum extends SRP_ForgeIngotRod_ColorBase{};
