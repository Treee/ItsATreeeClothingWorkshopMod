class SRP_CraftingMaterial_Dye_Base extends ItemBase
{
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionSRPRecolorClothingOption);
	}
};

class SRP_CraftingMaterial_Dye_Bleach extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Black extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Blue extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Brown extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Green extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Pink extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Red extends SRP_CraftingMaterial_Dye_Base{};
class SRP_CraftingMaterial_Dye_Yellow extends SRP_CraftingMaterial_Dye_Base{};