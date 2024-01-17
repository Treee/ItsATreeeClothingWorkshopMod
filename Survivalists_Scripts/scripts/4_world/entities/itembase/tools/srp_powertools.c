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
      return battery.GetCompEM().GetEnergy() >= amount;
    }
    battery = GetItemOnSlot("TruckBattery");
    if (battery)
    {
      return battery.GetCompEM().GetEnergy() >= amount;      
    }
    return false;
  }

  void ConsumeBattery(int amount)
  {
    ItemBase battery;
    battery = GetItemOnSlot("CarBattery");
    if (battery)
    {
      battery.GetCompEM().AddEnergy(-amount);
      return;
    }
    battery = GetItemOnSlot("TruckBattery");
    if (battery)
    {
      battery.GetCompEM().AddEnergy(-amount);
      return;
    }
  }
  
  override void SetActions()
	{
		super.SetActions();
    AddAction(SRP_ActionDismantlePlacedObject);
    AddAction(SRP_ActionDismantlePlacedObject_RadioTerminal);
	}
};

class PowerTool_ElectricHandDrill_Stag extends PowerTool_ElectricHandDrill{};
