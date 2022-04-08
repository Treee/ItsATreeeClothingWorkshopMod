modded class SalineBagIV
{
  private bool m_IsContainerSterilized = false;
  void SalineBagIV()
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

modded class ActionGiveSalineTarget
{
  override void OnFinishProgressServer( ActionData action_data )
  {
    SalineBagIV salineBag = SalineBagIV.Cast(action_data.m_MainItem);
    if (salineBag)
    {
      if (!salineBag.IsContainerSterile())
      {
        // wound infection or hemolytic reaction?
        float diceRoll = Math.RandomFloatInclusive(0.3,0.9);
        // Print("[ActionCollectBloodTargetLambda] - OLD ITEM NOT STERILE - ROLL: " + diceRoll);
        if (diceRoll > 0.5)
        {
          PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
          // Print("[ActionCollectBloodTargetLambda] - OLD ITEM NOT STERILE - INFECTED");
          ntarget.InsertAgent(eAgents.WOUND_AGENT);
        }
      }
    }
    super.OnFinishProgressServer(action_data);
  }
};

modded class ActionGiveSalineSelf
{
  override void OnFinishProgressServer( ActionData action_data )
  {
    SalineBagIV salineBag = SalineBagIV.Cast(action_data.m_MainItem);
    if (salineBag)
    {
      if (!salineBag.IsContainerSterile())
      {
        // wound infection or hemolytic reaction?
        float diceRoll = Math.RandomFloatInclusive(0.3,0.9);
        // Print("[ActionCollectBloodTargetLambda] - OLD ITEM NOT STERILE - ROLL: " + diceRoll);
        if (diceRoll > 0.5)
        {
          // Print("[ActionCollectBloodTargetLambda] - OLD ITEM NOT STERILE - INFECTED");
          action_data.m_Player.InsertAgent(eAgents.WOUND_AGENT);
        }
      }
    }
    super.OnFinishProgressServer(action_data);
  }
};