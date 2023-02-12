modded class CraftWoodenCrate
{	
	override void Init()
	{		
    super.Init();
		m_MinQuantityIngredient[0] = 20;//-1 = disable check

		m_MinQuantityIngredient[1] = 99;//-1 = disable check
		
		m_IngredientAddQuantity[0] = -20;// 0 = do nothing
		
		m_IngredientAddQuantity[1] = -99;// 0 = do nothing
	}
};
