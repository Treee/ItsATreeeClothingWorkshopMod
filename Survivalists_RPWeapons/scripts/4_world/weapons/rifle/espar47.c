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
        if (item.IsKindOf("ItemOptics") && item.GetType() != "M4_CarryHandleOptic")
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
        if (item.IsKindOf("ItemOptics") && item.GetType() != "M4_CarryHandleOptic")
		{
			HideUnhideSelection("GasBlock_High", 1);
			HideUnhideSelection("GasBlock_Low", 0);
		}
	}
	override bool NeedsRailAdapter()
    {
        return true;
    }
    override string GetRailAdapterName()
    {
        return "WeaponHandguardM4";
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
