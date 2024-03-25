class BrewingJug_Plastic_ColorBase extends Bottle_Base
{
	void BrewingJug_Plastic_ColorBase()
	{
		m_LiquidEmptyRate = 500;
	}
  override float GetLiquidThroughputCoef()
	{
		return LIQUID_THROUGHPUT_GASOLINECANISTER;
	}
	override bool IsContainer()
	{
		return true;
	}	
	override string GetPouringSoundset()
	{
		return "emptyVessle_CanisterGasoline_SoundSet";
	}	
	override string GetEmptyingLoopSoundsetHard()
	{
		return "pour_HardGround_GasolineCanister_SoundSet";
	}	
	override string GetEmptyingLoopSoundsetSoft()
	{
		return "pour_SoftGround_GasolineCanister_SoundSet";
	}	
	override string GetEmptyingLoopSoundsetWater()
	{
		return "pour_Water_GasolineCanister_SoundSet";
	}	
	override string GetEmptyingEndSoundsetHard()
	{
		return "pour_End_HardGround_GasolineCanister_SoundSet";
	}	
	override string GetEmptyingEndSoundsetSoft()
	{
		return "pour_End_SoftGround_GasolineCanister_SoundSet";
	}	
	override string GetEmptyingEndSoundsetWater()
	{
		return "pour_End_Water_GasolineCanister_SoundSet";
	}	
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}	
		return true;
	}	
	override bool IsOpen()
	{
		return true;
	}
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionFillFuel);
		RemoveAction(ActionFillCoolant);
		RemoveAction(ActionFillGeneratorTank);
		RemoveAction(ActionWaterGardenSlot);
		RemoveAction(ActionWaterPlant);
		RemoveAction(ActionDrink);
		RemoveAction(ActionForceDrink);

		AddAction(SRP_SwapBrewingJug);
		// AddAction(ActionFillBottleBase);
		// AddAction(ActionDrainLiquid);
		// AddAction(ActionPourLiquid);
		// AddAction(ActionEmptyBottleBase);
		// AddAction(ActionWashHandsItem);
	}
}

class BrewingJug_Plastic_Alcohol extends BrewingJug_Plastic_ColorBase{};
class BrewingJug_Plastic_Disinfectant extends BrewingJug_Plastic_ColorBase{};
class BrewingJug_Plastic_Gasoline extends BrewingJug_Plastic_ColorBase{};
class BrewingJug_Plastic_Water extends BrewingJug_Plastic_ColorBase{};
