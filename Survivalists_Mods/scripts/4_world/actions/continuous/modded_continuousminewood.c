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
    float chance = Math.RandomFloatInclusive(0,1);
    // if (chance > 0.75)
    if (chance > 0)
    {
      Edible_Base food = Edible_Base.Cast(m_MinedItem[index]);

      chance = Math.RandomFloatInclusive(0,1);
      if ( chance > 0.50 )
      {
        food.ChangeFoodStage( FoodStageType.ROTTEN );
        food.SetHealth( "", "", food.GetMaxHealth()*0.1 );
      }
      else if ( chance > 0.25 )
      {
        food.ChangeFoodStage( FoodStageType.DRIED );
        food.SetHealth( "", "", food.GetMaxHealth()*0.4 );
      }
      else
      {
        food.ChangeFoodStage( FoodStageType.DRIED );
        food.SetHealth( "", "", food.GetMaxHealth()*0.2 );
      }
      chance = Math.RandomFloatInclusive(0.1, 0.5);
      food.SetQuantity(food.GetQuantityMax()*chance );
    }
  }

};