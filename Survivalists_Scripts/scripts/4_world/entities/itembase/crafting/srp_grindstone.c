class SRP_Grindstone_ColorBase extends SRP_DeployableContainer_Base
{       
  protected bool m_IsSpinning = false;

  void SRP_Grindstone_ColorBase()
  {
    RegisterNetSyncVariableBool("m_IsSpinning");
  }

  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
    if (GetIsSpinning())
    {
      Start();
    }
    else
    {
      Stop();
    }		
	}

	override bool IsTwoHandedBehaviour() 
  {
    return true;
  }
    
  override bool IsDeployable() 
  {
    return true;
  }

  void Start()
  {
    SetAnimationPhase("spinner1_rotate",50);
  } 

  void Stop()
  {
    SetAnimationPhaseNow("spinner1_rotate",0);
  }

  void SetIsSpinning(bool isSpinning)
  {
    m_IsSpinning = isSpinning;
    SetSynchDirty();
  }

  bool GetIsSpinning()
  {
    return m_IsSpinning;
  }
	
	override void SetActions()
  {
    super.SetActions();
    
    AddAction(ActionToggleGrindstoneOn);
    AddAction(ActionToggleGrindstoneOff);
  }
};
class SRP_Grindstone_Simple extends SRP_Grindstone_ColorBase{};
class SRP_Grindstone_Hobbit extends SRP_Grindstone_ColorBase{};
