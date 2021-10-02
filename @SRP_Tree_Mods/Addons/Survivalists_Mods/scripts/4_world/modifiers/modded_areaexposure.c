modded class AreaExposureMdfr
{
	override void OnActivate(PlayerBase player)
	{
    // Print("AreaExposureMdfr::OnActivate::Start");
    if (player && player.SRPIgnoreContaminatedArea())
    {
      Print("Mutant: return from activation");
      return;
    }
    else
    {
      Print("call super");
      super.OnActivate(player);
    }
	}

  override void OnTick(PlayerBase player, float deltaT)
	{
    // Print("AreaExposureMdfr::OnTick::Start");
    if (player && player.SRPIgnoreContaminatedArea())
    {
      Print("Mutant: return from activation");
      return;
    }
    else
    {
      Print("call super");
      super.OnTick(player, deltaT);
    }  
  }
}