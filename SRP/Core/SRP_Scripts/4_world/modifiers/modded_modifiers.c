enum SRP_MasonMetallurgy_eModifiers: eModifiers
{
  MDF_SRPBURNING = 433,
}

modded class ModifiersManager
{
	override void Init()
	{
		super.Init();

		AddModifier(new SRP_BurningMdfr);
	}

}