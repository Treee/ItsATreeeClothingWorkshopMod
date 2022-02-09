modded class PluginLifespan
{	
	protected ref map<PlayerBase, ref FacePaintStyle> m_PlayerCurrentFacePaint;
  protected ref map<int, ref FacePaintStyle> m_FacePaintOptions;
	
	void PluginLifespan()
	{
		m_PlayerCurrentFacePaint = new map<PlayerBase, ref FacePaintStyle>;
	}

	void LoadFromCfg()
	{
    super.LoadFromCfg();

		m_FacePaintOptions = new map<int, ref FacePaintStyle>;

		string config_name = "CfgVehicles";
		int config_count = GetGame().ConfigGetChildrenCount( config_name );
			
		int i, j, k, l, m;
		
		//Print( "config_count: " + config_count );
		for ( i = 0; i < config_count; i++ )
		{
			string survivor_name = "";
			GetGame().ConfigGetChildName( config_name, i, survivor_name );
			
			if ( survivor_name != "" && survivor_name != "access" )
			{
				if ( GetGame().IsKindOf(survivor_name, "SurvivorMale_Base")  ||  GetGame().IsKindOf(survivor_name, "SurvivorFemale_Base") )
				{
					string survivor_path = config_name + " " + survivor_name;
					int survivor_lifespan_count = GetGame().ConfigGetChildrenCount( survivor_path );
          
					//Print( "survivor_path: " + survivor_path );
          int facepaintindex = 0;
					for ( j = 0; j < survivor_lifespan_count; j++ )
					{
						string survivor_lifespan_name = "";
						GetGame().ConfigGetChildName( survivor_path, j, survivor_lifespan_name );
						
						string survivor_lifespan_path = survivor_path + " " + survivor_lifespan_name;

						if ( survivor_lifespan_name.Contains("FacePaint_") )
						{
							string paint_material, normal_material;
							string path_normal = survivor_lifespan_path + " mat_normal";
							string path_bloody = survivor_lifespan_path + " mat_paint";

		        	TStringArray parts = new TStringArray;
              survivor_lifespan_name.Split("_", parts);
							GetGame().ConfigGetText(path_normal, normal_material);
							GetGame().ConfigGetText(path_bloody, paint_material);
							m_FacePaintOptions.Set( facepaintindex, new FacePaintStyle(parts[1],normal_material, paint_material,facepaintindex) );
              facepaintindex++;
						}
					}
				}
			}
		}
	}

  override protected void SetPlayerLifespanLevel( PlayerBase player, LifespanLevel level )
	{
		int slot_id = InventorySlots.GetSlotIdFromString("Head");	
		EntityAI players_head = player.GetInventory().FindPlaceholderForSlot( slot_id );
    if (players_head && m_PlayerCurrentFacePaint.Contains(player))
    {
      SetHeadMaterial(player);
    }
    else
    {
      super.SetPlayerLifespanLevel(player, level);
    }
	}

	protected void UpdateFacePaintLevel( PlayerBase player, int camo_index, bool force_update = false )
	{
		if ( !player.IsAlive() )
			return;

		// Print("UpdateFacePaintLevel camo_index: " + camo_index);
    FacePaintStyle facePaint;
		if ( m_PlayerCurrentFacePaint.Contains(player) )
		{
			FacePaintStyle current_FacePaint = m_PlayerCurrentFacePaint.Get( player );

      // Print("exists: facepaint: " + current_FacePaint + " stickIndex: " + camo_index + " currentIndex: " + current_FacePaint.GetPaintIndex());
			if ( camo_index != current_FacePaint.GetPaintIndex() || force_update )
			{
				facePaint = GetFacePaintMaterials( camo_index );
        // Print("facepaint:");
				if ( facePaint != NULL )
				{
					m_PlayerCurrentFacePaint.Set( player, facePaint );
          SetHeadMaterial(player);
				}
			}
		}
		else
		{
      // Print("nope, make new!");
			if ( m_FacePaintOptions.Contains( camo_index ) )
			{
				facePaint = GetFacePaintMaterials( camo_index );
				if ( facePaint != NULL )
				{
          // Print("facepaint is not null " + facePaint);
					m_PlayerCurrentFacePaint.Set( player, facePaint );
          SetHeadMaterial(player);
				}
			}
		}
	}

  void SynchFacePaintVisual( PlayerBase player, int camo_index )
	{
		UpdateFacePaintLevel( player, camo_index, true );
	}

  FacePaintStyle GetFacePaintMaterials( int camoIndex = -1 )
	{		
		if ( m_FacePaintOptions != NULL )
		{
      // wrap the index if we are larger than max paint count
      if (camoIndex > m_FacePaintOptions.Count() - 1)
      {
        camoIndex = camoIndex % m_FacePaintOptions.Count();
      }

			for ( int i = m_FacePaintOptions.Count() - 1; i >= 0; i-- )
			{
				FacePaintStyle facepaint = m_FacePaintOptions.Get( i );
        // Print("GetFacePaintMaterials: " + i + " facepaint: " + facepaint);
				if (facepaint && camoIndex == facepaint.GetPaintIndex() )
				{
					return facepaint;
				}
			}
		}		
		return NULL;
	}

  int GetFacePaintCount()
  {
    if (m_FacePaintOptions != NULL)
    {
      return m_FacePaintOptions.Count();
    }
    return 0;
  }

  protected void SetHeadMaterial( PlayerBase player)
	{
		int slot_id = InventorySlots.GetSlotIdFromString("Head");	
		EntityAI players_head = player.GetInventory().FindPlaceholderForSlot( slot_id );
    if (players_head && m_PlayerCurrentFacePaint.Contains(player))
    {
      players_head.SetObjectTexture( 0, "");
      players_head.SetObjectMaterial( 0, "");

			FacePaintStyle current_FacePaint = m_PlayerCurrentFacePaint.Get( player );
			LifespanLevel current_Level = m_PlayerCurrentLevel.Get( player );

      Print("material: " + current_FacePaint.GetMaterial(1) + " texture: " + current_Level.GetTextureName());

      player.SetFaceTexture( current_Level.GetTextureName() );
      player.SetFaceMaterial( current_FacePaint.GetMaterial(1) );
    }
	}
};