modded class PlayerBase
{
  protected int m_FacePaintState;
  int m_TempFacePaintState;
//=============================================== VANILLA OVERRIDE
  override void Init()
  {
    super.Init();
    m_FacePaintState = -1;
    RegisterNetSyncVariableInt("m_FacePaintState", -1, m_ModuleLifespan.GetFacePaintCount());
  }
  override void OnVariablesSynchronized()
	{
    super.OnVariablesSynchronized();

    if (GetFacePaintIndex() >= -1 && (IsPlayerLoaded() || IsControlledPlayer()))
      UpdateFacePaintVisual();
	}
  override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
  {
    super.OnRPC(sender, rpc_type, ctx);

    switch(rpc_type)
    {
      case SRP_FACEPAINT_RPC.CHECK_SRP_FACEPAINT_CONFIG: // this case is for grabbing FacePaint config from the server
      {
        Param1<SRPFacePaintConfig> configParams;
        if(!ctx.Read(configParams))
        {
          return;        
        }
        GetDayZGame().SetSRPFacePaintConfig(configParams.param1);
        break;
      }
      case SRP_FACEPAINT_RPC.SRPC_FP_RADIAL_MENU:
      {
        if (GetGame().IsDedicatedServer())
        {
          int camoId;
          if ( !ctx.Read(camoId) )
            return;
          m_TempFacePaintState = camoId;
        }
      }
      break;
    }
  }
  override void OnStoreSaveLifespan( ParamsWriteContext ctx )
	{
    super.OnStoreSaveLifespan(ctx);
    ctx.Write(m_FacePaintState);
	}
	override bool OnStoreLoadLifespan( ParamsReadContext ctx, int version )
	{	
    if (!super.OnStoreLoadLifespan(ctx, version))
    {
      return false;
    }

    int facePaintState = -1;
    if(ctx.Read( facePaintState ))
    {
      m_FacePaintState = facePaintState;
    }

		return true;
	}

//=============================================== CUSTOM
  void SetFacePaint(int index)
  {
    m_FacePaintState = index;
    SetSynchDirty();
  }
  int GetFacePaintIndex()
  {
    return m_FacePaintState;
  }
  void ClearPaint()
  {
    SetFacePaint(-1);
  }
  TStringArray GetFacePaintList(int index)
  {
    if (m_ModuleLifespan)
    {
      switch(index)
      {
        case 1:
          return m_ModuleLifespan.GetFacePaintCamoOptions();
        break;
        case 2:
          return m_ModuleLifespan.GetFacePaintFlagOptions();
        break;
        case 3:
          return m_ModuleLifespan.GetFacePaintMaskOptions();
        break;
        case 4:
          return m_ModuleLifespan.GetFacePaintScarOptions();
        break;
      }
    }
    return {};
  }
  void UpdateFacePaintVisual()
	{    
    // female characters need this because they dont have beard so no player lifespan level stuff
    if (!IsMale())
    {
      string camoMaterial;
      if (m_FacePaintState == -1)
        camoMaterial = m_ModuleLifespan.GetFemaleBaseMaterial(GetType());
      else
        camoMaterial = m_ModuleLifespan.GetPaintPathFemale(m_FacePaintState, GetType());

      if (camoMaterial)
        SetFaceMaterial(camoMaterial);
    }
	}
};
