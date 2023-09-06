class SRP_TimeBasedWorkbench_Base extends ItemBase
{
  protected float m_CollectionLifespan;

  protected const int HERB_DRYING_TIME = 90;
  protected const float HERB_DRYING_AMOUNT = 1; // controls for 10ish minutes of drying

  void SRP_TimeBasedWorkbench_Base()
  {
    SetEventMask(EntityEvent.POSTSIMULATE);
  }
//================================================== EVENTS
  override void EOnPostSimulate(IEntity other, float timeSlice)
	{
    if (!GetGame().IsDedicatedServer())
      return;
    if (m_CollectionLifespan > 10) // wait 10 seconds before doing things 
    {
      DryHerbs();
      m_CollectionLifespan = 0;
    }
    m_CollectionLifespan += timeSlice;
	}
  override bool CanPutInCargo( EntityAI parent )
	{
    return false;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }
  override bool CanReceiveItemIntoCargo (EntityAI item)
	{
    SRP_PlantHerbEdible_Colorbase herb;
    if (Class.CastTo(herb, item))
      return true;
    if (item.GetType() == "Cannabis" || item.GetType() == "Cannabis_Irradiated")
      return true;
		return false;
	}
  override bool CanLoadItemIntoCargo( EntityAI item )
  {
		SRP_PlantHerbEdible_Colorbase herb;
    if (Class.CastTo(herb, item))
      return true;
    if (item.GetType() == "Cannabis" || item.GetType() == "Cannabis_Irradiated")
      return true;
		return false;
  }
//================================================== CUSTOM
  void DryHerbs()
  {
    if (!HasAnyCargo())
      return;

    Edible_Base inItem;
    int inItemCount = GetInventory().GetCargo().GetItemCount();
    float new_cook_time;
    for (int i = 0; i < inItemCount; i++)
    {
      if (Class.CastTo(inItem, GetInventory().GetCargo().GetItem(i)))
      {
        if (inItem.GetFoodStageType() != FoodStageType.RAW)
          continue;

        new_cook_time = inItem.GetCookingTime() + HERB_DRYING_AMOUNT;
        inItem.SetCookingTime(new_cook_time);
        if (inItem.GetCookingTime() >= HERB_DRYING_TIME)
        {
          inItem.ChangeFoodStage(FoodStageType.DRIED);
          inItem.RemoveAllAgents();
          inItem.SetCookingTime(0);
        }  
      }
    }
  }
};

class SRP_PrefabCrafting_alchemydrybox extends SRP_TimeBasedWorkbench_Base{};