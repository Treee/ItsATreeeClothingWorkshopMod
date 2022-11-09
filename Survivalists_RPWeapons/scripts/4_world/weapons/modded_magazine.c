modded class Magazine
{
	override float GetChanceToJam()
	{
		return super.GetChanceToJam() * 0.1;
	}
};