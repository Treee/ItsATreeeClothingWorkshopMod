enum SRP_eDrugModifiers: eModifiers
{
  MDF_TEST = 419,
  MDF_STONED = 420, //finished
  MDF_TOBACCO = 421,//finished
  MDF_ACIDSMILE = 422,   // finished
  MDF_ACIDSKULL = 423,   // finished
  MDF_MUSHROOMS = 424,
  MDF_METH = 425, //finished
  MDF_COCAINE = 426, //finished
  MDF_PCP = 427,
  MDF_HEROINE = 428,
  MDF_ALCOHOL = 429, // finished
  MDF_BATHSALTS = 430, // finished
}

modded class ModifiersManager
{
	override void Init()
	{
		super.Init();

		AddModifier(new SRP_TestMdfr);

		AddModifier(new SRP_TobaccoMdfr);
		AddModifier(new SRP_StonedMdfr);
		AddModifier(new SRP_SmileAcidMdfr);
		AddModifier(new SRP_SkullAcidMdfr);
		AddModifier(new SRP_BathSaltsMdfr);
		AddModifier(new SRP_MethMdfr);
		AddModifier(new SRP_AlcoholMdfr);
		AddModifier(new SRP_CocaineMdfr);
	}

}