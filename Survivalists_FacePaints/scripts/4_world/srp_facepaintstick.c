class SRP_FacePaintStick: Inventory_Base
{
  protected int m_camoIndex = 0;

	override void SetActions()
	{
		super.SetActions();
		
    AddAction(ActionPaintFace);
    AddAction(ActionPaintFaceTarget);
	}
	
	override void OnApply(PlayerBase player)
	{
    // Print("PaintStick::OnApply() " + m_camoIndex);
    player.SetFacePaint(m_camoIndex);
    if (GetDayZGame().GetSRPFacePaintConfig())
    {
      float dmg = GetDayZGame().GetSRPFacePaintConfig().GetPaintStickDamagerPerUse();
      AddHealth(-dmg);
    }
    else
    {
      AddHealth(-2);
    }
	}

  void SetCamoIndex(int currentIndex)
  {
    m_camoIndex = currentIndex;
  }
};


modded class Rag
{
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionWashFace);		
    AddAction(ActionWashFaceTarget);
	}
};