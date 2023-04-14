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
    Edible_Base edible;
		if ( Class.CastTo(edible, item) ) 
		{
			return true;
		}
		return false;
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
        // Print("feed");
        float value = edible.GetQuantity() / edible.GetQuantityMax();
        // value = 100; // 1/16th parts
        value *= 0.0625; // 1/16th parts
        flower.AddFlowerEnergy(value);
        edible.AddQuantity(-100000);
      }
    }
	}
};