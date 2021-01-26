class TurnOnRadioCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.TEST_BLOOD);
	}
}

class TurnOnRadio: ActionTurnOnWhileInHands
{
	void TurnOnRadio()
	{
		m_CallbackClass = TurnOnRadioCB;
		m_CommandUID        = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_ON;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_ITEM_ON;
	}

  override bool HasProneException()
	{
		return true;
	}

  override bool HasTarget()
	{
		return false;
	}

	override string GetText()
	{
		return "#turn_on";
	}
		
	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if ( item.HasEnergyManager() && !item.GetCompEM().IsWorking() )
    {
      Print("Has energy manager and is not currently working");
      return true;
		}		
		return false;
	}
		
	override void OnExecuteServer( ActionData action_data )
	{
    Print("turn on radio"+action_data.m_MainItem);
		action_data.m_MainItem.GetCompEM().SwitchOn();
	}
}
