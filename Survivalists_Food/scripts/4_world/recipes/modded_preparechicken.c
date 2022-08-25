modded class PrepareChicken
{	
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    super.Do(ingredients, player, results, specialty_weight);

    int randomNumberOfLegs = Math.RandomIntInclusive(0,2);
    if (randomNumberOfLegs > 0)
    {
      float chance = Math.RandomFloatInclusive(0,1);
      if (chance > 0.65)
      {
        GetGame().CreateObjectEx("Chickenleg", player.GetPosition(), false);
      }
      if (randomNumberOfLegs > 1)
      {
        chance = Math.RandomFloatInclusive(0,1);
        if (chance > 0.8)
        {
          GetGame().CreateObjectEx("Chickenleg", player.GetPosition(), false);
        }
      }
    }
	}
};