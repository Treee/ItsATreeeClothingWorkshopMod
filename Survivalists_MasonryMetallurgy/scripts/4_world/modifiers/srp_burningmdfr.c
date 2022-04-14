class SRP_BurningMdfr: ModifierBase
{
  float timeBetweenEvents = 4.0; // 4 seconds between burnings
  float accumulatedTime = 4.0; // start with a burning event

	override void Init()
	{
		m_TrackActivatedTime = false;
		m_IsPersistent = false;
		m_ID 					= SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING;
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
    if (accumulatedTime > timeBetweenEvents)
    {
		  BurnPlayer(player);
      accumulatedTime = 0;
    }
    accumulatedTime += deltaT;
	}

  void BurnPlayer(PlayerBase player)
  {
    player.AddHealth("", "Blood", -250); //do 350 blood dmg
    player.AddHealth("", "", -25); //do 35 dmg
    player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection(GetDamageZones_Light().GetRandomElement());
    player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection(GetDamageZones_Light().GetRandomElement());
  }

  TStringArray GetDamageZones_Light()
  {
    return {
      "Head",
      "Neck",
      "Pelvis",
      "Spine",
      "Spine1",
      "Spine2",
      "Spine3",
      "LeftForeArmRoll",
      "RightForeArmRoll",
      "LeftFoot",
      "LeftToeBase",
      "RightFoot",
      "RightToeBase"
    };
  }
};