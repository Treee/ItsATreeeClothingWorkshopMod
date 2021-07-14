// class SRP_SmallDoor extends Fence
// {	
// 	void SRP_SmallDoor(){}
	
// 	override string GetConstructionKitType()
// 	{
// 		return "SRP_SmallDoor_Kit";
// 	}
	
// 	//--- BUILD EVENTS
// 	//CONSTRUCTION EVENTS
// 	override void OnPartBuiltServer( notnull Man player, string part_name, int action_id )
// 	{
// 		ConstructionPart constrution_part = GetConstruction().GetConstructionPart( part_name );
// 		//check base state
// 		if ( constrution_part.IsBase() )
// 		{
// 			SetBaseState( true );
// 			//hide hologram
// 			SetAnimationPhase( "BP_Hologram", 1 );
// 		}
// 		super.OnPartBuiltServer( player, part_name, action_id );
// 	}
	
// 	override void OnPartDestroyedServer( Man player, string part_name, int action_id, bool destroyed_by_connected_part = false )
// 	{
// 		super.OnPartDestroyedServer( player, part_name, action_id );
		
// 		//check gate state
// 		ConstructionPart constrution_part = GetConstruction().GetConstructionPart( part_name );
// 		if ( constrution_part.IsGate() && destroyed_by_connected_part ) //avoids the attachment falling down during normal hinge failure
// 		{
// 			//discard the usual investments
// 			HandleDropAttachment(GetBarbedWire1());
// 			HandleDropAttachment(GetBarbedWire2());
// 			HandleDropAttachment(GetCamoNet());
// 			HandleDropAttachment(GetCombinationLock());
			
// 			//turn back
// 			if ( IsOpened() )
// 				CloseFence();
// 		}
// 		if ( part_name == "bp_door_base" )
// 		{
// 			HandleDropAttachment(GetBarbedWire1());
// 			HandleDropAttachment(GetCombinationLock());
// 			HandleDropAttachment(GetBarbedWire2());
// 			HandleDropAttachment(GetCamoNet());
// 		}
		
// 		SetGateState( CheckGateState() );
// 		//update visuals (server)
// 		UpdateVisuals();
// 	}
	
// 	override void OpenFence()
// 	{
// 		//server or single player
// 		if ( GetGame().IsServer() )
// 		{
// 			float value = GATE_ROTATION_ANGLE_DEG;
// 			SetAnimationPhase( "BP_Wall_Interact_Rotate", 			value );
// 			SetAnimationPhase( "BP_Door_Base_Rotate", 				value );
// 			SetAnimationPhase( "BP_Door_Wood_Rotate", 				value );
// 			SetAnimationPhase( "BP_Door_Stell_Rotate", 				value );
// 			SetAnimationPhase( "BP_Door_Gate_Rotate", 				value );
// 			SetAnimationPhase( "Wall_Camonet_Rotate", 				value );
// 			SetAnimationPhase( "Wall_Barbedwire_2_Mounted_Rotate", 	value );
			
// 			SetOpenedState( true );
			
// 			//regenerate navmesh
// 			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( UpdateNavmesh, GATE_ROTATION_TIME_APPROX, false );
			
// 			//synchronize
// 			SynchronizeBaseState();
// 		}
		
// 		//client or single player
// 		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
// 		{
// 			//play sound
// 			SoundGateOpenStart();
// 		}
		
// 		//remove BarbedWire AreaDamageTrigger
// 		UpdateBarbedWireAreaDamagePos(0,true);
		
// 		//add check
// 		GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).Remove(CheckFenceClosed);
// 		GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( CheckFenceOpened, 0, true );
// 	}
	
// 	override void CloseFence()
// 	{
// 		//server or single player
// 		if ( GetGame().IsServer() )
// 		{		
// 			float value = 0;
// 			SetAnimationPhase( "BP_Wall_Interact_Rotate", 			value );
// 			SetAnimationPhase( "BP_Door_Base_Rotate", 				value );
// 			SetAnimationPhase( "BP_Door_Wood_Rotate", 				value );
// 			SetAnimationPhase( "BP_Door_Stell_Rotate", 				value );
// 			SetAnimationPhase( "BP_Door_Gate_Rotate", 				value );
// 			SetAnimationPhase( "Wall_Camonet_Rotate", 				value );
// 			SetAnimationPhase( "Wall_Barbedwire_2_Mounted_Rotate", 	value );

// 			SetOpenedState( false );
			
// 			//regenerate navmesh
// 			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( UpdateNavmesh, GATE_ROTATION_TIME_APPROX, false );
			
// 			//synchronize
// 			SynchronizeBaseState();
// 		}
		
// 		//client or single player
// 		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
// 		{
// 			//play sound
// 			SoundGateCloseStart();
// 		}
		
// 		//remove BarbedWire AreaDamageTrigger
// 		UpdateBarbedWireAreaDamagePos(0,true);
		
// 		//add check
// 		GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).Remove(CheckFenceOpened);
// 		GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( CheckFenceClosed, 0, true );
// 	}
// }
