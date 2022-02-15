class PPERequester_SRPDrugEffect extends PPERequester_GameplayBase
{
  //=============SATURATION
  float m_SaturationAccumulation = 0.0;
  float m_SaturationPrevious = 1.0; // default value
  float m_SaturationTarget = 1.0;

  //=============BLUR
  //=====x
  float m_BlurPowerXAccumulation = 0.0;
  float m_BlurPowerXPrevious = 0.0; // default value
  float m_BlurPowerXTarget = 0.0;
  //=====y
  float m_BlurPowerYAccumulation = 0.0;
  float m_BlurPowerYPrevious = 0.0; // default value
  float m_BlurPowerYTarget = 0.0;
  //=====x
  float m_BlurOffsetXAccumulation = 0.0;
  float m_BlurOffsetXPrevious = 0.0; // default value
  float m_BlurOffsetXTarget = 0.0;
  //=====y
  float m_BlurOffsetYAccumulation = 0.0;
  float m_BlurOffsetYPrevious = 0.0; // default value
  float m_BlurOffsetYTarget = 0.0;
  //=====pixel scale
  float m_BlurPixelScale = 0.5;

  //=============Chromatic Aberation
  float m_ChromAberPowerXAccumulation = 0.0;
  float m_ChromAberPowerXPrevious = 0.0; // default value
  float m_ChromAberPowerXTarget = 0.0;
  //=====y
  float m_ChromAberPowerYAccumulation = 0.0;
  float m_ChromAberPowerYPrevious = 0.0; // default value
  float m_ChromAberPowerYTarget = 0.0;


  override void Stop(Param par = null)
	{
    super.Stop(par);

    // reset saturation values
    m_SaturationAccumulation = 0.0;
    m_SaturationPrevious = 1.0;
    m_SaturationTarget = 1.0;

    // reset radial blur values
    m_BlurPowerXAccumulation = 0.0;
    m_BlurPowerXPrevious = 0.0; // default value
    m_BlurPowerXTarget = 0.0;

    m_BlurPowerYAccumulation = 0.0;
    m_BlurPowerYPrevious = 0.0; // default value
    m_BlurPowerYTarget = 0.0;
    m_BlurPixelScale = 0.5;

    // reset chromatic values
    m_ChromAberPowerXAccumulation = 0.0;
    m_ChromAberPowerXPrevious = 0.0; // default value
    m_ChromAberPowerXTarget = 0.0;

    m_ChromAberPowerYAccumulation = 0.0;
    m_ChromAberPowerYPrevious = 0.0; // default value
    m_ChromAberPowerYTarget = 0.0;
	}

  void SetCromaticAberration(float accumulationX, float accumulationY, float multiplierX, float multiplierY, string logTag="")
  { //0.002 is a good value?
    m_ChromAberPowerXAccumulation += (accumulationX * 0.1);
    m_ChromAberPowerYAccumulation += (accumulationY * 0.1);

    m_ChromAberPowerXTarget = FadeInOut(m_ChromAberPowerXAccumulation) * multiplierX;
    m_ChromAberPowerYTarget = FadeInOut(m_ChromAberPowerYAccumulation) * multiplierY;

    // no need to translate to a new range because chromatic ber can be a 0 value without causing much issue
    float smoothedNextChromaXStep = StepTowardsTarget(m_ChromAberPowerXPrevious, m_ChromAberPowerXTarget, 0.1);
    float smoothedNextChromaYStep = StepTowardsTarget(m_ChromAberPowerYPrevious, m_ChromAberPowerYTarget, 0.1);

    float clampedNextChromaXStep = Math.Min(5.0, Math.Max(0.0, smoothedNextChromaXStep));
    float clampedNextChromaYStep = Math.Min(5.0, Math.Max(0.0, smoothedNextChromaYStep));

    SetTargetValueFloat(PostProcessEffectType.ChromAber,PPEChromAber.PARAM_POWERX,false,clampedNextChromaXStep,PPEChromAber.L_0_INTRO,PPOperators.SET);
		SetTargetValueFloat(PostProcessEffectType.ChromAber,PPEChromAber.PARAM_POWERY,false,clampedNextChromaYStep,PPEChromAber.L_1_INTRO,PPOperators.SET);

    m_ChromAberPowerXPrevious = clampedNextChromaXStep;
    m_ChromAberPowerYPrevious = clampedNextChromaYStep;
  }

  // accumulation moves between 0 and 1, fades in and out of max values
	void SetGlowSaturation(float accumulation, float multiplier, string logTag="")
	{
    // increment the accumulation of effect
    m_SaturationAccumulation += (accumulation * 0.1); //general 90% speed reduction
    
    // lerp the accumulation between 0 and 1
    float currentFade = FadeInOut(m_SaturationAccumulation) * multiplier;

    // translate the 0 to 1 values to the current drug min and max AND give us back a relative value based on the current drug.
    m_SaturationTarget = TranslateToNewRange(currentFade, 1.0, 5.0);

    // smooth our effects so we step towards the target instead of directly setting it. This allows competing effects to influence the outcome
    float smoothedNextSaturationStep = StepTowardsTarget(m_SaturationPrevious, m_SaturationTarget, 0.1);

    // pick the smaller of the two values, max current drug or next step in effects. this should ensure we never get out of bounds max
    // pick the larger of the two values, min current drug or next step in effects. this should ensure we never get out of bounds min
    float clampedNextSaturationStep = Math.Min(5.0, Math.Max(1.0, smoothedNextSaturationStep));

    // Print("Log: " + logTag + " Acu: " + m_SaturationAccumulation + " Fad: "+ currentFade + " Nex: " + m_SaturationTarget + "Smo: " + smoothedNextSaturationStep + " Ne1: " + clampedNextSaturationStep);    
    SetTargetValueFloat(PostProcessEffectType.Glow,PPEGlow.PARAM_SATURATION,false,clampedNextSaturationStep,PPEGlow.L_22_BLOODLOSS,PPOperators.SET);
    // set the previous to the current
    m_SaturationPrevious = clampedNextSaturationStep;
	}

  void SetRadialBlur(float accumulationX, float accumulationY, float multiplierX, float multiplierY, float pixelScale, string logTag="")
  {
    m_BlurPowerXAccumulation += (accumulationX * 0.1);
    m_BlurPowerYAccumulation += (accumulationY * 0.1);

    m_BlurPowerXTarget = FadeInOut(m_BlurPowerXAccumulation) * multiplierX;
    m_BlurPowerYTarget = FadeInOut(m_BlurPowerYAccumulation) * multiplierY;

    // no need to translate to a new range because blur can be a 0 value without causing much issue
    float smoothedNextBlurXStep = StepTowardsTarget(m_BlurPowerXPrevious, m_BlurPowerXTarget, 0.1);
    float smoothedNextBlurYStep = StepTowardsTarget(m_BlurPowerYPrevious, m_BlurPowerYTarget, 0.1);

    float clampedNextBlurXStep = Math.Min(5.0, Math.Max(0.0, smoothedNextBlurXStep));
    float clampedNextBlurYStep = Math.Min(5.0, Math.Max(0.0, smoothedNextBlurYStep));

    // Print("BXTar: " + m_BlurPowerXTarget + " BYTar: " + m_BlurPowerYTarget + " BXSmo: " + smoothedNextBlurXStep + " BYSmo: " + smoothedNextBlurYStep + " BXCla: " + clampedNextBlurXStep + " BYCla:" + clampedNextBlurYStep);

		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_POWERX,false,clampedNextBlurXStep, PPERadialBlur.L_0_PAIN_BLUR ,PPOperators.SET);
		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_POWERY,false,clampedNextBlurYStep, PPERadialBlur.L_0_PAIN_BLUR,PPOperators.SET);

		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_PIXELSCALE,false,m_BlurPixelScale,PPERadialBlur.L_0_PAIN_BLUR ,PPOperators.SET);

    m_BlurPowerXPrevious = clampedNextBlurXStep;
    m_BlurPowerYPrevious = clampedNextBlurYStep;
  }

  void SetRadialBlurOffset(float accumulationX, float accumulationY, float multiplierX, float multiplierY, string logTag="")
  {
    m_BlurOffsetXAccumulation += (accumulationX * 0.1);
    m_BlurOffsetYAccumulation += (accumulationY * 0.1);

    m_BlurOffsetXTarget = FadeInOut(m_BlurOffsetXAccumulation) * multiplierX;
    m_BlurOffsetYTarget = FadeInOut(m_BlurOffsetYAccumulation) * multiplierY;

    // no need to translate to a new range because blur can be a 0 value without causing much issue
    float smoothedNextBlurXStep = StepTowardsTarget(m_BlurOffsetXPrevious, m_BlurOffsetXTarget, 0.1);
    float smoothedNextBlurYStep = StepTowardsTarget(m_BlurOffsetYPrevious, m_BlurOffsetYTarget, 0.1);

    float clampedNextBlurXStep = Math.Min(5.0, Math.Max(0.0, smoothedNextBlurXStep));
    float clampedNextBlurYStep = Math.Min(5.0, Math.Max(0.0, smoothedNextBlurYStep));

    SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_OFFSETX,false,clampedNextBlurXStep, PPERadialBlur.L_0_PAIN_BLUR,PPOperators.SET);
		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_OFFSETY,false,clampedNextBlurYStep, PPERadialBlur.L_0_PAIN_BLUR,PPOperators.SET);

    m_BlurOffsetXPrevious = clampedNextBlurXStep;
    m_BlurOffsetYPrevious = clampedNextBlurYStep;
  }

  // ============================= HELPER FUNCTIONS
  protected float FadeInOut(float accumulator)
	{
		float output;
    // take the absolute value because we want a nice parabolic function with no negatives 0->1->0->1
    output = Math.Lerp( 0, 1, Math.AbsFloat(Math.Sin(accumulator)) );
		Easing.EaseInOutSine( output );
		return output;
	}

  // step needs to be between 0 and 1
  protected float StepTowardsTarget(float start, float end, float step)
  {
		float output;
    output = Math.Lerp( start, end, step );
		return output;
  }

  protected float TranslateToNewRange(float input, float newMin, float newMax, float oldMin = 0, float oldMax = 1)
  {
    return ( (input - oldMin)/(oldMax-oldMin) ) * (newMax - newMin) + newMin;
  }
};
