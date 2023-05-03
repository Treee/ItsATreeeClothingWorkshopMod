class SRP_Notebook extends ItemBase
{
	override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    ItemBase notebookItem;
    if (Class.CastTo(notebookItem, item))
    {
      return notebookItem.CanBeStoredInNotebook();
    }
    return false;
	}
  override bool CanLoadItemIntoCargo( EntityAI item )
  {
    ItemBase notebookItem;
    if (Class.CastTo(notebookItem, item))
    {
      return notebookItem.CanBeStoredInNotebook();
    }
		return false;  
  }
  bool IsFullNotebook()
  {
    if (GetInventory())
    {
      return GetInventory().GetCargo().GetItemCount() == 40;
    }
    return false;
  }
};