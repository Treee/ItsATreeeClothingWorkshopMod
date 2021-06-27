class SRP_Bowl extends Inventory_Base
{       
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
};

class SRP_Bowl_1 extends SRP_Bowl {};
class SRP_Bowl_2 extends SRP_Bowl {};