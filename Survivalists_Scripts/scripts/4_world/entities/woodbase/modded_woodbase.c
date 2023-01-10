enum SRP_EHarvestType: EHarvestType
{
	BUSH_FORAGE,
  TREE_FORAGE
}

modded class WoodBase
{
	override int GetAmountOfDrops(ItemBase item)
	{
    // forcing hunting knifes to be considered bark cutting
		if ( m_PrimaryDropsAmount > 0 )
		{
			if ( IsTree() && IsBarkYieldingItem(item) )
			{
				return -1;
			}
		}
		else
		{
			if ( IsBarkYieldingItem(item) )
			{
				return -1;
			}
		}
    return super.GetAmountOfDrops(item);
	}

  override int GetAmountOfDropsEx(ItemBase item, EHarvestType type)
	{
    int amountOfDrops = super.GetAmountOfDropsEx(item, type);
    if (type == SRP_EHarvestType.BUSH_FORAGE)
    {
      amountOfDrops = Math.RandomIntInclusive(1,2);
    }
    else if (type == SRP_EHarvestType.TREE_FORAGE)
    {
      amountOfDrops = Math.RandomIntInclusive(1,3);
    }
    return amountOfDrops;
	}
	
	override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
    // force hutning knife to be considered bark cutting
		if ( IsTree() && IsBarkYieldingItem(item) && m_BarkType != "" )
		{
			output_map.Insert(GetBarkType(),1);
		}
		else
		{
			super.GetMaterialAndQuantityMap(item, output_map);
		}
	}

  override void GetMaterialAndQuantityMapEx(ItemBase item, out map<string,int> output_map, EHarvestType type)
	{
    if (type == SRP_EHarvestType.BUSH_FORAGE)
    {
      output_map.Insert(GetBushFruitList().GetRandomElement(),1);
    }
    else if (type == SRP_EHarvestType.TREE_FORAGE)
    {
      output_map.Insert(GetTreeFruitList().GetRandomElement(),1);
    }
    else
    {
      super.GetMaterialAndQuantityMapEx(item, output_map, type);
    }
	}
	
	override float GetDamageToMiningItemEachDrop(ItemBase item)
	{
    // force hunting knife to be damaged
		if (m_ToolDamage > -1)
			return m_ToolDamage;
		
		if ( IsTree() )
		{
			if ( IsBarkYieldingItem(item) )
			{
				return 20;
			}			
		}
		else
		{
			if ( IsBarkYieldingItem(item) )
			{
				return 30;
			}
		}
    return super.GetDamageToMiningItemEachDrop(item);
	}

  bool IsBarkYieldingItem(ItemBase item)
  {
    bool yieldsBark = false;
    if (item)
    {
      if (item.IsInherited(HuntingKnife))
      {
        yieldsBark = true;
      }
    }
    return yieldsBark;
  }

  override void OnTreeCutDown( EntityAI cutting_entity )
  {
    Print("WoodBase testing yo");
    super.OnTreeCutDown(cutting_entity);
    Print("WoodBase testing yo yo");
  }

  TStringArray GetBushFruitList()
  {
    return {
      "Tomato",
      "GreenBellPepper",
      "Zucchini",
      "Pumpkin",
      "Potato",
      "SambucusBerry",
      "CaninaBerry",
    };
  }
  TStringArray GetTreeFruitList()
  {
    return {
      "Apple",
      "Plum",
      "Pear",    
    };
  }
};