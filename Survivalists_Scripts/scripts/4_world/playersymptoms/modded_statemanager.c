enum SRP_SymptomIDs : SymptomIDs
{
  SYMPTOM_SLEEP = 431, // finished
};

modded class SymptomManager
{
  override void Init()
	{
    super.Init();
    RegisterSymptom(new SleepEffectSymptom);
  }


  string LogSymptomsOnPlayer()
  {
    string logEntry = "Player Symptoms::";
    foreach(SymptomBase primary : m_SymptomQueuePrimary)
    {
      logEntry = string.Format("%1 || Name: %2 IsPrimary?:%3 ", logEntry,  primary.GetName(), primary.IsPrimary());
    }
    foreach(SymptomBase secondary : m_SymptomQueueSecondary)
    {
      logEntry = string.Format("%1 || Name: %2 IsPrimary?:%3 ", logEntry, secondary.GetName(), secondary.IsPrimary());
    }
    return logEntry;
  }
}