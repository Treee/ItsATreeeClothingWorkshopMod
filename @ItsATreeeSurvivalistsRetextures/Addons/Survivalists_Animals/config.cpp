class CfgPatches
{
	class Survivalists_Animals
	{
		units[]=
		{
			"Animal_BosTaurus",
      "Animal_BosTaurusF"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_AI",
      "DZ_Data"
		};
	};
};
class CfgAIBehaviours 
{
  class Herbivores_BosTaurus;

  class ItsATreee_Survivalists_Herbivores_BosTaurus : Herbivores_BosTaurus
  {
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		class PathAgent
		{
			radius=0.40000001;
			height=1.8;
		};
		class BehaviourHLDomestic
		{
			instantAlertRangeMin=10;
			instantAlertRangeMax=40;
			instantAlertStrength=9;
			agentPathLength=30;
			agentPathUpdateDelta=1;
			agentPathMinLength=2;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=50000000;
					grazeWalkingWeight=20;
					restWeight=50;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=120;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=120;
					restingDurationMin=60;
					restingDurationMax=180;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=1.2;
						minSpeed=0.60000002;
						acceleration=0.2;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20000000;
					grazeWalkingWeight=20;
					restWeight=10;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=120;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=120;
					restingDurationMin=60;
					restingDurationMax=180;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=1.2;
						minSpeed=0.60000002;
						acceleration=0.2;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=200000005;
					grazeWalkingWeight=25;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=50;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=50;
					restingDurationMin=20;
					restingDurationMax=25;
					travelingDurationMin=20;
					travelingDurationMax=40;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=10;
					class GrazeMovement
					{
						maxSpeed=0;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=1.2;
						minSpeed=0.60000002;
						acceleration=0.2;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=100000000;
					grazeWalkingWeight=10;
					restWeight=0;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=100;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=100;
					grazeWalkingDurationMax=100;
					restingDurationMin=200;
					restingDurationMax=200;
					travelingDurationMin=0;
					travelingDurationMax=0;
					drinkingDurationMin=150;
					drinkingDurationMax=150;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=3;
					class DrinkingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class GrazeMovement
					{
						maxSpeed=0;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=1.2;
						minSpeed=0.60000002;
						acceleration=0.2;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=0;
					stayLookAtWeight=0;
					stayWeight=1000;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=1;
					walkAwayDurationMin=6;
					walkAwayDurationMax=15;
					walkToDurationMin=6;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=2000;
					stayDurationMax=3000000;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.85000002;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.61000001;
					};
				};
			};
			class SlotSpecificThreat
			{
				class SlotEvents
				{
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_BosTaurusSlotSpec
						{
							repeatTimeMin=1;
							repeatTimeMax=6;
							class AlertImpulseActionRepeatAlert_BosTaurusSlotSpec
							{
								value=0;
								range=10;
							};
						};
					};
				};
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=0;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=15;
					walkAwayDurationMax=25;
					walkToDurationMin=20;
					walkToDurationMax=30;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=5;
					stayDurationMax=10;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.85000002;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.61000001;
					};
				};
			};
			class SlotAlerted
			{
				class SlotEvents
				{
					class EventsEntering
					{
						class OneTimeEventSendAlert_BosTaurusSlotAlert
						{
							class AlertImpulseActionSendAlert_BosTaurusSlotAlert
							{
								value=0;
								range=15;
							};
						};
					};
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_BosTaurusSlotAlert
						{
							repeatTimeMin=1;
							repeatTimeMax=3;
							class AlertImpulseActionRepeatAlert_BosTaurusSlotAlert
							{
								value=0;
								range=15;
							};
						};
					};
				};
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=0;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=0;
						optimalSpeedRange=0;
						acceleration=0;
						maxAngleSpeed=60;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.61000001;
					};
					class RunMovementInjured1
					{
						maxSpeed=1;
						optimalSpeed=1;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=5;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class RunMovementInjured2
					{
						maxSpeed=0.1;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=5;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=0;
				noiseToAlertMultiplier=0;
				noiseShotToAlertMultiplier=0;
				damageToAlertMultiplier=0;
				class Calm
				{
					dropSpeed=8;
					dropDelay=1;
					maxAlertValue=500000000;
				};
				class NonSpecificThreat
				{
					dropSpeed=8;
					dropDelay=2;
					maxAlertValue=70;
				};
				class SpecificThreat
				{
					dropSpeed=7;
					dropDelay=2;
					maxAlertValue=110;
				};
				class Alerted
				{
					dropSpeed=6;
					dropDelay=1;
					maxAlertValue=130;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=0;
			rangeShotMin=0;
			rangeShotMax=0;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0;//1;
				Zombies=1;
				Player=0;//1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0;//0.80000001;
				Zombies=1;
				Player=0; // 1
			};
			visionManSizeStand=0;//1;
			visionManSizeCrouch=0;//0.80000001;
			visionManSizeProne=0;//0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=5;
			visionRangeMin=0;
			visionRangeMax=0;
			visionFov=1.6;
			visionPeripheralRangeMin=0;
			visionPeripheralRangeMax=0;
			visionPeripheralFov=6.2800002;
			visionNightMinMult=1;
			visionNightMaxMult=1;
			visionRainMinMult=1;
			visionRainMaxMult=1;
			visionFogMinMult=1;
			visionFogMaxMult=1;
		};
	};
};
class CfgVehicles
{
	class Animal_BosTaurus;
  class Animal_BosTaurusF;
  
  class ItsATreee_Survivalist_Animal_BosTaurus_Brown: Animal_BosTaurus
	{
		scope=2;
    displayName = "Brown Bull";
    descriptionShort = "A bull with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
      "Survivalists_Animals\data\survivalists_bull_brown_co.paa",
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus\data\bull_brown.rvmat"
		};
	};
  class ItsATreee_Survivalist_Stencil_Animal_BosTaurus_Brown: Animal_BosTaurus
	{
		scope=2;
    displayName = "Brown Bull";
    descriptionShort = "A bull with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
      "Survivalists_Animals\data\survivalists_bull_brown_co_stencil.paa",
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus\data\bull_brown.rvmat"
		};
	};
  class ItsATreee_Survivalist_Stencil_LOL_Animal_BosTaurus_Brown: Animal_BosTaurus
	{
		scope=2;
    displayName = "Brown Bull";
    descriptionShort = "A bull with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
      "Survivalists_Animals\data\survivalists_bull_brown_co_stencil_lol.paa",
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus\data\bull_brown.rvmat"
		};
	};
	class ItsATreee_Survivalists_Animal_BosTaurus_White: Animal_BosTaurus
	{
		scope=2;
    displayName = "White Bull";
    descriptionShort = "A bull with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Animals\data\survivalists_bull_white_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus\data\bull_white.rvmat"
		};
	};
  class ItsATreee_Survivalists_Stencil_Animal_BosTaurus_White: Animal_BosTaurus
	{
		scope=2;
    displayName = "White Bull";
    descriptionShort = "A bull with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Animals\data\survivalists_bull_white_co_stencil.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus\data\bull_white.rvmat"
		};
	};
	class ItsATreee_Survivalists_Animal_BosTaurus_Spotted: Animal_BosTaurus
	{
		scope=2;
    displayName = "Spotted Bull";
    descriptionShort = "A bull with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Animals\data\survivalists_bull_spotted_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus\data\bull_spotted.rvmat"
		};
	};
  class ItsATreee_Survivalists_Stencil_Animal_BosTaurus_Spotted: Animal_BosTaurus
	{
		scope=2;
    displayName = "Spotted Bull";
    descriptionShort = "A bull with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Animals\data\survivalists_bull_spotted_co_stencil.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus\data\bull_spotted.rvmat"
		};
	};
  class ItsATreee_Survivalist_Animal_BosTaurusF_Brown: Animal_BosTaurusF
	{
		scope=2;
    displayName = "Brown Cow";
    descriptionShort = "A cow with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
      "Survivalists_Animals\data\survivalists_cow_brown_co.paa",
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus_fem\data\cow_brown.rvmat"
		};
	};
  class ItsATreee_Survivalist_Stencil_Animal_BosTaurusF_Brown: Animal_BosTaurusF
	{
		scope=2;
    displayName = "Brown Cow";
    descriptionShort = "A cow with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
      "Survivalists_Animals\data\survivalists_cow_brown_co_stencil.paa",
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus_fem\data\cow_brown.rvmat"
		};
	};
	class ItsATreee_Survivalists_Animal_BosTaurusF_White: Animal_BosTaurusF
	{
		scope=2;
    displayName = "White Cow";
    descriptionShort = "A cow with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Animals\data\survivalists_cow_white_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus_fem\data\cow_white.rvmat"
		};
	};
  class ItsATreee_Survivalists_Stencil_Animal_BosTaurusF_White: Animal_BosTaurusF
	{
		scope=2;
    displayName = "White Cow";
    descriptionShort = "A cow with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Animals\data\survivalists_cow_white_co_stencil.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus_fem\data\cow_white.rvmat"
		};
	};  
	class ItsATreee_Survivalists_Animal_BosTaurusF_Spotted: Animal_BosTaurusF
	{
		scope=2;
    displayName = "Spotted Cow";
    descriptionShort = "A cow with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Animals\data\survivalists_cow_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus_fem\data\cow.rvmat"
		};
	};
  class ItsATreee_Survivalists_Stencil_Animal_BosTaurusF_Spotted: Animal_BosTaurusF
	{
		scope=2;
    displayName = "Spotted Cow";
    descriptionShort = "A cow with the Survivalists Logo branded on the sides.";
    aiAgentTemplate="ItsATreee_Survivalists_Herbivores_BosTaurus";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Animals\data\survivalists_cow_co_stencil.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\animals\bos_taurus_fem\data\cow.rvmat"
		};
	};
};