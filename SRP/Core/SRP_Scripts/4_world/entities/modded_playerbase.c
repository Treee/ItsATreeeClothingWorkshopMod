modded class PlayerBase
{
  protected bool m_IsImmuneToBurning = false;
// ========================================== Helpers
  void SetIsImmuneToBurning(bool state)
  {
    m_IsImmuneToBurning = state;
  }
  bool IsImmuneToBurning()
  {
    return m_IsImmuneToBurning;
  }
};