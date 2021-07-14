modded class ActionBuildPartSwitch
{
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    Print("ActionBuildPartSwitch Start");
		//hack solution
		if ((!GetGame().IsMultiplayer() || GetGame().IsClient()) )
		{
			ActionBase ab = ActionManagerClient.Cast(player.GetActionManager()).GetPossibleAction(ContinuousDefaultActionInput);
			if (ab && ab.Type() != ActionBuildPart)
			{
				return false;
			}
		}
		
		if ( player && !player.IsLeaning() )
		{
      Print("ActionBuildPartSwitch player isn ot leaning and exists");
			Object target_object = target.GetObject();
			if ( target_object && target_object.CanUseConstruction() )
			{
				string main_part_name = target_object.GetActionComponentName( target.GetComponentIndex() );
        Print("ActionBuildPartSwitch target object exists and can use constructrion: " +target_object.GetType() + " mainpart: " + main_part_name);
				BaseBuildingBase base_building = BaseBuildingBase.Cast( target_object );
				ConstructionActionData construction_action_data = player.GetConstructionActionData();
				construction_action_data.SetTarget( target_object );
				
        Print("ActionBuildPartSwitch after BBB cast " +target_object.GetType());
        main_part_name = target_object.GetActionComponentName( target.GetComponentIndex() );        
        Print("main part name being set duhhhhhhhh: " + main_part_name + " target component index: " + target.GetComponentIndex());



        array<string> selections = new array<string>;
				target_object.GetActionComponentNameList(target.GetComponentIndex(), selections);
	
				for (int s = 0; s < selections.Count(); s++)
				{
					Print("selection0: " + s);
				}

        selections = new array<string>;
				target_object.GetActionComponentNameList(target.GetComponentIndex()+1, selections);
	
				for (s = 0; s < selections.Count(); s++)
				{
					Print("selection1: " + s);
				}


				construction_action_data.RefreshPartsToBuild( main_part_name, item, !target_object.CanUseHandConstruction() );
				Print("Part count:" + construction_action_data.GetConstructionPartsCount());
				if ( construction_action_data.GetConstructionPartsCount() > 1 )
				{
          Print("has more than 1 parts");
					if ( base_building.IsPlayerInside( player, main_part_name ) && !player.GetInputController().CameraIsFreeLook() )
					{
						//Camera check (client-only)
						if ( (!GetGame().IsMultiplayer() || GetGame().IsClient()) && base_building.IsFacingCamera( main_part_name ))
							return false;

						//Check validity of recipes
						int valid_recipes;
						for (int i = 0; i < construction_action_data.GetConstructionPartsCount(); i++)
						{
							string name = construction_action_data.GetBuildPartAtIndex(i).GetPartName();
							if (MiscGameplayFunctions.ComplexBuildCollideCheckClient(player, target, item, name))
								valid_recipes++;
						}
						if (valid_recipes > 1)
							return true;
					}
				}
			}
		}
		
		return false;
	}
}