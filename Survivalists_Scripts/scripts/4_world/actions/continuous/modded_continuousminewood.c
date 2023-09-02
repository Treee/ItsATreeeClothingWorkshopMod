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

    MineActionData adata = MineActionData.Cast(action_data);
    if (adata.m_HarvestType == SRP_EHarvestType.BUSH_FORAGE || adata.m_HarvestType == SRP_EHarvestType.TREE_FORAGE)
    {      
      for (int k = 0; k < m_MaterialAndQuantityMap.Count(); k++)
      {      
        RandomizeForagedFood(k);
      }
    }
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

  void RandomizeForagedFood(int index)
  {
    Edible_Base food;
    if (Class.CastTo(food, m_MinedItem[index]))
    {
      int chance = Math.RandomIntInclusive(0,20);
      float newQuantity = Math.RandomFloatInclusive(0.1, 1);
      // Print("second chance: " + chance);
      if (chance > 15 && chance < 21) // 16-20 25%chance raw pristine
      {
        food.ChangeFoodStage( FoodStageType.RAW );
        food.SetHealth( "", "", food.GetMaxHealth());
        newQuantity = Math.RandomFloatInclusive(0.5, 1);
      }
      else if (chance > 10 && chance < 16) // 11-15 dried worn
      {
        food.ChangeFoodStage( FoodStageType.DRIED );
        food.SetHealth( "", "", food.GetMaxHealth()*0.6 );
        newQuantity = Math.RandomFloatInclusive(0.4, 0.7);
      }
      else if (chance > 5 && chance < 11) // 6-10 rotten worn
      {
        food.ChangeFoodStage( FoodStageType.ROTTEN );
        food.SetHealth( "", "", food.GetMaxHealth()*0.6 );
        newQuantity = Math.RandomFloatInclusive(0.3, 0.5);
      }
      else // 1-5 rotten ruined
      {
        food.ChangeFoodStage( FoodStageType.ROTTEN );
        food.SetHealth( "", "", food.GetMaxHealth()*0.1 );
        newQuantity = Math.RandomFloatInclusive(0.1, 0.3);
      }
      food.SetQuantity(food.GetQuantityMax()*newQuantity );
      // Print("quantity chance: " + newQuantity);
    }
  }

};