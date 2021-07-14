class SRP_BaseBuildingBase extends ItemBase
{
  bool m_isHologram = false;
  bool m_isConstructed = true;

	void SRP_BaseBuildingBase(){}
	
  // override bool IsHologram()
  // {
  //   return m_isHologram;
  // }

  bool CanPutIntoHands (EntityAI parent)
	{
		return false;
	}

  bool CanPutInCargo (EntityAI parent)
	{
		return false;
	}
	
	override void OnPlacementStarted( Man player )
	{
		super.OnPlacementStarted( player );
    // StartConstruction();
	}
	
	override void OnPlacementComplete( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{
		super.OnPlacementComplete( player, position, orientation );
		StartConstruction();
	}
	
	override void OnPlacementCancelled( Man player )
	{
		super.OnPlacementCancelled(player);
	}

	override void OnVariablesSynchronized()
  {
    super.OnVariablesSynchronized();
    UpdateVisualState();
  }

  void StartConstruction()
  {
    m_isHologram = true;
    m_isConstructed = false;
  }

  void CompleteConstruction() 
  {
    m_isHologram = false;
    m_isConstructed = true;
  }

  void UpdateVisualState()
  {
    if (IsUnderConstruction()) {
      Print("Update Visuals: is under construction");
      SetAnimationPhase( "hologram", 0 );
      SetAnimationPhase( "deployed", 1 );
    } else {
      Print("Update Visuals: is constructed");
      SetAnimationPhase( "hologram", 1 );
      SetAnimationPhase( "deployed", 0 );
    }
  }

  bool IsUnderConstruction() 
  {
    return !m_isConstructed;
  }
}