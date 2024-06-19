class SRP_Craft_SalvageHeadlight extends RecipeBase
{
	override void Init()
	{
		m_Name = "Salvage Headlamp";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision

		//conditions
		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		m_MinQuantityIngredient[0] = -1;
		m_MaxQuantityIngredient[0] = -1;

		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3;
		m_MinQuantityIngredient[1] = -1;
		m_MaxQuantityIngredient[1] = -1;


		//ingredient 1
		InsertIngredient(0,"Headtorch_ColorBase");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -1;
		m_IngredientDestroy[0] = true;
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient

		//ingredient 2
		InsertIngredient(1,"Pliers");//you can insert multiple ingredients this way

		m_IngredientAddHealth[1] = -5;
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient

		// crafting multiple results
		//AddResult("CombatKnife");//additional results, must be processed individually in Do method (as "results" parameter)
		// AddResult("BarbedBaseballBat");//single result
		m_ResultSetFullQuantity[0] = 0;
		m_ResultSetQuantity[0] = -1;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = 1; //(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = 0;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}


	override void Do( ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight )//gets called upon recipe's completion
	{
        float chance = Math.RandomFloatInclusive(0,1);
        // 50% chance of getting something
        if (chance > 0.5)
        {
            string itemName = "";
            chance = Math.RandomFloatInclusive(0,1);
            // 30% chance at headlight
            if (chance < 0.31)
                itemName = "HeadlightH7";
            else if (chance > 0.31 && chance < 0.80)
                itemName = "MetalWire_Copper";
            else
                itemName = "SRP_Mining_RawOre_Zinc";

            ItemBase newItem;
            if (Class.CastTo(newItem, GetGame().CreateObjectEx(itemName, player.GetPosition(), ECE_SETUP|ECE_NOSURFACEALIGN|ECE_KEEPHEIGHT|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY)))
                results.Insert(newItem);
        }
	}
};
