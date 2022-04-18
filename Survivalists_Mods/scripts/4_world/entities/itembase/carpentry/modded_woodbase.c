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
};