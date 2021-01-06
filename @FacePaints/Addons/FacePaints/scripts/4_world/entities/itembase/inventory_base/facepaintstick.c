class IAT_FacePaintStick : Edible_Base
{
  void IAT_FacePaintStick()
  {
  }

  override void SetActions()
  {
    super.SetActions();
    AddAction(ActionPaintFaceSelf);
    AddAction(ActionPaintFaceTarget);
  }
};