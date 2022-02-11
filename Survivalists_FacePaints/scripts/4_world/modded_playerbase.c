modded class PlayerBase
{
  int m_FacePaintState;
	protected int	m_FacePaintStateLocal;

  override void Init()
  {
    super.Init();

    m_FacePaintState = -1;
    m_FacePaintStateLocal = -1;

    RegisterNetSyncVariableInt("m_FacePaintState", -1, m_ModuleLifespan.GetFacePaintCount(GetType()));
    RegisterNetSyncVariableInt("m_FacePaintStateLocal", -1, m_ModuleLifespan.GetFacePaintCount(GetType()));
  }

  override void OnVariablesSynchronized()
	{
    super.OnVariablesSynchronized();

    if (m_FacePaintState > -1 && (IsPlayerLoaded() || IsControlledPlayer()))
    {
      UpdateFacePaintState();
    }
	}

  void SetFacePaint(int index)
  {
    m_FacePaintState = index;
    SetSynchDirty();
  }

  void ClearPaint()
  {
    SetFacePaint(-1);
  }

  string GetCurrentCamoIndexName(int index)
  {
    string value = "";
    if ( m_ModuleLifespan )
		{
      FacePaintStyle nextFacePaint = m_ModuleLifespan.GetFacePaintMaterials(GetType(), index);
      if (nextFacePaint)
      {
        value = nextFacePaint.GetPaintName();
      }
    }
    return value;
  }

  string GetCurrentCamoMaterialPath(int index)
  {
    string value = "";
    if ( m_ModuleLifespan )
		{
      FacePaintStyle nextFacePaint = m_ModuleLifespan.GetFacePaintMaterials(GetType(), index);
      if (nextFacePaint)
      {
        value = nextFacePaint.GetMaterial(1);
      }
    }
    return value;
  }

  void UpdateFacePaintState()
	{
		UpdateFacePaintVisual();
		m_FacePaintStateLocal = m_FacePaintState;
	}

  void UpdateFacePaintVisual()
	{
    string camoMaterial = GetCurrentCamoMaterialPath(m_FacePaintState);
    // SetFaceTexture("");    
    SetFaceMaterial(camoMaterial);
	}

};
