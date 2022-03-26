modded class WoodBase
{
	override int GetAmountOfDrops(ItemBase item)
	{
    // forcing hunting knifes to be considered bark cutting
		if ( m_PrimaryDropsAmount > 0 )
		{
			if ( IsTree() && item && ( item.IsInherited(HuntingKnife) ) )
			{
				return -1;
			}
		}
		else
		{
			if ( item && ( item.IsInherited(HuntingKnife) ) )
			{
				return -1;
			}
		}
    return super.GetAmountOfDrops(item);
	}
	
	void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
    // force hutning knife to be considered bark cutting
		if ( IsTree() && item && ( item.IsInherited(HuntingKnife) ) && m_BarkType != "" )
		{
			output_map.Insert(m_BarkType,1);
		}
		else
		{
			super.GetMaterialAndQuantityMap(item, output_map);
		}
	}
	
	float GetDamageToMiningItemEachDrop(ItemBase item)
	{
    // force hunting knife to be damaged
		if (m_ToolDamage > -1)
			return m_ToolDamage;
		
		if ( IsTree() )
		{
			if ( item && item.IsInherited(HuntingKnife) )
			{
				return 20;
			}			
		}
		else
		{
			if ( item && item.IsInherited(HuntingKnife) )
			{
				return 30;
			}
		}
    return super.GetDamageToMiningItemEachDrop(item);
	}
};