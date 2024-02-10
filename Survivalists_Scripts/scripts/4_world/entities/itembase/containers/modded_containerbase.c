modded class Container_Base
{
	override void AfterStoreLoad()
	{	
		super.AfterStoreLoad();
		
    if (GetGame().IsDedicatedServer())
    {
      if (GetLiquidType() == LIQUID_GASOLINE)
      {
        float randomEvaporation = Math.RandomFloatInclusive(0.01, 0.07);
        int newQuantity = GetQuantity() * randomEvaporation; // 10% for jesus
        AddQuantity(-newQuantity);
      }        
    }
	}
}