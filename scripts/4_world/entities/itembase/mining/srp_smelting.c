class SRP_MetalBucket extends Inventory_Base{};
class SRP_MetalBucket_Lime extends SRP_MetalBucket{};
class SRP_MetalBucket_Mortar extends SRP_MetalBucket
{
  int m_HeatCounter = 0;

  void IncrementHeatTimer(int increment = 1)
  {
    m_HeatCounter += increment;
  }

  void ResetCounter()
  {
    m_HeatCounter = 0;
  }

  void HandleHardenEvent()
  {
    // Print(" Heat event: " + m_HeatCounter);
    // should be like 10 minutes or so
    if (m_HeatCounter > 600)
    {
      GetGame().CreateObject("SRP_ForgeCrucible_Empty", this.GetPosition(), false);
      this.Delete();
    }
  }
};
