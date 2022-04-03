// Apply Sterilized modifier to all the blood containers
// Blood Bag's IV Kits, Syringes, etc
modded class BloodContainerBase
{
  private bool m_IsContainerSterilized = false;
  void BloodContainerBase()
	{
		RegisterNetSyncVariableBool("m_IsContainerSterilized");
	}

  override string GetDisplayName()
	{
    string itemName = super.GetDisplayName();
    if (IsContainerSterile())
    {
      itemName = itemName + " Sterlizied";
    }
		return itemName;
	}

  void SetIsSterilized(bool isSterile)
  {
    // Print("Sterilized: " + isSterile);
    m_IsContainerSterilized = isSterile;
    SetSynchDirty();
  }

  bool IsContainerSterile()
  {
    return m_IsContainerSterilized;
  }
};

// getting blood from a target is a nice lambda, transfer any sterile properties over
modded class ActionCollectBloodTargetLambda
{
	override void CopyOldPropertiesToNew(notnull EntityAI old_item, EntityAI new_item)
	{
		super.CopyOldPropertiesToNew(old_item, new_item);
    // Print("[ActionCollectBloodTargetLambda] - CopyOldPropertiesToNew");
		if ( new_item )
		{
      // Print("[ActionCollectBloodTargetLambda] - NEW ITEM");
			BloodContainerBase old_item_IB = BloodContainerBase.Cast(old_item);
			BloodContainerBase new_item_IB = BloodContainerBase.Cast(new_item);
      if ( Class.CastTo(old_item_IB, BloodContainerBase.Cast(old_item)) && Class.CastTo(new_item_IB, BloodContainerBase.Cast(new_item)))
      {
        // Print("[ActionCollectBloodTargetLambda] - ITEMS ARE BLOOD CONTAINERS");
        new_item_IB.SetIsSterilized(old_item_IB.IsContainerSterile());
        // if the old item is not sterilized
        if (!old_item_IB.IsContainerSterile())
        {
          // wound infection or hemolytic reaction?
          float diceRoll = Math.RandomFloatInclusive(0.3,0.9);
          // Print("[ActionCollectBloodTargetLambda] - OLD ITEM NOT STERILE - ROLL: " + diceRoll);
          if (diceRoll > 0.5)
          {
            // Print("[ActionCollectBloodTargetLambda] - OLD ITEM NOT STERILE - INFECTED");
            m_Target.InsertAgent(eAgents.WOUND_AGENT);
          }
        }
      }
		}
		else
		{
			Debug.LogError("ActionCollectBloodTargetLambda: failed to create new item","static");
		}
	}
};

// giving blood to self is not using the lambda (yet?) so override the action
modded class ActionGiveBloodSelf
{
  override void OnEndServer(ActionData action_data)
  {
    ActionGiveBloodData action_data_b = ActionGiveBloodData.Cast( action_data );
    // Print("[ActionGiveBloodSelf] - Start " + action_data_b + " action data: " + action_data);
    BloodContainerBase bloodContainer = BloodContainerBase.Cast(action_data_b.m_MainItem);
    if (bloodContainer)
    {
      // Print("[ActionGiveBloodSelf] - Is Blood Container");
      if (!bloodContainer.IsContainerSterile())
      {
        float diceRoll = Math.RandomFloatInclusive(0.3,0.9);
        // Print("[ActionGiveBloodSelf] - OLD ITEM NOT STERILE - ROLL: " + diceRoll);
        if (diceRoll > 0.5)
        {
          // Print("[ActionGiveBloodSelf] - OLD ITEM NOT STERILE - INFECTED");
          action_data_b.m_Player.InsertAgent(eAgents.WOUND_AGENT);
        }
      }
    }
    super.OnEndServer(action_data);
  }
};

// giving blood to self is not using the lambda (yet?) so override the action
modded class ActionGiveBloodTarget
{
  override void OnEndServer(ActionData action_data)
  {    
    ActionGiveBloodData action_data_b = ActionGiveBloodData.Cast( action_data );
    // Print("[ActionGiveBloodTarget] - Start: " + action_data_b);
    BloodContainerBase bloodContainer = BloodContainerBase.Cast(action_data_b.m_MainItem);
    if (bloodContainer)
    {
      // Print("[ActionGiveBloodTarget] - Is Blood Container");
      if (!bloodContainer.IsContainerSterile())
      {
        float diceRoll = Math.RandomFloatInclusive(0.3,0.9);
        // Print("[ActionGiveBloodTarget] - OLD ITEM NOT STERILE - ROLL: " + diceRoll);
        if (diceRoll > 0.5)
        {
          PlayerBase ntarget = PlayerBase.Cast( action_data_b.m_Target.GetObject() );
          // Print("[ActionGiveBloodTarget] - OLD ITEM NOT STERILE - INFECTED");
          if (ntarget)
          {
            ntarget.InsertAgent(eAgents.WOUND_AGENT);
          }
        }
      }
    }
    super.OnEndServer(action_data);
  }
};
