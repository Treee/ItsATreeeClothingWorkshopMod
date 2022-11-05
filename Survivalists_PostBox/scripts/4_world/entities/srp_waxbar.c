class SRP_WaxBar_ColorBase extends ItemBase
{
  string GetWaxColor()
  {
    return ConfigGetString("color");
  }
};

class SRP_WaxBar_Black extends SRP_WaxBar_ColorBase{};
class SRP_WaxBar_Blue extends SRP_WaxBar_ColorBase{};
class SRP_WaxBar_Brown extends SRP_WaxBar_ColorBase{};
class SRP_WaxBar_Green extends SRP_WaxBar_ColorBase{};
class SRP_WaxBar_Pink extends SRP_WaxBar_ColorBase{};
class SRP_WaxBar_Red extends SRP_WaxBar_ColorBase{};
class SRP_WaxBar_White extends SRP_WaxBar_ColorBase{};
class SRP_WaxBar_Yellow extends SRP_WaxBar_ColorBase{};
