class SRP_AdvancedWorkbench extends SRP_Container_Base
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(SRP_ActionCraftAmmo);
	}

  bool HasAllAttachments()
  {
    if (GetItemOnSlot("SRP_CasePrep") == NULL)
    {
      return false;
    }
    if (GetItemOnSlot("SRP_AmmoPress") == NULL)
    {
      return false;
    }
    if (GetItemOnSlot("SRP_AmmoCasings") == NULL)
    {
      return false;
    }
    if (GetItemOnSlot("SRP_AmmoGunpowder") == NULL)
    {
      return false;
    }
    if (GetItemOnSlot("SRP_AmmoBullets") == NULL)
    {
      return false;
    }
    return true;
  }

  bool HasCorrectAmmoComponents(string ammoType)
  {
    ItemBase casings;
    ItemBase gunpowder;
    ItemBase bullets;
    Class.CastTo(casings, GetItemOnSlot("SRP_AmmoCasings"));      
    if (casings == NULL)
      return false;
    Class.CastTo(gunpowder, GetItemOnSlot("SRP_AmmoGunpowder"));      
    if (gunpowder == NULL)
      return false;
    Class.CastTo(bullets, GetItemOnSlot("SRP_AmmoBullets"));
    if (bullets == NULL)
      return false;

    vector consumption = GetIngredientConsumptionValues(ammoType);
    float plateHP = consumption[0];
    float gunpowderQuantity = consumption[1];
    float bulletsQuantity = consumption[2];

    // quantity check
    if (gunpowder.GetQuantity() < gunpowderQuantity || bullets.GetQuantity() < bulletsQuantity)
      return false;

    if (casings.GetColor() != "brass")
      return false;    

    return true;
  }

  void RemoveAmmoCraftingComponents(string ammoType)
  {
    ItemBase casings;
    ItemBase gunpowder;
    ItemBase bullets;
    Class.CastTo(casings, GetItemOnSlot("SRP_AmmoCasings"));      
    if (casings == NULL)
      return;
    Class.CastTo(gunpowder, GetItemOnSlot("SRP_AmmoGunpowder"));      
    if (gunpowder == NULL)
      return;
    Class.CastTo(bullets, GetItemOnSlot("SRP_AmmoBullets"));
    if (bullets == NULL)
      return;

    vector consumption = GetIngredientConsumptionValues(ammoType);
    float plateHP = -consumption[0];
    float gunpowderQuantity = -consumption[1];
    float bulletsQuantity = -consumption[2];    
    casings.AddHealth(plateHP);
    if (casings.GetHealth() < 10)
      casings.Delete();

    gunpowder.AddQuantity(gunpowderQuantity);
    bullets.AddQuantity(bulletsQuantity);
  }

  vector GetIngredientConsumptionValues(string ammoType)
  {
    // vector x/y/z = casingHP/gunpowder/bullet tips
    switch (ammoType)
    {
      case "380":
      case "22":
      case "9x19":
      case "45ACP":
          return "5 5 3";
        break;

      case "12gaSlug":
      case "12gaPellets":
      case "40mm_Smoke_Red":
      case "40mm_Smoke_Green":
      case "40mm_Smoke_White":
      case "40mm_Smoke_Black":
      case "357":
          return "10 7 5";
        break;

      case "545x39":
      case "9x39":
      case "556x45":
          return "15 10 10";
        break;
      
      case "762x39":
      case "308Win":
      case "762x54":
      case "9x39AP":
          return "20 15 10";
        break;
      
      case "700Nitro":
          return "50 25 10";
        break;

      case "40mm_Explosive":
          return "100 50 20";
        break;
    }
    return "100 100 60";
  }
  int GetBulletYieldValue(string ammoType)
  {
    // vector x/y/z = casingHP/gunpowder/bullet tips
    switch (ammoType)
    {
      case "380":
      case "22":
      case "9x19":
      case "45ACP":
      case "357":
      case "12gaSlug":
      case "12gaPellets":
          return 15;
        break;

      case "40mm_Smoke_Red":
      case "40mm_Smoke_Green":
      case "40mm_Smoke_White":
      case "40mm_Smoke_Black":
      case "700Nitro":
      case "40mm_Explosive":
          return 1;
        break;

      case "545x39":
      case "9x39":
      case "556x45":
      case "762x39":
      case "308Win":
      case "762x54":
      case "9x39AP":
          return 10;
        break;
    }
    return 1;
  }
};
