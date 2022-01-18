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
    RegisterParameterScalarFloat(PARAM_POWERX,"PowerX",0.0,0.0,10);    
    RegisterParameterScalarFloat(PARAM_POWERX,"PowerY",0.0,0.0,10);    
  }
};


modded class PPERequester_BloodLoss
{
	override void SetBloodLossLevel(float level)
	{
		SetTargetValueFloat(PostProcessEffectType.Glow,PPEGlow.PARAM_SATURATION,false,level,PPEGlow.L_22_BLOODLOSS,PPOperators.SET);
	}
}


class PPERequester_SRPDrugEffect extends PPERequester_GameplayBase
{
	void SetGlowSaturation(float level=1)
	{
    // Print("PPERequester_SRPDrugEffect:: level " + level);
		SetTargetValueFloat(PostProcessEffectType.Glow,PPEGlow.PARAM_SATURATION,false,level,PPEGlow.L_22_BLOODLOSS,PPOperators.SET);

    // SetTargetValueInt(PostProcessEffectType.Glow,PPEGlow.PARAM_TONEMAPPING,true,level,PPEGlow.L_22_BLOODLOSS,PPOperators.SET);
	}

  void SetRadialBlur(float powerX=0, float powerY=0, float offsetX=0, float offsetY=0, float pixelScale=0.5)
  {
		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_POWERX,false,powerX, PPERadialBlur.L_0_PAIN_BLUR ,PPOperators.SET);
		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_POWERY,false,powerY, PPERadialBlur.L_0_PAIN_BLUR,PPOperators.SET);
		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_PIXELSCALE,false,pixelScale,PPERadialBlur.L_0_PAIN_BLUR ,PPOperators.SET);
  }
}
