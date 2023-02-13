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
  override protected void Heating()
  {
    // we are hot enough to be brewing
    if (GetTemperature() > 180)
    {
      if (GetHeatTimerThreshold() > -1 && GetHeatTimer() > GetHeatTimerThreshold())
      { 
        HandleHeatTransformation();
        ResetHeatTimer();
      }            
      IncrementHeatTimer();
    }
    super.Heating();
  }
  override void HandleHeatTransformation()
  {    
    ItemBase waterJug = GetItemOnSlot("BrewingBarrel1");
    if (!waterJug) {return;}

    ItemBase alcoholJug = GetItemOnSlot("BrewingBarrel");
    if (!alcoholJug) {return;}

    ItemBase potMash = GetItemOnSlot("CookingEquipment");
    if (!potMash) {return;}

    // Print("pot mash exists");
    int waterTotal = GetWaterJugConsumptionTotal();
    int alcoholTotal = GetAlcoholJugConsumptionTotal();
    int mashTotal = GetPotMashConsumptionTotal();

    if (waterJug.GetQuantity() > waterTotal && potMash.GetQuantity() > mashTotal)
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
};
class SRP_BrewingWorkbench_Alchemy extends SRP_BrewingWorkbench
{
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
