class SRP_WoodenWallLong extends BaseBuildingBase
{
	void SRP_WoodenWallLong(){}
	
  override string GetConstructionKitType()
	{
		return "SRP_WoodenWallLong_Kit";
	}

  override vector GetKitSpawnPosition()
	{
		// if ( MemoryPointExists( "kit_spawn_position" ) )
		// {
		// 	vector position;
		// 	position = GetMemoryPointPos( "kit_spawn_position" );
			
		// 	return ModelToWorld( position );
		// }		
		return GetPosition();
	}
	
	override bool CanDisplayAttachmentCategory( string category_name )
	{
    // If there is a GUIInventoryAttachmentsProps called Base and the base has not been constructed yet.
		if ( category_name == "Base" && !HasBase() )
			return true;
		else
			return false;
	}


  	//--- BUILD EVENTS
	//CONSTRUCTION EVENTS
	override void OnPartBuiltServer( notnull Man player, string part_name, int action_id )
	{
		//ConstructionPart constrution_part = GetConstruction().GetConstructionPart( part_name );
		
		super.OnPartBuiltServer( player, part_name, action_id );
		
		//update visuals (server)
		UpdateVisuals();
	}
	
	override void OnPartDismantledServer( notnull Man player, string part_name, int action_id )
	{
		ConstructionPart constrution_part = GetConstruction().GetConstructionPart( part_name );
		
		super.OnPartDismantledServer( player, part_name, action_id );
		
		//update visuals (server)
		UpdateVisuals();
	}
	
	override void OnPartDestroyedServer( Man player, string part_name, int action_id, bool destroyed_by_connected_part = false )
	{
		super.OnPartDestroyedServer( player, part_name, action_id );
		
		//update visuals (server)
		UpdateVisuals();
	}
}
