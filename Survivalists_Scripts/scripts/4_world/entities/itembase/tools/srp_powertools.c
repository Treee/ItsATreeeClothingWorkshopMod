class PowerTool_ElectricHandDrill extends ItemBase
{
  bool HasBatteryAttached()
  {
    return GetInventory().AttachmentCount() > 0;
  }

  override bool CanReceiveAttachment (EntityAI attachment, int slotId)
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

class PowerTool_ElectricHandDrill_Stag extends PowerTool_ElectricHandDrill{};
