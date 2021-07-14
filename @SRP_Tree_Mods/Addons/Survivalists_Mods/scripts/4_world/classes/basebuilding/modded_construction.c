modded class Construction
{
  override protected void UpdateConstructionParts()
	{
		string construction_path = "cfgVehicles" + " " + GetParent().GetType() + " " + "Construction";
		Print("ctr path: " + construction_path);
		if ( GetGame().ConfigIsExisting( construction_path ) )
		{
      Print("Config path exists");
			//main parts
			for ( int i = 0; i < GetGame().ConfigGetChildrenCount( construction_path ); ++i )
			{
				string main_part_name;
				GetGame().ConfigGetChildName( construction_path, i, main_part_name );
				string part_path = construction_path + " " + main_part_name;
				Print("part path: " + part_path);
				//parts
				for ( int j = 0; j < GetGame().ConfigGetChildrenCount( part_path ); ++j )
				{
					string part_name;
					GetGame().ConfigGetChildName( part_path, j, part_name );
					
					string name;
					GetGame().ConfigGetText( part_path + " " + part_name + " " + "name", name );							//name
					bool show_on_init = GetGame().ConfigGetInt( part_path + " " + part_name + " " + "show_on_init" );		//show on init
					int id = GetGame().ConfigGetInt( part_path + " " + part_name + " " + "id" );							//part id
					bool is_base = GetGame().ConfigGetInt( part_path + " " + part_name + " " + "is_base" );					//is base (part)
					bool is_gate = GetGame().ConfigGetInt( part_path + " " + part_name + " " + "is_gate" );					//is gate (part)
					
					m_ConstructionParts.Insert( part_name, new ConstructionPart( name, part_name, main_part_name, id, show_on_init, is_base, is_gate, GetRequiredParts(part_name,main_part_name) ) );
					
					bsbDebugPrint("[bsb] Construction name=" + name + " part_name=" + part_name + " show=" + show_on_init + " base=" + is_base + " gate=" + is_gate);
					Print("[bsb] Construction name=" + name + " part_name=" + part_name + " show=" + show_on_init + " base=" + is_base + " gate=" + is_gate);
				}
			}
		}
	}

  override void GetConstructionPartsToBuild( string main_part_name, out array<ConstructionPart> construction_parts, ItemBase tool, out string real_constructionTarget, bool use_tool )
	{
		construction_parts.Clear();
		string part_name;
		ConstructionPart value;
		string key;
		Print("GetConstructionPartsToBuild: mainPart: "+ main_part_name+ " tool: " + tool.GetType());
		for ( int i = 0; i < m_ConstructionParts.Count(); ++i )
		{
			key = m_ConstructionParts.GetKey( i );
			value = m_ConstructionParts.Get( key );
		
			if ( main_part_name == value.GetMainPartName() && CanBuildPart( value.GetPartName(), tool, use_tool ) )
			{
				construction_parts.Insert( value );
			}
			
			if ( main_part_name == value.GetPartName() )
			{
				part_name = value.GetMainPartName();
			}
		}
		
		if( construction_parts.Count() == 0 && part_name )
		{
			for ( i = 0; i < m_ConstructionParts.Count(); ++i )
			{
				key = m_ConstructionParts.GetKey( i );
				value = m_ConstructionParts.Get( key );
		
				if ( part_name == value.GetMainPartName() && CanBuildPart( value.GetPartName(), tool, use_tool ) )
				{
					construction_parts.Insert( value );
				}
			}
		}
	}
}

modded class ConstructionActionData
{
  override void RefreshPartsToBuild( string main_part_name, ItemBase tool, bool use_tool = true )
	{
		//m_MainPartName = main_part_name;
		BaseBuildingBase base_building_object = BaseBuildingBase.Cast( m_Target );
    Print("RefreshPartsToBuild bbo: " + base_building_object + " main_part_name: " + main_part_name);
		if ( base_building_object )
		{
			base_building_object.GetConstruction().GetConstructionPartsToBuild( main_part_name, m_BuildParts, tool, m_MainPartName, use_tool );
		}
	}
}

modded class MiscGameplayFunctions
{
	static bool BuildCondition( PlayerBase player, ActionTarget target, ItemBase item, bool camera_check )
	{	
    Print("BuildCondition Start");
		if ( player && !player.IsLeaning() )
		{
      Print("Player exists and is not leaning");
			Object targetObject = target.GetObject();
			if ( targetObject && targetObject.CanUseConstruction() )
			{
        Print("Target object exists and can use construction");
				BaseBuildingBase base_building = BaseBuildingBase.Cast( targetObject );
				ConstructionActionData construction_action_data = player.GetConstructionActionData();
				construction_action_data.SetTarget( targetObject );
				
				string main_part_name = targetObject.GetActionComponentName( target.GetComponentIndex() );
				
				if ( GetGame().IsMultiplayer() || GetGame().IsServer() )
				{
					construction_action_data.RefreshPartsToBuild( main_part_name, item, !targetObject.CanUseHandConstruction() );
				}
				ConstructionPart constrution_part = construction_action_data.GetCurrentBuildPart();
	
				//Debug
				/*
				if ( constrution_part )
				{
					Construction construction = base_building.GetConstruction();	
					construction.IsColliding( constrution_part.GetPartName() );
				}
				*/

				if ( constrution_part )
				{
					//camera and position checks
					bool position_check = ( base_building.MustBeBuiltFromOutside() && !base_building.IsPlayerInside(player, constrution_part.GetMainPartName()) ) || ( !base_building.MustBeBuiltFromOutside() && base_building.IsPlayerInside(player, constrution_part.GetMainPartName()) );
					if ( position_check && !player.GetInputController().CameraIsFreeLook() )
					{
						//Camera check (client-only)
						if ( camera_check )
						{
							if ( GetGame() && ( !GetGame().IsMultiplayer() || GetGame().IsClient() ) )
							{
								return !base_building.IsFacingCamera( constrution_part.GetMainPartName() );
							}
						}
						
						return true;
					}
				}
			}
		}
		
		return false;
	}
}