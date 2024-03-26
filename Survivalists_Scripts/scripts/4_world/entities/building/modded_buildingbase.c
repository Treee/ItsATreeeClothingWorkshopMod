modded class BaseBuildingBase
{
  override void CreateAreaDamage( string slot_name, float rotation_angle = 0 )
	{
		if ( GetGame() && GetGame().IsServer() )
		{
			//destroy area damage if some already exists
			DestroyAreaDamage( slot_name );
			
			//create new area damage
			AreaDamageLoopedDeferred_NoVehicle areaDamage = new AreaDamageLoopedDeferred_NoVehicle( this );
			areaDamage.SetDamageComponentType(AreaDamageComponentTypes.HITZONE);
			
			vector min_max[2];
			if ( MemoryPointExists( slot_name + "_min" ) )
			{
				min_max[0] = GetMemoryPointPos( slot_name + "_min" );
			}
			if ( MemoryPointExists( slot_name + "_max" ) )
			{
				min_max[1] = GetMemoryPointPos( slot_name + "_max" );
			}
			
			//get proper trigger extents (min<max)
			vector extents[2];
			GetConstruction().GetTriggerExtents( min_max, extents );
			
			//get box center
			vector center;
			center = GetConstruction().GetBoxCenter( min_max );
			center = ModelToWorld( center );
			
			//rotate center if needed
			vector orientation = GetOrientation();
			CalcDamageAreaRotation( rotation_angle, center, orientation );
			
			areaDamage.SetExtents( extents[0], extents[1] );
			areaDamage.SetAreaPosition( center );
			areaDamage.SetAreaOrientation( orientation );
			areaDamage.SetLoopInterval( 1.0 );
			areaDamage.SetDeferDuration( 0.5 );
			areaDamage.SetHitZones( { "Torso","LeftHand","LeftLeg","LeftFoot","RightHand","RightLeg","RightFoot" } );
			areaDamage.SetAmmoName( "BarbedWireHit" );
      
      ItemBase battery;
      if (Class.CastTo(battery, FindAttachmentBySlotName("LargeBattery")))
      {
        if (battery.GetCompEM().GetEnergy() > 85)
        {
          areaDamage.SetAmmoName( "BarbedWireHitShock" );
          areaDamage.SetLoopInterval(60.0);
        }
      }
			areaDamage.Spawn();
			
			m_DamageTriggers.Insert( slot_name, areaDamage );
		}
	}
};


modded class AreaDamageManager
{
  override bool OnEvaluateDamageEx(TriggerInsider insider, float deltaTime)
	{
    if (GetAmmoName() == "BarbedWireHitShock")
    {
      BaseBuildingBase fence;
      // are we attached to a fence
      if (Class.CastTo(fence, m_ParentObject))
      {
        ItemBase battery;
        // is there a battery present
        if (Class.CastTo(battery, fence.FindAttachmentBySlotName("LargeBattery")))
        {
          // is there enough energy to care?
          if (battery.GetCompEM().GetEnergy() > 85)
          {
            battery.GetCompEM().AddEnergy(-Math.RandomIntInclusive(15,85));
          }
          else
            return false;
        }
      }      
    }
		return super.OnEvaluateDamageEx(insider, deltaTime);
	}
};