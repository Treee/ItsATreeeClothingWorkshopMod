// modded class PlayerBase
// {
//   override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
//   {
//     super.OnRPC(sender, rpc_type, ctx);

//     switch(rpc_type)
//     {
//       case SRP_RADIOELECTRONICS_RPC.CHECK_SRP_RADIOELECTRONICS_CONFIG: // this case is for grabbing fishing config from the server
//       {
//         Param1<RadioElectronicsConfig> configParams;
//         if(!ctx.Read(configParams))
//         {
//           return;        
//         }
//         GetDayZGame().SetRadioElectronicsConfig(configParams.param1);
//         break;
//       }
//     }
//   }
// }