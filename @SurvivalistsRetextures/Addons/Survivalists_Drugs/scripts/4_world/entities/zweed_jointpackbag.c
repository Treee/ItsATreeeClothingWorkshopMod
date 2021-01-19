class Bag_CigarettePack_ZWeed_DryBag_Black extends ItemBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(UnPackCigaretteBag);
	}
};