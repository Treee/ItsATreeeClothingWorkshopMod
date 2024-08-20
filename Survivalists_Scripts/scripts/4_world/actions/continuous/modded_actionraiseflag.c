// modded class ActionRaiseFlag
// {
//     override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
//     {
//         m_Text = "#raise_flag";

//         TerritoryFlag totem;
//         if (Class.CastTo(totem, target.GetObject()))
//         {
//             if (!totem.HasStonesForTax())
//                 m_Text = "Raise Flag - Requires Large Stones";
//         }
//     }
//     override void OnFinishProgressServer( ActionData action_data )
//     {
//         TerritoryFlag totem;
//         if (!Class.CastTo(totem, action_data.m_Target.GetObject()))
//             return;

//         if (!totem.HasStonesForTax())
//             return;

//         totem.RemoveStoneForTax();
//         super.OnFinishProgressServer(action_data);
//     }
// };

// modded class TerritoryFlag
// {
//     override bool CanReceiveAttachment( EntityAI attachment, int slotId )
//     {
//         if (attachment.GetType() == "Stone")
//             return true;
//         return super.CanReceiveAttachment(attachment, slotId);
//     }

//     bool HasStonesForTax()
//     {
//         ItemBase stoneTax;
//         if (Class.CastTo(stoneTax, FindAttachmentBySlotName("StonesFlagTax")))
//         {
//             return stoneTax.GetQuantity() > 1;
//         }
//         return false;
//     }

//     void RemoveStoneForTax()
//     {
//         ItemBase stoneTax;
//         if (Class.CastTo(stoneTax, FindAttachmentBySlotName("StonesFlagTax")))
//             stoneTax.AddQuantity(-1);
//     }
// };