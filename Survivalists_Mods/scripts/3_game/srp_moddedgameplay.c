modded class CfgGameplayHandler
{
  // force 3d map.
  override static bool GetUse3DMap()
	{
		return true;
	}
};

modded class Hud
{
  void DisplayTirednessNotifier( int key, int currentTirednessCount, int tirednessDelta, int status );
};