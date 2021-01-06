class ActionPaintFaceSelf: ActionEatMeat
{
  protected ref TStringArray 	m_CharPersonalityMaleList;
  protected ref TStringArray 	m_CharPersonalityFemaleList;

  override void OnEndAnimationLoopServer( ActionData action_data )
	{
    PlayerBase player = action_data.m_Player;

    int head_slot_id = InventorySlots.GetSlotIdFromString("Head");	
		EntityAI players_head = player.GetInventory().FindPlaceholderForSlot( head_slot_id );
    
    players_head.SetObjectTexture(0, "");
    players_head.SetObjectMaterial(0, "");	

    // int personality = players_head.GetHiddenSelectionIndex("personality");
    // string faceType = m_CharPersonalityMaleList[personality];
    // if (m_CharGender == 1) { // is woman
    //   faceType = m_CharPersonalityFemaleList[personality];
    // }

    string characterType = player.GetPlayerClass();
    characterType.ToLower();
    autoptr TStringArray parts = new TStringArray;
    characterType.Split("_", parts);
    characterType = parts[1];

    // Print("FacePaints\\data\\"+characterType+"\\facepaint_hhl_f_"+characterType+"_body_co.paa");
    // Print("FacePaints\\data\\"+characterType+"\\facepaint_hhl_f_"+characterType+"_body.rvmat");

    player.SetFaceTexture("FacePaints\\data\\"+characterType+"\\facepaint_hhl_f_"+characterType+"_body_co.paa");
    player.SetFaceMaterial("FacePaints\\data\\"+characterType+"\\facepaint_hhl_f_"+characterType+"_body.rvmat");
    
    // Print("--------------------IAT_FacePaintStick : OnEndAnimationLoopServer : You Ate All The Meat!!      -- " + characterType);

    super.OnEndAnimationLoopServer(action_data);
	}
};
