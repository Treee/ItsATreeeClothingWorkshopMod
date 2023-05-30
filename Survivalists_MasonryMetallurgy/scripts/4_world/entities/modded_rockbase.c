modded class RockBase
{
	override int GetAmountOfDrops(ItemBase item)
	{
		return 1;
	}	
	
  override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
    // Print("[RockBase] - [GetMaterialAndQuantityMap] - START: ");
		if ( item )
		{
      // Print("[RockBase] - [GetMaterialAndQuantityMap] - ITEM EXISTS: ");
      if (IsInQuarry())
      {
        // output_map.Insert("Stone",2);
        // Print("[RockBase] - [GetMaterialAndQuantityMap] - IS IN QUARRY: ");
        array<string> stoneChunks = GetMiningStoneChunks();
        if (stoneChunks && stoneChunks.Count() > 0)
        {
          for (int i = 0; i < stoneChunks.Count(); i++)
          {
            output_map.Insert(stoneChunks.Get(i), 1);
          }
        }
      }
      else
      {
        // Print("[RockBase] - [GetMaterialAndQuantityMap] - IS NOT IN QUARRY: ");
        output_map.Insert("Stone_Ruined", 1);
      }
		}
	}

  override float GetDamageToMiningItemEachDrop(ItemBase item)
  {
    return ( super.GetDamageToMiningItemEachDrop(item) / 2 );
  }

  //values between 0-1
  array<string> GetMiningStoneChunks()
  {
    SRPMMConfig config;
    MiningOreConfig miningConfig;
    array<string> stoneChunks = new array<string>;
    if ( Class.CastTo(config, GetDayZGame().GetSRPMMConfig()) && Class.CastTo(miningConfig, config.IsInMiningQuarry(GetPosition())) )
    {
      float chance = Math.RandomFloatInclusive(0,1) - 0.15;
      // Print("chance: " + chance);
      if (chance >= miningConfig.platinumChance)
      {
        stoneChunks.Insert("SRP_Mining_StoneChunk_Platinum");
        chance = Math.RandomFloatInclusive(0,1) - 0.15;
        // Print("plat chance: " + chance);
      }
      if (chance >= miningConfig.goldChance)
      {
        stoneChunks.Insert("SRP_Mining_StoneChunk_Gold");      
        chance = Math.RandomFloatInclusive(0,1) - 0.15;
        // Print("gold chance: " + chance);
      }
      if (chance >= miningConfig.ironChance)
      {
        stoneChunks.Insert("SRP_Mining_StoneChunk_Iron");
        chance = Math.RandomFloatInclusive(0,1) - 0.15;
        // Print("iron chance: " + chance);
      }
      if (chance >= miningConfig.copperChance)
      {
        stoneChunks.Insert("SRP_Mining_StoneChunk_Copper");
        chance = Math.RandomFloatInclusive(0,1) - 0.15;
        // Print("copper chance: " + chance);
      }
      if (chance >= miningConfig.tinChance)
      {
        stoneChunks.Insert("SRP_Mining_StoneChunk_Tin");      
        chance = Math.RandomFloatInclusive(0,1) - 0.15;
        // Print("tin chance: " + chance);    
      }
    }
    return stoneChunks;
  }

  bool IsInQuarry()
  {
    SRPMMConfig config;
    MiningOreConfig miningConfig;
    if ( Class.CastTo(config, GetDayZGame().GetSRPMMConfig()) && Class.CastTo(miningConfig, config.IsInMiningQuarry(GetPosition())) )
    {
      return true;
    }
    return false;
  }
};


class Stone_Ruined extends Stone
{
  override void EEInit() 
  {
		super.EEInit();
    if ( GetGame().IsDedicatedServer() ) // Multiplayer server
    {
      AddHealth(-200);
    }
	}
}