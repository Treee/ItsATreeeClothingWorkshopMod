class PPERequester_SRPMethEffect extends PPERequester_GameplayBase
{
	void SetGlowSaturation(float level=1)
	{
		SetTargetValueFloat(PostProcessEffectType.Glow,PPEGlow.PARAM_SATURATION,false,level,PPEGlow.L_22_BLOODLOSS,PPOperators.HIGHEST);
	}

  void SetRadialBlur(float powerX=0, float powerY=0, float offsetX=0, float offsetY=0, float pixelScale=0.5)
  {
		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_POWERX,false,powerX, PPERadialBlur.L_0_PAIN_BLUR ,PPOperators.HIGHEST);
		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_POWERY,false,powerY, PPERadialBlur.L_0_PAIN_BLUR,PPOperators.HIGHEST);
		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_PIXELSCALE,false,pixelScale,PPERadialBlur.L_0_PAIN_BLUR ,PPOperators.HIGHEST);
  }
};
