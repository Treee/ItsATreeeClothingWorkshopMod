class SRP_ActionPoisonBioFlower: ActionSingleUseBase
{
	void SRP_ActionPoisonBioFlower()
	{
    m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INJECTIONTARGET;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;

		m_Text = "Poison";
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTCursor;
	}

	override bool HasTarget()
	{
		return true;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (!target)
      return false;
    if (!player.IsInBioZone())
      return false;
    House house;
    if (!Class.CastTo(house, target.GetObject()))
      return false;
    if (!house.IsBioFlower())
      return false;
    SRP_PoisonInjector_Base edible;
		if (!Class.CastTo(edible, item)) 
			return false;
    
		return true;
	}
	
	override void OnExecuteServer( ActionData action_data )
	{
		// poison bioflower
    SRP_PoisonInjector_Base injector;
    SRPConfig config;
    if (Class.CastTo(config, GetDayZGame().GetSRPConfigGlobal()) && Class.CastTo(injector, action_data.m_MainItem))
    {
      SRP_BioFlowerInfo flower = config.g_BioFlowerManager.GetBioFlowerInfoByPosition(action_data.m_Player.GetPosition());
      if (flower)
      { 
        // 300 max flower energy
        int flowerEnergy = Math.RandomIntInclusive(50, 125);
        flower.AddFlowerEnergy(-flowerEnergy);
      }
      injector.Delete();
    }
	}
};