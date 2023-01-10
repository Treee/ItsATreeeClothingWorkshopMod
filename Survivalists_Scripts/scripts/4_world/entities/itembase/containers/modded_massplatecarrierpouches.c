modded class PlateCarrierPouches
{
  override bool CanPutAsAttachment (EntityAI parent)
  {
    PlateCarrierPouches pouches;
    // attaching pouches to more pouches is a nono
    if (Class.CastTo(pouches, parent))
    {
      return false;
    }
    return super.CanPutAsAttachment(parent);
  }
};