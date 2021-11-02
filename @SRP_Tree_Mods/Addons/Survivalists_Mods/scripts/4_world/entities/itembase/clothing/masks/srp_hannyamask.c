class SRP_HannyaMask: Clothing {};

class SRP_HannyaMask_Red extends SRP_HannyaMask
{
  override bool CanDetachAttachment (EntityAI parent)
	{
		return false;
	}
  override void OnWasDetached( EntityAI parent, int slot_id )
  {
    this.Delete();
  }
}