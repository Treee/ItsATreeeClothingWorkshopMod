class ActionOpenClamCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.UNPACK);
	}
};

class ActionOpenClam: ActionContinuousBase
{	
	void ActionOpenClam()
	{
		m_CallbackClass = ActionOpenClamCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		//m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;
	}

	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

	override bool HasTarget()	
	{
		return false;
	}
		
	override string GetText()
	{
		return "Open";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return true;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		ItemBase item = ItemBase.Cast(action_data.m_MainItem);
		if (item)
    {			
      ItemBase new_item = ItemBase.Cast(GetGame().CreateObjectEx(item.GetType()+"_Opened", action_data.m_Player.GetPosition(), false));
      if (new_item) 
      {        
        if (GetDayZGame().GetSRPFishingConfig())
        {
          SRPFishingClam clam = GetDayZGame().GetSRPFishingConfig().GetClamDataByName(item.GetType());
          float rnd = Math.RandomFloatInclusive(0,1);
          if (clam.IsLuckyOpen(rnd))
          {
            new_item.GetInventory().CreateAttachment("SRP_Pearl");
          }
          new_item.GetInventory().CreateAttachment("SRP_ClamFilletMeat");
          float removeHP = new_item.GetMaxHealth() * 0.8;
          new_item.AddHealth(-removeHP);      
        }
      }
		  item.Delete();
    }
	}
};