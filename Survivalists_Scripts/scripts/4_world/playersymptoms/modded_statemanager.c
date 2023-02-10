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
}