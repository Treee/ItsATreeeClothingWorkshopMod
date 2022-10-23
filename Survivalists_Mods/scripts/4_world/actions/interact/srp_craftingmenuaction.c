class ActionInteractWithAmmoCraftingWorkbench extends ActionInteractBase
{
	void ActionInteractWithAmmoCraftingWorkbench()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_INTERACTONCE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_HUDCursorIcon = CursorIcons.CloseHood;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}

  override bool IsInstant()
  {
    return true;
  }

	override string GetText()
	{
		return "Craft Ammo";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    SRP_AdvancedWorkbench target_bench;
		if ( target && Class.CastTo(target_bench, target.GetObject()) )
		{
      return target_bench.HasAllAttachments() && target_bench.HasCorrectAmmoComponents() != "";
    }    
		return false;
	}

	override void OnStartServer( ActionData action_data )
	{
    SRP_AdvancedWorkbench target_bench;
		if ( action_data.m_Target && Class.CastTo(target_bench, action_data.m_Target.GetObject()) )
		{
      string resultName = target_bench.HasCorrectAmmoComponents();
      if (resultName != "")
      {
        Magazine ammo = Magazine.Cast( GetGame().CreateObjectEx(resultName, action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE) );
        ammo.ServerSetAmmoCount(10);
        target_bench.DecreaseHealth(1);		
        target_bench.RemoveAmmoCraftingComponents();
      }
    }
	}

};