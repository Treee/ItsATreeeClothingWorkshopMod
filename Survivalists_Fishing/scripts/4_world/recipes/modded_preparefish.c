modded class PrepareFish
{
    string m_FishFilletClassName;

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
        int numFillets = 1;
        // account for our fishies
        SRP_Fish_Base theFish;
        if (Class.CastTo(theFish, ingredients[0]))
        {
            numFillets = theFish.GetNumberOfFillets();
            m_FishFilletClassName = theFish.GetFilletType();
        }

        float MaxQuantity = ingredients[0].GetQuantityMax();
        float CurrentQuantity = ingredients[0].GetQuantity();
        float adjust = CurrentQuantity / MaxQuantity;

        ItemBase newFillet;
        for(int index = 0; index < numFillets; index++)
        {
            if (Class.CastTo(newFillet, GetGame().CreateObjectEx(m_FishFilletClassName, player.GetPosition(), ECE_SETUP|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY)))
            {
                //Trasnfer current food state
                MiscGameplayFunctions.TransferItemProperties(ingredients[0], newFillet);
                newFillet.SetQuantity(newFillet.GetQuantityMax() * adjust);
                results.Insert(newFillet);
            }
        }
		PluginLifespan module_lifespan = PluginLifespan.Cast( GetPlugin( PluginLifespan ) );
		module_lifespan.UpdateBloodyHandsVisibility( player, true );

		Debug.Log("Recipe Do method called","recipes");
	}
};
