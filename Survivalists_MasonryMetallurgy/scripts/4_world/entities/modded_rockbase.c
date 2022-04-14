modded class RockBase
{
  ref MiningOreConfig probabilities;

  void RockBase()
  {
    probabilities = new MiningOreConfig("0 0 0",10,2.0,2.0,2.0,2.0,2.0);
  }

  void SetRockProbabilities(MiningOreConfig oreConfig)
  {
    if (oreConfig)
    {
      probabilities = oreConfig;
    }
  }

  override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
		if ( item && item.KindOf("Pickaxe") )
		{
			// output_map.Insert("Stone",2);
      array<string> stoneChunks = GetMiningStoneChunks();
      if (stoneChunks && stoneChunks.Count() > 0)
      {
        for (int i = 0; i < stoneChunks.Count(); i++)
        {
          output_map.Insert(stoneChunks.Get(i), 1);
        }
      }
		}
		else if ( item && item.KindOf("SledgeHammer") )
		{
			output_map.Insert("Stone",1);
		}
		else if ( item )
		{
			output_map.Insert("Stone",1);
		}
	}

  //values between 0-1
  array<string> GetMiningStoneChunks()
  {
    array<string> stoneChunks = new array<string>;
    float chance = Math.RandomFloatInclusive(0,1);
    if (chance >= probabilities.platinumChance)
    {
      stoneChunks.Insert("SRP_Mining_StoneChunk_Platinum");      
    }
    chance = Math.RandomFloatInclusive(0,1);
    if (chance >= probabilities.goldChance)
    {
      stoneChunks.Insert("SRP_Mining_StoneChunk_Gold");      
    }
    chance = Math.RandomFloatInclusive(0,1);
    if (chance >= probabilities.ironChance)
    {
      stoneChunks.Insert("SRP_Mining_StoneChunk_Iron");
    }
    chance = Math.RandomFloatInclusive(0,1);
    if (chance >= probabilities.copperChance)
    {
      stoneChunks.Insert("SRP_Mining_StoneChunk_Copper");
    }
    chance = Math.RandomFloatInclusive(0,1);
    if (chance >= probabilities.tinChance)
    {
      stoneChunks.Insert("SRP_Mining_StoneChunk_Tin");          
    }
    return stoneChunks;
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