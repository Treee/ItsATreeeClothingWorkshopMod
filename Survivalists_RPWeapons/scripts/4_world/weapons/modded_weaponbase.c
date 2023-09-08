modded class Weapon_Base
{
	override float GetChanceToJam()
	{
		return super.GetChanceToJam() * 0.1;
	}

  override bool CanAssignToQuickbar()
	{
    if (super.CanAssignToQuickbar()) // if vanilla says we can add to quickbar, run our logic
    {
      EntityAI parent;
      int slotId;
      string slotName;
      // weapons cannot be assigned to the quickbar unless they are on a known "visible" slot
      // ie. shoulder,melee, holsters, slings, bags
      if (GetInventory() && GetInventory().GetCurrentAttachmentSlotInfo(slotId, slotName))
      {
        // Rifle_Base, Shotgun_Base, Archery_Base, Launcher_Base       
        if (slotName == "Melee" || slotName == "Shoulder") // shoulder and melee are always allowed
          return true;
        // slots that allow quickbar usage
        else if (slotName == "SRP_GunDerringer")
          return true;
        // vest holsters should allow quickbar usage, (some packpacks have the pistol slot so check further)
        else if (slotName == "Pistol")
          if (Class.CastTo(parent, GetHierarchyRoot()))
            return parent.GetInventory().HasInventorySlot(InventorySlots.GetSlotIdFromString("VestHolster"));      
      }
      else if (GetInventory() && GetInventory().IsInCargo()) // no guns in cargo can go on quickbar
        return false;
      return true;
    }
    return false;
	}
};