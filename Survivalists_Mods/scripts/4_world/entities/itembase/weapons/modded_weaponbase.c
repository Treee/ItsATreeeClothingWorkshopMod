modded class Weapon_Base
{
  override bool IsSmeltable()
  {
    return true;
  }
  override TStringArray GetSmeltableOptions()
  {
    return {"SRP_Mining_RawOre_Iron"};
  }
  override int GetSmeltableYield()
  {
    return Math.RandomIntInclusive(0, 3);
  }
};