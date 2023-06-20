class SRP_PoisonInjector_Base extends ItemBase
{
  // 300 max flower energy
  int GetEnergyReduction()
  {
    return -Math.RandomIntInclusive(25, 50);
  }
  override bool IsMedicalItem()
  {
    return true;
  }
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(SRP_ActionPoisonBioFlower);
	}
};
class SRP_PoisonInjector_FlowerPoison extends SRP_PoisonInjector_Base{};
class SRP_PoisonInjector_EnhancedFlowerPoison extends SRP_PoisonInjector_Base
{
  override int GetEnergyReduction()
  {
    return -Math.RandomIntInclusive(50, 100);
  }
};
