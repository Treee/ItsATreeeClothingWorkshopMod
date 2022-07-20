class SRP_Mining_CutGem_ColorBase extends ItemBase
{
  bool HasCorrectQuantityAndType(int quantity, string acceptedType)
  {
    return GetQuantity() >= quantity && acceptedType == GetColor();
  }
  string GetColor()
  {
    return ConfigGetString("color");
  }
};

class SRP_Mining_CutGem_Aqua extends SRP_Mining_CutGem_ColorBase{};
class SRP_Mining_CutGem_Amethyst extends SRP_Mining_CutGem_ColorBase{};
class SRP_Mining_CutGem_Jade extends SRP_Mining_CutGem_ColorBase{};
class SRP_Mining_CutGem_Amber extends SRP_Mining_CutGem_ColorBase{};
class SRP_Mining_CutGem_Quartz extends SRP_Mining_CutGem_ColorBase{};
class SRP_Mining_CutGem_Ruby extends SRP_Mining_CutGem_ColorBase{};
class SRP_Mining_CutGem_Topaz extends SRP_Mining_CutGem_ColorBase{};
class SRP_Mining_CutGem_Diamond extends SRP_Mining_CutGem_ColorBase{};