modded class Fabric
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(SRP_ActionCraftOnWorkbench);
	}
  override bool IsSewingWorkbenchTool()
  {
    return true;
  }
};