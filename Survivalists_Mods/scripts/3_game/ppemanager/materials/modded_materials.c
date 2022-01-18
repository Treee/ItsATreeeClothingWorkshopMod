modded class PPEGlow
{
  override void RegisterMaterialParameters()
	{
    super.RegisterMaterialParameters();
    RegisterParameterScalarFloatEx(PARAM_SATURATION,"Saturation",1,0,20,PPEMatClassParameterFloatSaturation);
  }
};
