class PPERequester_WeedEffect extends PPERequester_GameplayBase
{
	void SetWeedColorSaturation(float level)
	{
    Print("PPERequester_WeedEffect:: level " + level);
		SetTargetValueFloat(PostProcessEffectType.Glow,PPEGlow.PARAM_SATURATION,true,level,PPEGlow.L_22_BLOODLOSS,PPOperators.SET);
	}
}
