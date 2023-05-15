class SRP_MeatFarmingBlockConfig
{
  protected ref TStringArray m_BlockedMeatFarmers;
  void SRP_MeatFarmingBlockConfig()
  {
    if (!m_BlockedMeatFarmers)
      m_BlockedMeatFarmers = new TStringArray;
  }

  TStringArray GetMeatFarmingBlockedIDs()
  {
    return m_BlockedMeatFarmers;
  }
  void AddIDToBlockedMeatFarmers(string id)
  {
    if (m_BlockedMeatFarmers.Find(id) == -1)
      m_BlockedMeatFarmers.Insert(id);

    // foreach(string s : m_BlockedMeatFarmers)
    //   Print(string.Format("adding new id: %1", s));
  }
  bool IsBlockedFromGivingMeat(string id)
  {    
    return m_BlockedMeatFarmers.Find(id) > -1;
  }
};