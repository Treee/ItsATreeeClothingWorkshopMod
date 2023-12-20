// Neck Scarf -- GOOD KARMA
modded class ALV_Scarf_Colorbase
{
  override void OnWasAttached( EntityAI parent, int slot_id)
	{    
    PlayerBase attachedPlayer;
    if (Class.CastTo(attachedPlayer, parent))
    {
      if (!attachedPlayer.IsGoodKarma() && GetGame().IsDedicatedServer())
      {
        string newItem = string.Format("ALV_Scarf_Bandana_%1", GetScarfColor());
        ReplaceAttachedClothingWithAnother lambda = new ReplaceAttachedClothingWithAnother(this, newItem, attachedPlayer, slot_id);
        MiscGameplayFunctions.TurnItemIntoItemEx(attachedPlayer, lambda);
      }
    }    
    super.OnWasAttached(parent, slot_id);      
	}

  string GetScarfColor()
  {
    string color = GetType();
    color.Replace("ALV_Scarf_","");
    return color;
  }
};

// Face Scarf -- BAD KARMA
modded class ALV_Scarf_Bandana_Colorbase
{
  override void OnWasAttached( EntityAI parent, int slot_id)
	{
    PlayerBase attachedPlayer;
    if (Class.CastTo(attachedPlayer, parent))
    {
      if (attachedPlayer.IsGoodKarma() && GetGame().IsDedicatedServer())
      {
        string newItem = string.Format("ALV_Scarf_%1", GetScarfColor());
        ReplaceAttachedClothingWithAnother lambda = new ReplaceAttachedClothingWithAnother(this, newItem, attachedPlayer, slot_id);
        MiscGameplayFunctions.TurnItemIntoItemEx(attachedPlayer, lambda);
      }
    }    
    super.OnWasAttached(parent, slot_id);      
	}

  string GetScarfColor()
  {
    string color = GetType();
    color.Replace("ALV_Scarf_Bandana_","");
    return color;
  }
};

class ReplaceAttachedClothingWithAnother : TurnItemIntoItemLambda
{
	void ReplaceAttachedClothingWithAnother (EntityAI old_item, string new_item_type, PlayerBase player, int slot)
	{
		InventoryLocation targetAtt = new InventoryLocation;
		targetAtt.SetAttachment(player, NULL, slot);
		OverrideNewLocation(targetAtt);
	}
};


modded class ActionOpen
{
  override void OnExecuteServer( ActionData action_data )
	{
		super.OnExecuteServer(action_data);

    action_data.m_Player.GetStatGoodKarma().Add(1.0);
    action_data.m_Player.GetStatBadKarma().Add(-1.0);
	}
};


modded class ActionUnpackBox
{
  override void OnFinishProgressServer( ActionData action_data )
	{
		super.OnFinishProgressServer(action_data);

    action_data.m_Player.GetStatGoodKarma().Add(-1.0);
    action_data.m_Player.GetStatBadKarma().Add(1.0);
	}
};