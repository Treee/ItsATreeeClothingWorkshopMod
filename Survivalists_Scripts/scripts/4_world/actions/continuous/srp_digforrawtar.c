class SRP_ActionDigTarSandsCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(2);
	}
};

class SRP_ActionDigTarSands: ActionContinuousBase
{
	void SRP_ActionDigTarSands()
	{
		m_CallbackClass = SRP_ActionDigTarSandsCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DIGMANIPULATE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_MEDIUM;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSurface(UAMaxDistances.DEFAULT);
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( player.IsPlacingLocal() )
			return false;
		
		// Check if player is standing on terrain
		vector plr_pos = player.GetPosition();
		float height = GetGame().SurfaceY(plr_pos[0], plr_pos[2]);
		height = plr_pos[1] - height;
		
		if ( height > 0.4 )
			return false; // Player is not standing on ground
		
		if ( !GetGame().IsDedicatedServer() )
		{
			if ( !player.IsPlacingLocal() /*&& player.IsCurrentCameraAimedAtGround()*/ )
			{
				if ( target )
				{
					string surface_type;
					vector position;
					position = target.GetCursorHitPos();
					
					if ( GetGame().SurfaceIsSea(position[0],position[2]) )
					{
						return true;
					}
				}
			}
		
			return false;
		}
		else
		{
			return true;
		}
	}
	
	override bool ActionConditionContinue( ActionData action_data )
	{
		return true;
	}
	

	override bool HasTarget()
	{
		return true;
	}

	override string GetText()
	{
		return "Dig Up Tar Sands";
	}

	override void OnFinishProgressServer( ActionData action_data )
	{	
		ItemBase rawTar;    
    float rnd = Math.RandomFloatInclusive(0,1);
    if (rnd > 0.5)
    {
      Class.CastTo(rawTar, GetGame().CreateObjectEx("SRP_Mining_StoneChunk_Tar", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE) );
      rawTar.SetQuantity(Math.RandomIntInclusive(1,5));
      int damageApplied = Math.RandomFloatInclusive(1,5);
      MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, damageApplied);
      action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
    }
	}
};