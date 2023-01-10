class SRP_PoolBall_ColorBase extends ItemBase{};
class SRP_PoolBall_8 extends SRP_PoolBall_ColorBase
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionShake8Ball);
	}
};