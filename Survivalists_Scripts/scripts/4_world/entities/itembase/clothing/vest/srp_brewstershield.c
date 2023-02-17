class SRP_Brewstershield extends PlateCarrierVest
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}
  override bool IsSmeltable()
  {
    return true;
  }
  override TStringArray GetSmeltableOptions()
  {
    return {
      "SRP_ForgeIngot_Copper",
      "SRP_ForgeIngot_Tin",
      "SRP_ForgeIngot_Bronze",
      "SRP_ForgeIngot_Iron",
      "SRP_ForgeIngot_Gold",
      "SRP_ForgeIngot_Platinum",
      "SRP_ForgeIngot_Silver",
      "SRP_ForgeIngot_Zinc",
      "SRP_ForgeIngot_Brass"
    };
  }

  override int GetSmeltableYield()
  {
    return 1;
  }
};