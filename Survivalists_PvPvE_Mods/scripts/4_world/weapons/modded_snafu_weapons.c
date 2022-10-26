modded class GCGN_BenelliM4_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "UniversalLight" );
		inventory.CreateInInventory( "BUISOptic" );
		inventory.CreateInInventory( "ImprovisedSuppressor" );
			
    EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.SpawnEntityOnGroundPos("Ammo_12gaPellets", entity.GetPosition());
		}
	}
};
modded class GCGN_HK416_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "SNAFU_HuntingOptic" );
		inventory.CreateInInventory( "SNAFU_FGCR_Grip" );
		inventory.CreateInInventory( "ImprovisedSuppressor" );
		SpawnAttachedMagazine("SNAFU_PMAG556_Black");
  }
};
modded class GCGN_M1Garand_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "GCGN_M84_Optic" );
		inventory.CreateInInventory( "ImprovisedSuppressor" );
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.SpawnEntityOnGroundPos("GCGN_Ammo_3006", entity.GetPosition());
		}
  }
};
modded class GCGN_M700_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "SNAFU_HuntingOptic" );
		SpawnAttachedMagazine("GCGN_M700_Mag");
  }
};
modded class GCGN_MP7_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "ImprovisedSuppressor" );
		inventory.CreateInInventory( "SNAFU_Aimpoint_ACO" );
		SpawnAttachedMagazine("GCGN_MP7_40Rnd");
  }
};
modded class GCGN_Vityaz_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "SNAFU_AKHuntingOptic" );
		inventory.CreateInInventory( "SNAFU_AK19_Stock" );
		inventory.CreateInInventory( "AK_PlasticHndgrd" );
		SpawnAttachedMagazine("GCGN_Vityaz_Mag");
  }
};
modded class HK416_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "SNAFU_HuntingOptic" );
		inventory.CreateInInventory( "SNAFU_FGCR_Grip" );
		inventory.CreateInInventory( "ImprovisedSuppressor" );
		SpawnAttachedMagazine("SNAFU_PMAG556_Black");
  }
};
modded class SNHK417_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "SNAFU_HuntingOptic" );
		inventory.CreateInInventory( "SNAFU_FGCR_Grip" );
		inventory.CreateInInventory( "ImprovisedSuppressor" );
		SpawnAttachedMagazine("SNHK417_Mag");
  }
};
modded class IA2_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "SNAFU_HuntingOptic" );
		inventory.CreateInInventory( "SNAFU_AFG_02_Black" );
		inventory.CreateInInventory( "ImprovisedSuppressor" );
		SpawnAttachedMagazine("SNAFU_PMAG556_Black");
  }
};
modded class MK18_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "SNAFU_HuntingOptic" );
		inventory.CreateInInventory( "SNAFU_FGCR_Grip" );
		inventory.CreateInInventory( "ImprovisedSuppressor" );
		SpawnAttachedMagazine("SNAFU_PMAG556_Black");
  }
};
modded class SNSA58_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "SNAFU_HuntingOptic" );
		inventory.CreateInInventory( "SA58_FGrip" );
		inventory.CreateInInventory( "SA58_Stock" );
		inventory.CreateInInventory( "ImprovisedSuppressor" );
		SpawnAttachedMagazine("SA58_30RND_BK");
  }
};
modded class SCAR_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "SNAFU_HuntingOptic" );
		inventory.CreateInInventory( "ImprovisedSuppressor" );
		SpawnAttachedMagazine("SNAFU_PMAG556_Black");
  }
};
modded class SG550_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "SNAFU_HuntingOptic" );
		inventory.CreateInInventory( "ImprovisedSuppressor" );
		SpawnAttachedMagazine("SG550_Mag");
  }
};
modded class Spas12_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "SNAFU_Shotgunchoke_Brown" );
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.SpawnEntityOnGroundPos("Ammo_12gaPellets", entity.GetPosition());
		}
  }
};
modded class Tec9_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ImprovisedSuppressor" );
		SpawnAttachedMagazine("Tec9_Mag");
  }
};
modded class VR80_Base
{
  override void OnDebugSpawn()
	{		
		GameInventory inventory = GetInventory();
        
		inventory.CreateInInventory( "SNAFU_Aimpoint_ACO" );
		inventory.CreateInInventory( "SNAFU_Shotgunchoke_Black" );
		SpawnAttachedMagazine("VR80_Magazine_5rd");
  }
};