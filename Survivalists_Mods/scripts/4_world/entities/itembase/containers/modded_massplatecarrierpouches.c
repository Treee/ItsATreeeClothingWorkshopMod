modded class PlateCarrierPouches
{
  override void OnWasAttached( EntityAI parent, int slot_id ) 
  { 
    super.OnWasAttached(parent,slot_id);
    PlateCarrierPouches pouches;
    if (Class.CastTo(pouches, parent))
    {
      // string itemType = GetType().Substring(0,4);
      // itemType.ToLower();
      // if (itemType == "mass")
      // {
        Delete();
      // }
    }
  }
  // override bool CanPutAsAttachment (EntityAI parent)
  // {
  //   PlateCarrierPouches pouches;
  //   if (Class.CastTo(pouches, parent))
  //   {
  //     string itemType = GetType().Substring(0,4);
  //     itemType.ToLower();
  //     if (itemType == "mass")
  //     {
  //       return false;
  //     }
  //   }
  //   return super.CanPutAsAttachment(parent);
  // }
};