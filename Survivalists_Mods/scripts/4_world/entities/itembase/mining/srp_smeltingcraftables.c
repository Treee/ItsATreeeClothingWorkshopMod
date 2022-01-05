class SRP_ForgeIngotPlate_ColorBase extends Inventory_Base
{
  bool HasCorrectQuantityAndType(int quantity, string acceptedType)
  {
    return GetQuantity() >= quantity && acceptedType == GetPlateColor();
  }

  string GetPlateColor()
  {
    return ConfigGetString("color");
  }
};
class SRP_ForgeIngotPlate_Copper extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Tin extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Bronze extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Iron extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Gold extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Platinum extends SRP_ForgeIngotPlate_ColorBase{};

class SRP_ForgeIngotRod_ColorBase extends Inventory_Base
{
  bool HasCorrectQuantityAndType(int quantity, string acceptedType)
  {
    return GetQuantity() >= quantity && acceptedType == GetRodColor();
  }

  string GetRodColor()
  {
    return ConfigGetString("color");
  }
};
class SRP_ForgeIngotRod_Copper extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Tin extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Bronze extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Iron extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Gold extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Platinum extends SRP_ForgeIngotRod_ColorBase{};
