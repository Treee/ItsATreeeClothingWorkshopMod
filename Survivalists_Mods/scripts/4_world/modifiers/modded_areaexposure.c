modded class AreaExposureMdfr
{
  float buffInterval = 0;
	override void OnActivate(PlayerBase player)
	{
    // Print("AreaExposureMdfr::OnActivate::Start");
    player.SetBioZoneStatus(true);
    super.OnActivate(player);
	}

  override void OnDeactivate(PlayerBase player)
	{
    // Print("AreaExposureMdfr::OnDeactivate::Start");
    player.SetBioZoneStatus(false);
    super.OnDeactivate(player);
  }

  override void OnTick(PlayerBase player, float deltaT)
	{
    // Print("AreaExposureMdfr::OnTick::Start");
    if (player && player.SRPIgnoreContaminatedArea())
    {
      // Print("OnTick::Mutant: return from activation");
      if (player.IsPlayerMutant())
      {
        player.GetStatEnergy().Add(PlayerConstants.DIGESTION_SPEED + 1.2);
        player.GetStatWater().Add(PlayerConstants.DIGESTION_SPEED);
      }
      else if (player.IsAlpha() || player.IsQueenAlpha())
      {        
        buffInterval += deltaT;
        if (buffInterval > 10)
        {
          player.GetStatEnergy().Add(20);
          player.GetStatWater().Add(20);
          player.AddHealth("","Blood", 20);
          player.AddHealth("","", 20);
          player.GetBleedingManagerServer().RemoveMostSignificantBleedingSourceEx(NULL);
          player.RemoveAllAgents();
          buffInterval = 0;
        }
      }
      return;
    }
    else
    {
      // Print("call super");
      super.OnTick(player, deltaT);
    }  
  }
}