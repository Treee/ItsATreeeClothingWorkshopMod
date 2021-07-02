class SRP_WindowBarricade extends Fence
{	
	void SRP_WindowBarricade(){}
	
	override string GetConstructionKitType()
	{
		return "SRP_WindowBarricade_Kit";
	}
	
	//--- BUILD EVENTS
	//CONSTRUCTION EVENTS
	override void OnPartBuiltServer( string part_name, int action_id )
	{
		ConstructionPart constrution_part = GetConstruction().GetConstructionPart( part_name );
		
		//check base state
		if ( constrution_part.IsBase() )
		{
			SetBaseState( true );			
			//hide hologram
			SetAnimationPhase( "BP_Hologram", 1 );
		}	
		super.OnPartBuiltServer( part_name, action_id );
	}
	
	// override bool CanReceiveAttachment( EntityAI attachment, int slotId )
  // {    
  //   return true;
  // }

	// override void OnPartDestroyedServer( Man player, string part_name, int action_id, bool destroyed_by_connected_part = false )
	// {
	// 	super.OnPartDestroyedServer( player, part_name, action_id );
		
	// 	//check gate state
	// 	ConstructionPart constrution_part = GetConstruction().GetConstructionPart( part_name );
		
	// 	SetGateState( GATE_STATE_NONE );
	// 	//update visuals (server)
	// 	UpdateVisuals();
	// }
}
