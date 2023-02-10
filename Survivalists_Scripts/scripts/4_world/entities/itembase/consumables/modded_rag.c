modded class Rag
{
  override bool IsForgeHardened()
  {
    return true;
  }
  override bool IsTransformedByHeat()
  {
    return true;
  }
  override int GetHeatTimerThreshold()
  {
    return 900;
  }
};