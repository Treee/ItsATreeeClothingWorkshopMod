modded class ExplosivesBase
{
  override void SetActions()
	{
		super.SetActions();

		AddAction(SRP_ActionSabotageOilRigPump);
	}

  override int GetTrasformerRepairValue()
  {
    return -Math.RandomIntInclusive(50,75);
  }
};