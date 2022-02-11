modded class PluginLifespan
{	
  protected ref map<string, ref array<ref FacePaintStyle>> m_FacePaintOptions;

	void LoadFromCfg()
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
          
          ref array<ref FacePaintStyle> facePaint_styles = new array< ref FacePaintStyle>;
          int facepaintindex = 0;
					for ( j = 0; j < survivor_lifespan_count; j++ )
					{
						string survivor_facepaint_name = "";
						GetGame().ConfigGetChildName( survivor_path, j, survivor_facepaint_name );
						
						string survivor_facepaint_path = survivor_path + " " + survivor_facepaint_name;

						if ( survivor_facepaint_name.Contains("FacePaint_") )
						{
							string paint_material, normal_material;
							string path_normal = survivor_facepaint_path + " mat_normal";
							string path_paint = survivor_facepaint_path + " mat_paint";

		        	TStringArray parts = new TStringArray;
              survivor_facepaint_name.Split("_", parts);
							GetGame().ConfigGetText(path_normal, normal_material);
							GetGame().ConfigGetText(path_paint, paint_material);

              facePaint_styles.Insert(new FacePaintStyle(parts[1],normal_material, paint_material,facepaintindex) );
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

};
