modded class CAContinuousMineRock
{	
	override bool GetMiningData(ActionData action_data )
	{
    bool isValid = super.GetMiningData(action_data);
    if (!isValid)
    {
      vector position = action_data.m_Target.GetCursorHitPos();

      string surface_type_ground;    
      GetGame().SurfaceGetType( position[0], position[2], surface_type_ground );

      string surface_type_3d;    
      GetGame().SurfaceGetType3D( position[0], position[1]+0.1, position[2], surface_type_3d );
      position[1] = GetGame().SurfaceY(position[0],position[2]);

      // Print("CAContinuousMineRock::Is not rock:");
      if (IsMinableSurface(surface_type_ground) || IsMinableSurface(surface_type_3d))
      {
        m_AmountOfDrops = 1;
        GetMaterialAndQuantityMap(action_data.m_MainItem, action_data.m_Player.GetPosition(),m_MaterialAndQuantityMap);          
        m_DamageToMiningItemEachDrop = GetDamageToMiningItemEachDrop(action_data.m_MainItem);
        m_AdjustedDamageToMiningItemEachDrop = action_data.m_Player.GetSoftSkillsManager().SubtractSpecialtyBonus( m_DamageToMiningItemEachDrop, m_Action.GetSpecialtyWeight(), true );
        return true;
      }
      // Print("MINING DATA FALSE");
      return false;
    }
    // Print("MINING DATA TRUE");
		return isValid;
	}

	override void CreatePrimaryItems(ActionData action_data)
	{
    super.CreatePrimaryItems(action_data);
    m_DataLoaded = GetMiningData(action_data);
	}

  bool IsMinableSurface(string surfaceType)
  {
    // Print("[IsMinableSurface] - " + surfaceType);
    return ( surfaceType == "stone_ext" || surfaceType == "stone_int" || surfaceType == "jmc_gravel" );
  }

  void GetMaterialAndQuantityMap(ItemBase item, vector position, out map<string,int> output_map)
	{
		if ( item )
		{
      SRPMMConfig config;
      MiningOreConfig miningConfig;
      if ( Class.CastTo(config, GetDayZGame().GetSRPMMConfig()) && Class.CastTo(miningConfig, config.IsInMiningQuarry(position)) )
      {
        output_map.Insert("Stone", 1);
      }
      else
      {
        output_map.Insert("Stone_Ruined", 1);
      }
		}
	}

  float GetDamageToMiningItemEachDrop(ItemBase item)
	{
		if (item)
		{
			switch (item.GetType())
			{
        case "SledgeHammer":
        case "Pickaxe":
          return Math.RandomIntInclusive(10,40);
        case "Wrench":
        case "Screwdriver":
        case "MeatTenderizer":
        case "PipeWrench":
        case "Crowbar":
          return Math.RandomIntInclusive(35,50);
        case "Hammer":
          return Math.RandomIntInclusive(45,65);
			}
		}
		return Math.RandomIntInclusive(50,90);
	}
};

modded class ActionMineRock
{
	override void CreateConditionComponents()  
	{		
		m_ConditionTarget = new CCTNone;
		m_ConditionItem = new CCINonRuined;
	}

  override string GetYieldName( PlayerBase player, ActionTarget target, ItemBase item )
	{				
		string yieldName = " - Large Stones";
		RockBase rock;
    if (target && target.GetObject() && Class.CastTo(rock, target.GetObject()))
    {
      yieldName = " - Ore";
    }
		return yieldName;
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
    vector position = target.GetCursorHitPos();
    if (position == vector.Zero)
      return false;
    
    string surface_type_ground;    
    GetGame().SurfaceGetType( position[0], position[2], surface_type_ground );

    string surface_type_3d;    
    GetGame().SurfaceGetType3D( position[0], position[1]+0.1, position[2], surface_type_3d );
    position[1] = GetGame().SurfaceY(position[0],position[2]);

    if (!target.GetObject() && (IsMinableSurface(surface_type_3d) || IsMinableSurface(surface_type_ground)) && IsPlayerInMiningRange(position[2], player.GetPosition()[2],1) )
    {
      // Print("ActionMineRock: WITHIN 1 METER");
      return true;
    }
    // Print("ActionMineRock: NOT STONE SURFACE OR NOT IN RANGE: " + (vector.DistanceSq(position, player.GetPosition())));  
    if (target.GetObject())
    {
      // Print("ActionMineRock: SUPER");
      return super.ActionCondition(player, target, item);    
    }
    return false;
	}

  bool IsMinableSurface(string surfaceType)
  {
    // Print("[IsMinableSurface] - " + surfaceType);
    return ( surfaceType == "stone_ext" || surfaceType == "stone_int" || surfaceType == "jmc_gravel" );
  }

  bool IsPlayerInMiningRange(float cursorPositionY, float playerPositionY, float requiredDistance)
  {
    // Print("CursorY: " + cursorPositionY + " PlayerY: " + playerPositionY + " ABS Diff: " + Math.AbsFloat(cursorPositionY - playerPositionY) + " ReqDistance: " + requiredDistance);
    return ( Math.AbsFloat(cursorPositionY - playerPositionY) <= requiredDistance );
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
