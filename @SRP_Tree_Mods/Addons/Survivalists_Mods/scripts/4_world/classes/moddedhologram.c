modded class Hologram
{
  string ProjectionBasedOnParent()
	{
    EntityAI itemInHands = m_Player.GetHumanInventory().GetEntityInHands();	
    if (itemInHands.IsInherited(SRP_KitBase))
    {
      SRP_KitBase srpKit = SRP_KitBase.Cast(itemInHands);
      return srpKit.GetKitItemName();
    }
		return super.ProjectionBasedOnParent();
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

  override void EvaluateCollision(ItemBase action_item = null)
  {
    EntityAI itemInHands = m_Player.GetHumanInventory().GetEntityInHands();
    // if the item in our hands is our kit
    if (itemInHands.IsInherited(SRP_KitBase))
    {
      // ignore collision
      SetIsColliding(false);
      return;
    };
    // call parent evaluation otherwise.
    super.EvaluateCollision();
  }
};









// override string ProjectionBasedOnParent()
// 	{
// 		ItemBase item_in_hands = ItemBase.Cast(m_Player.GetHumanInventory().GetEntityInHands());	

// 		if (item_in_hands.IsInherited(bp_big_door_kit))
// 			return "bp_big_door_holo";

// 		return super.ProjectionBasedOnParent();
// 	}



// 	override string ProjectionBasedOnParent()
// 	{
// 		ItemBase item_in_hands = ItemBase.Cast(m_Player.GetHumanInventory().GetEntityInHands());	

// 		if (item_in_hands.IsInherited(bp_window_kit))
// 			return "bp_window_holo";

// 		return super.ProjectionBasedOnParent();
// 	}  


// 	override string ProjectionBasedOnParent()
// 	{
// 		ItemBase item_in_hands = ItemBase.Cast(m_Player.GetHumanInventory().GetEntityInHands());	

// 		if (item_in_hands.IsInherited(bp_door_kit))
// 			return "bp_door_holo";

// 		return super.ProjectionBasedOnParent();
// 	}  