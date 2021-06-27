class SRP_BloodPressureMonitor extends ItemBase
{	
  override bool CanPutInCargo(EntityAI parent) 
  {
    return false;
  }

	override bool CanPutIntoHands(EntityAI parent)
	{
		if( !super.CanPutIntoHands( parent ) )
		{
			return false;
		}
		if ( GetNumberOfItems() == 0 )
		{
			return true;
		}
		return false;
	}

  override bool IsTwoHandedBehaviour() 
  {
    return true;
  }
    
  override bool IsDeployable() 
  {
    return true;
  }

  override void SetActions()
  {
    super.SetActions();

    AddAction(ActionTogglePlaceObject);
    AddAction(ActionPlaceObject);
  } 
}