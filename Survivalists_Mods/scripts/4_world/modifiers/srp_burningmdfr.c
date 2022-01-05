class SRP_BurningMdfr: ModifierBase
{
	override void Init()
	{
		m_TrackActivatedTime = false;
		m_IsPersistent = false;
		m_ID 					= SRP_eModifiers.MDF_BURNING;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_ACTIVE;		
		DisableActivateCheck();
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return false;
	}
	
  override bool DeactivateCondition(PlayerBase player)
	{
		return false;
	}
	
	override void OnReconnect(PlayerBase player)
	{
		OnActivate(player);
	}
	
	override void OnActivate(PlayerBase player)
	{
		BurnPlayer(player);
	}
	
	override void OnDeactivate(PlayerBase player)
	{

	}

	override void OnTick(PlayerBase player, float deltaT)
	{
		BurnPlayer(player);
	}

  void BurnPlayer(PlayerBase player)
  {
    player.AddHealth("", "Blood", -250); //do 350 blood dmg
    player.AddHealth("", "", -25); //do 35 dmg
    player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection(SRP_DamageZones_LightBleeding.GetRandomElement());
    player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection(SRP_DamageZones_LightBleeding.GetRandomElement());
  }
};