// This is the old way how I did it. Replaced with the menu system in RadioInterAction.c and SwitchRadioAction.c
// class TurnOffRadioCB : ActionSingleUseBaseCB
// {
// 	override void CreateActionComponent()
// 	{
// 		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.TEST_BLOOD);
// 	}
// }

// class TurnOffRadio: ActionTurnOnWhileInHands
// {
// 	void TurnOffRadio()
// 	{
// 		m_CallbackClass = TurnOffRadioCB;
// 		m_CommandUID        = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_OFF;
// 		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_ITEM_OFF;
// 	}

//   override bool HasProneException()
// 	{
// 		return true;
// 	}

//   override bool HasTarget()
// 	{
// 		return false;
// 	}

// 	override string GetText()
// 	{
// 		return "#turn_off";
// 	}
		
// 	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
// 	{
//     if ( item.HasEnergyManager() && item.GetCompEM().IsWorking() )
//     {
//       Print("Has energy manager and is currently working");
//       return true;
// 		}		
// 		return false;
// 	}
		
// 	override void OnExecuteServer( ActionData action_data )
// 	{
//     Print("turn on radio"+action_data.m_MainItem);
// 		action_data.m_MainItem.GetCompEM().SwitchOff();
// 	}
// }
