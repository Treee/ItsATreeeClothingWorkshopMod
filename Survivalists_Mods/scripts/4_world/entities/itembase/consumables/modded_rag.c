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
  int GetHeatTimerThreshold()
  {
    return 900;
  }
};