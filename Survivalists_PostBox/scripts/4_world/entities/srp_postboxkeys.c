class SRP_PostBoxKeys_ColorBase extends SRP_OwnedItem_Base
{
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
    output = string.Format("%1's Post Box Keys", GetSRPOwnerName());
		return true;
	}
	override bool DescriptionOverride(out string output)
	{
    if (GetSRPOwnerName() == "")
      return false;
    output = string.Format("Used to lock and unlock post boxes owned by %1.", GetSRPOwnerName());
		return true;
	}
  bool CanSecurePostBox(string boxId)
  {
    return GetSRPOwnerSteamIDHash() == boxId;
  }    
};

class SRP_PostBoxKeys_User extends SRP_PostBoxKeys_ColorBase{};

class SRP_PostBoxKeys_Admin extends SRP_PostBoxKeys_ColorBase
{
  override bool NameOverride(out string output)
	{
		return false;
	}
  override bool DescriptionOverride(out string output)
	{
    return false;
	}
  override bool CanSecurePostBox(string boxId)
  {
    return true;
  }
};