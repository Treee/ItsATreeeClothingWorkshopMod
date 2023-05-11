class SRP_MaterialsSpool_ColorBase extends ItemBase
{
  bool IsFull(string color1, string color2, string color3, string color4, string color5)
  {
    ItemBase wire;
    if (!Class.CastTo(wire, GetItemOnSlot("SRP_MaterialSpool_ElectricalWire1")))
      return false;
    if (wire.GetQuantity() < 100 || wire.GetColor() != color1)
      return false;
    if (!Class.CastTo(wire, GetItemOnSlot("SRP_MaterialSpool_ElectricalWire2")))
      return false;
    if (wire.GetQuantity() < 100 || wire.GetColor() != color2)
      return false;
    if (!Class.CastTo(wire, GetItemOnSlot("SRP_MaterialSpool_ElectricalWire3")))
      return false;
    if (wire.GetQuantity() < 100 || wire.GetColor() != color3)
      return false;
    if (!Class.CastTo(wire, GetItemOnSlot("SRP_MaterialSpool_ElectricalWire4")))
      return false;
    if (wire.GetQuantity() < 100 || wire.GetColor() != color4)
      return false;
    if (!Class.CastTo(wire, GetItemOnSlot("SRP_MaterialSpool_ElectricalWire5")))
      return false;
    if (wire.GetQuantity() < 100 || wire.GetColor() != color5)
      return false;

    return true;
  }
  void DeleteElectricalWires()
  {
    ItemBase wire;
    if (Class.CastTo(wire, GetItemOnSlot("SRP_MaterialSpool_ElectricalWire1")))
      wire.Delete();
    if (Class.CastTo(wire, GetItemOnSlot("SRP_MaterialSpool_ElectricalWire2")))
      wire.Delete();
    if (Class.CastTo(wire, GetItemOnSlot("SRP_MaterialSpool_ElectricalWire3")))
      wire.Delete();
    if (Class.CastTo(wire, GetItemOnSlot("SRP_MaterialSpool_ElectricalWire4")))
      wire.Delete();
    if (Class.CastTo(wire, GetItemOnSlot("SRP_MaterialSpool_ElectricalWire5")))
      wire.Delete();
  }
};
class SRP_MaterialsSpool_MetalWire extends SRP_MaterialsSpool_ColorBase{};
class SRP_MaterialsSpool_Rope extends SRP_MaterialsSpool_ColorBase{};
class SRP_MaterialsSpool_CopperWire extends SRP_MaterialsSpool_ColorBase{};
class SRP_MaterialsSpool_ElectricalWire extends SRP_MaterialsSpool_ColorBase{};