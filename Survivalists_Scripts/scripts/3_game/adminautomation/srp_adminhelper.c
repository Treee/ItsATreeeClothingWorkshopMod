class SRP_BulkCompRecord
{ 
  protected string m_DateTimeStamp;
  protected string m_BohemiaId;
  protected string m_SteamId;
  protected string m_PlayerName;
  protected string m_CompensationText;

  void SRP_BulkCompRecord(string timestamp, string bisId, string steamId, string playerName, string compText)
  {
    m_DateTimeStamp = timestamp;
    m_BohemiaId = bisId;
    m_SteamId = steamId;
    m_PlayerName = playerName;
    m_CompensationText = compText;
  }
  string GetDateTimeStamp()
  {
    return m_DateTimeStamp;
  }
  string GetBohemiaId()
  {
    return m_BohemiaId;
  }
  string GetSteamId()
  {
    return m_SteamId;
  }
  string GetPlayerName()
  {
    return m_PlayerName;
  }
  string GetRawCompText()
  {
    return m_CompensationText;
  }
  string GetPrettyCompText()
  {
    string replaced = m_CompensationText;
    replaced.Replace(",", ", ");
    return replaced;
  }
  string GetDisplayListText()
  {
    //CF_Date.Now(true).DateToEpoch()
    return string.Format("%1 - %2 - %3", GetPlayerName(), GetDateTimeStamp(), GetSteamId());
  }
  bool MatchesSearchQuery(string s)
  {
    s.ToLower();
    if (s == "")
      return true;
    if (StringInsensitiveContains(GetBohemiaId(), s))
      return true;
    if (StringInsensitiveContains(GetSteamId(), s))
      return true;
    if (StringInsensitiveContains(GetPlayerName(), s))
      return true;
    
    return false;
  }
  bool MatchesEntry(string dateTime, string bID)
  {
    // Print("start");
    // Print(dateTime);
    // Print(GetDateTimeStamp().ToString());
    if (GetDateTimeStamp() == dateTime && GetBohemiaId() == bID)
      return true;
    return false;
  }
  bool StringInsensitiveContains(string s1, string s2)
  {
    s1.ToLower();
    s2.ToLower();
    return s1.Contains(s2);    
  }
};

class SRP_AdminHelper
{
  private const string SPECIAL_FILE = "$profile:Survivalists_Scripts/AdminBulkComp.bin";
  ref array<ref SRP_BulkCompRecord> m_BulkCompItems;

  void SRP_AdminHelper()
  {
    Init();
  }
  void Init()
  {
    if (!m_BulkCompItems)
    {
      m_BulkCompItems = new array<ref SRP_BulkCompRecord>;
    }
    LoadDataFromFile();
  }
  void LoadDataFromFile()
  {
		if(FileExist(SPECIAL_FILE))
		{
			FileSerializer file = new FileSerializer();
			if (file.Open(SPECIAL_FILE, FileMode.READ))
			{
        file.Read(m_BulkCompItems);
        file.Close();
			}
		}
    else
    {
      SaveDataToFile();
    }
  }
  void SaveDataToFile()
  {
			FileSerializer file = new FileSerializer();
			if (file.Open(SPECIAL_FILE, FileMode.WRITE))
			{
        file.Write(m_BulkCompItems);
        file.Close();
			}
  }
  void InsertBulkCompItem(string datetime, string bid, string steamid, string playername, string compText)
  {
    m_BulkCompItems.Insert(new SRP_BulkCompRecord(datetime, bid, steamid, playername, compText));
    SaveDataToFile();
  }
  SRP_BulkCompRecord GetBulkCompRecordByTimeStamp(string timestamp, string bid)
  {
		foreach(SRP_BulkCompRecord bulkRecord : m_BulkCompItems)
		{
    	if (bulkRecord.MatchesEntry(timestamp, bid)) 
        return bulkRecord;
    }
    return NULL;
  }
  bool DeleteBulkCompRecordByTimestamp(string timestamp, string bid)
  {
    SRP_BulkCompRecord record = GetBulkCompRecordByTimeStamp(timestamp, bid);
    if (record != NULL)
    {
      m_BulkCompItems.RemoveItem(record);
      delete record;
      SaveDataToFile();
      return true;
    }
    return false;
  }
  // string EncodeBulkRecord(SRP_BulkCompRecord record)
  // {
  //   return string.Format("%1::%2::%3::%4",record.GetBohemiaId(), record.GetSteamId(), record.GetPlayerName(), record.GetRawCompText());
  // }
  // SRP_BulkCompRecord DecodeBulkRecord(string encode)
  // {
  //   TStringArray lineParts;
  //   encode.Split("::", lineParts);
  //   return new SRP_BulkCompRecord(lineParts[0], lineParts[1], lineParts[2], lineParts[3]);
  // }
};