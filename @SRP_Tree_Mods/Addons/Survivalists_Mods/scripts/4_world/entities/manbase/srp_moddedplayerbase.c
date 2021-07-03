// modded class PlayerBase extends ManBase
// {
//   bool MapCloseRequest;
//   override void SetMapOpen(bool state)
// 	{
//     super.SetMapOpen(state);
//     MapCloseRequest = !state;
// 	}
  
// 	override void CommandHandler(float pDt, int pCurrentCommandID, bool pCurrentCommandFinished)	
// 	{
//     super.CommandHandler(pDt,pCurrentCommandID,pCurrentCommandFinished);

// 		if ( (!GetGame().IsMultiplayer() || GetGame().IsClient()) && IsMapOpen() && !MapCloseRequest)
// 		{
//       HumanInputController hic = GetInputController();
// 			if ( m_hac && hic.IsUseButtonDown() ) 
// 			{
//         ScriptInputUserData ctx = new ScriptInputUserData;
//         if ( ctx.CanStoreInputUserData() )
//         {
//           if ( GetGame().IsMultiplayer() && GetGame().IsClient() )
//           {
//             m_hac.InternalCommand(DayZPlayerConstants.CMD_ACTIONINT_END);
//             ctx.Write(INPUT_UDT_STANDARD_ACTION_END_REQUEST);
//             ctx.Write(DayZPlayerConstants.CMD_ACTIONINT_END);
//             ctx.Send();
//           }
//           else if ( !GetGame().IsMultiplayer() )
//           {
//             m_hac.InternalCommand(DayZPlayerConstants.CMD_ACTIONINT_END);
//           }
//         }	
//         if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
//         {
//           if ( !GetGame().GetUIManager().GetMenu() )
//             GetGame().GetMission();
//           if (GetGame().GetUIManager().IsMenuOpen(MENU_MAP))
//             GetGame().GetUIManager().FindMenu(MENU_MAP).Close();
//         }
// 				MapCloseRequest = true;
// 			}
// 		}        
//   }
// }