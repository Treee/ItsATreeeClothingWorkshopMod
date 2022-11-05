class SRP_SealedLetter_ColorBase extends SRP_OwnedItem_Base
{ 
  override bool CanDisplayAttachmentSlot( string slot_name )
	{
		return IsRuined();
	}
  override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionUnlockPostBox);
		AddAction(ActionLockPostBox);
	}
  override bool NameOverride(out string output)
	{
    if (GetSRPOwnerName() == "")
      return false;
    output = string.Format("Letter Sealed with the crest of %1", GetSRPOwnerName());
		return true;
	}
	override bool DescriptionOverride(out string output)
	{
    if (GetSRPOwnerName() == "")
      return false;
    output = string.Format("A letter sealed with the crest of %1.", GetSRPOwnerName());
		return true;
	}
  void SealLetter(string ownerId, string ownerName)
  {
    SetSRPOwnerID(ownerId);
    SetSRPOwnerName(ownerName);
  }
};
class SRP_SealedLetter_Black extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Blue extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Brown extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Green extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Pink extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Red extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_White extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Yellow extends SRP_SealedLetter_ColorBase{};
