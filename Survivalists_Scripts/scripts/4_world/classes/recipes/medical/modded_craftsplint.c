modded class CraftSplint
{
	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		ItemBase ingredient1;
		if (Class.CastTo(ingredient1, ingredients[0]) && ingredient1.IsInherited(BandageDressing))
		{
			if (ingredient1.GetQuantity() >= 4)
			{
				return true;
			}
			return false;
		}		
		return super.CanDo(ingredients, player);
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		// Debug.Log("Recipe Do method called","recipes");
    ItemBase ingredient1;
		if (Class.CastTo(ingredient1, ingredients[0]) && ingredient1.IsInherited(BandageDressing))
		{
			ingredient1.AddQuantity(-4);		
		}
    else
    {
		  super.Do(ingredients, player, results, specialty_weight);
    }
	}
};
