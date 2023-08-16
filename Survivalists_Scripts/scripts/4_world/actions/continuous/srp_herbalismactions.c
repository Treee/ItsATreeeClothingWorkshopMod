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
    ItemBase mortarAndPestle;
    if (Class.CastTo(mortarAndPestle, item))
    {
      SRP_MortarPestle pestleAttachment;
      if (Class.CastTo(pestleAttachment, mortarAndPestle.FindAttachmentBySlotName("SRP_Pestle")))
      {
        SRP_PlantHerbEdible_Colorbase herb;
        if (Class.CastTo(herb, mortarAndPestle.FindAttachmentBySlotName("SRP_Flower1")))
        {
          if (herb.GetQuantity() > 0 && !herb.IsDamageDestroyed() && herb.IsFoodDried())
          {
            return true;
          }
        }
      }
    }
    return false;
	}
		
	override void OnEndServer( ActionData action_data )
	{
		if ( action_data.m_MainItem) // if the main item exists
		{
      SRP_PlantHerbEdible_Colorbase herb;
      // if there is a herb in the mortar
      if (Class.CastTo(herb, action_data.m_MainItem.FindAttachmentBySlotName("SRP_Flower1")))
      {
        int result = herb.GetQuantity() * Math.RandomIntInclusive(1, 5);
        // replace it with powder
        TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(herb, string.Format("SRP_CrushedHerb_%1", herb.ConfigGetString("color")), action_data.m_Player);
        lambda.SetTransferParams(true, true, true, true, result);
        action_data.m_Player.ServerReplaceItemWithNew(lambda);
      }
		}
	}
};