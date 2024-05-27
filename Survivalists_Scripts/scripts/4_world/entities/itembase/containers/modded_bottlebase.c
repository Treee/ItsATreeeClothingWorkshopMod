modded class Bottle_Base
{
    protected bool m_HasEvaporated = false;
	override void AfterStoreLoad()
	{
		super.AfterStoreLoad();

        if (GetGame().IsDedicatedServer())
        {
            if (!m_HasEvaporated && GetLiquidType() == LIQUID_GASOLINE)
            {
                float randomEvaporation = Math.RandomFloatInclusive(0.01, 0.07);
                int newQuantity = GetQuantity() * randomEvaporation; // 10% for jesus
                AddQuantity(-newQuantity);
                m_HasEvaporated = true;
            }
        }
	}
};