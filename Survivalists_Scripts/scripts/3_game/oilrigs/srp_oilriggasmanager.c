class SRP_OilRigGasInfo
{
  protected string m_RigName;
  protected float m_ChanceToBreak;
  protected int m_RigEnergy;
  protected vector m_Position;
  void SRP_OilRigGasInfo(string rigName, int energy, vector position, float changeToBreak)
  {
    m_RigName = rigName;
    m_RigEnergy = energy;
    m_Position = position;
    m_ChanceToBreak = changeToBreak;
  }
  bool IsCorrectOilRig(string rig)
  {
    return m_RigName == rig;
  }
  bool IsCloseEnoughToRigArea(vector position)
  {
    // Print(string.Format("Check %1 is we are near: %2 meters", GetRigName(), vector.Distance(m_Position, position)));
    return vector.Distance(m_Position, position) < 50;
  }
  int GetOilRigEnergy()
  {
    return m_RigEnergy;
  }
  void ModifyOilRigEnergy(int delta)
  {
    float value = m_RigEnergy + delta;
    m_RigEnergy = Math.Clamp(0, value, 2000);
  }
  void SetRigPosition(vector position)
  {
    m_Position = position;
  }
  vector GetRigPosition()
  {
    return m_Position;
  }
  void ModifyChanceToBreak(float delta)
  {
    float value = m_ChanceToBreak + delta;
    m_ChanceToBreak = Math.Clamp(-0.001, value, 1.001);
  }
  
  void SetChangeToBreak(float value)
  {
    m_ChanceToBreak = value;
  }
  float GetChanceToBreak()
  {
    return m_ChanceToBreak;
  }
  string GetRigName()
  {
    return m_RigName;
  }
};
class SRP_OilRigGasManager
{
  ref SRP_OilRigGasInfo m_RogueWave;
  ref SRP_OilRigGasInfo m_Horizon;
  ref SRP_OilRigGasInfo m_Deepwater;
  protected int m_GasPumpEnergyRequirement = 3750;

  SRP_OilRigGasInfo GetOilRigInfoByRigName(string rigName)
  {
    if (m_RogueWave && m_RogueWave.IsCorrectOilRig(rigName))
      return m_RogueWave;
    if (m_Horizon && m_Horizon.IsCorrectOilRig(rigName))
      return m_Horizon;
    if (m_Deepwater && m_Deepwater.IsCorrectOilRig(rigName))
      return m_Deepwater;
    return NULL;
  }
  SRP_OilRigGasInfo GetOilRigInfoByPosition(vector position)
  {
    if (m_RogueWave && m_RogueWave.IsCloseEnoughToRigArea(position))
      return m_RogueWave;
    if (m_Horizon && m_Horizon.IsCloseEnoughToRigArea(position))
      return m_Horizon;
    if (m_Deepwater && m_Deepwater.IsCloseEnoughToRigArea(position))
      return m_Deepwater;
    return NULL;
  }
  bool HasEnoughPowerToRunPumps()
  {
    int totalPower = 0;
    if (m_RogueWave)
      totalPower += m_RogueWave.GetOilRigEnergy();
    if (m_Horizon)
      totalPower += m_Horizon.GetOilRigEnergy();
    if (m_Deepwater)
      totalPower += m_Deepwater.GetOilRigEnergy();
    return totalPower > m_GasPumpEnergyRequirement;
  }
  void PumpStartUpCheck()
  {
    // Print("Pump Startup Check");
    if (m_RogueWave && m_RogueWave.GetChanceToBreak() > Math.RandomFloatInclusive(0.7,1))
    {
      m_RogueWave.ModifyOilRigEnergy(-Math.RandomIntInclusive(200, 500));
      m_RogueWave.SetChangeToBreak(Math.RandomFloatInclusive(0,1));
    }
    else
    {
      m_RogueWave.ModifyOilRigEnergy(-Math.RandomIntInclusive(25,100));
      m_RogueWave.ModifyChanceToBreak(Math.RandomFloatInclusive(0,0.2));
    }

    if (m_Horizon && m_Horizon.GetChanceToBreak() > Math.RandomFloatInclusive(0.7,1))
    {
      m_Horizon.ModifyOilRigEnergy(-Math.RandomIntInclusive(200, 500));
      m_Horizon.SetChangeToBreak(Math.RandomFloatInclusive(0,1));
    }
    else
    {
      m_Horizon.ModifyOilRigEnergy(-Math.RandomIntInclusive(25,100));
      m_Horizon.ModifyChanceToBreak(Math.RandomFloatInclusive(0,0.2));
    }

    if (m_Deepwater && m_Deepwater.GetChanceToBreak() > Math.RandomFloatInclusive(0.7,1))
    {
      m_Deepwater.ModifyOilRigEnergy(-Math.RandomIntInclusive(200, 500));
      m_Deepwater.SetChangeToBreak(Math.RandomFloatInclusive(0,1));
    }
    else
    {
      m_Deepwater.ModifyOilRigEnergy(-Math.RandomIntInclusive(25,100));
      m_Deepwater.ModifyChanceToBreak(Math.RandomFloatInclusive(0,0.2));
    }
  }
};