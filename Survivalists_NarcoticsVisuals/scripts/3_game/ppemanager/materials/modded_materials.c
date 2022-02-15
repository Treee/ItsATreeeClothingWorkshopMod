modded class PPEGlow
{
  override void RegisterMaterialParameters()
	{
    super.RegisterMaterialParameters();
    RegisterParameterScalarFloatEx(PARAM_SATURATION,"Saturation",1,0,20,PPEMatClassParameterFloatSaturation);
  }
};

modded class PPERadialBlur
{
  override void RegisterMaterialParameters()
	{
    super.RegisterMaterialParameters();
		RegisterParameterScalarFloat(PARAM_POWERX,"PowerX",0.0,0.0,5);
		RegisterParameterScalarFloat(PARAM_POWERY,"PowerY",0.0,0.0,5);
		RegisterParameterScalarFloat(PARAM_OFFSETX,"OffsetX",0.05,0.0,5);
		RegisterParameterScalarFloat(PARAM_OFFSETY,"OffsetY",0.05,0.0,5);
		RegisterParameterScalarFloat(PARAM_PIXELSCALE,"PixelScale",0.5,0.125,1.0);
  }
};

modded class PPEChromAber
{
  override void RegisterMaterialParameters()
	{
    super.RegisterMaterialParameters();
		RegisterParameterScalarFloat(PARAM_POWERX,"PowerX",0.0,0.0,5);
		RegisterParameterScalarFloat(PARAM_POWERY,"PowerY",0.0,0.0,5);
  }
};
