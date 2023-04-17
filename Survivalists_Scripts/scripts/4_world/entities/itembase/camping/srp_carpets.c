class SRP_Carpet extends SRP_DeployableContainer_Base
{
  override void EEItemAttached(EntityAI item, string slot_name)
  {
    super.EEItemAttached(item, slot_name);
    UpdateShoulderProxyVisibility(item, slot_name);
  }

  override bool CanBeDeconstructed()
  {
    return true;
  }
};

class SRP_CarpetRug extends SRP_DeployableContainer_Base
{
  override void EEItemAttached(EntityAI item, string slot_name)
  {
    super.EEItemAttached(item, slot_name);
    UpdateShoulderProxyVisibility(item, slot_name);
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
};


class SRP_Carpet_Kit extends SRP_KitBase{};
class SRP_Carpet_Basic_Kit extends SRP_KitBase{};
class SRP_Carpet_BlueSea_Kit extends SRP_KitBase{};
class SRP_Carpet_Espen_Kit extends SRP_KitBase{};
class SRP_Carpet_Grape_Kit extends SRP_KitBase{};
class SRP_Carpet_LockNSons_Kit extends SRP_KitBase{};
class SRP_Carpet_Red_Kit extends SRP_KitBase{};
class SRP_Carpet_RedFloral_Kit extends SRP_KitBase{};
class SRP_Carpet_RedRose_Kit extends SRP_KitBase{};
class SRP_Carpet_RoyalBlue_Kit extends SRP_KitBase{};
class SRP_Carpet_Stag_Kit extends SRP_KitBase{};

class SRP_Carpet_ColorBase extends SRP_DeployableContainer_Base
{
  override void EEItemAttached(EntityAI item, string slot_name)
  {
    super.EEItemAttached(item, slot_name);
    UpdateShoulderProxyVisibility(item, slot_name);
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
};

class SRP_CarpetRug_Kit extends SRP_KitBase{};
class SRP_CarpetRug_Basic_Kit extends SRP_KitBase{};
class SRP_CarpetRug_Blue_Kit extends SRP_KitBase{};
class SRP_CarpetRug_Green_Kit extends SRP_KitBase{};
class SRP_CarpetRug_Orange_Kit extends SRP_KitBase{};
class SRP_CarpetRug_Purple_Kit extends SRP_KitBase{};
class SRP_CarpetRug_Red_Kit extends SRP_KitBase{};
class SRP_CarpetRug_Teal_Kit extends SRP_KitBase{};
class SRP_CarpetRug_Yellow_Kit extends SRP_KitBase{};
class SRP_CarpetRug_Kitty_Kit extends SRP_KitBase{};
class SRP_CarpetRug_Planets_Kit extends SRP_KitBase{};
class SRP_CarpetRug_ColorBase extends SRP_DeployableContainer_Base
{
  override void EEItemAttached(EntityAI item, string slot_name)
  {
    super.EEItemAttached(item, slot_name);
    UpdateShoulderProxyVisibility(item, slot_name);
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
};