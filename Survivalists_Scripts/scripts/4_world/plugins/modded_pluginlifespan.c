modded class PluginLifespan
{
  protected static const int LIFESPAN_MAX = 960; // value in minutes when player achieved maximum age in order to have full beard
 
  override void SetPlayerLifespanLevel( PlayerBase player, LifespanLevel level )
	{
    if (!player.IsPlayerPreMutant())
    {
      // Print("Not a pre mutant. Do regular beard stuff")
      super.SetPlayerLifespanLevel(player, level);
    }
    else
    {
      // Print("Pre mutant. nmo face paint and make sure face is not changed back")
      return;
    }
	}
};
