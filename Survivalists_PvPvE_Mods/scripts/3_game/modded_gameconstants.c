modded class PlayerConstants
{ 
	static const float DIGESTION_SPEED							= 0.5;	//quantity processed in the stomach per second

	static const float BLOOD_REGEN_RATE_PER_SEC				= 10; 	// default .3
	
	static const float SALINE_BLOOD_REGEN_PER_SEC			= 10;	// default 3		

	static const float HEALTH_REGEN_MIN						= 0.5;		// defgault 0.03
	static const float HEALTH_REGEN_MAX						= 5;		// defgault 0.03
	
	static const float LEG_HEALTH_REGEN_BROKEN				= 25;		// default 0.18
  
	static const float SHOCK_REFILl_UNCONSCIOUS_SPEED		= 25;		//shock refill speed when the player is unconscious


	
	static const float METABOLIC_SPEED_ENERGY_WALK		= 0.1;		//energy loss per second
	static const float METABOLIC_SPEED_ENERGY_JOG		= 0.1;		//energy loss per second
	static const float METABOLIC_SPEED_ENERGY_SPRINT	= 0.1;		//energy loss per second
	
	static const float METABOLIC_SPEED_WATER_BASAL		= 0.01;		//water loss per second while idle
	
	static const float METABOLIC_SPEED_WATER_WALK		= 0.1;		//water loss per second
	static const float METABOLIC_SPEED_WATER_JOG		= 0.1;		//water loss per second
	static const float METABOLIC_SPEED_WATER_SPRINT		= 0.1;		//water loss per second
	//--------------------------------------------------------

}

modded class GameConstants
{
	const float STAMINA_SYNC_RATE = 1; //in secs
			
	const int	STAMINA_DRAIN_STANDING_SPRINT_PER_SEC = 1; //in units (how much sprint depletes stamina)
	const int	STAMINA_DRAIN_CROUCHED_SPRINT_PER_SEC = 1; //in units (how much sprint in crouch depletes stamina)
	const int STAMINA_DRAIN_PRONE_SPRINT_PER_SEC = 1; //in units (how much sprint in prone depletes stamina)
	const int	STAMINA_DRAIN_SWIM_FAST_PER_SEC = 1; //in units (how much fast swimming depletes stamina)
	const int	STAMINA_DRAIN_LADDER_FAST_PER_SEC = 1; //in units (how much fast ladder climb depletes stamina)
	
	const float	STAMINA_DRAIN_HOLD_BREATH_START = 0.2; //in units (how much holding breath depletes stamina at the start)
	const float	STAMINA_DRAIN_HOLD_BREATH_END = 1.0; //in units (how much holding breath depletes stamina at the end)
	const float	STAMINA_DRAIN_JUMP = 25;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_VAULT = 20;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_CLIMB = 35;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_MELEE_LIGHT = 5; //in units (how much light melee punch depletes stamina)
	const float	STAMINA_DRAIN_MELEE_HEAVY = 15; //in units (how much heavy melee punch depletes stamina)
	const float	STAMINA_DRAIN_MELEE_EVADE = 8; // in units (how much evade depletes stamina)
	const float	STAMINA_DRAIN_ROLL = 5; // in units (how much roll depletes stamina)
	
	const float STAMINA_DRAIN_HOLD_BREATH_DURATION = 2.0; //in seconds, time it takes to increase stamina drain from STAMINA_DRAIN_HOLD_BREATH_START to STAMINA_DRAIN_HOLD_BREATH_END
	const float	STAMINA_DRAIN_HOLD_BREATH_EXPONENT = 2.5; //holding breath exponent
	
	const int STAMINA_GAIN_JOG_PER_SEC = 2; //in units (how much of stamina units is gained while jogging)
	const int STAMINA_GAIN_WALK_PER_SEC = 4; //in units (how much of stamina units is gained while walking)
	const int STAMINA_GAIN_IDLE_PER_SEC = 5; //in units (how much of stamina units is gained while iddling)
	const int	STAMINA_GAIN_SWIM_PER_SEC = 1; //in units (how much of stamina units is gained while slowly swim)
	const int	STAMINA_GAIN_LADDER_PER_SEC = 1; //in units (how much of stamina units is gained while slowly swim)
	const int	STAMINA_GAIN_ROLL_PER_SEC = 0; //in units (how much of stamina units is gained while rolling)
	const float STAMINA_GAIN_BONUS_CAP = 3.0; //in units (tells how much extra units can be added at best to stamina regain)
	
	const float STAMINA_KG_TO_STAMINAPERCENT_PENALTY = 0; //in units (by how many  units is max stamina bar reduced for each 1 kg of load weight)
	const float STAMINA_MIN_CAP = 25; //in units (overload won't reduce max stamina bar under this value)
	const float STAMINA_HOLD_BREATH_THRESHOLD_ACTIVATE = 8; // in units
	const float STAMINA_JUMP_THRESHOLD = 25; // in units
	const float STAMINA_VAULT_THRESHOLD = 20; // in units
	const float STAMINA_CLIMB_THRESHOLD = 35; // in units
	const float STAMINA_ROLL_THRESHOLD = 5; // in units
	
	const float STAMINA_MELEE_HEAVY_THRESHOLD = STAMINA_DRAIN_MELEE_HEAVY; // in units (how many units we need to make a heavy hit in melee)
	const float STAMINA_MELEE_EVADE_THRESHOLD = 8; // in units
	const float STAMINA_REGEN_COOLDOWN_DEPLETION = 2.5; // in secs (how much time we will spend in cooldown before the stamina will starts with regeneration)
	const float STAMINA_MAX = 200;

	// const int REFRESHER_MAX_DURATION_DEFAULT		= 3600 * 24 * 6; 	//max duration of refresher in seconds - 6 days (+ 2 days final refresh )
	// const int REFRESHER_FREQUENCY_DEFAULT 			= 3600 * 24 * 2;	//frequency of lifetime refreshes/refresher time decreases - 2 days 
	// const float REFRESHER_RADIUS 					= 80; 				//meters
		
  // const float FIRE_ATTACHMENT_DAMAGE_PER_SECOND 		= 0.016;		// default 0.125
}