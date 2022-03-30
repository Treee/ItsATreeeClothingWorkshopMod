// modded class BuildingBase
// {
//     static ref array<BuildingBase> s_RadioTowers = {};

//     void BuildingBase()
//     {
//         SetEventMask(EntityEvent.INIT); // event called after the world is created, including all entities
//     }

// 	  override void EOnInit(IEntity other, int extra)
//     {
//       Print("[RADIO TOWER] EOnInit: " + GetType());
//         GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(TrackRadioTowerDefer, 8000, false);
//         super.EOnInit(other, extra)
//     }

//     void TrackRadioTowerDefer()
//     {
//         if (IsRadioTower())
//         {
//             Print("[RADIO TOWER] Loaded " + GetType() + " at " + GetPosition());
//             s_RadioTowers.Insert(this);
//         }
//     }

//     bool IsRadioTower()
//     {
//         return false;
//     }
// }

// class Land_Tower_TC1 : BuildingBase
// {
//     override bool IsRadioTower()
//     {
//         return true;
//     }
// }
// class Land_Tower_TC2_Base : BuildingBase
// {
//     override bool IsRadioTower()
//     {
//         return true;
//     }
// }
// class Land_Tower_TC3_Red : BuildingBase
// {
//     override bool IsRadioTower()
//     {
//         return true;
//     }
// }
// class Land_Tower_TC3_Grey : BuildingBase
// {
//     override bool IsRadioTower()
//     {
//         return true;
//     }
// }
// class Land_Tower_TC4_Base : BuildingBase
// {
//     override bool IsRadioTower()
//     {
//         return true;
//     }
// }
// class Land_Tower_TC5 : BuildingBase
// {
//     override bool IsRadioTower()
//     {
//         return true;
//     }
// }
// class Land_Tower_TC6 : BuildingBase
// {
//     override bool IsRadioTower()
//     {
//         return true;
//     }
// }