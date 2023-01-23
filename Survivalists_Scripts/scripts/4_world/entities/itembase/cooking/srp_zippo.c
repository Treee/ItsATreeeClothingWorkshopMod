class SRP_Zippo_ColorBase extends ItemBase
{
	override bool CanIgniteItem( EntityAI ignite_target = NULL )
	{
		if ( GetQuantity() > 0 )
			return true;
		else
			return false;
	}
	override void OnIgnitedTarget( EntityAI ignited_item )
	{
		if ( GetGame().IsServer() )
		{
			AddQuantity( -0.5 );
		}
	}
	override void OnIgnitedTargetFailed( EntityAI target_item )
	{
		if ( GetGame().IsServer() )
		{
			AddQuantity( -0.5 );
		}
	}	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionLightItemOnFire);
	}
};
class SRP_Zippo_Silver extends SRP_Zippo_ColorBase{};
class SRP_Zippo_Survivalists extends SRP_Zippo_ColorBase{};
class SRP_Zippo_Stag extends SRP_Zippo_ColorBase{};
class SRP_Zippo_Espen extends SRP_Zippo_ColorBase{};
class SRP_Zippo_LocknSons extends SRP_Zippo_ColorBase{};

class SRP_JunkLighter_ColorBase extends ItemBase
{
	override bool CanIgniteItem( EntityAI ignite_target = NULL )
	{
		if ( GetQuantity() > 0 )
			return true;
		else
			return false;
	}
	override void OnIgnitedTarget( EntityAI ignited_item )
	{
		if ( GetGame().IsServer() )
		{
			AddQuantity( -0.5 );
		}
	}
	override void OnIgnitedTargetFailed( EntityAI target_item )
	{
		if ( GetGame().IsServer() )
		{
			AddQuantity( -0.5 );
		}
	}	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionLightItemOnFire);
	}
};

class SRP_JunkLighter_Basic extends SRP_JunkLighter_ColorBase{};