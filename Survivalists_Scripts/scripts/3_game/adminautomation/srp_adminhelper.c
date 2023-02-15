class SRP_BulkCompRecord
{ 
  protected int m_EpochTimeStamp;
  protected string m_BohemiaId;
  protected string m_SteamId;
  protected string m_PlayerName;
  protected string m_CompensationText;

  void SRP_BulkCompRecord(int timestamp, string bisId, string steamId, string playerName, string compText)
  {
    m_EpochTimeStamp = timestamp;
    m_BohemiaId = bisId;
    m_SteamId = steamId;
    m_PlayerName = playerName;
    m_CompensationText = compText;
  }
  int GetEpochTimeStamp()
  {
    return m_EpochTimeStamp;
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
    return string.Format("TimeID:%1||BID:%2||%3||SteamID:%4", GetEpochTimeStamp(), GetBohemiaId(), GetPlayerName(), GetSteamId());
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
  bool MatchesEntry(string epochTime)
  {
    // Print("start");
    // Print(epochTime);
    // Print(GetEpochTimeStamp().ToString());
    if (GetEpochTimeStamp().ToString() == epochTime)
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
  private const string SPECIAL_FILE = "$profile:Survivalists_Scripts/AdminBulkComp.txt";
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
  void InsertBulkCompItem(int epochtime, string bid, string steamid, string playername, string compText)
  {
    m_BulkCompItems.Insert(new SRP_BulkCompRecord(epochtime, bid, steamid, playername, compText));
    SaveDataToFile();
  }
  SRP_BulkCompRecord GetBulkCompRecordByTimeStamp(int timestamp)
  {
		foreach(SRP_BulkCompRecord bulkRecord : m_BulkCompItems)
		{
    	if (bulkRecord.MatchesEntry(timestamp.ToString())) 
        return bulkRecord;
    }
    return NULL;
  }
  bool DeleteBulkCompRecordByTimestamp(int timestamp)
  {
    SRP_BulkCompRecord record = GetBulkCompRecordByTimeStamp(timestamp);
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