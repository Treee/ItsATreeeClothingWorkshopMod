modded class RockBase
{
  float platinumChance = 0.99;
  float goldChance = 0.99;
  float ironChance = 0.99;
  float copperChance = 0.99;
  float tinChance = 0.99;

  override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
		if ( item && item.KindOf("Pickaxe") )
		{
			output_map.Insert("Stone",2);
      array<string> stoneChunks = GetMiningStoneChunks();
      if (stoneChunks && stoneChunks.Count() > 0)
      {
        for (int i = 0; i < stoneChunks.Count(); i++)
        {
          output_map.Insert(stoneChunks.Get(i), Math.RandomIntInclusive(1,2));
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
    if (chance >= platinumChance)
    {
      stoneChunks.Insert("SRP_Mining_StoneChunk_Platinum");      
    }
    chance = Math.RandomFloatInclusive(0,1);
    if (chance >= goldChance)
    {
      stoneChunks.Insert("SRP_Mining_StoneChunk_Gold");      
    }
    chance = Math.RandomFloatInclusive(0,1);
    if (chance >= ironChance)
    {
      stoneChunks.Insert("SRP_Mining_StoneChunk_Iron");
    }
    chance = Math.RandomFloatInclusive(0,1);
    if (chance >= copperChance)
    {
      stoneChunks.Insert("SRP_Mining_StoneChunk_Copper");
    }
    chance = Math.RandomFloatInclusive(0,1);
    if (chance >= tinChance)
    {
      stoneChunks.Insert("SRP_Mining_StoneChunk_Tin");          
    }
    return stoneChunks;
  }
};

modded class Static_stone1
{
	override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
    platinumChance = 0.95;
    goldChance = 0.90;
    ironChance = 0.85;
    copperChance = 0.80;
    tinChance = 0.80;
    super.GetMaterialAndQuantityMap(item, output_map);		
	}
};

modded class Static_stone2
{
  override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
    platinumChance = 0.80;
    goldChance = 0.75;
    ironChance = 0.90;
    copperChance = 0.95;
    tinChance = 0.80;
    super.GetMaterialAndQuantityMap(item, output_map);		
	}
};

modded class Static_stone3
{
  override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
    platinumChance = 0.90;
    goldChance = 0.95;
    ironChance = 0.75;
    copperChance = 0.85;
    tinChance = 0.85;
    super.GetMaterialAndQuantityMap(item, output_map);		
	}
};
modded class Static_stone4
{
  override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
    platinumChance = 0.95;
    goldChance = 0.90;
    ironChance = 0.80;
    copperChance = 0.90;
    tinChance = 0.90;
    super.GetMaterialAndQuantityMap(item, output_map);		
	}
};
modded class Static_stone5
{
  override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
    platinumChance = 0.95;
    goldChance = 0.95;
    ironChance = 0.95;
    copperChance = 0.95;
    tinChance = 0.95;
    super.GetMaterialAndQuantityMap(item, output_map);		
	}
};