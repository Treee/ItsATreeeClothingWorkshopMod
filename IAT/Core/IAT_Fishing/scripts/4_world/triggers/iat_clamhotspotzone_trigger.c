class IAT_Fishing_ClamSpotTrigger extends EffectTrigger
{	
	// ----------------------------------------------
	// 				TRIGGER EVENTS
	// ----------------------------------------------
  override bool CanAddObjectAsInsider(Object object)
	{
    // Only actual players are allowed!
		PlayerBase player = PlayerBase.Cast(object);
    if (Class.CastTo(player, object))    
      return player.IsControlledPlayer();
    return false;
	}

  // server doesnt care about this stuff?
	// override void OnEnterServerEvent( TriggerInsider insider )
	// {
	// 	super.OnEnterServerEvent( insider );
	// }
	// override void OnLeaveServerEvent( TriggerInsider insider )
	// {
	// 	super.OnLeaveServerEvent( insider );
	// }
	
	override void OnEnterClientEvent( TriggerInsider insider )
	{
		super.OnEnterClientEvent( insider );
    // remove gas
    // if ( insider )
		// {
		// 	PlayerBase playerInsider = PlayerBase.Cast( insider.GetObject() );			
		// 	// We will only handle the controlled player, as effects are only relevant to this player instance
		// 	if (playerInsider && playerInsider.IsControlledPlayer() )
		// 	{
		// 		SetupClientEffects(false, playerInsider);
		// 	}
		// }
	}
	override void OnLeaveClientEvent( TriggerInsider insider )
	{
		super.OnLeaveClientEvent( insider );
    // show gas
    // if ( insider )
		// {
		// 	PlayerBase playerInsider = PlayerBase.Cast( insider.GetObject() );			
		// 	// We will only handle the controlled player, as effects are only relevant to this player instance
		// 	if (playerInsider && playerInsider.IsControlledPlayer() )
		// 	{
		// 		SetupClientEffects(true, playerInsider);
		// 	}
		// }
	}
	
  // unused but potenially useful later
	// override void OnStayStartServerEvent(int nrOfInsiders) {}
	// override void OnStayFinishServerEvent() {}
	// override void OnStayServerEvent(TriggerInsider insider, float deltaTime) {}
	
	override string GetAmbientSoundsetName()
	{
		return "ContaminatedArea_SoundSet";
	}
};