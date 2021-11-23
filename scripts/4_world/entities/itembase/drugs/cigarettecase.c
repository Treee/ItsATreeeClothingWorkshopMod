class SRP_CigaretteCase extends Inventory_Base {
  protected ref OpenableBehaviour m_Openable;

  void SRP_CigaretteCase()
  {
    m_Openable = new OpenableBehaviour(false);
		
		RegisterNetSyncVariableBool("m_Openable.m_IsOpened");
		
		UpdateVisualState();
  }

  override void Open()
	{
		m_Openable.Open();
		SetSynchDirty();

		UpdateVisualState();
	}

	override void Close()
	{
		m_Openable.Close();
		SetSynchDirty();

		UpdateVisualState();
	}
	
	override bool IsOpen()
	{
		return m_Openable.IsOpened();
	}

	protected void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Lid",1);
			SetAnimationPhase("Lid2",0);
		}
		else
		{
			SetAnimationPhase("Lid",0);
			SetAnimationPhase("Lid2",1);
		}
	}
	
  override void OnVariablesSynchronized()
  {
    super.OnVariablesSynchronized();
    UpdateVisualState();
  }

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionOpen);
		AddAction(ActionClose);		
	}
};