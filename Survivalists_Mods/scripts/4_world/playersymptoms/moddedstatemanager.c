modded class SymptomManager
{
  void Init()
	{
    super.Init();
    RegisterSymptom(new WeedEffectSymptom);
    RegisterSymptom(new TobaccoEffectSymptom);
    RegisterSymptom(new SaltsEffectSymptom);
    RegisterSymptom(new MethEffectSymptom);
    RegisterSymptom(new AlcoholEffectSymptom);
    RegisterSymptom(new CocaineEffectSymptom);
    RegisterSymptom(new SmileAcidEffectSymptom);
    RegisterSymptom(new SkullAcidEffectSymptom);
    RegisterSymptom(new SleepEffectSymptom);
    RegisterSymptom(new TestEffectSymptom);
  }
}