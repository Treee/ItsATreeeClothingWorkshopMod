modded class ModifiersManager
{
	override void Init()
	{
		super.Init();

		AddModifier(new SRP_TestMdfr);
		AddModifier(new SRP_SleepMdfr);
		AddModifier(new SRP_BioHazardMdfr);

		AddModifier(new SRP_TobaccoMdfr);
		AddModifier(new SRP_StonedMdfr);
		AddModifier(new SRP_SmileAcidMdfr);
		AddModifier(new SRP_SkullAcidMdfr);
		AddModifier(new SRP_BathSaltsMdfr);
		AddModifier(new SRP_MethMdfr);
		AddModifier(new SRP_AlcoholMdfr);
	}

}