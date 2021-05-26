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
    RegisterSymptom(new SmileAcidEffectSymptom);
    RegisterSymptom(new SkullAcidEffectSymptom);
    RegisterSymptom(new TestEffectSymptom);
  }
}