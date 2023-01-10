class SRP_ActionHarvestCrops_AllCB extends ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.UNPACK);
	}
};

class SRP_ActionHarvestCrops_All extends ActionContinuousBase
{
	void SRP_ActionHarvestCrops_All()
	{
		m_CallbackClass = SRP_ActionHarvestCrops_AllCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_StanceMask = DayZPlayerConstants.STANCEIDX_ERECT | DayZPlayerConstants.STANCEIDX_CROUCH;
    m_Text = "Harvest All";
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor(UAMaxDistances.REPAIR);
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		GardenBase garden_base;
    Sickle sickle;
		if ( Class.CastTo(garden_base, target.GetObject()) && Class.CastTo(sickle, item))
		{
			return garden_base.HasAnySeedsAttached();
		}
		return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
    GardenBase garden_base;
    Sickle sickle;
    // Print("execute server");
    if (action_data.m_Target && Class.CastTo(garden_base, action_data.m_Target.GetObject()))
    {
      // Print("not null harvest plants");
		  garden_base.HarvestAllPlots(action_data.m_Player);
      if (action_data.m_MainItem && Class.CastTo(sickle, action_data.m_MainItem))
      {
        // Print("damage sickle");
        sickle.AddHealth(-8);
      }
    }
	}
};