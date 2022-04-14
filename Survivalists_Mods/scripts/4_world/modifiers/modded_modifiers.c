enum SRP_eModifiers: eModifiers
{
  MDF_SLEEP = 431,
  MDF_BIOHAZARD = 432,
}

modded class ModifiersManager
{
	override void Init()
	{
		super.Init();

		AddModifier(new SRP_SleepMdfr);
	}

}