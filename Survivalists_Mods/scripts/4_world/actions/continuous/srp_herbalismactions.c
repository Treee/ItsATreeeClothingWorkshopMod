
// class ReplaceHerbsWithCrushedPowder extends TurnItemIntoItemLambda
// {
// 	override void CopyOldPropertiesToNew (notnull EntityAI old_item, EntityAI new_item)
// 	{
// 		super.CopyOldPropertiesToNew(old_item, new_item);

//     SRP_CrushedHerb_Colorbase crushedHerb;
//     Class.CastTo(crushedHerb, new_item);
//     int multiplier = old_item.GetQuantity();
//     int itemCount = Math.RandomIntInclusive(1, 5);
//     int result = (itemCount * multiplier);
//     Print("old item count: " + multiplier + " random num items: " + itemCount + " result: " + result);
//     crushedHerb.SetQuantity(result);
//     Print("new quantity: " + crushedHerb.GetQuantity());
//     // Print("ReplaceHerbsWithCrushedPowder::SetupNewItem crushedHerb=" + crushedHerb + " count=" + itemCount);
// 	}
// };

class ActionMortarCrushIntoPowderCB : ActionSingleUseBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CASingleUseQuantityEdible(UAQuantityConsumed.DEFAULT);
	}
};

class ActionMortarCrushIntoPowder: ActionSingleUseBase
{
	void ActionMortarCrushIntoPowder()
	{
		m_CallbackClass = ActionMortarCrushIntoPowderCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_HANDCUFFTARGET;
		m_StanceMask = DayZPlayerConstants.STANCEIDX_ERECT | DayZPlayerConstants.STANCEIDX_CROUCH;
		m_FullBody = true;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}
		
	override string GetText()
	{
		return "Crush Into Powder";
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    ItemBase mortarAndPestle = ItemBase.Cast(item);
    SRP_MortarPestle pestleAttachment = SRP_MortarPestle.Cast(mortarAndPestle.FindAttachmentBySlotName("SRP_Pestle"));
    SRP_PlantHerbEdible_Colorbase herb = SRP_PlantHerbEdible_Colorbase.Cast(mortarAndPestle.FindAttachmentBySlotName("SRP_Flower1"));
    return (pestleAttachment && herb && herb.GetQuantity() > 0 && !herb.IsDamageDestroyed() && herb.IsFoodDried());
	}
		
	override void OnEndServer( ActionData action_data )
	{
		if ( action_data.m_MainItem) // if the main item exists
		{
      SRP_PlantHerbEdible_Colorbase herb = SRP_PlantHerbEdible_Colorbase.Cast( action_data.m_MainItem.FindAttachmentBySlotName("SRP_Flower1"));
      // if there is a herb in the mortar
      if (herb)
      {
        int result = Math.RandomIntInclusive(2,7) * Math.RandomIntInclusive(1, 5);

        // replace it with powder
        TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(herb, string.Format("SRP_CrushedHerb_%1", herb.ConfigGetString("color")), action_data.m_Player);
        lambda.SetTransferParams(true, true, true, true, result);
        action_data.m_Player.ServerReplaceItemWithNew(lambda);
        // MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, new ReplaceHerbsWithCrushedPowder(herb, newClassName, action_data.m_Player));
      }
		}
	}
};