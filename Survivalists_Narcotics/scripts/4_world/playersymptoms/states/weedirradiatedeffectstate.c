class WeedIrradiatedEffectSymptom extends SymptomBase
{  
	//this is just for the Symptom parameters set-up and is called even if the Symptom doesn't execute, don't put any gameplay code in here
	override void OnInit()
	{
		m_SymptomType = SymptomTypes.SECONDARY;
		m_Priority = 50;
		m_ID = SRP_DrugSymptomIDs.SYMPTOM_WEEDIRRADIATED;
		m_DestroyOnAnimFinish = true;
		m_IsPersistent = true;
		m_SyncToClient = true;
	}
	
	//!gets called every frame
	override void OnUpdateServer(PlayerBase player, float deltatime)
	{
    bool isBoosted = false;
    EntityAI attachment;
    if (Class.CastTo(attachment, player.GetInventory().FindAttachment(InventorySlots.ARMBAND)))
    {
      if (attachment.GetType() == "Skylar_BioZone_Protection" || attachment.GetType() == "Sneakers_Skylar_Biozone")
      {
        isBoosted = true;
      }
    }
    if (Class.CastTo(attachment, player.GetInventory().FindAttachment(InventorySlots.FEET)))
    {
      if (attachment.GetType() == "Sneakers_Skylar_Biozone")
      {
        isBoosted = true;
      }
    }
    int slot_id = InventorySlots.GetSlotIdFromString("Head");
    Head_Default tempHead;
    if (Class.CastTo(tempHead, Head_Default.Cast(player.GetInventory().FindPlaceholderForSlot( slot_id ))))
    {
      if (tempHead.GetType() == "DUB_Muthead_M" || tempHead.GetType() == "DUB_Muthead_F" || tempHead.GetType() == "DUB_Muthead_M_2" || tempHead.GetType() == "DUB_Muthead_F_2" || tempHead.GetType() == "DUB_Carlhead")
      {
        isBoosted = true;
      }
    }

    if (isBoosted)
    {
      player.GetStatWater().Add(0.5);
      player.GetStatEnergy().Add(0.5);    
    }
    else
    {
      player.GetStatWater().Add(-0.5);
      player.GetStatEnergy().Add(-0.5);
      player.AddHealth("","Blood", -0.7 );
    }
	}

	//!gets called once on an Symptom which is being activated
	override void OnGetActivatedServer(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated", m_Player.ToString());
	}

	override void OnGetActivatedClient(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetActivated", m_Player.ToString());
	}

	override void OnGetDeactivatedServer(PlayerBase player)
	{
    player.m_IsUnderWeedEffect = false;
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
	
	//!only gets called once on an active Symptom that is being deactivated
	override void OnGetDeactivatedClient(PlayerBase player)
	{
		if (LogManager.IsSymptomLogEnable()) Debug.SymptomLog("n/a", this.ToString(), "n/a", "OnGetDeactivated", m_Player.ToString());
	}
};
