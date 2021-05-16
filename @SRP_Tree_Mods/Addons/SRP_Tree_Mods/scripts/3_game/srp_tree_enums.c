enum SRP_eModifiers
{
  MDF_TEST = 419,
  MDF_STONED = 420, //finished
  MDF_TOBACCO = 421,//finished
  MDF_ACIDSMILE = 422,   // finished
  MDF_ACIDSKULL = 423,   // finished
  MDF_MUSHROOMS = 424,
  MDF_METH = 425, //finished
  MDF_COCAINE = 426,
  MDF_PCP = 427,
  MDF_HEROINE = 428,
  MDF_ALCOHOL = 429, // 
  MDF_BATHSALTS = 430, // finished

  MDF_SLEEP = 431,
  MDF_BIOHAZARD = 432,
}

// // BEWARE, ALL NUMBERS 2 RAISED TO THE POWER OF 0 - 32, MAX 32 INDIVIDUAL AGENTS, MUST MATCH CONFIG-SIDE AGENT CONFIGURATION
// enum eAgents
// {
// 	//agent list
// 	CHOLERA 		= 1;
// 	INFLUENZA 		= 2;
// 	SALMONELLA		= 4;
// 	BRAIN 			= 8;
// 	FOOD_POISON		= 16;
// 	CHEMICAL_POISON	= 32;
// 	WOUND_AGENT		= 64;
// 	NERVE_AGENT		= 128;
// }

// enum EStatLevels
// {
// 	GREAT,
// 	HIGH,
// 	MEDIUM,
// 	LOW,
// 	CRITICAL,
// }
enum SRP_Medical_Agents
{
  SLEEP_AGENT = 512,
  BIOHAZARD_AGENT = 1024,
}