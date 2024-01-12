class IAT_Fishing_Tacklebox_ColorBase extends ItemBase
{  
  override void EEInit()
	{
		super.EEInit();		
    if(IsOpen())
      GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		else
			GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
	}
  protected void UpdateVisualState()
	{
		if (IsOpen())
		{
			SetAnimationPhase("Lid",1);
			SetAnimationPhase("Lid2",0);
		}
		else
		{
			SetAnimationPhase("Lid",0);
			SetAnimationPhase("Lid2",1);
		}
	}
  override void Open()
	{
    super.Open();
		GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
	}
	override void Close()
	{
    super.Close();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
	}	
  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  override bool CanPutIntoHands(EntityAI parent)
  {
    return GetInventory().AttachmentCount() == 0 && GetNumberOfItems() == 0;
  }
	override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if (GetHealthLevel() == GameConstants.STATE_RUINED)
			return false;
		
		return super.CanReceiveAttachment(attachment, slotId);
	}
	override bool CanLoadAttachment(EntityAI attachment)
	{
		if (GetHealthLevel() == GameConstants.STATE_RUINED)
			return false;
		
		return super.CanLoadAttachment(attachment);
	}
	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (GetHealthLevel() == GameConstants.STATE_RUINED)
			return false;

		return super.CanReceiveItemIntoCargo(item);
	}
	override bool CanLoadItemIntoCargo(EntityAI item)
	{
		if (!super.CanLoadItemIntoCargo(item))
			return false;

		if (GetHealthLevel() == GameConstants.STATE_RUINED)
			return false;

		return true;
	}
	override void EEHealthLevelChanged(int oldLevel, int newLevel, string zone)
	{
		super.EEHealthLevelChanged(oldLevel,newLevel,zone);
		
		if (newLevel == GameConstants.STATE_RUINED && !GetHierarchyParent())
			MiscGameplayFunctions.DropAllItemsInInventoryInBounds(this, vector.Zero);
	}
  override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
};
class IAT_Fishing_Tacklebox_Basic extends IAT_Fishing_Tacklebox_ColorBase{};