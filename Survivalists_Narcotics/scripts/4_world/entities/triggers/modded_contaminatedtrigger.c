modded class ContaminatedTrigger
{
	override void OnStayServerEvent(TriggerInsider insider, float deltaTime) 
	{
    super.OnStayServerEvent(insider, deltaTime);
    
    PlayerBase playerInsider;
    SRP_LabTube_MutantLiquidSterilized item;
    if (Class.CastTo(playerInsider, insider.GetObject()) && Class.CastTo(item, playerInsider.GetItemInHands()))
    {
      item.UpdateRadiationExposure(playerInsider, deltaTime);
      // Print("[ContaminatedTrigger]::OnStayServerEvent:: item " + item.GetRadiationExposure());
    }
	}
};
