modded class QuantityConversions
{
  override static int HasItemQuantity( notnull EntityAI item )
	{
		ItemBase ib;
		if ( Class.CastTo(ib, item) )
		{
			if ( item.IsMagazine() )
				return QUANTITY_PROGRESS;
			
			if ( !ib.m_CanShowQuantity )
				return QUANTITY_HIDDEN;
			
			int max = item.GetQuantityMax();
			if ( max > 0 )
			{
				if ( ib.m_HasQuantityBar )
				{
					return QUANTITY_PROGRESS;
				}
				else
				{
					if (max == 1)
					{
						return QUANTITY_HIDDEN;
					}
					else
					{
						return QUANTITY_COUNT;
					}
				}
			}
		}
		return QUANTITY_HIDDEN;
	}
}