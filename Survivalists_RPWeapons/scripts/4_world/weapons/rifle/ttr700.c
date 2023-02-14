class ttr700 : BoltActionRifle_ExternalMagazine_Base
{
  override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
				
		inventory.CreateInInventory( "ESP_Short_Range" );
		inventory.CreateInInventory( "ESP_Wrapped_Suppressor" );
		inventory.CreateInInventory( "Battery9V" );
    
    SpawnAttachedMagazine("ttr700mag");
	}
  private void HideUnhideSelection(string selectionName, bool hide = false)
  {
    TStringArray selectionNames = new TStringArray;
    ConfigGetTextArray("simpleHiddenSelections",selectionNames);
    int selectionId = selectionNames.Find(selectionName);
    SetSimpleHiddenSelectionState(selectionId, hide);
  }

  override void EEInit()
	{
		super.EEInit();

		HideUnhideSelection("Chassis", 1);
	}
	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item,slot_name);	

		if (item.IsKindOf("ESP_R700ChassisBase"))
		{
			HideUnhideSelection("Chassis", 0);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (item.IsKindOf("ESP_R700ChassisBase"))
		{
			HideUnhideSelection("Chassis", 1);
		}
	}
};
