class SRP_PortalBase extends Inventory_Base
{
  override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
    
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }
};

class SRP_PortalBone extends SRP_PortalBase{};
class SRP_PortalDruid extends SRP_PortalBase{};
class SRP_PortalArch extends SRP_PortalBase{};