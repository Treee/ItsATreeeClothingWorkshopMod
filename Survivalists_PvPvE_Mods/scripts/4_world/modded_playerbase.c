modded class PlayerBase
{
  // turn off foot dmg
  override void ProcessFeetDamageServer(int pUserInt)
	{
    return;
  }
}