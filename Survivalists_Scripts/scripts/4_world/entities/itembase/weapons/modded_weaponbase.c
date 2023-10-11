modded class Weapon_Base
{
  override float GetChanceToJam()
	{
		return super.GetChanceToJam() * 0.1;
	}

  override void OnItemLocationChanged(EntityAI old_owner, EntityAI new_owner)
  {
    super.OnItemLocationChanged(old_owner, new_owner);
    if (new_owner && !CanAssignToQuickbar())
    {
      PlayerBase nplayer;
      if (PlayerBase.CastTo(nplayer, new_owner.GetHierarchyRootPlayer()))
      {
        nplayer.RemoveQuickBarEntityShortcut(this);	
      }
    }
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
        else if (slotName == "Pistol")
          return true;
      }
      else if (GetInventory() && GetInventory().IsInCargo()) // no guns in cargo can go on quickbar
      {
        return false;
      }
      return true;
    }
    return false;
	}

  override bool IsSmeltable()
  {
    return true;
  }
  override TStringArray GetSmeltableOptions()
  {
    return {"SRP_Mining_RawOre_Iron"};
  }
  override int GetSmeltableYield()
  {
    return Math.RandomIntInclusive(0, 3);
  }
};