class SRP_Tac_Vest_Black: Clothing
{
	override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached( parent, slot_id );
		
		if ( GetGame().IsServer() && parent.IsInherited( DayZInfected ) )
		{
			float coef = Math.RandomFloatInclusive( 0.2, 0.4 );
			SetHealth01( "", "", coef);
		}
	}
	
	//Debug menu Spawn Ground Special
	// override void OnDebugSpawn()
	// {
	// 	EntityAI entity;
	// 	if ( Class.CastTo(entity, this) )
	// 	{
	// 		entity.GetInventory().CreateInInventory( "PlateCarrierPouches" );
	// 		entity.GetInventory().CreateInInventory( "PlateCarrierHolster" );
	// 	}
	// }
};
class SRP_Tac_Vest_Green: SRP_Tac_Vest_Black{};
class SRP_Tac_Vest_Tan: SRP_Tac_Vest_Black{};

class SRP_Ratnik_Green: Clothing
{
	override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached( parent, slot_id );
		
		if ( GetGame().IsServer() && parent.IsInherited( DayZInfected ) )
		{
			float coef = Math.RandomFloatInclusive( 0.2, 0.4 );
			SetHealth01( "", "", coef);
		}
	}
};
class SRP_Ratnik_Tan: SRP_Ratnik_Green{};
class SRP_Ratnik_Black: SRP_Ratnik_Green{};

class SRP_Light_Ratnik_Green: Clothing
{
	override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached( parent, slot_id );
		
		if ( GetGame().IsServer() && parent.IsInherited( DayZInfected ) )
		{
			float coef = Math.RandomFloatInclusive( 0.2, 0.4 );
			SetHealth01( "", "", coef);
		}
	}
};
class SRP_Light_Ratnik_Black: SRP_Light_Ratnik_Green{};
class SRP_Light_Ratnik_Tan: SRP_Light_Ratnik_Green{};

class SRP_Chestrig_Green: Clothing
{
	override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached( parent, slot_id );
		
		if ( GetGame().IsServer() && parent.IsInherited( DayZInfected ) )
		{
			float coef = Math.RandomFloatInclusive( 0.2, 0.4 );
			SetHealth01( "", "", coef);
		}
	}
};
class SRP_Chestrig_Tan: SRP_Chestrig_Green{};
class SRP_Chestrig_Black: SRP_Chestrig_Green{};

class SRP_Army_Vest_1_Green: Clothing
{
	override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached( parent, slot_id );
		
		if ( GetGame().IsServer() && parent.IsInherited( DayZInfected ) )
		{
			float coef = Math.RandomFloatInclusive( 0.2, 0.4 );
			SetHealth01( "", "", coef);
		}
	}
};
class SRP_Army_Vest_1_Black: SRP_Army_Vest_1_Green{};
class SRP_Army_Vest_1_Tan: SRP_Army_Vest_1_Green{};

class SRP_Army_Vest_2_Green: Clothing
{
	override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached( parent, slot_id );
		
		if ( GetGame().IsServer() && parent.IsInherited( DayZInfected ) )
		{
			float coef = Math.RandomFloatInclusive( 0.2, 0.4 );
			SetHealth01( "", "", coef);
		}
	}
};
class SRP_Army_Vest_2_Black: SRP_Army_Vest_2_Green{};
class SRP_Army_Vest_2_Tan: SRP_Army_Vest_2_Green{};

class SRP_JPC_Vest_Green: Clothing
{
	override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached( parent, slot_id );
		
		if ( GetGame().IsServer() && parent.IsInherited( DayZInfected ) )
		{
			float coef = Math.RandomFloatInclusive( 0.2, 0.4 );
			SetHealth01( "", "", coef);
		}
	}
};
class SRP_JPC_Vest_Black: SRP_JPC_Vest_Green{};
class SRP_JPC_Vest_Tan: SRP_JPC_Vest_Green{};

class SRP_Tac_Tec_Vest_Green: Clothing
{
	override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached( parent, slot_id );
		
		if ( GetGame().IsServer() && parent.IsInherited( DayZInfected ) )
		{
			float coef = Math.RandomFloatInclusive( 0.2, 0.4 );
			SetHealth01( "", "", coef);
		}
	}
};
class SRP_Tac_Tec_Vest_Tan: SRP_Tac_Tec_Vest_Green{};
class SRP_Tac_Tec_Vest_Black: SRP_Tac_Tec_Vest_Green{};