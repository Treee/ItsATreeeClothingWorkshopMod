class CigarettePack_ZWeed extends ItemBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(UnPackCigarette);
	}
};