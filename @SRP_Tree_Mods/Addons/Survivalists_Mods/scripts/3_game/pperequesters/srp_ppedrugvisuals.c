// class PPERequester_DrugVisuals extends PPERequester_GameplayBase
// {
//   protected vector m_StartRGB = vector.Zero;
// 	protected float m_AccumulatedTime = 0;
// 	protected bool m_FadeIn = false;
// 	protected bool m_FadeOut = false;
	
// 	const float FADE_TIME = 10;
// 	// the end result is 1 - the value set here
// 	float R_TARGET = 0; // end value 0.858
// 	float G_TARGET = 0; // end value 0.850
// 	float B_TARGET = 0; // end value 0.560

//   override protected void OnStart( Param par = null )
//   {
// 		super.OnStart( par );
		
// 		m_AccumulatedTime = 0;

//     R_TARGET = Math.RandomFloat01();
//     G_TARGET = Math.RandomFloat01();
//     B_TARGET = Math.RandomFloat01();

// 		m_FadeIn = true;
// 		m_FadeOut = false;

//     // SetTargetValueColor(PostProcessEffectType.Glow,PPEGlow.PARAM_COLORIZATIONCOLOR,{1.0,0.2,0.0,0.0},PPEGlow.L_23_NVG,PPOperators.MULTIPLICATIVE);
//     // SetTargetValueFloat(PPEExceptions.EXPOSURE,PPEExposureNative.PARAM_INTENSITY,false,5.5,PPEExposureNative.L_0_NVG_GOGGLES,PPOperators.ADD);
//     // SetTargetValueFloatDefault(PostProcessEffectType.FilmGrain,PPEFilmGrain.PARAM_SHARPNESS);
//     // SetTargetValueFloatDefault(PostProcessEffectType.FilmGrain,PPEFilmGrain.PARAM_GRAINSIZE);
//     // SetTargetValueFloat(PPEExceptions.NVLIGHTPARAMS,PPELightIntensityParamsNative.PARAM_LIGHT_MULT,false,1.0,PPELightIntensityParamsNative.L_0_NVG,PPOperators.HIGHEST);
//     // SetTargetValueFloat(PPEExceptions.NVLIGHTPARAMS,PPELightIntensityParamsNative.PARAM_NOISE_MULT,false,0.0,PPELightIntensityParamsNative.L_1_NVG,PPOperators.HIGHEST);


// 		Print("PPERequester_DrugVisuals::OnStart");
//   }

//   override protected void OnUpdate( float delta )
// 	{
// 		// Print("PPERequester_DrugVisuals::OnUpdate" + delta);
// 		super.OnUpdate( delta );
// 		if ( m_FadeIn && m_AccumulatedTime <= FADE_TIME )
// 		{
// 			m_AccumulatedTime += delta;
// 			m_StartRGB[0] = 1 - FadeColourMult( 0, 1, m_AccumulatedTime / FADE_TIME ) * R_TARGET;
// 			m_StartRGB[1] = 1 - FadeColourMult( 0, 1, m_AccumulatedTime / FADE_TIME ) * G_TARGET;
// 			m_StartRGB[2] = 1 - FadeColourMult( 0, 1, m_AccumulatedTime / FADE_TIME ) * B_TARGET;
//       Print("fading in r: " +m_StartRGB[0] + " g: " +m_StartRGB[1] + " b: " +m_StartRGB[2]);
			
// 			// SetTargetValueColor(PostProcessEffectType.Glow,PPEGlow.PARAM_COLORIZATIONCOLOR,{m_StartRGB[0], m_StartRGB[1], m_StartRGB[2], 0.0},PPEGlow.L_23_TOXIC_TINT,PPOperators.ADD_RELATIVE);
// 			SetTargetValueColor(PostProcessEffectType.Glow,PPEGlow.PARAM_COLORIZATIONCOLOR,{1, 0, 0, 0.0},PPEGlow.L_23_TOXIC_TINT,PPOperators.ADD_RELATIVE);
//       SetTargetValueFloat(PostProcessEffectType.Glow,PPEGlow.PARAM_SATURATION,false,200,PPEGlow.L_23_TOXIC_TINT,PPOperators.ADD_RELATIVE);
// 		}
//     if ( m_FadeIn && m_AccumulatedTime >= FADE_TIME )
// 		{
//       m_FadeIn = false;
//       m_FadeOut = true;
//       m_AccumulatedTime = 0;
//     }
		
// 		if ( m_FadeOut && m_AccumulatedTime <= FADE_TIME )
// 		{
// 			m_AccumulatedTime += delta;
// 			m_StartRGB[0] = ( 1 - R_TARGET ) + FadeColourMult( 0, R_TARGET, m_AccumulatedTime / FADE_TIME );
// 			m_StartRGB[1] = ( 1 - G_TARGET ) + FadeColourMult( 0, G_TARGET, m_AccumulatedTime / FADE_TIME );
// 			m_StartRGB[2] = ( 1 - B_TARGET ) + FadeColourMult( 0, B_TARGET, m_AccumulatedTime / FADE_TIME );
//       Print("fading out r: " +m_StartRGB[0] + " g: " +m_StartRGB[1] + " b: " +m_StartRGB[2]);
			
// 			// SetTargetValueColor(PostProcessEffectType.Glow,PPEGlow.PARAM_COLORIZATIONCOLOR,{m_StartRGB[0], m_StartRGB[1], m_StartRGB[2], 0.0},PPEGlow.L_26_BURLAP,PPOperators.SET);
// 			SetTargetValueColor(PostProcessEffectType.Glow,PPEGlow.PARAM_COLORIZATIONCOLOR,{0, 0, 1, 0.0},PPEGlow.L_26_BURLAP,PPOperators.SET);
//       SetTargetValueFloat(PostProcessEffectType.Glow,PPEGlow.PARAM_SATURATION,false,200,PPEGlow.L_26_BURLAP,PPOperators.SET);
// 		}
//     if ( m_FadeOut && m_AccumulatedTime >= FADE_TIME )
// 		{
//       m_FadeIn = true;
//       m_FadeOut = false;
//       m_AccumulatedTime = 0;
//       R_TARGET = Math.RandomFloat01();
//       G_TARGET = Math.RandomFloat01();
//       B_TARGET = Math.RandomFloat01();
//     }
// 	}

//   override void OnStop(Param par = null)
// 	{
//     Print("PPERequester_DrugVisuals::OnStop");
// 		m_FadeIn = false;
// 		m_FadeOut = false;
// 		Param1<bool> p;
		
// 		if (par && Class.CastTo(p,par))
// 			m_FadeOut = p.param1;
		
// 		m_AccumulatedTime = 0;
//     R_TARGET = Math.RandomFloat01();
//     G_TARGET = Math.RandomFloat01();
//     B_TARGET = Math.RandomFloat01();

// 		super.OnStop(par);
// 	}
	
// 	// Lerped multiplier for RGBA values
// 	protected float FadeColourMult( float x, float y, float deltaT )
// 	{
// 		float output;
// 		output = Math.Lerp( x, y, deltaT );
// 		Easing.EaseInOutSine( output );
// 		return output;
// 	}

//   void SetVisual(float dt)
//   {
//     OnUpdate(dt);
//   }

// 	void SetRadialBlur(float power_x, float power_y, float offset_x, float offset_y, float pixel_scale = 0.5 )
// 	{
// 		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_POWERX,false,power_x, PPERadialBlur.L_0_PAIN_BLUR ,PPOperators.SET);
// 		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_POWERY,false,power_y, PPERadialBlur.L_0_PAIN_BLUR,PPOperators.SET);
// 		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_OFFSETX,false,offset_x, PPERadialBlur.L_0_PAIN_BLUR,PPOperators.SET);
// 		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_OFFSETY,false,offset_y, PPERadialBlur.L_0_PAIN_BLUR,PPOperators.SET);
// 		SetTargetValueFloat(PostProcessEffectType.RadialBlur,PPERadialBlur.PARAM_PIXELSCALE,false,pixel_scale,PPERadialBlur.L_0_PAIN_BLUR ,PPOperators.SET);
// 	}

// }
