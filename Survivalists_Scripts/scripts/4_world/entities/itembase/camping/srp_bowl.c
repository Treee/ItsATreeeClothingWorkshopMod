class SRP_Bowl_Wood extends Inventory_Base
{       
	override bool IsTwoHandedBehaviour() 
  {
    return true;
  }
};

class SRP_Bowl_CherryWood extends SRP_Bowl_Wood {};
class SRP_Bowl_DarkWood extends SRP_Bowl_Wood {};
class SRP_BowlSquare_Wood extends SRP_Bowl_Wood {};