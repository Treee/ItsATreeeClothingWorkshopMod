class SRP_ActionFeedBioFlower: ActionSingleUseBase
{
	void SRP_ActionFeedBioFlower()
	{
		m_Text = "Feed";
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
    Edible_Base edible;
		if (!Class.CastTo(edible, item)) 
			return false;
    
		return true;
	}
	
	override void OnExecuteServer( ActionData action_data )
	{
		// feed bioflower
    Edible_Base edible;
    SRPConfig config;
    if (Class.CastTo(config, GetDayZGame().GetSRPConfigGlobal()) && Class.CastTo(edible, action_data.m_MainItem))
    {
      SRP_BioFlowerInfo flower = config.g_BioFlowerManager.GetBioFlowerInfoByPosition(action_data.m_Player.GetPosition());
      if (flower)
      {        
        float quantityNormal = edible.GetQuantity() / edible.GetQuantityMax();
        float flowerEnergy = edible.GetFoodEnergy(edible) * quantityNormal;
        // value = 100; // 1/64th parts
        flowerEnergy *= Math.RandomFloatInclusive(0.0625, 0.0078125); // random float between 1/16 and 1/128 parts
        flower.AddFlowerEnergy(flowerEnergy);
      }
      edible.AddQuantity(-100000);
    }
	}
};