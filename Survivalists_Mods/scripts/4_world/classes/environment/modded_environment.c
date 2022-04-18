modded class Environment
{
  bool m_HasRadioactiveFuel;
  override protected void ProcessTemperatureSources()
	{
    super.ProcessTemperatureSources();
    
    m_HasRadioactiveFuel = false;
    // get temperature from the source (based on distance), save it for min/max filtering
		for (int i = 0; i < m_UTemperatureSources.Count(); i++)
		{
      if (m_UTemperatureSources[i] && m_UTemperatureSources[i].IsRadioactiveSource())
      {
        m_HasRadioactiveFuel = true;
      }
		}
	}

  override void Update(float pDelta)
	{
    super.Update(pDelta);
    // Print("[Environment] After super " + m_HasRadioactiveFuel);
		if (m_Player && m_HasRadioactiveFuel)
		{
      // Print("[Environment] is radioactive fueld");
      bool isBoosted = false;
      EntityAI attachment;
      if (Class.CastTo(attachment, m_Player.GetInventory().FindAttachment(InventorySlots.ARMBAND)))
      {
        if (attachment.GetType() == "Skylar_BioZone_Protection" || attachment.GetType() == "Sneakers_Skylar_Biozone")
        {
          isBoosted = true;
        }
      }
      if (Class.CastTo(attachment, m_Player.GetInventory().FindAttachment(InventorySlots.FEET)))
      {
        if (attachment.GetType() == "Sneakers_Skylar_Biozone")
        {
          isBoosted = true;
        }
      }
      int slot_id = InventorySlots.GetSlotIdFromString("Head");
      Head_Default tempHead;
      if (Class.CastTo(tempHead, Head_Default.Cast(m_Player.GetInventory().FindPlaceholderForSlot( slot_id ))))
      {
        if (tempHead.GetType() == "DUB_Muthead_M" || tempHead.GetType() == "DUB_Muthead_F" || tempHead.GetType() == "DUB_Muthead_M_2" || tempHead.GetType() == "DUB_Muthead_F_2" || tempHead.GetType() == "DUB_Carlhead")
        {
          isBoosted = true;
        }
      }

      if (isBoosted)
      {
        m_Player.GetStatWater().Add(0.7 * pDelta);
        m_Player.GetStatEnergy().Add(0.7 * pDelta);    
      }
      else
      {
        m_Player.GetStatWater().Add(-0.9 * pDelta);
        m_Player.GetStatEnergy().Add(-0.9 * pDelta);
        m_Player.AddHealth("","Blood", -1 * pDelta );
      }
    }
  }

};
