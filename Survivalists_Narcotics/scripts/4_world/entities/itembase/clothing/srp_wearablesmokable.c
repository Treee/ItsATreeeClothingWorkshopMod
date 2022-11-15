class SRP_SmokableWearable_ColorBase extends Clothing
{
  override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
	{
		PlayerBase old_Player;
		if ( GetGame().IsDedicatedServer() && oldLoc.GetParent() && Class.CastTo(old_Player, oldLoc.GetParent().GetHierarchyRootPlayer()) )
		{
      if (newLoc.GetType() != InventoryLocationType.HANDS)
      {
        MiscGameplayFunctions.TurnItemIntoItem(this, GetSmokableType(), old_Player);
      }
      else
      {
        old_Player.ServerReplaceItemInHandsWithNew(new TurnItemIntoItemLambda(this, GetSmokableType(), old_Player));		
      }
    }
		super.EEItemLocationChanged(oldLoc, newLoc);
  }

  string GetSmokableType()
  {
    if (GetType() == "SRP_SmokableWearable_SmokingPipe")    
      return "SRP_SmokingPipe";    
    return string.Format("SRP_Smokable_%1",ConfigGetString("color"));
  }
}


class SRP_SmokableWearable_ZWeed extends SRP_SmokableWearable_ColorBase{};
class SRP_SmokableWearable_ZWeedIrradiated extends SRP_SmokableWearable_ColorBase{};
class SRP_SmokableWearable_Cigarette extends SRP_SmokableWearable_ColorBase{};
class SRP_SmokableWearable_Cigar extends SRP_SmokableWearable_ColorBase{};
class SRP_SmokableWearable_SmokingPipe extends SRP_SmokableWearable_ColorBase{};