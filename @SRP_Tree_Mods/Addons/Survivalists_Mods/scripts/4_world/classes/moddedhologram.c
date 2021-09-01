modded class Hologram
{
  override string ProjectionBasedOnParent()
	{
    EntityAI itemInHands = m_Player.GetHumanInventory().GetEntityInHands();
    // Print("ProjectionBasedOnParent " + itemInHands);
    if (itemInHands.IsInherited(SRP_KitBase))
    {
      SRP_KitBase srpKit = SRP_KitBase.Cast(itemInHands);
      return srpKit.GetKitItemName();
    }
    string s = super.ProjectionBasedOnParent();
    // Print("Parent projection..... " + s);
		return s;
	}

  override string GetProjectionName(ItemBase item)
	{
    // Print("GetProjectionName: " + item.GetType());
		if( !item )
			return "";
		
		if ( item.CanMakeGardenplot() )
		{
      // Print("GetProjectionName: GardenPlot");
			return "GardenPlotPlacing";
		}
		
		//Camping & Base building
		if ( item.IsInherited( TentBase ) || item.IsBasebuildingKit() )
		{
      // Print("TentBase, BuildingKitBase: " + item.GetType() + "Placing");
			return item.GetType() + "Placing";
		}
		
		return item.GetType();
	}

	EntityAI PlaceEntity( EntityAI entity_for_placing )
	{
    // If we are placing our kits
		if ( entity_for_placing.IsInherited( SRP_KitBase ))
		{
      //If the kit we are placing can affect pathing
      if( entity_for_placing.CanAffectPathgraph() )
      { 
        // update the navemesh
        entity_for_placing.SetAffectPathgraph( true, false );            
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, entity_for_placing);
      }
      // return this entity for placing
      return entity_for_placing;
		}
    // pass through super call
    return super.PlaceEntity(entity_for_placing);	
	}

  // Building anywhere override
  override void EvaluateCollision(ItemBase action_item = null)
	{	
    EntityAI itemInHands = m_Player.GetHumanInventory().GetEntityInHands();
		if (IsCollidingGPlot())
    {
			SetIsColliding(true);
    }
    else if (itemInHands.IsInherited(SRP_KitBase)) // if the item in our hands is our kit
    {
      // ignore collision
      SetIsColliding(false);      
    }
    else 
    {
      SetIsColliding(false);
    }
	}
};