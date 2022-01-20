class SRP_DeckOfCards extends Inventory_Base
{
  ref array<int> m_AttachmentSlotsCheck;
  int drawMode = 0;

  void ~SRP_DeckOfCards()
  {
    delete m_AttachmentSlotsCheck;
  }

  bool CanDrawCard()  
  {
    return GetInventory().AttachmentCount() > 0;
  }

  bool CanAcceptCard(int cardsInHand)
  {
    return GetInventory().AttachmentCount() < (52-cardsInHand);
  }

  void NextDrawMode()
  {
    drawMode = (drawMode + 1) % 3; // 3 is the total number of card draw modes, increase if you add more
  }

  string GetDrawText()
  {
    string text = "Draw One Card";
    if (drawMode == 1)
    {
      text = "Draw Five Cards";
    }
    else if (drawMode == 2)
    {
      text = "Return Cards To Deck";
    }
    return text;
  }

  string GetNextDrawText()
  {
    string text = "Change To One Card Draw";
    if (drawMode == 0)
    {
      text = "Change To Five Card Draw";
    }
    else if (drawMode == 1)
    {
      text = "Change to Return Cards To Deck";
    }
    return text;
  }

  int GetNumCardsToDraw()
  {
    int numCardsToDraw = 1; // default to 1 card
    if (drawMode == 1) // 5 card draw
    {
      numCardsToDraw = 5;
    }
    return numCardsToDraw;
  }

  int GetDrawMode()
  {
    return drawMode;
  }

  // returns the slot id of the card to draw
  int DrawCard()
  {
    int slot_id;
		ItemBase attachment;
    if (m_AttachmentSlotsCheck)
    {
      delete m_AttachmentSlotsCheck;
    }
    m_AttachmentSlotsCheck = new array<int>;
		for ( int i = 0; i < GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) == -1 )
			{
				attachment = ItemBase.Cast(GetInventory().FindAttachment(slot_id));
				if (attachment)
        {
          m_AttachmentSlotsCheck.Insert(slot_id);
        }
			}
		}
    return m_AttachmentSlotsCheck.GetRandomElement();
  }
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPSwitchDrawMode);
		AddAction(ActionSRPDrawCards);
	}
};

class SRP_DeckOfCards_SingleDraw extends SRP_DeckOfCards{};
class SRP_DeckOfCards_FiveDraw extends SRP_DeckOfCards{};

class SRP_HandOfCards extends Inventory_Base
{  
  // deck mode ensures the target paper has enough slots
  bool HasSpaceInHand(int deckMode, bool canAcceptCard)
  {
    bool hasSpace = true;
    if (deckMode == 0) // single draw
    {
      hasSpace = GetInventory().AttachmentCount() < 5;
    }
    else if (deckMode == 1) // 5 card
    {
      hasSpace = GetInventory().AttachmentCount() == 0;
    }
    else if (deckMode == 2) // return cards to deck
    {
      hasSpace = GetInventory().AttachmentCount() > 0 && canAcceptCard;
    }
    return hasSpace
  }

  override bool IsInventoryVisible()
  {
    return false;
  }

  int GetNumCards()
  {
    return GetInventory().AttachmentCount();
  }
};

class SRP_PlayingCard_ColorBase extends Inventory_Base
{
  override bool IsDeployable() 
  {
    return true;
  }        
	
	override void SetActions()
  {
    super.SetActions();
    
    AddAction(ActionTogglePlaceObject);
    AddAction(ActionPlaceObject);
  }
};

class SRP_PlayingCard_circle extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_plus extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_square extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_star extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_wave extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_2Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_3Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_4Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_5Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_6Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_7Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_8Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_9Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_10Spade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_jackSpade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_queenSpade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_kingSpade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_aceSpade extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_2club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_3club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_4club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_5club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_6club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_7club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_8club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_9club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_10club extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_jackclub extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_queenclub extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_kingclub extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_aceclub extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_2diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_3diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_4diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_5diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_6diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_7diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_8diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_9diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_10diamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_jackdiamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_queendiamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_kingdiamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_acediamond extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_2heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_3heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_4heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_5heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_6heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_7heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_8heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_9heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_10heart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_jackheart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_queenheart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_kingheart extends SRP_PlayingCard_ColorBase{};
class SRP_PlayingCard_aceheart extends SRP_PlayingCard_ColorBase{};