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


class SRP_ForgeIngotMold_ColorBase extends Inventory_Base{};
class SRP_ForgeIngotMold_MetalEmpty extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Lime extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Mortar extends SRP_ForgeIngotMold_ColorBase
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
      GetGame().CreateObject("SRP_ForgeIngotMold_Empty", this.GetPosition(), false);
      this.Delete();
    }
  }
};
class SRP_ForgeIngotMold_Empty extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Copper extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Tin extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Bronze extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Iron extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Gold extends SRP_ForgeIngotMold_ColorBase{};
class SRP_ForgeIngotMold_Platinum extends SRP_ForgeIngotMold_ColorBase{};

