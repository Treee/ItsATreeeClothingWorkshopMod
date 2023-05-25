modded class ActionDismantlePart
{
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    m_Text = "#dismantle";
		ConstructionActionData construction_action_data = player.GetConstructionActionData();
    if (construction_action_data.GetTargetPart())
		  m_Text = "#dismantle " + construction_action_data.GetTargetPart().GetName();
	}

  override string GetText()
	{
		PlayerBase player;
		if ( Class.CastTo(player, GetGame().GetPlayer()) )
		{
			ConstructionActionData construction_action_data = player.GetConstructionActionData();
			ConstructionPart constrution_part = construction_action_data.GetTargetPart();
      
			if ( constrution_part )
				return "#dismantle" + " " + constrution_part.GetName();
      else
        return "#dismantle";
		}
		return "";
	}	

  override protected bool DismantleCondition( PlayerBase player, ActionTarget target, ItemBase item, bool camera_check )
	{	
    if (super.DismantleCondition(player, target, item, camera_check))
      return true;
    // our custom buildables check SRP_DefaultHouse
		if ( player && !player.IsPlacingLocal() && !player.IsPlacingServer() )
		{
      SRP_DefaultHouse base_building;
      if ( !Class.CastTo(base_building, target.GetObject()) )
        return false;
      if ( base_building.IsPlayerInside( player, "" ) && !player.GetInputController().CameraIsFreeLook() )
      {
        if ( camera_check )
        {
          if ( GetGame() && ( !GetGame().IsDedicatedServer() ) )
          {
            if ( base_building.IsFacingCamera( "" ) )
              return false;
          }
        }
        return true;
      }
		}
		return false;
	}

  override void OnFinishProgressServer( ActionData action_data )
	{	
    SRP_DefaultHouse house;
    if (Class.CastTo(house, action_data.m_Target.GetObject()))
    {
      TurnItemIntoItemLambda_KitDeployment lambda = new TurnItemIntoItemLambda_KitDeployment(house, house.GetKitName(), action_data.m_Player, action_data.m_Player.GetPosition());
      lambda.SetTransferParams(false, false, false);
      MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, lambda);    
    }
    super.OnFinishProgressServer(action_data);
	}
};