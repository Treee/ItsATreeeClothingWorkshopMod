modded class GameConstants
{
	/**
	 * \defgroup Configurations for StaminaHandler class
	 * \desc Configurations for StaminaHandler class
	 * @{
	 */
		// unit = currently percent (stamina max is 100)
  const int UI_SRP_CUSTOM_MENU_GUICrafting  = 8764336;

	const int 	STAMINA_DRAIN_STANDING_SPRINT_PER_SEC = 4; //in units (how much sprint depletes stamina)
	const int 	STAMINA_DRAIN_CROUCHED_SPRINT_PER_SEC = 1; //in units (how much sprint in crouch depletes stamina)
	const int 	STAMINA_DRAIN_PRONE_SPRINT_PER_SEC = 3; //in units (how much sprint in prone depletes stamina)
	const int	STAMINA_DRAIN_SWIM_FAST_PER_SEC = 5; //in units (how much fast swimming depletes stamina)
	const int	STAMINA_DRAIN_LADDER_FAST_PER_SEC = 8; //in units (how much fast ladder climb depletes stamina)
	
	const float	STAMINA_DRAIN_HOLD_BREATH_START = 0.2; //in units (how much holding breath depletes stamina at the start)
	const float	STAMINA_DRAIN_HOLD_BREATH_END = 1.0; //in units (how much holding breath depletes stamina at the end)
	const float	STAMINA_DRAIN_JUMP = 25;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_VAULT = 20;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_CLIMB = 42;		// in units (how much jumping depletes stamina)
	const float	STAMINA_DRAIN_MELEE_LIGHT = 5; //in units (how much light melee punch depletes stamina)
	const float	STAMINA_DRAIN_MELEE_HEAVY = 25; //in units (how much heavy melee punch depletes stamina)
	const float	STAMINA_DRAIN_MELEE_EVADE = 8; // in units (how much evade depletes stamina)
	const float	STAMINA_DRAIN_ROLL = 5; // in units (how much roll depletes stamina)
	
	const float STAMINA_DRAIN_HOLD_BREATH_DURATION = 5.0; //in seconds, time it takes to increase stamina drain from STAMINA_DRAIN_HOLD_BREATH_START to STAMINA_DRAIN_HOLD_BREATH_END
	const float	STAMINA_DRAIN_HOLD_BREATH_EXPONENT = 4.0; //holding breath exponent
	
	const int 	STAMINA_GAIN_JOG_PER_SEC = 2; //in units (how much of stamina units is gained while jogging)
	const int 	STAMINA_GAIN_WALK_PER_SEC = 4; //in units (how much of stamina units is gained while walking)
	const int 	STAMINA_GAIN_IDLE_PER_SEC = 5; //in units (how much of stamina units is gained while iddling)
	const int	STAMINA_GAIN_SWIM_PER_SEC = 1; //in units (how much of stamina units is gained while slowly swim)
	const int	STAMINA_GAIN_LADDER_PER_SEC = 1; //in units (how much of stamina units is gained while slowly swim)
	const int	STAMINA_GAIN_ROLL_PER_SEC = 0; //in units (how much of stamina units is gained while rolling)
	const float STAMINA_GAIN_BONUS_CAP = 3.0; //in units (tells how much extra units can be added at best to stamina regain)
	
	const float STAMINA_KG_TO_STAMINAPERCENT_PENALTY = 1.75; //in units (by how many  units is max stamina bar reduced for each 1 kg of load weight)
	const float STAMINA_MIN_CAP = 5; //in units (overload won't reduce max stamina bar under this value)
	const float STAMINA_HOLD_BREATH_THRESHOLD_ACTIVATE = 10; // in units
	const float STAMINA_HOLD_BREATH_THRESHOLD_DRAIN = 0; // in units
	const float STAMINA_JUMP_THRESHOLD = 25; // in units
	const float STAMINA_VAULT_THRESHOLD = 20; // in units
	const float STAMINA_CLIMB_THRESHOLD = 42; // in units
	const float STAMINA_ROLL_THRESHOLD = 5; // in units
	
	
	const float STAMINA_MELEE_HEAVY_THRESHOLD = STAMINA_DRAIN_MELEE_HEAVY; // in units (how many units we need to make a heavy hit in melee)
	const float STAMINA_MELEE_EVADE_THRESHOLD = 8; // in units
	const float STAMINA_REGEN_COOLDOWN_DEPLETION = 0.45; // in secs (how much time we will spend in cooldown before the stamina will starts with regeneration)
	const float STAMINA_REGEN_COOLDOWN_EXHAUSTION = 0.5;
	const float STAMINA_WEIGHT_LIMIT_THRESHOLD = 6000; //! in grams (weight where the player is not penalized by stamina)
	const float STAMINA_KG_TO_GRAMS = 1000; //for kg to g conversion
	const float STAMINA_SYNC_RATE = 1; //in secs
	const float STAMINA_MAX = 100;
	/** @}*/
	
	/**
	 * \defgroup Configurations for Environment class
	 * \desc Configurations for Environment class
	 * @{
	 */
	const float ENVIRO_TICK_RATE 						= 2;		//! in secs. how often should enviro effet process
	const float	ENVIRO_TICKS_TO_WETNESS_CALCULATION 	= 2;	  	//! each X (ticks) is processed wetness on items on player
	const float ENVIRO_TICK_ROOF_RC_CHECK 				= 10;	  	//! in secs. how often we should check if player is under the roof (raycast)
	const float ENVIRO_WET_INCREMENT 					= 0.01;	  	//! amount of wetness added to items wet value each tick if is raining
	const float ENVIRO_DRY_INCREMENT 					= 0.00005; 	//! amount of wetness subtracted from items wet value each tick if is not raining due to player heat
	const float ENVIRO_SUN_INCREMENT 					= 0.002;	//! (not used) amount of wetness subtracted from items wet value each tick if is not raining due to sun
	const float ENVIRO_FIRE_INCREMENT					= 23.5;		//! how much is the generic temp effect increased when player is next to a fireplace
	const float ENVIRO_CLOUD_DRY_EFFECT 				= 0.7;		//! how many % of ENVIRO_SUN_INCREMENT is reduced by cloudy sky
	const float ENVIRO_FOG_DRY_EFFECT 					= 0.9;		//! how many % of ENVIRO_SUN_INCREMENT is reduced by fog
	const float ENVIRO_CLOUDS_TEMP_EFFECT 				= 0.35;		//! how many % of environment temperature can be lowered by clouds
	const float ENVIRO_FOG_TEMP_EFFECT 					= 0.24;		//! how many % of environment temperature can be lowered by fog
	const float ENVIRO_WET_PENALTY 						= 0.5;		//! at which state of item wetness (0-1) will heat isolation start having negative effect on heat comfort of item
	const float ENVIRO_WET_PASSTHROUGH_COEF 			= 0.1;		//! how many times slower is wetting/drying items in backpacks
	const float ENVIRO_ITEM_HEAT_TRANSFER_COEF 			= 0.01;		//! converts temperature of items to entities heatcomfort gain
	const float ENVIRO_WATER_TEMPERATURE_COEF 			= 1.5;		//! how many time is water colder than air
	const float ENVIRO_DEFAULT_ENTITY_HEAT 				= 2.5;		//! heat entity generates if not moving
	const float ENVIRO_TEMPERATURE_HEIGHT_REDUCTION 	= 0.02;		//! amount of ?C reduced for each 100 meteres of height above water level
	const float ENVIRO_TEMPERATURE_INSIDE_COEF 			= 0.085;	//! increases temp in interiors
	const float ENVIRO_TEMPERATURE_UNDERROOF_COEF		= 0.072;
	const float ENVIRO_TEMPERATURE_WIND_COEF			= 8.5;		//! windchill effect on base temperature
	const float ENVIRO_WIND_EFFECT 						= 0.25;		//! amount of % wind affect drying/wetting
	const float ENVIRO_HIGH_NOON 						= 12;		//! when is sun highest on sky
	
	const float ENVIRO_HEATCOMFORT_HEADPARTS_WEIGHT		= 0.3;		//! how much this head parts (clothing) affects final heatcomfort
	const float ENVIRO_HEATCOMFORT_BODYPARTS_WEIGHT		= 1.0;		//! how much this body parts (clothing) affects final heatcomfort
	const float ENVIRO_HEATCOMFORT_FEETPARTS_WEIGHT		= 0.5;		//! how much this feet parts (clothing) affects final heatcomfort
	const float ENVIRO_HEATISOLATION_BACK_WEIGHT		= 0.45;		//! weight of back for the sum of heat isolation
	const float ENVIRO_HEATISOLATION_VEST_WEIGHT		= 0.64;		//! weight of vest for the sum of heat isolation
	const float ENVIRO_LOW_TEMP_LIMIT					= -40;		//! lowest temperature(deg Celsius) where the player gets lowest possible heat comfort (-1)
	const float ENVIRO_HIGH_TEMP_LIMIT					= 50;		//! highest temperature(deg Celsius) where the player gets highest possible heat comfort (1)
	const float ENVIRO_PLAYER_COMFORT_TEMP				= 26;		//! comfort temperature of environment for the player
	const float ENVIRO_TEMP_EFFECT_ON_PLAYER			= 60;		//! impact of enviro temperature on player (lower value = higher, cannot be zero or below!)
	const float ENVIRO_PLAYER_HEATBUFFER_DECREASE		= 0.34;		//! Multiplier of enviro temperature for heat buffer decrease (after its static timer runs out)
	const float ENVIRO_PLAYER_HEATBUFFER_INCREASE		= 0.51;		//! How much heat buffer increases per one enviro tick
	const float ENVIRO_PLAYER_HEATBUFFER_TICK			= 0.011;	//! Heat buffer static timer tick (set for 2s enviro tick, 180s to 1.0)
	
	//! impact of item wetness to the heat isolation
	const float ENVIRO_ISOLATION_WETFACTOR_DRY			= 1.0;
	const float ENVIRO_ISOLATION_WETFACTOR_DAMP			= 0.9;
	const float ENVIRO_ISOLATION_WETFACTOR_WET			= 0.75;
	const float ENVIRO_ISOLATION_WETFACTOR_SOAKED		= 0.5;
	const float ENVIRO_ISOLATION_WETFACTOR_DRENCHED 	= 0.0;
	//! impact of item health (state) to the heat isolation
	const float ENVIRO_ISOLATION_HEALTHFACTOR_PRISTINE  = 1.0;
	const float ENVIRO_ISOLATION_HEALTHFACTOR_WORN		= 0.9;
	const float ENVIRO_ISOLATION_HEALTHFACTOR_DAMAGED	= 0.8;
	const float ENVIRO_ISOLATION_HEALTHFACTOR_B_DAMAGED = 0.5;
	const float ENVIRO_ISOLATION_HEALTHFACTOR_RUINED  	= 0.0;
	/** @}*/
	
	/**
	 * \defgroup Cars Fluids 
	 * \desc Constants for car fluids
	 * @{
	 */
	const int CARS_FLUIDS_TICK 		= 1;
	const int CARS_LEAK_TICK_MIN 	= 0.02;
	const int CARS_LEAK_TICK_MAX 	= 0.05;
	const int CARS_LEAK_THRESHOLD	= 0.5;
	/** @}*/
	
	/**
	 * \defgroup Item Health States (ItemBase.GetHealthLevel)
	 * \desc Constants for Item Health States
	 * @{
	 */
	const int STATE_RUINED 		 	= 4;
	const int STATE_BADLY_DAMAGED 	= 3;
	const int STATE_DAMAGED 	  	= 2;
	const int STATE_WORN 		  	= 1;
	const int STATE_PRISTINE 	  	= 0;
	/** @}*/
	
	/**
	 * \defgroup Item Damage Relative Values (ItemBase.GetHealth01)
	 * \desc Constants for relative Item Health handling
	 * @{
	 */
	const float DAMAGE_PRISTINE_VALUE 		= 1.0;
	const float DAMAGE_WORN_VALUE 			= 0.7;
	const float DAMAGE_DAMAGED_VALUE 		= 0.5;
	const float DAMAGE_BADLY_DAMAGED_VALUE 	= 0.3;
	const float DAMAGE_RUINED_VALUE 		= 0.0;
	/** @}*/
	
	/**
	 * \defgroup Item Wetness States (ItemBase.GetWet)
	 * \desc Constants for Item Wetness States
	 * @{
	 */
	const float STATE_DRENCHED		= 0.8;
	const float STATE_SOAKING_WET	= 0.5;
	const float STATE_WET			= 0.25;
	const float STATE_DAMP			= 0.05;
	const float STATE_DRY			= 0;
	/** @}*/
	
	const float WETNESS_RATE_WETTING_INSIDE = 0.0020;
	const float WETNESS_RATE_WETTING_LIQUID = 0.015;
	const float WETNESS_RATE_DRYING_INSIDE  = -0.0016;
	const float WETNESS_RATE_DRYING_GROUND  = -0.0008;
	
	const float TEMPERATURE_RATE_COOLING_INSIDE = -0.17;
	const float TEMPERATURE_RATE_COOLING_GROUND = -0.34;
	const float TEMPERATURE_RATE_COOLING_PLAYER = -0.35; // celsius per second
	
	const float HEATISO_THRESHOLD_BAD = 0.2;
	const float HEATISO_THRESHOLD_LOW = 0.4;
	const float HEATISO_THRESHOLD_MEDIUM = 0.6;
	const float HEATISO_THRESHOLD_HIGH = 0.8;
	
	/**
	 * \defgroup Barel related functions constants
	 * \desc Barel related functions constants
	 * @{
	 */
	const int BAREL_LIME_PER_PELT = 100; //grams per pelt 
	const int BAREL_BLEACH_PER_CLOTH = 50; //ml per item
	const float BAREL_LIME_PER_PLANT = 50; //grams per gram
	/** @}*/
	
	/**
	 * \defgroup FOV settings
	 * \desc Constats for setting of DayZPlayerCamera FOV
	 */
	
	//! FOV (vertical angle/2) in radians. Take care to modify also in "basicDefines.hpp"
	const float DZPLAYER_CAMERA_FOV_EYEZOOM		= 0.3926;	// 45deg
	const float DZPLAYER_CAMERA_FOV_IRONSIGHTS	= 0.5236;	// 60deg
	
	const string DEFAULT_CHARACTER_NAME = "#str_cfgvehicles_survivor0"; //experiment, used to be "Survivor"
	
	const int DEFAULT_CHARACTER_MENU_ID = -1;
	
	const float CLEAN_UNRESTRAIN_DAMAGE = 10;
	
	//! Camera shake
	const int CAMERA_SHAKE_GRENADE_DISTANCE = 40;
	
	//! Wood mining GameConstants, scaled by output. Should not be lower than ~1.5s!
	const float MINING_WOOD_FAST = 2.0;
	const float MINING_WOOD_MEDIUM = 2.0;
	const float MINING_WOOD_SLOW = 3.0;
	
	//! Non-lethal projectile damage QuantityConversions
	const float PROJECTILE_CONVERSION_ANIMALS 	= 0.1;
	const float PROJECTILE_CONVERSION_INFECTED 	= 0.44;
	const float PROJECTILE_CONVERSION_PLAYERS 	= 0.1;
	
	const float ROOF_CHECK_RAYCAST_DIST = 20.0;
	
	/**
	 * \defgroup Lifetime Refresher functionality constants
	 * \desc Constats for lifetime refresher (radius, default lifetime, frequency...)
	 */
	const int REFRESHER_MAX_DURATION_DEFAULT		= 3600 * 24 * 10; 	//max duration of refresher in seconds - 40 days (+ 5 days final refresh )
	const int REFRESHER_FREQUENCY_DEFAULT 			= 3600 * 24 * 5;	//frequency of lifetime refreshes/refresher time decreases - 5 days 
	const float REFRESHER_RADIUS 					= 80; 				//meters
	// lifetime of refresher itself is in db (3600 * 24 * 7 = 604800 )
	
	/**
	 * \defgroup Food decay constants
	 * \desc Constants for decay of various types of food.
	 */
	const float DECAY_FOOD_RAW_MEAT = 21600;
	const float DECAY_FOOD_RAW_FRVG = 43200;
	const float DECAY_FOOD_BOILED_MEAT = 259200;
	const float DECAY_FOOD_BOILED_FRVG = 172800;
	const float DECAY_FOOD_BAKED_MEAT = 345600;
	const float DECAY_FOOD_BAKED_FRVG = 259200;
	const float DECAY_FOOD_DRIED_MEAT = 691200;
	const float DECAY_FOOD_CAN_OPEN = 172800;
	const int DECAY_FOOD_FRVG_DRIED_CHANCE = 43;
	const int DECAY_TIMER_RANDOM_PERCENTAGE = 25;
	const float DECAY_RATE_ON_PLAYER = 2.5;
	
	const int RESPAWN_MODE_CUSTOM = 0;
	const int RESPAWN_MODE_RANDOM = 1;
}