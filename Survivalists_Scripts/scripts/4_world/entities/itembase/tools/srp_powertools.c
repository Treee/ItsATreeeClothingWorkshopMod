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

  bool HasRequiredEnergy(float amount)
  {
    ItemBase battery;    
    battery = GetItemOnSlot("CarBattery");
    if (battery)
    {
      return battery.GetQuantity() >= amount;
    }
    battery = GetItemOnSlot("TruckBattery");
    if (battery)
    {
      return battery.GetQuantity() >= amount;      
    }
    return false;
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
  
  override void SetActions()
	{
		super.SetActions();
    AddAction(SRP_ActionDismantlePlacedObject);
	}
};

class PowerTool_ElectricHandDrill_Stag extends PowerTool_ElectricHandDrill{};
