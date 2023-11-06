modded class PrepareChicken
{	
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    super.Do(ingredients, player, results, specialty_weight);

    int randomNumberOfLegs = Math.RandomIntInclusive(0,2);
    if (randomNumberOfLegs > 0)
    {
      float chance = Math.RandomFloatInclusive(0,1);
      if (chance > 0.35)
      {
        GetGame().CreateObjectEx("srpChickenleg", player.GetPosition(), false);
      }
      if (randomNumberOfLegs > 1)
      {
        GetGame().CreateObjectEx("srpChickenleg", player.GetPosition(), false);
      }
    }
	}
};