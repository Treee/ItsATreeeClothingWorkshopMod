modded class Static_stone1
{
	override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
		if ( item && item.KindOf("Pickaxe") )
		{
			output_map.Insert("Stone",2);
      float chance = Math.RandomFloat(0,1);
      // 5% chance for platinum
      if (chance >= 0.95)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Platinum", Math.RandomIntInclusive(1,2));
      }
      // 10% chance for gold
      else if (chance >= 0.90)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Gold", Math.RandomIntInclusive(1,2));			  
      }
      // 15% chance for iron
      else if (chance >= 0.85)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Iron", Math.RandomIntInclusive(1,2));			  
      }
      // 20% chance for tin and copper
      else if (chance >= 0.80)
      {
        if (Math.RandomIntInclusive(0,1) == 0)
        {
			    output_map.Insert("SRP_Mining_StoneChunk_Copper", Math.RandomIntInclusive(1,2));			  
        }
        else
        {
			    output_map.Insert("SRP_Mining_StoneChunk_Tin", Math.RandomIntInclusive(1,2));			  
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
};

modded class Static_stone2
{
  override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
		if ( item && item.KindOf("Pickaxe") )
		{
			output_map.Insert("Stone",2);
      float chance = Math.RandomFloat(0,1);
      // 5% chance for platinum
      if (chance >= 0.95)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Gold", Math.RandomIntInclusive(1,2));			  
      }
      // 10% chance for gold
      else if (chance >= 0.90)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Platinum", Math.RandomIntInclusive(1,2));
      }
      // 15% chance for iron
      else if (chance >= 0.85)
      {
        if (Math.RandomIntInclusive(0,1) == 0)
        {
			    output_map.Insert("SRP_Mining_StoneChunk_Copper", Math.RandomIntInclusive(1,2));			  
        }
        else
        {
			    output_map.Insert("SRP_Mining_StoneChunk_Tin", Math.RandomIntInclusive(1,2));			  
        }
      }
      // 20% chance for tin and copper
      else if (chance >= 0.80)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Iron", Math.RandomIntInclusive(1,2));			  
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
};

modded class Static_stone3
{
  override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
		if ( item && item.KindOf("Pickaxe") )
		{
			output_map.Insert("Stone",2);
      float chance = Math.RandomFloat(0,1);
      // 5% chance for platinum
      if (chance >= 0.98)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Platinum", Math.RandomIntInclusive(1,2));
      }
      // 10% chance for gold
      else if (chance >= 0.95)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Gold", Math.RandomIntInclusive(1,2));			  
      }
      // 15% chance for iron
      else if (chance >= 0.90)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Iron", Math.RandomIntInclusive(1,2));			  
      }
      // 20% chance for tin and copper
      else if (chance >= 0.87)
      {
        if (Math.RandomIntInclusive(0,1) == 0)
        {
			    output_map.Insert("SRP_Mining_StoneChunk_Copper", Math.RandomIntInclusive(1,2));			  
        }
        else
        {
			    output_map.Insert("SRP_Mining_StoneChunk_Tin", Math.RandomIntInclusive(1,2));			  
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

};
modded class Static_stone4
{
  override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
		if ( item && item.KindOf("Pickaxe") )
		{
			output_map.Insert("Stone",2);
      float chance = Math.RandomFloat(0,1);
      // 5% chance for platinum
      if (chance >= 0.95)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Platinum", Math.RandomIntInclusive(1,2));
      }
      // 10% chance for gold
      else if (chance >= 0.93)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Gold", Math.RandomIntInclusive(1,2));			  
      }
      // 15% chance for iron
      else if (chance >= 0.90)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Iron", Math.RandomIntInclusive(1,2));			  
      }
      // 20% chance for tin and copper
      else if (chance >= 0.88)
      {
        if (Math.RandomIntInclusive(0,1) == 0)
        {
			    output_map.Insert("SRP_Mining_StoneChunk_Copper", Math.RandomIntInclusive(1,2));			  
        }
        else
        {
			    output_map.Insert("SRP_Mining_StoneChunk_Tin", Math.RandomIntInclusive(1,2));			  
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

};
modded class Static_stone5
{
  override void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
		if ( item && item.KindOf("Pickaxe") )
		{
			output_map.Insert("Stone",2);
      float chance = Math.RandomFloat(0,1);
      // 5% chance for platinum
      if (chance >= 0.95)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Platinum", Math.RandomIntInclusive(1,2));
      }
      // 10% chance for gold
      else if (chance >= 0.90)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Gold", Math.RandomIntInclusive(1,2));			  
      }
      // 15% chance for iron
      else if (chance >= 0.85)
      {
			  output_map.Insert("SRP_Mining_StoneChunk_Iron", Math.RandomIntInclusive(1,2));			  
      }
      // 20% chance for tin and copper
      else if (chance >= 0.80)
      {
        if (Math.RandomIntInclusive(0,1) == 0)
        {
			    output_map.Insert("SRP_Mining_StoneChunk_Copper", Math.RandomIntInclusive(1,2));			  
        }
        else
        {
			    output_map.Insert("SRP_Mining_StoneChunk_Tin", Math.RandomIntInclusive(1,2));			  
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
};