modded class CAContinuousMineWood
{
  override void CreatePrimaryItems(ActionData action_data)
	{
    // Print("CreatePrimaryItems:: outer");
    if (action_data.m_Player && action_data.m_Player.IsInBioZone())
    {
      // Print("CreatePrimaryItems:: inner");
      for(int i = 0; i < m_MaterialAndQuantityMap.Count(); i++)
      {
        m_MaterialAndQuantityMap.ReplaceKey(m_MaterialAndQuantityMap.GetKey(i),m_MaterialAndQuantityMap.GetKey(i)+"_Irradiated");
        // Print("material = " + m_MaterialAndQuantityMap.GetKey(i) + "; quantity = " + m_MaterialAndQuantityMap.GetElement(i));
      }
    }
    super.CreatePrimaryItems(action_data);
	}
  
  override void CreateSecondaryItems(ActionData action_data, string material_secondary = "", int quantity_secondary = -1)
	{
    // Print("CreateSecondaryItems:: outer");
    if (action_data.m_Player && action_data.m_Player.IsInBioZone())
    {
      // Print("CreateSecondaryItems:: inner");
      material_secondary = material_secondary + "_Irradiated";
    }
    super.CreateSecondaryItems(action_data);
	}

};