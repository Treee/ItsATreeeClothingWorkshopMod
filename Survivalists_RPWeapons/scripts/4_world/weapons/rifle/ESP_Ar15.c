class ESP_AR15 : RifleBoltLock_Base
{
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

		HideUnhideSelection("GasBlock", 1);
		HideUnhideSelection("PistolGrip", 1);
		HideUnhideSelection("Buffer", 1);
    HideUnhideSelection("GasBlock_High", 1);
		HideUnhideSelection("GasBlock_Low", 0);
	}

	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item,slot_name);	

		if (item.IsKindOf("ESP_XLHndgrdBase"))
		{
			HideUnhideSelection("GasBlock_High", 0);
			HideUnhideSelection("GasBlock_Low", 1);
		}

		if (item.IsKindOf("ESP_GripStock"))
		{
			HideUnhideSelection("Buffer", 0);
			HideUnhideSelection("PistolGrip", 0);
		}
    if (item.IsKindOf("ItemOptics"))
		{
			HideUnhideSelection("GasBlock_High", 0);
			HideUnhideSelection("GasBlock_Low", 1);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (item.IsKindOf("ESP_XLHndgrdBase"))
		{
			HideUnhideSelection("GasBlock_High", 1);
		  HideUnhideSelection("GasBlock_Low", 0);
		}

		if (item.IsKindOf("ESP_GripStock"))
		{
			HideUnhideSelection("Buffer", 1);
			HideUnhideSelection("PistolGrip", 1);
		}
    if (item.IsKindOf("ItemOptics"))
		{
			HideUnhideSelection("GasBlock_High", 1);
			HideUnhideSelection("GasBlock_Low", 0);
		}
	}	

	override bool CanDisplayAttachmentSlot( string slot_name)
  {
    if ( slot_name == "RISLeft" )
		{
      return ( this.FindAttachmentBySlotName("WeaponHandguardM4") != NULL && this.FindAttachmentBySlotName("WeaponHandguardM4").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISRight" )
		{
      return ( this.FindAttachmentBySlotName("WeaponHandguardM4") != NULL && this.FindAttachmentBySlotName("WeaponHandguardM4").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISBottom" )
		{
      return ( this.FindAttachmentBySlotName("WeaponHandguardM4") != NULL && this.FindAttachmentBySlotName("WeaponHandguardM4").ConfigGetBool("hasRailFunctionality") == true );
		}
		return true;
  }
};