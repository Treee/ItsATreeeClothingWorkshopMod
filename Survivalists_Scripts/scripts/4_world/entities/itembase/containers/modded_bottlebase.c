modded class Bottle_Base
{
	override void AfterStoreLoad()
	{	
		super.AfterStoreLoad();
		
    if (GetGame().IsDedicatedServer())
    {
      if (GetLiquidType() == LIQUID_GASOLINE)
      {
        int newQuantity = GetQuantity() * 0.5; // 10% for jesus
        AddQuantity(-newQuantity);
      }        
    }
	}
};