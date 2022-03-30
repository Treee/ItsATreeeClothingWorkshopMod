modded class DayZGame
{
  protected int m_NumberOfActiveRadioTowers = 0;

  void IncrementActiveTowers(int numberoverride = 1)
  {
    Print("IncrementActiveTowers: previous: " + m_NumberOfActiveRadioTowers + " next: " + (m_NumberOfActiveRadioTowers + 1));
    m_NumberOfActiveRadioTowers += numberoverride;
  };

  void DecrementActiveTowers(int numberoverride = 1)
  {
    Print("DecrementActiveTowers: previous: " + m_NumberOfActiveRadioTowers + " next: " + (m_NumberOfActiveRadioTowers - 1));
    m_NumberOfActiveRadioTowers -= numberoverride;
  };

  bool IsRadioActive(int requiredTowers)
  {
    return m_NumberOfActiveRadioTowers >= requiredTowers;
  }
};