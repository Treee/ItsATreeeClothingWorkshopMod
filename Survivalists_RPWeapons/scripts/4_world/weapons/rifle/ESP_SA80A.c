class ESP_SA80a extends RifleBoltFree_Base
{
  override RecoilBase SpawnRecoilObject()
	{
		return new FamasRecoil(this);
	}	
  override bool NeedsRailAdapter()
  {
    return true;
  }
  override string GetRailAdapterName()
  {
    return "SA80HndGrd";
  }
};