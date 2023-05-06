class SRP_BrewingWorkbench extends SRP_Fireplace_Transformer
{
  void SRP_BrewingWorkbench()
  {
		//Particles - default for FireplaceBase
		PARTICLE_FIRE_START 	= ParticleList.BARREL_FIRE_START;
		PARTICLE_SMALL_FIRE 	= ParticleList.BARREL_SMALL_FIRE;
		PARTICLE_NORMAL_FIRE	= ParticleList.BARREL_NORMAL_FIRE;
		PARTICLE_SMALL_SMOKE 	= ParticleList.BARREL_SMALL_SMOKE;
		PARTICLE_NORMAL_SMOKE	= ParticleList.BARREL_NORMAL_SMOKE;
		PARTICLE_FIRE_END 		= ParticleList.BARREL_FIRE_END;
		PARTICLE_STEAM_END		= ParticleList.BARREL_FIRE_STEAM_2END;
  }    
  int GetWaterJugConsumptionTotal()
  {
    return 0;
  }
  int GetAlcoholJugConsumptionTotal()
  {
    return 0;
  }
  int GetPotMashConsumptionTotal()
  {
    return 0;
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
  string GetItemYield(string ingredient)
  {
    string yield = "";
    switch(ingredient)
    {
      case "SRP_LabTube_MutantLiquidAmanita":
        yield = "Grenade_ChemGas";
      break;
      // case "SRP_LabTube_MutantLiquidMint";
      //   yield = "Grenade_ChemGas";
      // break;
    }
    return yield;
  }
};
class SRP_BrewingWorkbench_Alchemy extends SRP_BrewingWorkbench
{
  override void HandleHeatTransformation(){}

  override int GetHeatTimerThreshold()
  {
    return 1200;//20mins
  }
  override int GetWaterJugConsumptionTotal()
  {
    return -Math.RandomIntInclusive(150,500);
  }
  override int GetAlcoholJugConsumptionTotal()
  {
    return Math.RandomIntInclusive(100,250);
  }
  override int GetPotMashConsumptionTotal()
  {
    return -3;
  }
};
class SRP_BrewingWorkbench_Copper extends SRP_BrewingWorkbench
{
  override void HandleHeatTransformation(){}

  override int GetHeatTimerThreshold()
  {
    return 600;//10mins
  }
  override int GetWaterJugConsumptionTotal()
  {
    return -Math.RandomIntInclusive(50,150);
  }
  override int GetAlcoholJugConsumptionTotal()
  {
    return Math.RandomIntInclusive(200,450);
  }
  override int GetPotMashConsumptionTotal()
  {
    return -2;
  }
};
class SRP_BrewingWorkbench_Ceramic extends SRP_BrewingWorkbench
{
  override void HandleHeatTransformation(){}

  override int GetHeatTimerThreshold()
  {
    return 300;//5mins
    // return 10;//5mins
  }
  override int GetWaterJugConsumptionTotal()
  {
    return -Math.RandomIntInclusive(35,50);
  }
  override int GetAlcoholJugConsumptionTotal()
  {  
    return Math.RandomIntInclusive(500,850);
  }
  override int GetPotMashConsumptionTotal()
  {
    return -1;
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
};


class SRP_PrefabCrafting_alchemybrewing extends SRP_BrewingWorkbench
{
  override int GetHeatTimerThreshold()
  {
    return 1200;//20mins
  }
  override void HandleHeatTransformation()
  {    
    ItemBase waterJug = GetItemOnSlot("BrewingBarrel1");
    if (!waterJug)
      return;

    ItemBase testTube = GetItemOnSlot("TestTube1");
    if (!testTube)
      return;

    // Print("pot mash exists");
    int waterTotal = GetWaterJugConsumptionTotal();    
    int mashTotal = GetPotMashConsumptionTotal();
    // Print(string.Format("water: %1 mash: %2 yield: %3", waterJug.GetQuantity(), testTube.GetQuantity(), GetItemYield(testTube.GetType())));
    if (waterJug.GetQuantity() > Math.AbsInt(waterTotal) && testTube.GetQuantity() > Math.AbsInt(mashTotal))
    {
      waterJug.AddQuantity(waterTotal);
      testTube.AddQuantity(mashTotal);
      string itemYield = GetItemYield(testTube.GetType());
      if (GetGame().IsDedicatedServer() && itemYield != "")
      {
        GetInventory().CreateInInventory(itemYield);
      }
      // Print("Brewing alcohol!!!");
      // play a sound
    }
  }
  override int GetWaterJugConsumptionTotal()
  {
    return -Math.RandomIntInclusive(1000,5000);
  }
  override int GetPotMashConsumptionTotal()
  {
    return -125;
  }
  override void EEInit()
	{
		super.EEInit();
    if (GetGame().IsDedicatedServer())
    {
      if (!GetItemOnSlot("BrewingBarrel"))
        GetInventory().CreateInInventory("BrewingJug_Plastic_Alcohol");
      
      if (!GetItemOnSlot("BrewingBarrel1"))
        GetInventory().CreateInInventory("BrewingJug_Plastic_Water");
    }
	}
  override bool CanReleaseAttachment (EntityAI attachment)
	{
		if(attachment)
    {
      if (attachment.GetType() == "BrewingJug_Plastic_Alcohol")
        return false;
      if (attachment.GetType() == "BrewingJug_Plastic_Water")
        return false;
    }
		return super.CanReleaseAttachment(attachment);
	}
  override bool CanBeDeconstructed()
  {
    return false;
  }
};
class SRP_PrefabCrafting_copperbrewing extends SRP_BrewingWorkbench
{
  override int GetHeatTimerThreshold()
  {
    return 1200;//20mins
  }
  override void HandleHeatTransformation()
  {    
    ItemBase waterJug = GetItemOnSlot("BrewingBarrel1");
    if (!waterJug)
      return;

    ItemBase alcoholJug = GetItemOnSlot("BrewingBarrel");
    if (!alcoholJug)
      return;

    ItemBase dyeBottle = GetItemOnSlot("SRP_DyeBottle1");
    if (!dyeBottle && dyeBottle.GetColor() != "bleach")
      return;

    // Print("pot mash exists");
    int waterTotal = GetWaterJugConsumptionTotal();
    int alcoholTotal = GetAlcoholJugConsumptionTotal();
    int mashTotal = GetPotMashConsumptionTotal();

    if (waterJug.GetQuantity() > Math.AbsInt(waterTotal) && dyeBottle.GetQuantity() > Math.AbsInt(mashTotal))
    {
      waterJug.AddQuantity(waterTotal);
      dyeBottle.AddQuantity(mashTotal);
      
      // clamp to max jug size      
      if (alcoholJug.GetQuantityMax() < (alcoholJug.GetQuantity() + alcoholTotal))
      {
        alcoholTotal = alcoholJug.GetQuantityMax() - alcoholJug.GetQuantity();
      }
      alcoholJug.AddQuantity(alcoholTotal);
      // Print("Brewing alcohol!!!");
      // play a sound
    }
  }
  override int GetWaterJugConsumptionTotal()
  {
    return -Math.RandomIntInclusive(500,1000);
  }
  override int GetAlcoholJugConsumptionTotal()
  {  
    return Math.RandomIntInclusive(1,15);
  }
  override int GetPotMashConsumptionTotal()
  {
    return -25;
  }
  override void EEInit()
	{
		super.EEInit();
    if (GetGame().IsDedicatedServer())
    {
      if (!GetItemOnSlot("BrewingBarrel"))
        GetInventory().CreateInInventory("BrewingJug_Plastic_Disinfectant");
      
      if (!GetItemOnSlot("BrewingBarrel1"))
        GetInventory().CreateInInventory("BrewingJug_Plastic_Water");
    }
	}
  override bool CanReleaseAttachment (EntityAI attachment)
	{
		if(attachment)
    {
      if (attachment.GetType() == "BrewingJug_Plastic_Disinfectant")
        return false;
      if (attachment.GetType() == "BrewingJug_Plastic_Water")
        return false;
    }
		return super.CanReleaseAttachment(attachment);
	}
  override bool CanBeDeconstructed()
  {
    return false;
  }
};
class SRP_PrefabCrafting_alcoholbrewing extends SRP_BrewingWorkbench
{
  override void HandleHeatTransformation()
  {    
    ItemBase waterJug = GetItemOnSlot("BrewingBarrel1");
    if (!waterJug)
      return;

    ItemBase alcoholJug = GetItemOnSlot("BrewingBarrel");
    if (!alcoholJug)
      return;

    ItemBase potMash = GetItemOnSlot("CookingEquipment");
    if (!potMash)
      return;

    // Print("pot mash exists");
    int waterTotal = GetWaterJugConsumptionTotal();
    int alcoholTotal = GetAlcoholJugConsumptionTotal();
    int mashTotal = GetPotMashConsumptionTotal();

    if (waterJug.GetQuantity() > Math.AbsInt(waterTotal) && potMash.GetQuantity() > Math.AbsInt(mashTotal))
    {
      waterJug.AddQuantity(waterTotal);
      potMash.AddQuantity(mashTotal);
      
      // clamp to max jug size      
      if (alcoholJug.GetQuantityMax() < (alcoholJug.GetQuantity() + alcoholTotal))
      {
        alcoholTotal = alcoholJug.GetQuantityMax() - alcoholJug.GetQuantity();
      }
      alcoholJug.AddQuantity(alcoholTotal);
      // Print("Brewing alcohol!!!");
      // play a sound
    }
  }
  override void EEInit()
	{
		super.EEInit();
    if (GetGame().IsDedicatedServer())
    {
      if (!GetItemOnSlot("BrewingBarrel"))
        GetInventory().CreateInInventory("BrewingJug_Plastic_Alcohol");
      
      if (!GetItemOnSlot("BrewingBarrel1"))
        GetInventory().CreateInInventory("BrewingJug_Plastic_Water");
      
      if (!GetItemOnSlot("BrewingBarrelTable"))
        GetInventory().CreateInInventory("BrewingTable");
    }
	}
  override bool CanReleaseAttachment (EntityAI attachment)
	{
		if(attachment)
    {
      if (attachment.GetType() == "BrewingJug_Plastic_Alcohol")
        return false;
      if (attachment.GetType() == "BrewingJug_Plastic_Water")
        return false;
      if (attachment.GetType() == "BrewingTable")
        return false;
    }
		return super.CanReleaseAttachment(attachment);
	}
  override bool CanBeDeconstructed()
  {
    return false;
  }
};