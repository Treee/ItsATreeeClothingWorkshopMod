modded class CAContinuousMineRock
{	
	override bool GetMiningData(ActionData action_data )
	{
		RockBase ntarget;
    bool isInQuarry = false;
    // Print("CAContinuousMineRock::Start");
		if ( Class.CastTo(ntarget, action_data.m_Target.GetObject()) )
		{
      // Print("CAContinuousMineRock::Is Rock");
			m_AmountOfDrops = Math.Max(1,ntarget.GetAmountOfDrops(action_data.m_MainItem));   
      isInQuarry = CheckQuarryDistances(action_data.m_Player.GetPosition(), ntarget);
      if (isInQuarry)
      {
        ntarget.GetMaterialAndQuantityMap(action_data.m_MainItem,m_MaterialAndQuantityMap);
      }
      else
      { // auto fails rock creation
        GetMaterialAndQuantityMapRuined(action_data.m_MainItem,m_MaterialAndQuantityMap);
      }
			//m_Material = ntarget.GetMaterial(action_data.m_MainItem);
			//m_AmountOfMaterialPerDrop = Math.Max(1,ntarget.GetAmountOfMaterialPerDrop(action_data.m_MainItem));
			m_DamageToMiningItemEachDrop = ntarget.GetDamageToMiningItemEachDrop(action_data.m_MainItem);
			m_AdjustedDamageToMiningItemEachDrop = action_data.m_Player.GetSoftSkillsManager().SubtractSpecialtyBonus( m_DamageToMiningItemEachDrop, m_Action.GetSpecialtyWeight(), true );
			return true;
		}
    string surface_type;
    vector position;
    position = action_data.m_Target.GetCursorHitPos();
    
    GetGame().SurfaceGetType( position[0], position[2], surface_type );
    // Print("CAContinuousMineRock::Is not rock");
    if (surface_type == "stone_ext" || surface_type == "stone_int" || surface_type == "jmc_gravel")
    {
      // Print("CAContinuousMineRock::Surface Type: " + surface_type);
      m_AmountOfDrops = 1;   
      isInQuarry = CheckQuarryDistances(action_data.m_Player.GetPosition(), NULL);
      if (isInQuarry)
      {
        GetMaterialAndQuantityMap(action_data.m_MainItem,m_MaterialAndQuantityMap);
      }
      else
      { // auto fails rock creation
        GetMaterialAndQuantityMapRuined(action_data.m_MainItem,m_MaterialAndQuantityMap);
      }
      //m_Material = ntarget.GetMaterial(action_data.m_MainItem);
      //m_AmountOfMaterialPerDrop = Math.Max(1,ntarget.GetAmountOfMaterialPerDrop(action_data.m_MainItem));
      m_DamageToMiningItemEachDrop = GetDamageToMiningItemEachDrop(action_data.m_MainItem);
      m_AdjustedDamageToMiningItemEachDrop = action_data.m_Player.GetSoftSkillsManager().SubtractSpecialtyBonus( m_DamageToMiningItemEachDrop, m_Action.GetSpecialtyWeight(), true );
      return true;
    }

		return false;
	}

  override int Execute( ActionData action_data )
	{
		Object targetObject;
		Class.CastTo(targetObject, action_data.m_Target.GetObject());
    // error out if no data is loaded or no player
		if ( !action_data.m_Player || !m_DataLoaded )
		{
			return UA_ERROR;
		}
		// finished if the pickaxe is destroyed
		if ( (action_data.m_MainItem && action_data.m_MainItem.IsDamageDestroyed()) )
		{
			return UA_FINISHED;
		}
		else
		{
      // if we need to wait longer for material drops
			if ( m_TimeElpased < m_AdjustedTimeBetweenMaterialDrops )
			{ // increment the time elapsed
				m_TimeElpased += action_data.m_Player.GetDeltaT();
			}
			else
			{
				if ( GetGame().IsServer() )
				{
					float damage = 0;
					if (m_AmountOfDrops > 0)
						damage = (1 / m_AmountOfDrops) * 100;
          if (targetObject)
					  targetObject.DecreaseHealth("","",damage,true);
					CreatePrimaryItems(action_data);
					if (action_data.m_MainItem)
						action_data.m_MainItem.DecreaseHealth( "", "", m_AdjustedDamageToMiningItemEachDrop );
					else
					{
						DamagePlayersHands(action_data.m_Player);
					}
				}
				if ( targetObject && targetObject.IsDamageDestroyed() )
				{
					if ( m_SpentUnits )
					{
						m_SpentUnits.param1 = m_TimeElpased;
						SetACData(m_SpentUnits);
					}
					OnCompletePogress(action_data);
					return UA_FINISHED;
				}
				m_TimeElpased = m_TimeElpased - m_AdjustedTimeBetweenMaterialDrops;
				OnCompletePogress(action_data);
			}
			return UA_PROCESSING;
		}
	}

  bool CheckQuarryDistances(vector playerPosition, RockBase targetRock)
  {
    SRPConfig config = GetDayZGame().GetSRPConfigGlobal();    
    if (config.g_QuarryLocations)
    {
      for ( int i = config.g_QuarryLocations.Count() - 1; i >= 0; i-- )
      {
        if (config.g_QuarryLocations.Get(i).IsPlayerInRange(playerPosition))
        {
          if (targetRock)
          {
            targetRock.SetRockProbabilities(config.g_QuarryLocations.Get(i));
            return true;
          }
          return true;
        }
      }
    }
    return false;
  }

  void GetMaterialAndQuantityMapRuined(ItemBase item, out map<string,int> output_map)
	{
		if ( item && item.KindOf("Pickaxe") )
		{
			output_map.Insert("Stone_Ruined",2);
		}
		else if ( item && item.KindOf("SledgeHammer") )
		{
			output_map.Insert("Stone_Ruined",1);
		}
		else if ( item )
		{
			output_map.Insert("Stone_Ruined",1);
		}
	}

  void GetMaterialAndQuantityMap(ItemBase item, out map<string,int> output_map)
	{
		if ( item && item.KindOf("Pickaxe") )
		{
			output_map.Insert("Stone",2);
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

  float GetDamageToMiningItemEachDrop(ItemBase item)
	{
		if ( item && item.IsKindOf("Pickaxe") )
		{
			return 20;
		}
		else if ( item && item.IsKindOf("SledgeHammer") )
		{
			return 20;
		}
		else
		{
			return 40;
		}
	}
};

modded class ActionMineRock
{
	override void CreateConditionComponents()  
	{		
		m_ConditionTarget = new CCTNone;
		m_ConditionItem = new CCINonRuined;
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		//Action not allowed if player has broken legs
		if (player.GetBrokenLegs() == eBrokenLegs.BROKEN_LEGS)
			return false;

    // Print("ActionMineRock: Legs OK: "+ target.GetComponentIndex());
    if (target)
    {
      Object targetObject = target.GetObject();
      // Print("ActionMineRock: HAS TARGET");
      if (targetObject && targetObject.IsRock() )
      {
        // Print("ActionMineRock: IS ROCK");
        return true;
      }
      // Print("ActionMineRock: NOT ROCK " + targetObject);

  		// See if we are looking at something			
      vector position = target.GetCursorHitPos();
      if (position == vector.Zero)
        return false;
      
      string surface_type;
      
      GetGame().SurfaceGetType3D( position[0], position[1]+0.1, position[2], surface_type );

      // Print("ActionMineRock: CURSOR HIT: " + surface_type);
      if (surface_type == "stone_ext" || surface_type == "stone_int" || surface_type == "jmc_gravel")
      {
        // Print("ActionMineRock: IS STONE");
        // Sometimes SurfaceGetType3D ignores the Y, this makes it so the proper distance is calculated
		    position[1] = GetGame().SurfaceY(position[0],position[2]);
        // Print("SX: " + position[0] + " SY: " + position[1] + " SZ: " + position[2] + " PX: " + player.GetPosition()[0] + " PY: " + player.GetPosition()[1] + " PZ: " + player.GetPosition()[2] + " Z delta: " + Math.AbsFloat(position[2]-player.GetPosition()[2]));
        if ( Math.AbsFloat(position[2]-player.GetPosition()[2]) <= 0.8)
        {
          // Print("ActionMineRock: WITHIN 1 METER");
          return true;
        }
        // Print("ActionMineRock: OUTSIDE 1 METER: " + vector.DistanceSq(position, player.GetPosition()) );
        return false;
      }
      // Print("ActionMineRock: NOT STONE");
      return false;      
    }
    // Print("ActionMineRock: ALL FAIL " + targetObject);   
    return false;
	}
};

modded class ActionMineRock1H
{
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    // Print("Can I mine one handed?");
    return false;
  }
};
