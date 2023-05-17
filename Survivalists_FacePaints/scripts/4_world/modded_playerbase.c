modded class PlayerBase
{
  protected int m_FacePaintState;

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
    {
      UpdateFacePaintVisual();
    }
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

  string GetCurrentCamoIndexName(int index)
  {
    if ( m_ModuleLifespan )
      return m_ModuleLifespan.GetPaintNameByIndex(index);
    return "";
  }

  string GetCurrentCamoMaterialPath(int index)
  {    
    if ( m_ModuleLifespan )
		{
      if (index == -1)
        return m_ModuleLifespan.GetFemaleBaseMaterial(GetType());
      else
        return m_ModuleLifespan.GetPaintPathFemale(index, GetType());
    }
    return "";
  }
  
  void UpdateFacePaintVisual()
	{    
    // female characters need this because they dont have beard so no player lifespan level stuff
    if (!IsMale())
    {
      string camoMaterial = GetCurrentCamoMaterialPath(m_FacePaintState);
      if (camoMaterial != "")
        SetFaceMaterial(camoMaterial);
    }
	}

  int GetPlayerFacePaintCount()
  {
    return m_ModuleLifespan.GetFacePaintCount();
  }
};
