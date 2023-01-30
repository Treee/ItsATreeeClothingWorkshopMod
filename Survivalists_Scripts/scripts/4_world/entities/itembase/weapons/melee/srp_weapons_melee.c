modded class SRP_BerserkSword extends Sword 
{
  override bool IsSprintRemoved()
  {
    return true;
  }
};

modded class BrassKnuckles_ColorBase
{
  override bool IsSmeltable()
  {
    return true;
  }
  override TStringArray GetSmeltableOptions()
  {
    return {"SRP_ForgeIngot_Brass"};
  }
  override int GetSmeltableYield()
  {
    return 1;
  }
};