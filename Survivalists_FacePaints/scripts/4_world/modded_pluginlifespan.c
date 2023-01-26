modded class PluginLifespan
{	
  protected ref map<string, ref array<ref FacePaintStyle>> m_FacePaintOptions;

	override void LoadFromCfg()
	{
    super.LoadFromCfg();

		m_FacePaintOptions = new map<string, ref array<ref FacePaintStyle>>;

		string config_name = "CfgVehicles";
		int config_count = GetGame().ConfigGetChildrenCount( config_name );
			
		int i, j, k, l, m;		
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
          
          array<ref FacePaintStyle> facePaint_styles = new array< ref FacePaintStyle>;
          int facepaintindex = 0;
					for ( j = 0; j < survivor_lifespan_count; j++ )
					{
						string survivor_facepaint_name = "";
						GetGame().ConfigGetChildName( survivor_path, j, survivor_facepaint_name );
						
            string suvivor_bloodyhands_normalpath = survivor_path + " BloodyHands";
						string survivor_facepaint_path = survivor_path + " " + survivor_facepaint_name;

						if ( survivor_facepaint_name.Contains("FacePaint_") )
						{
							string paint_material, paint_material_unshaved, paint_material_bearded, normal_material;
							string path_normal = suvivor_bloodyhands_normalpath + " mat_normal";
							string path_paint = survivor_facepaint_path + " mat_paint";
							string path_paint_unshaved = survivor_facepaint_path + " mat_paint_unshaved";
							string path_paint_bearded = survivor_facepaint_path + " mat_paint_bearded";

		        	TStringArray parts = new TStringArray;
              survivor_facepaint_name.Split("_", parts);
							GetGame().ConfigGetText(path_normal, normal_material);
							GetGame().ConfigGetText(path_paint, paint_material);
							GetGame().ConfigGetText(path_paint_unshaved, paint_material_unshaved);
							GetGame().ConfigGetText(path_paint_bearded, paint_material_bearded);

              facePaint_styles.Insert(new FacePaintStyle(parts[1],normal_material, paint_material, paint_material_unshaved, paint_material_bearded,facepaintindex) );
              facepaintindex++;
						}
					}
          if (facePaint_styles.Count() > 0)
          {
            m_FacePaintOptions.Set(survivor_name, facePaint_styles);
          }
				}
			}
		}
	}

  override protected void SetPlayerLifespanLevel( PlayerBase player, LifespanLevel level )
  {
    // Print("teudhfidushfduisofh");
    if (player.GetFacePaintIndex() < 0)
    {
      // Print("No Face Paint applied: default behavior");
      super.SetPlayerLifespanLevel( player, level );
    }
    else
    {
      // Print("replace the face material with this material index - camoindex: " + player.GetFacePaintIndex());
      SetPaintedFaceMaterial(player, level);
    }
  }

  FacePaintStyle GetFacePaintMaterials(string player_class, int camoIndex = -1 )
	{		
    array< ref FacePaintStyle> facepaint_styles = m_FacePaintOptions.Get( player_class );
		
		if ( facepaint_styles != NULL )
		{
      if (camoIndex > facepaint_styles.Count() - 1)
      {
        camoIndex = camoIndex % facepaint_styles.Count();
      }

			for ( int i = facepaint_styles.Count() - 1; i >= 0; i-- )
			{
				FacePaintStyle facepaint = facepaint_styles.Get( i );
        if (facepaint)
        {
          if (camoIndex == facepaint.GetPaintIndex())
          {
            return facepaint;              
          }
        }
			}
		}
    return NULL;
	}

  int GetFacePaintCount(string player_class)
  {
    array< ref FacePaintStyle> facepaint_styles = m_FacePaintOptions.Get( player_class );		
		if ( facepaint_styles != NULL )
		{
      return facepaint_styles.Count();
    }
    return 0;
  }


  protected void SetPaintedFaceMaterial( PlayerBase player, LifespanLevel level )
	{
		if (player.m_CorpseState != 0)
			return;
		int slot_id = InventorySlots.GetSlotIdFromString("Head");	
		EntityAI players_head = player.GetInventory().FindPlaceholderForSlot( slot_id );

    FacePaintStyle facepaint = GetFacePaintMaterials(player.GetPlayerClass(), player.GetFacePaintIndex());

		if( players_head && facepaint )
		{
			switch(level.GetLevel())
			{
				case LifeSpanState.BEARD_NONE:
				{
          // Print("no beard: tex - " + level.GetTextureName());
          // Print("no beard: mat - " + level.GetMaterialName());

					players_head.SetObjectTexture( 0, "");
					players_head.SetObjectMaterial( 0, "");		
					
					player.SetFaceTexture( level.GetTextureName() );
          // Print("material to use: " + facepaint.GetMaterial(1) );
					player.SetFaceMaterial( facepaint.GetMaterial(1) );
					// player.SetFaceMaterial( level.GetMaterialName() );

					player.SetLifeSpanStateVisible(LifeSpanState.BEARD_NONE);
					//Print("LifeSpanState.BEARD_NONE");
					break;
				}
				case LifeSpanState.BEARD_MEDIUM:
				{
          // Print("medium beard: tex - " + level.GetTextureName());
          // Print("medium beard: mat - " + level.GetMaterialName());

					players_head.SetObjectTexture( 0, "");
					players_head.SetObjectMaterial( 0, "");	
					
					player.SetFaceTexture( level.GetTextureName() );

          // Print("material to use: " + facepaint.GetMaterial(2) );

					player.SetFaceMaterial( facepaint.GetMaterial(2) );
					// player.SetFaceMaterial( level.GetMaterialName() );
										
					player.SetLifeSpanStateVisible(LifeSpanState.BEARD_MEDIUM);
					//Print("LifeSpanState.BEARD_MEDIUM");
					break;
				}
				
				case LifeSpanState.BEARD_LARGE:
				{	
          // Print("large beard: tex - " + level.GetTextureName());
          // Print("large beard: mat - " + level.GetMaterialName());

					players_head.SetObjectTexture( 0, "");
					players_head.SetObjectMaterial( 0, "");	
							
					player.SetFaceTexture( level.GetTextureName() );
          // Print("material to use: " + facepaint.GetMaterial(3) );
					player.SetFaceMaterial( facepaint.GetMaterial(3) );
					// player.SetFaceMaterial( level.GetMaterialName() );
			
					player.SetLifeSpanStateVisible(LifeSpanState.BEARD_LARGE);
					//Print("LifeSpanState.BEARD_LARGE");
					break;
				}
				
				case LifeSpanState.BEARD_EXTRA:
				{
          // Print("extra beard: tex - " + level.GetTextureName());
          // Print("extra beard: mat - " + level.GetMaterialName());
					players_head.SetObjectTexture( 0, level.GetTextureName() );
					players_head.SetObjectMaterial( 0, level.GetMaterialName() );
					
					array< ref LifespanLevel> lifespan_levels = m_LifespanLevels.Get( player.GetPlayerClass() );
					LifespanLevel prev_level = lifespan_levels.Get(LifeSpanState.BEARD_LARGE);

          // Print("works: " + prev_level.GetMaterialName() + " not working: " + facepaint.GetMaterial(3));
					player.SetFaceMaterial( facepaint.GetMaterial(3) );
					// player.SetFaceMaterial( prev_level.GetMaterialName() );
					
					player.SetLifeSpanStateVisible(LifeSpanState.BEARD_EXTRA);
					//Print("LifeSpanState.BEARD_EXTRA");
					break;
				}									
				default:
				{
					Print("Lifespan state missing");
					break;
				}
			}	
		}
	}

};
