class SRP_HandMadeFishingRod: FishingRod_Base_New
{
	override void AnimateFishingRod(bool state)
	{
		SetAnimationPhase("AnimateRod",state);
	}
};
class SRP_HandMadeFishingRod_Blue: SRP_HandMadeFishingRod{};
class SRP_HandMadeFishingRod_Purple: SRP_HandMadeFishingRod{};
class SRP_HandMadeFishingRod_Red: SRP_HandMadeFishingRod{};
