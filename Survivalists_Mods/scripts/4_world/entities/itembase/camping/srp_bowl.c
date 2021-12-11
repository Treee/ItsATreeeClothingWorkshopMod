class SRP_Bowl_Wood extends Inventory_Base
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

class SRP_Bowl_CherryWood extends SRP_Bowl_Wood {};
class SRP_Bowl_DarkWood extends SRP_Bowl_Wood {};
class SRP_BowlSquare_Wood extends SRP_Bowl_Wood {};