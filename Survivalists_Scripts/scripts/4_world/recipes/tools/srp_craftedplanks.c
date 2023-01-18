modded class CraftWoodenPlank
{	
	override void Init()
	{
    super.Init();
		m_AnimationLength = 2;//animation length in relative time units
		
		m_IngredientAddHealth[1] = -5;// 0 = do nothing
		
    m_ResultSetQuantity[0] = 1;
	}
};
