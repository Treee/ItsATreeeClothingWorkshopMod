class SRP_PoisonInjector_Base extends ItemBase
{
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
