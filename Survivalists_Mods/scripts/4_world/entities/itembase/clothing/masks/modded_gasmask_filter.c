modded class GasMask_Filter
{
	override float GetFilterDamageRatio() 
	{
		return 0.0225; //Health lost per quantity consumed
	}
};
modded class GasMask_Filter_Improvised: GasMask_Filter
{
	override float GetFilterDamageRatio() 
	{
		return 0.09; //Health lost per quantity consumed
	}
};
class GasMask_Filter_Espen extends GasMask_Filter
{
  override float GetFilterDamageRatio()
  {
    return 0.02;
  }
};
class GasMask_Filter_Stag extends GasMask_Filter
{
  override float GetFilterDamageRatio()
  {
    return 0.015;
  }
};
class GasMask_Filter_LockNSons extends GasMask_Filter
{
  override float GetFilterDamageRatio()
  {
    return 0.1;
  }
};