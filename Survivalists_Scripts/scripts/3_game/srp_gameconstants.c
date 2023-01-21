modded class PlayerConstants
{ 
  static const float BAREFOOT_MOVEMENT_BLEED_MODIFIER = 0.005;
  static const int CHECK_EVERY_N_STEP = 500;
	static const float SHOES_MOVEMENT_DAMAGE_PER_STEP = 0.005;	

	static const float BLOOD_REGEN_RATE_PER_SEC				= 0.2; 	// default .3
	static const float DAMAGE_ZONE_BLOOD_REGEN_MODIFIER 	= 0.5; //default 0.7

	static const float BLOOD_REGEN_MODIFIER_ENERGY_HIGH		= 0.95; // default 1
	
	static const float BLOOD_REGEN_MODIFIER_WATER_HIGH		= 0.95; //default 1
	
	static const float SALINE_BLOOD_REGEN_PER_SEC			= 2.3;	// default 3		

	static const float HEALTH_REGEN_MAX						= 0.02;		// defgault 0.03
	
	static const float LEG_HEALTH_REGEN						= 0.75;		// default 1
	static const float LEG_HEALTH_REGEN_BROKEN				= 0.025;		// default 0.18

	static const float METABOLIC_SPEED_TIREDNESS_BASAL = 0.01;
  static const float METABOLIC_SPEED_TIREDNESS_WALK = 0.025;
  static const float METABOLIC_SPEED_TIREDNESS_JOG = 0.05;
  static const float METABOLIC_SPEED_TIREDNESS_SPRINT = 0.135;
  
  // reverse these values since 0 is fully awake 
  static const float SL_TIREDNESS_CRITICAL = 0; //sl = stat level
	static const float SL_TIREDNESS_LOW = 300;
	static const float SL_TIREDNESS_NORMAL = 800;
	static const float SL_TIREDNESS_HIGH = 3500;
	static const float SL_TIREDNESS_MAX = 5000;
  
  // reverse these values since 0 is fully sober
  static const float SL_ALCOHOLISM_CRITICAL = 0; //sl = stat level
	static const float SL_ALCOHOLISM_LOW = 300;
	static const float SL_ALCOHOLISM_NORMAL = 800;
	static const float SL_ALCOHOLISM_HIGH = 3500;
	static const float SL_ALCOHOLISM_MAX = 5000;

  // reverse these values since 0 is fully sober
  static const float SL_DRUGDEPENDENCY_CRITICAL = 0; //sl = stat level
	static const float SL_DRUGDEPENDENCY_LOW = 20;
	static const float SL_DRUGDEPENDENCY_NORMAL = 40;
	static const float SL_DRUGDEPENDENCY_HIGH = 60;
	static const float SL_DRUGDEPENDENCY_MAX = 100;

  static const float SL_SANITY_CRITICAL = 20; //sl = stat level
	static const float SL_SANITY_LOW = 40;
	static const float SL_SANITY_NORMAL = 60;
	static const float SL_SANITY_HIGH = 80;
	static const float SL_SANITY_MAX = 100;
}

modded class GameConstants
{
  const int UI_SRP_CUSTOM_MENU_GUICrafting  = 8764336;

	const float STAMINA_SYNC_RATE = 1; //in secs
  const int	STAMINA_DRAIN_STANDING_SPRINT_PER_SEC = 1; //4 is default in units (how much sprint depletes stamina)

	const int REFRESHER_MAX_DURATION_DEFAULT		= 3600 * 24 * 6; 	//max duration of refresher in seconds - 6 days (+ 2 days final refresh )
	const int REFRESHER_FREQUENCY_DEFAULT 			= 3600 * 24 * 2;	//frequency of lifetime refreshes/refresher time decreases - 2 days 
	const float REFRESHER_RADIUS 					= 80; 				//meters
		
  const float FIRE_ATTACHMENT_DAMAGE_PER_SECOND 		= 0.016;		// default 0.125

  const string DEFAULT_CHARACTER_NAME = "Survivor";
}

modded class EmoteConstants
{
  // const int ID_EMOTE_LYINGDOWN		= 5; this is default

  const int SRP_EMOTE_COUGH = 69;
	const int SRP_EMOTE_BLINDNESS = 70;
	const int SRP_EMOTE_BULLET_HIT = 71;
	const int SRP_EMOTE_BLEEDING_SOURCE = 72;
	const int SRP_EMOTE_BLOODLOSS = 73;
	const int SRP_EMOTE_SNEEZE = 74;
	const int SRP_EMOTE_FEVERBLUR = 75;
	const int SRP_EMOTE_LAUGHTER = 76;
	const int SRP_EMOTE_UNCONSCIOUS = 77;
	const int SRP_EMOTE_FREEZE = 78;
	const int SRP_EMOTE_HOT = 79;
  const int SRP_EMOTE_LEGBREAK = 80;
}