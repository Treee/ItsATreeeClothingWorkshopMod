class IAT_Fishing_WoodenRod_ColorBase extends FishingRod_Base_New
{
	override void AnimateFishingRod(bool state)
	{
		SetAnimationPhase("AnimateRod",state);
	}
};
class IAT_Fishing_WoodenRod_Blue: IAT_Fishing_WoodenRod_ColorBase{};
class IAT_Fishing_WoodenRod_Purple: IAT_Fishing_WoodenRod_ColorBase{};
class IAT_Fishing_WoodenRod_Red: IAT_Fishing_WoodenRod_ColorBase{};
