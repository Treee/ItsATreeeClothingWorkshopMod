modded class SRP_LabTubeRack
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(SRP_ActionCraftOnWorkbench);
	}
  override bool IsDrugWorkbenchTool()
  {
    return true;
  }
};