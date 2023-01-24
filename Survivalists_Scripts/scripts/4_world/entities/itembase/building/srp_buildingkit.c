class SRP_Building_KitBase extends SRP_KitBase
{
  override bool DoPlacingHeightCheck()
	{
		return true;
	}
	override float HeightCheckOverride()
	{
		return 2.54;
	}
};

class SRP_Carpentry_WoodenOutHouse_Kit extends SRP_Building_KitBase{};
class Land_srp_wooden_2floor_tavern_Kit extends SRP_Building_KitBase{};
class Land_srp_treehouse_circular_Kit extends SRP_Building_KitBase{};
class Land_srp_treehouse_box_Kit extends SRP_Building_KitBase{};
class Land_srp_treehouse_doubleplatform_Kit extends SRP_Building_KitBase{};
class Land_srp_treehouse_tripleplatform_Kit extends SRP_Building_KitBase{};

class Land_srp_constructionmaterials_Kit extends SRP_Building_KitBase{};
