modded class PlayerBase
{
  private int	m_FacePaintIndex;

  override void Init()
  {
    super.Init();

    m_FacePaintIndex = 0;
    // Print("max paints: " + m_ModuleLifespan.GetFacePaintCount());
    RegisterNetSyncVariableInt("m_FacePaintIndex", 0, m_ModuleLifespan.GetFacePaintCount());
  }

  override void OnVariablesSynchronized()
	{
    super.OnVariablesSynchronized();
		if ( m_ModuleLifespan )
		{
      SRP_FacePaintStick paintStick = SRP_FacePaintStick.Cast(GetItemInHands());
      if (paintStick)
      {
        // Print("OnVariablesSynchronized::->SynchFacePaintVisual()");
			  m_ModuleLifespan.SynchFacePaintVisual( this, m_FacePaintIndex);
      }
		}
	}

  void SetFacePaint(int index)
  {
    m_FacePaintIndex = index;
    SetSynchDirty();
  }

  string GetCurrentCamoIndexName(int index)
  {
    string value = "";
    if ( m_ModuleLifespan )
		{
      FacePaintStyle nextFacePaint = m_ModuleLifespan.GetFacePaintMaterials(index );
      if (nextFacePaint)
      {
        value = nextFacePaint.GetPaintName();
      }
    }
    return value;
  }
};
