modded class CarScript
{
  override void OnUpdate( float dt )
  {
    if (GetSpeedometer() > 50.0)
    {
      SetThrust(0, 0, 0);
    }
    super.OnUpdate(dt);
  }
};

modded class CarRadiator
{
  override bool IsSmeltable()
  {
    return true;
  }
  override TStringArray GetSmeltableOptions()
  {
    return {"SRP_Mining_RawOre_Zinc","SRP_Mining_RawOre_Copper"};
  }
  override int GetSmeltableYield()
  {
    return Math.RandomIntInclusive(1,3);
  }
};