class SRP_Container_Base extends Container_Base
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);
	}

  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  
  override bool CanPutIntoHands (EntityAI parent)
  {
    return false;
  }
}
// if you add a new container, make sure you add it to this list so it gets the right stuff

class SRP_FridgeBig extends SRP_Container_Base{}
class SRP_GunShelf extends SRP_Container_Base{}
class SRP_MetalShelf extends SRP_Container_Base{}
class SRP_PostBox extends SRP_Container_Base{}
class SRP_PostBoxBig extends SRP_Container_Base{}

class SRP_MilitaryCase extends Barrel_ColorBase
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);

		AddAction(ActionOpenBarrel);
		AddAction(ActionCloseBarrel);
	}
  
  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  
  override bool CanPutIntoHands (EntityAI parent)
  {
    return false;
  }
}

class SRP_BedsideTable extends Barrel_ColorBase
{
  protected override void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Lid",1);
			SetAnimationPhase("Lid1",0);
		}
		else
		{
			SetAnimationPhase("Lid",0);
			SetAnimationPhase("Lid1",1);
		}
	}

	override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
    
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }
}