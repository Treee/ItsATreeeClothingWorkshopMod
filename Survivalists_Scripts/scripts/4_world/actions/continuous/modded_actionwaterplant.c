modded class ActionWaterGardenSlot
{
    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object targetObject = target.GetObject();

		if (item.GetQuantity() == 0)
			return false;

		// Get the liquid
		int liquid_type	= item.GetLiquidType();

		if (liquid_type != LIQUID_WATER)
		{
			return false; //  Forbid watering of plants with gasoline and other fluids
		}

		if ( targetObject.IsInherited(GardenBase) )
		{
			GardenBase garden_base = GardenBase.Cast( targetObject );

			Slot slot;

			array<string> selections = new array<string>;
			targetObject.GetActionComponentNameList(target.GetComponentIndex(), selections);

			for (int s = 0; s < selections.Count(); s++)
			{
				string selection = selections[s];
				slot = garden_base.GetSlotBySelection( selection );
				if (slot)
					break;
			}

			if ( slot && !slot.GetPlant() )// && slot.CanBeWatered() && slot.GetWateredState() == 0 )
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		return false;
	}
};

modded class ActionWaterPlant
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object targetObject = target.GetObject();

		if ( targetObject != NULL && targetObject.IsInherited(PlantBase) && item != NULL && !item.IsDamageDestroyed() )
		{
			PlantBase plant = PlantBase.Cast( targetObject );

			// if ( plant.NeedsWater() && item.GetQuantity() > 0 )
			if (item.GetQuantity() > 0 )
			{
				return true;
			}
		}
		return false;
	}
};

modded class CAContinuousWaterPlant
{
    override void Setup( ActionData action_data )
	{
		PlantBase target_PB;
		if (Class.CastTo(target_PB, action_data.m_Target.GetObject()))
		{
			m_SpentQuantity = 0;
			if ( !m_SpentUnits )
			{
				m_SpentUnits = new Param1<float>(0);
			}
			else
			{
				m_SpentUnits.param1 = 0;
			}
			if ( action_data.m_MainItem )
			{
				m_ItemQuantity = action_data.m_MainItem.GetQuantity();
			}
			if ( target_PB )
			{
				m_PlantThirstyness = 200;//target_PB.GetWaterMax();// - target_PB.GetWater();
			}

			m_TimeToComplete = (Math.Min(m_PlantThirstyness,m_ItemQuantity))/m_QuantityUsedPerSecond;
		}
	}
};