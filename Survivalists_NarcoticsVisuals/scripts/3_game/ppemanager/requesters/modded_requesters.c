modded class PPERequester_BloodLoss
{
	override void SetBloodLossLevel(float level)
	{
		SetTargetValueFloat(PostProcessEffectType.Glow,PPEGlow.PARAM_SATURATION,false,level,PPEGlow.L_22_BLOODLOSS,PPOperators.SET);
	}
};
