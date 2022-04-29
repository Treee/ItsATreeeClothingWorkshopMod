const int NTFKEY_SRP_TIREDNESS  = 42;

modded class PlayerConstants
{ 
  static const float BAREFOOT_MOVEMENT_BLEED_MODIFIER = 0.1;
  static const int CHECK_EVERY_N_STEP = 100;
	static const float SHOES_MOVEMENT_DAMAGE_PER_STEP = 0.035;

	static const float BLOOD_REGEN_RATE_PER_SEC				= 0.2; 	// default .3
	static const float DAMAGE_ZONE_BLOOD_REGEN_MODIFIER 	= 0.5; //default 0.7

	static const float BLOOD_REGEN_MODIFIER_ENERGY_HIGH		= 0.75; // default 1
	
	static const float BLOOD_REGEN_MODIFIER_WATER_HIGH		= 0.75; //default 1
	
	static const float SALINE_BLOOD_REGEN_PER_SEC			= 1.5;	// default 3		

	static const float HEALTH_REGEN_MAX						= 0.015;		// defgault 0.03
	
	static const float LEG_HEALTH_REGEN						= 0.5;		// default 1
	static const float LEG_HEALTH_REGEN_BROKEN				= 0.03;		// default 0.18

}

modded class GameConstants
{
  const int UI_SRP_CUSTOM_MENU_GUICrafting  = 8764336;

	const float STAMINA_SYNC_RATE = 1; //in secs
			
	const int REFRESHER_MAX_DURATION_DEFAULT		= 3600 * 24 * 10; 	//max duration of refresher in seconds - 40 days (+ 5 days final refresh )
	const int REFRESHER_FREQUENCY_DEFAULT 			= 3600 * 24 * 5;	//frequency of lifetime refreshes/refresher time decreases - 5 days 
	const float REFRESHER_RADIUS 					= 80; 				//meters
	
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