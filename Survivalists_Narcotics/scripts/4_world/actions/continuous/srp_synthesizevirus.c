class ActionSynthesizeVirusCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(6.5);
	}
};

class ActionSynthesizeVirus: ActionContinuousBase
{
	void ActionSynthesizeVirus()
	{
		m_CallbackClass = ActionSynthesizeVirusCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
	}
	
	override bool HasProneException()
	{
		return true;
	}

	override bool HasTarget()
	{
		return true;
	}
		
	override string GetText()
	{
		return "Concentrate Ichor";
	}

  override ActionData CreateActionData()
	{
		ActionGiveBloodData action_data = new ActionGiveBloodData;
		return action_data;
	}
	
	override bool SetupAction(PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL )
	{
		if ( super.SetupAction(player, target, item, action_data, extra_data ) )
		{
			ActionGiveBloodData action_data_b = ActionGiveBloodData.Cast( action_data );
			action_data_b.m_ItemBloodType = action_data.m_MainItem.GetLiquidType();
			action_data_b.m_BloodAmount = action_data.m_MainItem.GetQuantity();
			action_data_b.m_Agents = action_data.m_MainItem.GetAgents();
			return true;
		}
		return false;
	}

  override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (target.GetObject() && item.GetQuantity() > 74)
    {
      if (target.GetObject().GetType() == "SRP_LabEquipment_Projector")
        return true;
      if (target.GetObject().GetType() == "SRP_LabEquipment_Oscilliscope")
        return true;
      if (target.GetObject().GetType() == "SRP_LabEquipment_Tuner")
        return true;
      if (target.GetObject().GetType() == "SRP_ComputerTerminalSlim")
        return true;
      if (target.GetObject().GetType() == "SRP_ComputerTerminalWide")
        return true;
    }
    return false;
	}

  override void OnEndServer( ActionData action_data )
	{	
    string ichorType = "SRP_LabTube_";
    ActionGiveBloodData action_data_b = ActionGiveBloodData.Cast( action_data );
    // Print("[ActionSynthesizeVirus] - [OnEndServer] ========================== ITEM: " + action_data_b.m_MainItem);
    if (action_data_b.m_MainItem)
    {
      // Print("[ActionSynthesizeVirus] - [OnEndServer] ========================== Agents: " + action_data_b.m_Agents);
      if (action_data_b.m_Agents & eAgents.BRAIN)
      {
        ichorType += "Kuru";
      }
      else if (action_data_b.m_Agents & eAgents.SALMONELLA)
      {
        ichorType += "Salmonella";
      }
      else if (action_data_b.m_Agents & eAgents.INFLUENZA)
      {
        ichorType += "Influenza";
      }
      else if (action_data_b.m_Agents & eAgents.CHOLERA)
      {
        ichorType += "Cholera";
      }
      else if (action_data_b.m_Agents & eAgents.FOOD_POISON)
      {
        ichorType += "StomachVirus";
      }
      else if (action_data_b.m_Agents & eAgents.WOUND_AGENT)
      {
        ichorType += "Bacteria";
      }
    }

    if (ichorType != "SRP_LabTube_")
    {
      ItemBase ichor = ItemBase.Cast(GetGame().CreateObjectEx(ichorType, action_data_b.m_Player.GetPosition(), false));
      ichor.SetQuantity(Math.RandomIntInclusive(1,5));
      action_data_b.m_MainItem.AddQuantity(-Math.RandomIntInclusive(50,150));
    }
	}
};
