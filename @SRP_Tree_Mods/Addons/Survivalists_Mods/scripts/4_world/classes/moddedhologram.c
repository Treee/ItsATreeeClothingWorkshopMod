modded class Hologram
{
  string ProjectionBasedOnParent()
	{
    EntityAI itemInHands = m_player.GetHumanInventory().GetEntityInHands();	
    Print("ProjectionBasedOnParent Pre if");
    if (item_in_hands.IsInherited(SRP_KitBase))
    {
      SRP_KitBase srpKit = SRP_KitBase.Cast(itemInHands);
      Print("Is SRP Kit " + srpKit);
      return srpKit.GetKitItemName();
    }
    Print("Nope get fucked");
		return super.ProjectionBasedOnParent();
	}

	EntityAI PlaceEntity( EntityAI entity_for_placing )
	{
    // If we are placing our kits
    Print("PlaceEntity Pre if");
		if ( entity_for_placing.IsInherited( SRP_KitBase ))
		{
      //If the kit we are placing can affect pathing
      Print("Is SRP Kit" + entity_for_placing);

      if( entity_for_placing.CanAffectPathgraph() )
      { 
        Print("Can impact navmesh");
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
    EntityAI itemInHands = m_player.GetHumanInventory().GetEntityInHands();
    // if the item in our hands is our kit
    if (item_in_hands.IsInherited(SRP_KitBase))
    {
      Print("Ignoring collision, our kit");
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