modded class PrepareFish
{	
  string m_FishFilletClassName;

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
    // get rid of vanilla stuff
    results.Clear();    

		// Adjusts quantity of results to the quantity of the 1st ingredient
		ItemBase item_ingredient = ingredients[0];
		//Class.CastTo(item_ingredient, ingredients[0]);

    float numFillets = GetNumberOfFillets(item_ingredient.GetType());

    for(int index = 0; index < numFillets; index++)
    {
      ItemBase fishFillet = ItemBase.Cast(GetGame().CreateObjectEx(m_FishFilletClassName, player.GetPosition(), false));
      results.Insert(fishFillet);
    }

		
		float MaxQuantity = item_ingredient.GetQuantityMax();
		float CurrentQuantity = item_ingredient.GetQuantity();
		float adjust = CurrentQuantity / MaxQuantity;
		
		for (int i=0; i < results.Count(); i++)
		{
			ItemBase item_result;
			Class.CastTo(item_result, results.Get(i));
			
			//Trasnfer current food state
			MiscGameplayFunctions.TransferItemProperties(item_ingredient, item_result);
			
			if (m_ResultSetFullQuantity[i] == false)
			{
				item_result.SetQuantity(item_result.GetQuantityMax() * adjust);
			}
		}
		
		PluginLifespan module_lifespan = PluginLifespan.Cast( GetPlugin( PluginLifespan ) );
		module_lifespan.UpdateBloodyHandsVisibility( player, true );
		
		Debug.Log("Recipe Do method called","recipes");
	}

  int GetNumberOfFillets(string fishType)
  {
    fishType.ToLower();
    int numberOfFillets = 0;
    if (fishType.Contains("_small"))
    {
      numberOfFillets = 1;
    }
    else if (fishType.Contains("_medium"))
    {
      numberOfFillets = 2;
    }
    else if (fishType.Contains("_large"))
    {
      numberOfFillets = 5;
    }
    else if (fishType.Contains("_epic"))
    {
      numberOfFillets = 9;
    }
    return numberOfFillets;
  }

};
