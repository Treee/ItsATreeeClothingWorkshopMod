class SRP_StoneForgeWorkbench extends SRP_Fireplace_Transformer
{
  void SRP_StoneForgeWorkbench()
  {
		//Particles - default for FireplaceBase
		PARTICLE_FIRE_START 	= ParticleList.BARREL_FIRE_START;
		PARTICLE_SMALL_FIRE 	= ParticleList.BARREL_SMALL_FIRE;
		PARTICLE_NORMAL_FIRE	= ParticleList.BARREL_NORMAL_FIRE;
		PARTICLE_SMALL_SMOKE 	= ParticleList.BARREL_SMALL_SMOKE;
		PARTICLE_NORMAL_SMOKE	= ParticleList.BARREL_NORMAL_SMOKE;
		PARTICLE_FIRE_END 		= ParticleList.BARREL_FIRE_END;
		PARTICLE_STEAM_END		= ParticleList.BARREL_FIRE_STEAM_2END;
  }

  override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		ItemBase item = ItemBase.Cast( attachment );
		
		if ( GetHealthLevel() == GameConstants.STATE_RUINED || GetHierarchyRootPlayer() != null )
			return false;

		//direct cooking slots
    if ( IsKindling( item ) || IsFuel( item ) )
    {
      return super.CanReceiveAttachment(attachment, slotId);
    }

    // tool attachments
    if (item && item.GetType() == "SRP_AdvancedStoneForgeWorkbench_Bellows" || item.GetType() == "SRP_Mining_RawOre_Coal")
    {
      return super.CanReceiveAttachment(attachment, slotId);
    }

		return false;
	}	
	override bool CanLoadAttachment( EntityAI attachment )
	{
		ItemBase item = ItemBase.Cast( attachment );
		
		if ( GetHealthLevel() == GameConstants.STATE_RUINED )
			return false;

		if ( IsKindling( item ) || IsFuel( item ) )
    {
      return super.CanLoadAttachment(attachment);
    }
    // tool attachments
    if (item && item.GetType() == "SRP_AdvancedStoneForgeWorkbench_Bellows" || item.GetType() == "SRP_Mining_RawOre_Coal")
    {
      return super.CanLoadAttachment(attachment);
    }
		return false;
	}
	override bool CanReleaseAttachment( EntityAI attachment )
	{
		if( !super.CanReleaseAttachment( attachment ) )
			return false;
		
		ItemBase item = ItemBase.Cast( attachment );
		//kindling items
		if ( IsKindling ( item ) && !IsBurning() )
		{
			if ( HasLastFuelKindlingAttached() )
			{
				if ( HasLastAttachment() )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return true;
			}
		}
		
		//fuel items
		if ( IsFuel ( item ) && !IsBurning() )
		{
			if ( HasLastFuelKindlingAttached() )
			{	
				if ( HasLastAttachment() )
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return true;
			}
		}
		
		return false;
	}
  override bool CanBeDeconstructed()
  {
    return true;
  }
};

class SRP_AdvancedStoneForgeWorkbench extends SRP_StoneForgeWorkbench{};


class SRP_PrefabCrafting_basicforge extends SRP_StoneForgeWorkbench
{
  override bool CanBeDeconstructed()
  {
    return false;
  }
};
class SRP_PrefabCrafting_advancedforge extends SRP_StoneForgeWorkbench
{
  override bool CanBeDeconstructed()
  {
    return false;
  }
};
