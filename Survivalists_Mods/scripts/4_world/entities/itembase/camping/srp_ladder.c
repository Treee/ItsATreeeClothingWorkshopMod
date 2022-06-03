class SRP_Ladder_Opened extends Inventory_Base
{
  override void SetActions()
	{
		super.SetActions();
	}

  override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
    
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }

  override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
  {
    super.OnPlacementComplete(player, position, orientation);
    if( GetGame().IsDedicatedServer() )
    {
      if (m_AdminLog)
      {            
        m_AdminLog.OnPlacementComplete( player, this);
      }
    }
  }
};

