class ActionPaintFaceTarget: ActionForceFeedMeat
{
  override void OnEndAnimationLoopServer( ActionData action_data )
	{
    PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );

    
    int slot_id = InventorySlots.GetSlotIdFromString("Head");	
		EntityAI players_head = ntarget.GetInventory().FindPlaceholderForSlot( slot_id );

    players_head.SetObjectTexture( 0, "");
    players_head.SetObjectMaterial( 0, "");	


    ntarget.SetFaceTexture("FacePaints\data\eva\facepaint_hhl_f_eva_body_co.paa");
    ntarget.SetFaceMaterial("FacePaints\data\eva\facepaint_hhl_f_eva_body.rvmat");

    // ItemBase meatInHand = action_data.m_MainItem;
    // if (meatInHand.GetQuantity() < 0.01) {
    //   Print("--------------------ItsATreee_ActionConsumeHumanMeatSelf : OnEndAnimationLoopServer : You Ate All The Meat!!");
    // }
    super.OnEndAnimationLoopServer(action_data);
	}
};