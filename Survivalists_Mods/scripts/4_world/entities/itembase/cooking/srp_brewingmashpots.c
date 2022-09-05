class BrewingPot_Mash_ColorBase extends Bottle_Base
{
	override bool IsContainer()
	{
		return true;
	}
	
	override string GetPouringSoundset()
	{
		return "emptyVessle_Pot_SoundSet";
	}
	
  override string GetEmptyingLoopSoundsetHard()
	{
		return "pour_HardGround_Pot_SoundSet";
	}
	
	override string GetEmptyingLoopSoundsetSoft()
	{
		return "pour_SoftGround_Pot_SoundSet";
	}
	
	override string GetEmptyingLoopSoundsetWater()
	{
		return "pour_Water_Pot_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetHard()
	{
		return "pour_End_HardGround_Pot_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetSoft()
	{
		return "pour_End_SoftGround_Pot_SoundSet";
	}
	
	override string GetEmptyingEndSoundsetWater()
	{
		return "pour_End_Water_Pot_SoundSet";
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if ( !super.CanPutInCargo( parent ) )
			return false;
		
		return true;
	}
	
	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if ( !super.CanReceiveItemIntoCargo( item ) )
			return false;

		return true;
	}
	
	override bool CanLoadItemIntoCargo(EntityAI item)
	{
		if ( !super.CanLoadItemIntoCargo( item ) )
			return false;

		return true;
	}
	
	override bool IsOpen()
	{
		return true;
	}
	
	override bool CanHaveWetness()
	{
		return false;
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionFillGeneratorTank);
		RemoveAction(ActionExtinguishFireplaceByLiquid);
		RemoveAction(ActionFillBottleBase);
		RemoveAction(ActionWaterGardenSlot);
		RemoveAction(ActionWaterPlant);
		RemoveAction(ActionForceDrink);
		RemoveAction(ActionDrainLiquid);
		RemoveAction(ActionPourLiquid);
		//RemoveAction(ActionTransferLiquid);
		RemoveAction(ActionEmptyCookingPot);
		RemoveAction(ActionDrinkCookingPot);
	}
}

class BrewingPot_Mash_Fruit extends BrewingPot_Mash_ColorBase{};
