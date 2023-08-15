class ESP_SA80a : RifleBoltLock_Base
{
  override bool NeedsRailAdapter()
  {
    return true;
  }
  override string GetRailAdapterName()
  {
    return "SA80HndGrd";
  }
};