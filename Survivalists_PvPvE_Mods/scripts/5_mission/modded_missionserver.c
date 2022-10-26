modded class MissionServer
{
  override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		EntityAI itemTop;
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;

		itemTop = player.FindAttachmentBySlotName("Body");

		if ( itemTop )
		{
			itemEnt = itemTop.GetInventory().CreateInInventory("BandageDressing");
			if ( Class.CastTo(itemBs, itemEnt ) )
				itemBs.SetQuantity(6);

			itemEnt = itemTop.GetInventory().CreateInInventory("BandageDressing");
			if ( Class.CastTo(itemBs, itemEnt ) )
				itemBs.SetQuantity(6);	

      itemTop.GetInventory().CreateInInventory("Epinephrine");
      itemTop.GetInventory().CreateInInventory("Morhpine");
      itemTop.GetInventory().CreateInInventory("SalineBagIV");
      
			itemEnt = player.GetInventory().CreateInInventory(GetStartingGuns().GetRandomElement());
			if ( Class.CastTo(itemBs, itemEnt ) )
				itemBs.OnDebugSpawn();

			EntityAI headstrap = player.GetInventory().CreateInInventory("NVGHeadstrap");
			EntityAI nvgs = headstrap.GetInventory().CreateInInventory("NVGoggles");
			nvgs.GetInventory().CreateAttachmentEx("Battery9V", InventorySlots.GetSlotIdFromString("BatteryD"));

		}
		player.GetStatWater().Set( 5000 );
		player.GetStatEnergy().Set( 7500 );
	}

  TStringArray GetStartingGuns()
	{
		return {
      "GCGN_BenelliM4",
      "GCGN_HK416",
      "GCGN_M1Garand",
      "GCGN_M700",
      "GCGN_MP7",
      "GCGN_Vityaz",
      "HK416_Gun",
      "SNHK417_Gun",
      "IA2_Gun",
      "MK18_Gun",
      "SNSA58_Gun",
      "SCAR_Gun",
      "SG550_Gun",
      "Spas12_Gun",
      "Tec9_Gun",
      "VR80_Gun",
			"CZ61",
			"CZ75",
			"Colt1911",
			"Engraved1911",
			"FNX45",
			"Glock19",
			"MKII",
			"MP5K",
			"Ruger1022",
			"UMP45",
		};
	}
};