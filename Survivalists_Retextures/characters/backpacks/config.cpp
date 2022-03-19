class CfgPatches
{
	class Survivalists_Retextures_Characters_Backpacks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
	class SmershBag;
	class DryBag_ColorBase;
	class GhillieBushrag_ColorBase;
	class GhillieTop_ColorBase;
	class GhillieSuit_ColorBase;
	class HuntingBag;
	class CourierBag;
	class MountainBag_ColorBase;
	class AssaultBag_ColorBase;
	class TaloonBag_ColorBase;
	class AssaultBag_Ttsko;
	class TortillaBag;
	class AliceBag_ColorBase;

  class SRP_SlingBackpack_Default;
  class SRP_Small_Military_Pack_Tan;
  class SRP_Big_Military_Pack_Tan;
  class SRP_Rifle_Bag_Green;
  class SRP_MessengerBag_Leather;  

  class DUB_Monsterv2;

	class SRP_SmershBag_White: SmershBag
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_white_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_white_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_white_co.paa"
		};
	};
  class SRP_SmershBag_Black: SmershBag
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_black_co.paa"
		};
	};
  class SRP_SmershBag_Green: SmershBag
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_green_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_green_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_green_co.paa"
		};
	};
  class SRP_SmershBag_Tan: SmershBag
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_tan_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_tan_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\srp_smersh_tan_co.paa"
		};
	};
  class SRP_SmershBag_NBC: SmershBag
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Smersh_NBC_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_NBC_CO.paa",
			"Survivalists_Retextures\characters\backpacks\data\Smersh_NBC_CO.paa"
		};
	};
	class DryBag_Pink: DryBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\drybag_Pink_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\drybag_Pink_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\drybag_Pink_co.paa"
		};
	};
	class DryBag_MintBlue: DryBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\drybag_mintblue_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\drybag_mintblue_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\drybag_mintblue_co.paa"
		};
	};
	class GhillieBushrag_Winter: GhillieBushrag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa"
		};
	};
	class GhillieBushrag_Black: GhillieBushrag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa"
		};
	};
	class GhillieTop_Winter: GhillieTop_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa"
		};
	};
	class GhillieTop_Black: GhillieTop_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa"
		};
	};
	class GhillieSuit_Winter: GhillieSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_winter_co.paa"
		};
	};
	class GhillieSuit_Black: GhillieSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\ghillie_black_co.paa"
		};
	};
	class SRP_HuntingBag_Mawlee: HuntingBag
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\hunting_mawlee_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_mawlee_co.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_mawlee_co.paa"
		};
	};
	class SRP_HuntingBag_Black: HuntingBag
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\hunting_black.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_black.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_black.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\hunting.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\hunting.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\hunting_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\hunting_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\hunting_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SRP_HuntingBag_Gorka: HuntingBag
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\hunting_gorka.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_gorka.paa",
			"Survivalists_Retextures\characters\backpacks\data\hunting_gorka.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\hunting.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\hunting.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\hunting_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\hunting_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\hunting_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SRP_CourierBag_Black: CourierBag
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\impcourierbag_black.paa",
			"Survivalists_Retextures\characters\backpacks\data\impcourierbag_black.paa",
			"Survivalists_Retextures\characters\backpacks\data\impcourierbag_black.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SRP_MountainBag_Black: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mon_black.paa",
			"Survivalists_Retextures\characters\backpacks\data\mon_black.paa",
			"Survivalists_Retextures\characters\backpacks\data\mon_black.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\mountain.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\mountain.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\mountain_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\mountain_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\mountain_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SRP_AssaultBag_Denim: AssaultBag_ColorBase
	{
		scope=2;
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"CookingEquipment"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\denbp.paa",
			"Survivalists_Retextures\characters\backpacks\data\denbp.paa",
			"Survivalists_Retextures\characters\backpacks\data\denbp.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SRP_TaloonBag_Black1: TaloonBag_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\taloon_bl.paa",
			"Survivalists_Retextures\characters\backpacks\data\taloon_bl.paa",
			"Survivalists_Retextures\characters\backpacks\data\taloon_bl.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\taloon.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\taloon.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\taloon_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\taloon_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\taloon_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SRP_TaloonBag_Black2: TaloonBag_ColorBase
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\taloon_bl1.paa",
			"Survivalists_Retextures\characters\backpacks\data\taloon_bl1.paa",
			"Survivalists_Retextures\characters\backpacks\data\taloon_bl1.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\taloon.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\taloon.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\taloon_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\taloon_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\taloon_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SRP_HuntingBag_MTP: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB01.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB01.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB01.paa"
		};
	};
	class SRP_HuntingBag_ATAC: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB04.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB04.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB04.paa"
		};
	};
	class SRP_HuntingBag_ATACSFG: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB38.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB38.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB38.paa"
		};
	};
	class SRP_HuntingBag_USNAOR2: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB09.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB09.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB09.paa"
		};
	};
	class SRP_HuntingBag_USNAOR1: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB10.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB10.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB10.paa"
		};
	};
	class SRP_HuntingBag_SURPAT: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB12.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB12.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB12.paa"
		};
	};
	class SRP_HuntingBag_MARPATWinter: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB19.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB19.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB19.paa"
		};
	};
	class SRP_HuntingBag_EMP6: HuntingBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\huntingB57.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB57.paa",
			"Survivalists_Retextures\characters\backpacks\data\huntingB57.paa"
		};
	};
	class SRP_AssaultBag_MTP: AssaultBag_Ttsko
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_01.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_01.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_01.paa"
		};
	};
	class SRP_AssaultBag_ATAC: AssaultBag_Ttsko
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_04.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_04.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_04.paa"
		};
	};
	class SRP_AssaultBag_ATACSFG: AssaultBag_Ttsko
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_38.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_38.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_38.paa"
		};
	};
	class SRP_AssaultBag_USNAOR2: AssaultBag_Ttsko
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_09.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_09.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_09.paa"
		};
	};
	class SRP_AssaultBag_USNAOR1: AssaultBag_Ttsko
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_10.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_10.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_10.paa"
		};
	};
	class SRP_AssaultBag_SURPAT: AssaultBag_Ttsko
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_12.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_12.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_12.paa"
		};
	};
	class SRP_AssaultBag_MARPATWinter: AssaultBag_Ttsko
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_19.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_19.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_19.paa"
		};
	};
	class SRP_AssaultBag_EMP6: AssaultBag_Ttsko
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\m53_57.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_57.paa",
			"Survivalists_Retextures\characters\backpacks\data\m53_57.paa"
		};
	};
	class SRP_MountainBag_MTP: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_01.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_01.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_01.paa"
		};
	};
	class SRP_MountainBag_ATAC: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_04.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_04.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_04.paa"
		};
	};
	class SRP_MountainBag_ATACSFG: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_38.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_38.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_38.paa"
		};
	};
	class SRP_MountainBag_USNAOR2: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_09.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_09.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_09.paa"
		};
	};
	class SRP_MountainBag_USNAOR1: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_10.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_10.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_10.paa"
		};
	};
	class SRP_MountainBag_SURPAT: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_12.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_12.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_12.paa"
		};
	};
	class SRP_MountainBag_MARPATWinter: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_19.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_19.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_19.paa"
		};
	};
	class SRP_MountainBag_EMP6: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\mountain_57.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_57.paa",
			"Survivalists_Retextures\characters\backpacks\data\mountain_57.paa"
		};
	};
	class SRP_TortillaBag_MTP: TortillaBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\tortila01.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila01.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila01.paa"
		};
	};
	class SRP_TortillaBag_ATAC: TortillaBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\tortila04.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila04.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila04.paa"
		};
	};
	class SRP_TortillaBag_ATACSFG: TortillaBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\tortila38.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila38.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila38.paa"
		};
	};
	class SRP_TortillaBag_USNAOR2: TortillaBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\tortila09.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila09.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila09.paa"
		};
	};
	class SRP_TortillaBag_USNAOR1: TortillaBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\tortila10.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila10.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila10.paa"
		};
	};
	class SRP_TortillaBag_SURPAT: TortillaBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\tortila12.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila12.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila12.paa"
		};
	};
	class SRP_TortillaBag_MARPATWinter: TortillaBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\tortila19.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila19.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila19.paa"
		};
	};
	class SRP_TortillaBag_EMP6: TortillaBag
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\tortila57.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila57.paa",
			"Survivalists_Retextures\characters\backpacks\data\tortila57.paa"
		};
	};
	class SRP_AliceBag_MTP: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb01.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb01.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb01.paa"
		};
	};
	class SRP_AliceBag_ATAC: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb04.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb04.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb04.paa"
		};
	};
	class SRP_AliceBag_ATACSFG: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb38.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb38.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb38.paa"
		};
	};
	class SRP_AliceBag_USNAOR2: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb09.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb09.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb09.paa"
		};
	};
	class SRP_AliceBag_USNAOR1: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb10.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb10.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb10.paa"
		};
	};
	class SRP_AliceBag_SURPAT: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb12.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb12.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb12.paa"
		};
	};
	class SRP_AliceBag_MARPATWinter: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb19.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb19.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb19.paa"
		};
	};
	class SRP_AliceBag_EMP6: AliceBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\aliceb57.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb57.paa",
			"Survivalists_Retextures\characters\backpacks\data\aliceb57.paa"
		};
	};



  class SRP_SlingBackpack_Red: SRP_SlingBackpack_Default 
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\shoulderslingbackpack_red_co.paa",
		};
	};
  class SRP_Small_Military_Pack_Black: SRP_Small_Military_Pack_Tan 
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Small_Military_Pack_Black_CO.paa"
		};
	};
  class SRP_Small_Military_Pack_Green: SRP_Small_Military_Pack_Tan 
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Small_Military_Pack_Green_CO.paa"
		};
	};

  class SRP_Big_Military_Pack_Green: SRP_Big_Military_Pack_Tan
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Green_CO.paa"
		};
	};
  class SRP_Big_Military_Pack_Black: SRP_Big_Military_Pack_Tan
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Big_Military_Pack_Black_CO.paa"
		};
	};

  class SRP_Rifle_Bag_Tan: SRP_Rifle_Bag_Green
  {
    scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\backpacks\data\Rifle_Bag_Tan_CO.paa"
    };
  };
  class SRP_Rifle_Bag_Black: SRP_Rifle_Bag_Green
  {
    scope=2;
    hiddenSelections[]=
    {
      "zbytek"
    };
    hiddenSelectionsTextures[]=
    {
      "Survivalists_Retextures\characters\backpacks\data\Rifle_Bag_Black_CO.paa"
    };
  };


  class DUB_Monsterv2_Chip: DUB_Monsterv2
	{
		scope=2;
		displayName="Chip";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Chip_co.paa"
		};
	};
  class DUB_Monsterv2_Coffee: DUB_Monsterv2
	{
		scope=2;
		displayName="Coffee";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Coffee_co.paa"
		};
	};
  class DUB_Monsterv2_Fanta: DUB_Monsterv2
	{
		scope=2;
		displayName="Fanta";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Fanta_co.paa"
		};
	};
  class DUB_Monsterv2_Skylar: DUB_Monsterv2
	{
		scope=2;
		displayName="Skylar";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Skylar_co.paa"
		};
	};
  class DUB_Monsterv2_Teal: DUB_Monsterv2
	{
		scope=2;
		displayName="Teal";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Teal_co.paa"
		};
	};
  class DUB_Monsterv2_Professor: DUB_Monsterv2
	{
		scope=2;
		displayName="Professor";
		descriptionShort="A unique mutant";
		hiddenSelections[]=
		{
			"Glow"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\monsterv2_Professor_co.paa"
		};
	};

	class SRP_MessengerBag_Tan: SRP_MessengerBag_Leather
	{	
    scope=2;
		displayName="Linen satchel";
		descriptionShort="A messenger bag made from linen";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Leather_Satchel_Tan_CO.paa"
		};
	};
	class SRP_MessengerBag_Brown: SRP_MessengerBag_Leather
	{	
    scope=2;
		displayName="Linen satchel";
		descriptionShort="A messenger bag made from linen";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Leather_Satchel_Brown_CO.paa"
		};
	};
	class SRP_MessengerBag_Pink: SRP_MessengerBag_Leather
	{	
    scope=2;
		displayName="Linen satchel";
		descriptionShort="A messenger bag made from linen";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Leather_Satchel_Pink_CO.paa"
		};
	};
	class SRP_MessengerBag_Blue: SRP_MessengerBag_Leather
	{	
    scope=2;
		displayName="Linen satchel";
		descriptionShort="A messenger bag made from linen";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\backpacks\data\Leather_Satchel_Blue_CO.paa"
		};
	};
};
