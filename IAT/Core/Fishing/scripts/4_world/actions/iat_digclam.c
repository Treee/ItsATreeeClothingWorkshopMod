class IAT_ActionDigClamCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		float time_spent = 5.0;
		// if (m_ActionData.m_MainItem.KindOf("Knife") || m_ActionData.m_MainItem.KindOf("Shovel"))
		// 	time_spent = time_spent * 1.2;
		
		m_ActionData.m_ActionComponent = new CAContinuousTime(time_spent);
	}
};

class IAT_ActionDigClam: ActionContinuousBase
{
	void IAT_ActionDigClam()
	{
		m_CallbackClass = IAT_ActionDigClamCB;
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
	
	override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{	
		if( super.SetupAction( player, target, item, action_data, extra_data ) )
		{
			if ( item )
			{
				SetDiggingAnimation( item );
			}
			
			return true;
		}
		
		return false;
	}

	override bool HasTarget()
	{
		return true;
	}

	override string GetText()
	{
		return "Dig Up Clam";
	}

	override void OnFinishProgressServer( ActionData action_data )
	{	
    float rnd = Math.RandomFloatInclusive(0,1);
    if (rnd > 0)
    {
      string itemClass = "IAT_Fishing_Clam_Blue";
		  IAT_Fishing_Clam_ColorBase clam;
      if (Class.CastTo(clam, GetGame().CreateObjectEx(itemClass, action_data.m_Player.GetPosition(), ECE_SETUP|ECE_NOSURFACEALIGN|ECE_KEEPHEIGHT|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY)))
      {
        float m_DigClamToolDamage = 2.5;
        MiscGameplayFunctions.DealAbsoluteDmg(action_data.m_MainItem, m_DigClamToolDamage);
        action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
      }
    }
	}
	
	void SetDiggingAnimation( ItemBase item )
	{
		if (item.KindOf("Knife"))
		{
			m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DEPLOY_1HD;
			m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		}
		else
		{
			m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DIGMANIPULATE;
			m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		}
	}
};