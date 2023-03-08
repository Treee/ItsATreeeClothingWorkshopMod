modded class ContaminatedTrigger
{
	override void OnEnterServerEvent( TriggerInsider insider )
	{
		super.OnEnterServerEvent( insider );
		if ( insider )
		{
			PlayerBase playerInsider;	
			if (Class.CastTo(playerInsider, insider.GetObject()) )
			{
        playerInsider.SetBioZoneStatus(true);
			}
		}
	}

	override void OnLeaveServerEvent( TriggerInsider insider )
	{
		super.OnLeaveServerEvent( insider );		
		if ( insider )
		{
			PlayerBase playerInsider;	
			if (Class.CastTo(playerInsider, insider.GetObject()) )
			{
        playerInsider.SetBioZoneStatus(false);
			}
		}
	}
	
	override void OnEnterClientEvent( TriggerInsider insider )
	{
		super.OnEnterClientEvent( insider );
    if ( insider )
		{
			PlayerBase playerInsider;	
			if (Class.CastTo(playerInsider, insider.GetObject()) )
			{
        playerInsider.SetBioZoneStatus(true);
			}
		}
	}
	
	override void OnLeaveClientEvent( TriggerInsider insider )
	{
		super.OnLeaveClientEvent( insider );
    if ( insider )
		{
			PlayerBase playerInsider;	
			if (Class.CastTo(playerInsider, insider.GetObject()) )
			{
        playerInsider.SetBioZoneStatus(false);
			}
		}
	}	
};