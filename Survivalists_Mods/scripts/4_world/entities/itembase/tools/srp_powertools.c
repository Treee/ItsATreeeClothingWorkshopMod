class PowerTool_ElectricHandDrill extends ItemBase
{
  bool HasBatteryAttached()
  {
    return GetInventory().AttachmentCount() > 0;
  }

  bool CanReceiveAttachment (EntityAI attachment, int slotId)
	{
		return GetInventory().AttachmentCount() == 0;
	}

  void ConsumeBattery(int amount)
  {
    ItemBase battery;
    battery = GetItemOnSlot("CarBattery");
    if (battery)
    {
      battery.AddQuantity(-amount);
      return;
    }
    battery = GetItemOnSlot("TruckBattery");
    if (battery)
    {
      battery.AddQuantity(-amount);
      return;
    }
  }
}

