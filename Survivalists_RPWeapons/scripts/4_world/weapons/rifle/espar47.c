class ESPAR47 extends RifleBoltLock_Base
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
	}

	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item,slot_name);	

		if (item.IsKindOf("ESP_XLHndgrdBase"))
		{
			HideUnhideSelection("GasBlock", 0);
		}

		if (item.IsKindOf("ESP_GripStock"))
		{
			HideUnhideSelection("Buffer", 0);
			HideUnhideSelection("PistolGrip", 0);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (item.IsKindOf("ESP_XLHndgrdBase"))
		{
			HideUnhideSelection("GasBlock", 1);
		}

		if (item.IsKindOf("ESP_GripStock"))
		{
			HideUnhideSelection("Buffer", 1);
			HideUnhideSelection("PistolGrip", 1);
		}
	}
	override bool CanDisplayAttachmentSlot( string slot_name)
  {
    if ( slot_name == "RISLeft" )
		{
      return	( this.FindAttachmentBySlotName("WeaponHandguardM4") != NULL && this.FindAttachmentBySlotName("WeaponHandguardM4").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISRight" )
		{
      return	( this.FindAttachmentBySlotName("WeaponHandguardM4") != NULL && this.FindAttachmentBySlotName("WeaponHandguardM4").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISBottom" )
		{
      return	( this.FindAttachmentBySlotName("WeaponHandguardM4") != NULL && this.FindAttachmentBySlotName("WeaponHandguardM4").ConfigGetBool("hasRailFunctionality") == true );
		}
		return true;
  }	
  override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
				
		inventory.CreateInInventory( "ESP_Short_Range" );
		inventory.CreateInInventory( "UniversalLight" );
		inventory.CreateInInventory( "STG_PBS5_Suppressor" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "ESP_M16_Stck_Black" );
		inventory.CreateInInventory( "ESP_RIS_Erg_HndGrd_Tan" );
    
    SpawnAttachedMagazine("Mag_AKM_Drum75Rnd_Black");
	}	
};
