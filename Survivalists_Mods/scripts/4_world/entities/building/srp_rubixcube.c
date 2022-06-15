class Land_srp_artifact_rubixcube_1 extends House
{ 
  protected EffectSound m_RubixCubeSound;

  protected bool m_StageChanging = false;  
  protected bool m_ClockWise = false;  
  protected int m_CurrentComponent = -1;

  void Land_srp_artifact_rubixcube_1()
  {
		RegisterNetSyncVariableBool("m_StageChanging");
		RegisterNetSyncVariableBool("m_ClockWise");
		RegisterNetSyncVariableInt("m_CurrentComponent", 0,5);
  }

  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
    if (m_StageChanging)
    {
      if (m_RubixCubeSound == NULL)
      {
        RequestTurningSoundEvent();
      }
    }
    else
    {
      StopLoopSound();
    }
	}
    
  void TurnRubix(bool turnClockWise=true, int currentComponent=-1)
  {
    Print("TurnRubix state:" +m_StageChanging+" in rubix: "+ currentComponent);
    // if we haven't pulled the lever yet
    if (!m_StageChanging && currentComponent > -1)
    { // pull the lever Kronk!
      m_StageChanging = true;
      m_ClockWise = turnClockWise;
      m_CurrentComponent = currentComponent;
      SetSynchDirty();
      // the length of spinning sound is about 6 seconds
      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(ResetState, 3000, false);
    }
  }

  void RequestTurningSoundEvent()
	{
    if (!GetGame().IsDedicatedServer())
		{
      if (m_CurrentComponent > -1)
      {
        PlaySoundSet(m_RubixCubeSound, GetRubixCubeTurningSound(), 0, 0); 
        if (m_ClockWise)
        {
          SpinClockWise();
        }
        else
        {
          SpinCounterClockWise();
        }
      }
		}
	}

  void SpinClockWise()
  {
    string selection = GetSelectionFromComponent(m_CurrentComponent);
    Print("SpinClockWise: " + m_CurrentComponent + " selection: " + selection);
    if (selection != "")
    {
      int nextPhase = GetAnimationPhase(selection) + 1;
      SetAnimationPhase(selection, nextPhase);
      Print("SPinning: " + selection + " to " + nextPhase);
    }
  }
  void SpinCounterClockWise()
  {
    string selection = GetSelectionFromComponent(m_CurrentComponent);
    Print("SpinCounterClockWise: " + m_CurrentComponent + " selection: " + selection);
    if (selection != "")
    {
      int nextPhase = GetAnimationPhase(selection) - 1;
      SetAnimationPhase(selection, nextPhase);
      Print("SPinning: " + selection + " to " + nextPhase);
    }
  }

  void StopLoopSound()
  {
    if (!GetGame().IsDedicatedServer())
		{
      StopSoundSet(m_RubixCubeSound);
    }
  }

  void ResetState()
  {
    m_StageChanging = false;
    SetSynchDirty();
  }

  string GetRubixCubeTurningSound()
  {
    return "SRP_Door_RubixCubeTurning_SoundSet1";
  }
  
  bool IsStateChanging()
  {
    return m_StageChanging;
  }

  string GetSelectionFromComponent(int component)
  {
    if (component == 0)
    {
      return "row1";
    }
    else if (component == 1)
    {
      return "row2";
    }
    else if (component == 2)
    {
      return "col1";
    }
    else if (component == 3)
    {
      return "col2";
    }
    else if (component == 4)
    {
      return "z1";
    }
    else if (component == 5)
    {
      return "z2";
    }
    return "";
  }
};