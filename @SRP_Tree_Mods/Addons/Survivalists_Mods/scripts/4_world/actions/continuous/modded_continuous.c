modded class ActionSawPlanksCB
{	
	float GetDefaultTime()
	{
		string item_type = m_ActionData.m_MainItem.GetType();
		
		switch(item_type)
		{
			case "Hacksaw": 
				return TIME_SAW_HACKSAW;
			break;
		
			case "HandSaw": 
				return TIME_SAW_HANDSAW;
			break;
			
			case "Crowbar": 
				return TIME_SAW_HANDSAW;
			break;
		
			default: // axes
				return TIME_AXES;
			break
		}
		Print("ActionSawPlanksCB | Item detection error, assigning negative time");
		return -1;
	}
};

modded class ActionSkinning
{
  override void OnFinishProgressServer(ActionData action_data)
  {
    super.OnFinishProgressServer(action_data);
    if (action_data.m_Target) 
    {
      EntityAI body;
      Class.CastTo(body, action_data.m_Target.GetObject());
      
      if (body.IsKindOf("SurvivorBase") && Math.RandomIntInclusive(0, 100) > 70)
      {
        ItemBase added_item;
        vector pos_rnd = body.GetPosition() + Vector(Math.RandomFloat01() - 0.5, 0, Math.RandomFloat01() - 0.5);
        Class.CastTo(added_item, GetGame().CreateObject("brain_Mung", pos_rnd, false));
        added_item.PlaceOnSurface();
      }
    }
  }
}

// if we wanted to make building animation use a hammer
// modded class ActionDeployObject
// {
// 	override void SetupAnimation( ItemBase item )
// 	{
// 		string itemType = item.GetType();
//     // if the item is our walls then make the animation hammering
//     if (itemType == "SRP_WoodenWallLong_Kit"){
//       m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
//     }
//     else 
//     {
//       super.SetupAnimation(item);
//     }
// 	}

// }

modded class ActionBuildPart
{
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    Print("Start");
		if ( player.IsPlacingLocal() )
			return false;
		Print("No Placing");
		//Action not allowed if player has broken legs
		if (player.m_BrokenLegState == eBrokenLegs.BROKEN_LEGS)
			return false;
		Print("No broken legs");
		//hack - gate
		if (target.GetObject() && (!target.GetObject().CanUseConstructionBuild() || target.GetObject().CanUseHandConstruction()))
			return false;
		if ( player.IsPlacingLocal() || player.IsPlacingServer() )
			return false;
		Print("not a gate");
		if ( (!GetGame().IsMultiplayer() || GetGame().IsClient()) )
		{
			ConstructionActionData construction_action_data = player.GetConstructionActionData();      
			int start_index = construction_action_data.m_PartIndex;
      Print("ctr actionData: " + construction_action_data + " starting index: " + start_index + " name: " + construction_action_data.GetMainPartName());
			if ( construction_action_data.GetConstructionPartsCount() > 0 )
			{
        Print("ctr Part count > 0");
				for(int i = 0; i < construction_action_data.GetConstructionPartsCount(); i++)
				{
					if ( MiscGameplayFunctions.ComplexBuildCollideCheckClient(player, target, item ) )
					{
						Print("i: " + i + " | name: " + construction_action_data.GetCurrentBuildPart().GetPartName());
						return true;
					}
					else
					{
						construction_action_data.SetNextIndex();
					}
				}
				construction_action_data.m_PartIndex = start_index;
				Print("fail | name: " + construction_action_data.GetCurrentBuildPart().GetPartName());
			}
			return false;
		}
		return true;
	}

  	//setup
	override bool SetupAction( PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{	
    Print("my SetupAction Start");
		if ( super.SetupAction( player, target, item, action_data, extra_data ) )
		{
      Print("Post super");
			SetBuildingAnimation( item );
			
			if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
			{
				ConstructionActionData construction_action_data = action_data.m_Player.GetConstructionActionData();
				BuildPartActionData.Cast(action_data).m_PartType = construction_action_data.GetCurrentBuildPart().GetPartName();
        Print("is client, building animation set: " + construction_action_data);
			}
			return true;
		}
		
		return false;
	}
}