class ttscarl extends RifleBoltLock_Base
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

		HideUnhideSelection("Ironsight_Up", 1);
		HideUnhideSelection("Grip", 1);
    HideUnhideSelection("Ironsight_Down", 0);
	}

	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item,slot_name);	

		if (item.IsKindOf("ItemOptics"))
		{
			HideUnhideSelection("Ironsight_Down", 1);
			HideUnhideSelection("Ironsight_Up", 0);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (item.IsKindOf("ItemOptics"))
		{
			HideUnhideSelection("Ironsight_Up", 1);
			HideUnhideSelection("Ironsight_Down", 0);
		}
	}
	override bool CanDisplayAttachmentSlot( string slot_name)
  {
    if ( slot_name == "RISLeft" )
		{
      return	( this.FindAttachmentBySlotName("ScarHndGrd") != NULL && this.FindAttachmentBySlotName("ScarHndGrd").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISRight" )
		{
      return	( this.FindAttachmentBySlotName("ScarHndGrd") != NULL && this.FindAttachmentBySlotName("ScarHndGrd").ConfigGetBool("hasRailFunctionality") == true );
		}
		if ( slot_name == "RISBottom" )
		{
      return	( this.FindAttachmentBySlotName("ScarHndGrd") != NULL && this.FindAttachmentBySlotName("ScarHndGrd").ConfigGetBool("hasRailFunctionality") == true );
		}
		return true;
  }
    
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ESP_SCAR_URGI_HNDGRD_Black" );
		inventory.CreateInInventory( "ESP_Wrapped_Suppressor_Green" );
		inventory.CreateInInventory( "ESP_SCAR_Collapse_Stck_Tan" );
    inventory.CreateInInventory( "UniversalLight" );
		inventory.CreateInInventory( "Battery9V" );
    inventory.CreateInInventory( "ESP_RedDot" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("Mag_STANAG_60Rnd");
	}
};

class ttscarl_Tan extends ttscarl{};