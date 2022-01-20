class ActionSRPSwitchDrawMode extends ActionSingleUseBase
{
	void ActionSRPSwitchDrawMode()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_DROPITEM_HANDS;
		m_FullBody = false;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_PRONE;
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override bool HasTarget()
	{
		return false;
	}

	override string GetText()
	{
    PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
    if (player)
    {
      SRP_DeckOfCards singleDrawDeck;
      EntityAI handsItem = player.GetItemInHands();
      if(Class.CastTo(singleDrawDeck, handsItem))
      {
        return singleDrawDeck.GetNextDrawText();
      }
    }
		return "Change Draw Mode";
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target || !player) return false;

		SRP_DeckOfCards singleDrawDeck;
		EntityAI handsItem = player.GetItemInHands();
		if(Class.CastTo(singleDrawDeck, handsItem))
		{
			if(singleDrawDeck.IsDamageDestroyed() || !singleDrawDeck.CanDrawCard())
        return false;
      return true;
		}
		return false;
	}

  // uncomment this for local offline mode testing
	override void OnExecuteServer( ActionData action_data )
	{
    if (action_data.m_Player)
    {
      SRP_DeckOfCards singleDrawDeck;
      EntityAI handsItem = action_data.m_Player.GetItemInHands();
      if(Class.CastTo(singleDrawDeck, handsItem))
      {
        singleDrawDeck.NextDrawMode();
      }
    }
	}
};


class ActionSRPDrawCardCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(1.0);
	}
};

class ActionSRPDrawCards: ActionContinuousBase
{
	void ActionSRPDrawCards()
	{
		m_CallbackClass = ActionSRPDrawCardCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTCursor;
	}
	
	override bool HasProneException()
	{
		return false;
	}

	override bool HasTarget()
	{
		return true;
	}
  override string GetText()
	{
    PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
    if (player)
    {
      SRP_DeckOfCards singleDrawDeck;
      EntityAI handsItem = player.GetItemInHands();
      if(Class.CastTo(singleDrawDeck, handsItem))
      {
        return singleDrawDeck.GetDrawText();
      }
    }
		return "Deal Cards";
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target || !player) return false;

		SRP_HandOfCards handOfCards;
		SRP_DeckOfCards singleDrawDeck;
		EntityAI handsItem = player.GetItemInHands();
		if( Class.CastTo(handOfCards, target.GetObject()) && Class.CastTo(singleDrawDeck, handsItem))
		{
			if(singleDrawDeck.IsDamageDestroyed() || !handOfCards.HasSpaceInHand(singleDrawDeck.GetDrawMode()))
        return false;
      return true;
		}
		return false;
	}
	
  override void OnFinishProgressServer(ActionData action_data)
	{
		SRP_HandOfCards handOfCards;
		SRP_DeckOfCards singleDrawDeck;
    EntityAI handsItem = action_data.m_Player.GetItemInHands();
		if( Class.CastTo(handOfCards, action_data.m_Target.GetObject()) && Class.CastTo(singleDrawDeck, handsItem))
		{
      int cardSlot;
      Inventory_Base card;

      if (singleDrawDeck.GetDrawMode() == 2)
      {
        card = Inventory_Base.Cast(handOfCards.FindAttachmentBySlotName("CardHand1"));
        if (card)
        {
          singleDrawDeck.GetInventory().CreateAttachment(card.GetType());
          card.Delete();
        }
        card = Inventory_Base.Cast(handOfCards.FindAttachmentBySlotName("CardHand2"));
        if (card)
        {
          singleDrawDeck.GetInventory().CreateAttachment(card.GetType());
          card.Delete();
        }
        card = Inventory_Base.Cast(handOfCards.FindAttachmentBySlotName("CardHand3"));
        if (card)
        {
          singleDrawDeck.GetInventory().CreateAttachment(card.GetType());
          card.Delete();
        }
        card = Inventory_Base.Cast(handOfCards.FindAttachmentBySlotName("CardHand4"));
        if (card)
        {
          singleDrawDeck.GetInventory().CreateAttachment(card.GetType());
          card.Delete();
        }
        card = Inventory_Base.Cast(handOfCards.FindAttachmentBySlotName("CardHand5"));
        if (card)
        {
          singleDrawDeck.GetInventory().CreateAttachment(card.GetType());
          card.Delete();
        }
      }
      else
      {
        for(int i=0; i<singleDrawDeck.GetNumCardsToDraw(); i++)
        {
          cardSlot = singleDrawDeck.DrawCard();
          card = Inventory_Base.Cast(singleDrawDeck.GetInventory().FindAttachment(cardSlot));
          if (card)
          {
            handOfCards.GetInventory().CreateAttachment(card.GetType());
            card.Delete();
          }
        }
      }
		}
	}
};