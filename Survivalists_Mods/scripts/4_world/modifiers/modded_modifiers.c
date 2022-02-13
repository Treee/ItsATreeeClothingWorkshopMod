enum SRP_eModifiers: eModifiers
{
  MDF_SLEEP = 431,
  MDF_BIOHAZARD = 432,
  MDF_SRPBURNING = 433,
}

modded class ModifiersManager
{
	override void Init()
	{
		super.Init();

		AddModifier(new SRP_SleepMdfr);
		AddModifier(new SRP_BurningMdfr);
	}

}