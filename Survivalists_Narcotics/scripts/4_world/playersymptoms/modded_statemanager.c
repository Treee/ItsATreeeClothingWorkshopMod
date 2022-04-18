enum SRP_DrugSymptomIDs: SymptomIDs
{
	SYMPTOM_TEST = 419,
	SYMPTOM_WEED = 420,
  SYMPTOM_TOBACCO = 421,//finished
  SYMPTOM_ACIDSMILE = 422,   // finished
  SYMPTOM_ACIDSKULL = 423,   // finished
  SYMPTOM_WEEDIRRADIATED = 424,
  SYMPTOM_METH = 425, //finished
  SYMPTOM_COCAINE = 426, // finished
  SYMPTOM_PCP = 427,
  SYMPTOM_HEROINE = 428,
  SYMPTOM_ALCOHOL = 429, // finished
  SYMPTOM_BATHSALTS = 430, // finished
};

modded class SymptomManager
{
  void Init()
	{
    super.Init();
    RegisterSymptom(new WeedEffectSymptom);
    RegisterSymptom(new WeedIrradiatedEffectSymptom);
    RegisterSymptom(new TobaccoEffectSymptom);
    RegisterSymptom(new SaltsEffectSymptom);
    RegisterSymptom(new MethEffectSymptom);
    RegisterSymptom(new AlcoholEffectSymptom);
    RegisterSymptom(new CocaineEffectSymptom);
    RegisterSymptom(new SmileAcidEffectSymptom);
    RegisterSymptom(new SkullAcidEffectSymptom);
    RegisterSymptom(new TestEffectSymptom);
  }
}