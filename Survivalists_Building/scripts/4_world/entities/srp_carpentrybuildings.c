class SRP_Carpentry_WoodenOutHouse extends BaseBuildingBase
{



	override void InitBaseState()
	{
    Print("InitBaseState");
    super.InitBaseState();
    Print("After");
	}	
  override void EEOnAfterLoad()
	{
    Print("EEOnAfterLoad: ");
    if (m_FixDamageSystemInit)
    {
      Print("call SetPartsAfterStoreLoad in 500");
    }
    super.EEOnAfterLoad();
    Print("After");
  }
  override void AfterStoreLoad()
	{	
    Print("AfterStoreLoad");
		super.AfterStoreLoad();	
    Print("After");
	}


  override void OnVariablesSynchronized()
  {
    Print("OnVariablesSynchronized");
    super.OnVariablesSynchronized();
  }

	override protected void OnSynchronizedClient()
	{
    Print("OnSynchronizedClient");
    super.OnSynchronizedClient();
  };

	override void SetPartsFromSyncData()
	{
		Construction construction = GetConstruction();
		map<string, ref ConstructionPart> construction_parts = construction.GetConstructionParts();
    Print("SetPartsFromSyncData");
		for ( int i = 0; i < construction_parts.Count(); ++i )
		{
			string key = construction_parts.GetKey( i );
			ConstructionPart value = construction_parts.Get( key );
			SetPartFromSyncData(value);
      Print("synching: " + key);
		}
		
		//regenerate navmesh
		UpdateNavmesh();		
    Print("Complete");
	}

  override void SetPartsAfterStoreLoad()
  {
    Print("SetPartsAfterStoreLoad");
    super.SetPartsAfterStoreLoad();
    Print("complete");
  }

	override protected void SetActionFromSyncData()
	{
    Print("SetActionFromSyncData");
		if ( m_InteractedPartId > -1 && m_PerformedActionId > -1 )
		{
			ConstructionPart constrution_part = GetConstructionPartById( m_InteractedPartId );
			int build_action_id = m_PerformedActionId;
			Print("blah: " + constrution_part.GetPartName());
			switch( build_action_id )
			{
				case AT_BUILD_PART		: OnPartBuiltClient( constrution_part.GetPartName(), build_action_id ); break;
				case AT_DISMANTLE_PART	: OnPartDismantledClient( constrution_part.GetPartName(), build_action_id ); break;
				case AT_DESTROY_PART	: OnPartDestroyedClient( constrution_part.GetPartName(), build_action_id ); break;
			}
		}
    Print("Complete");
	}

  override void SetBaseState( bool has_base )
	{
    Print("SetBaseState: " + has_base);
    super.SetBaseState(has_base);
		Print("Complete");
	}

  void SynchronizeBaseState()
	{
    Print("SynchronizeBaseState");
    super.SynchronizeBaseState();
    Print("complete");
	}


  override string GetConstructionKitType()
	{
		return "SRP_Carpentry_WoodenOutHouse_Kit";
	}
  override int GetMeleeTargetType()
	{
		return EMeleeTargetType.NONALIGNABLE;
	}
};