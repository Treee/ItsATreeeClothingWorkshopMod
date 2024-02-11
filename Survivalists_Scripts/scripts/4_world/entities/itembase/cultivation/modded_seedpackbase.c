modded class SeedPackBase
{
	override void EmptySeedPack( PlayerBase player )
	{
		string pack_type = GetType();
		string seeds_type = "";
		
		GetGame().ConfigGetText( "cfgVehicles " + pack_type + " Horticulture ContainsSeedsType", seeds_type );
		
		int seeds_quantity_max = GetGame().ConfigGetInt( "cfgVehicles " + pack_type + " Horticulture ContainsSeedsQuantity" );
		int seeds_quantity = seeds_quantity_max;
		
		seeds_quantity = Math.Round( seeds_quantity_max * GetHealth01("","") );
	
		if ( seeds_quantity < 1 )
		{ 
			seeds_quantity = 1;
		}
    else
    {
      seeds_quantity = Math.RandomIntInclusive(1, seeds_quantity);
    }
		
		if (player)
		{
			EmptySeedsPackLambda lambda = new EmptySeedsPackLambda(this, seeds_type, player, seeds_quantity);
			player.ServerReplaceItemInHandsWithNew(lambda);
		}
		else
		{
			vector pos = GetPosition();
			GetGame().CreateObjectEx(seeds_type, pos, ECE_PLACE_ON_SURFACE|ECE_SETUP|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY);
			GetGame().ObjectDelete( this );
		}
	}
};