modded class Weapon_Base
{
	override float GetChanceToJam()
	{
		return super.GetChanceToJam() * 0.1;
	}
};