modded class Pot
{
  override bool CanPutInCargo( EntityAI parent )
	{
    // if you have more than 100ml of liquid and we are trying to put into an item attached to a player
		if (GetQuantity() > 100 && parent.GetHierarchyRootPlayer())    
      return false; // dont attach
		return super.CanPutInCargo(parent);
	}

  override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
      return false;
		if (item.IsContainer())
      return false;
    return true;
	}
};

modded class PortableGasStove
{
  override bool CanPutInCargo(EntityAI parent)
	{
    if (GetCookingEquipment())
    { // if you have more than 100ml of liquid and we are trying to put into an item attached to a player
      if (GetCookingEquipment().GetQuantity() > 100 && parent.GetHierarchyRootPlayer())
        return false;
      // if you have items on the pot and you try to store the gas stove, (small cargo exploit)
      if (GetCookingEquipment().GetInventory().CountInventory() == 0)
        return true;
    }
    ItemBase gasTank;
    if (Class.CastTo(gasTank, GetItemOnSlot("GasCanister")))
      return false;
    return super.CanPutInCargo(parent);
	}
};

modded class PortableGasLamp
{
  override bool CanPutInCargo(EntityAI parent)
	{
    ItemBase gasTank;
    if (Class.CastTo(gasTank, GetItemOnSlot("GasCanister")))
    {
      return false;
    }    
    return super.CanPutInCargo(parent);
	}
};

modded class Bear_ColorBase
{
  override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
      return false;
		if (item.IsContainer())
      return false;
    return true;
	}
};