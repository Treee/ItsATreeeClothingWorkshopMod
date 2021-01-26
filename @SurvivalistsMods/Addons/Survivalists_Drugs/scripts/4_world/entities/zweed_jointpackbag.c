class Bag_CigarettePack_ZWeed_DryBag_ColorBase extends ItemBase {
  override void SetActions()
	{
		super.SetActions();
		AddAction(UnPackCigaretteBag);
	}
};

class Bag_CigarettePack_ZWeed_DryBag_Black extends Bag_CigarettePack_ZWeed_DryBag_ColorBase {};
class Bag_CigarettePack_ZWeed_DryBag_Orange extends Bag_CigarettePack_ZWeed_DryBag_ColorBase {};
class Bag_CigarettePack_ZWeed_DryBag_Yellow extends Bag_CigarettePack_ZWeed_DryBag_ColorBase {};
class Bag_CigarettePack_ZWeed_DryBag_Blue extends Bag_CigarettePack_ZWeed_DryBag_ColorBase {};
class Bag_CigarettePack_ZWeed_DryBag_Green extends Bag_CigarettePack_ZWeed_DryBag_ColorBase {};
class Bag_CigarettePack_ZWeed_DryBag_Red extends Bag_CigarettePack_ZWeed_DryBag_ColorBase {};
