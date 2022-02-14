modded class AreaExposureMdfr
{
  override void OnDeactivate(PlayerBase player)
	{
    if (player)
    {
      ItemBase item = player.GetItemInHands();
      if (item)
      {
        SRP_LabTube_MutantLiquidSterilized labTube = SRP_LabTube_MutantLiquidSterilized.Cast(item);
        labTube.SetRadiationExposure(0);
      }
    }
  }

  override void OnTick(PlayerBase player, float deltaT)
	{
    // Print("AreaExposureMdfr::OnTick::Start");
    if (player)
    {
      ItemBase item = player.GetItemInHands();
      if (item)
      {
        SRP_LabTube_MutantLiquidSterilized labTube = SRP_LabTube_MutantLiquidSterilized.Cast(item);
        if (labTube)
        {
          labTube.UpdateRadiationExposure(player, deltaT);
        }
      }
    } 
  }
}