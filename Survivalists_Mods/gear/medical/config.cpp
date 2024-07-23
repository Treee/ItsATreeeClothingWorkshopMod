class CfgPatches
{
    class Survivalists_Mods_Gear_Medical
    {
        units[] = {	};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DZ_Data",
            "DZ_Gear_Medical",
            "Survivalists_Mods_Gear_Crafting"
        };
    };
};
class CfgVehicles
{
    class Inventory_Base;
    class VitaminBottle;
    class Edible_Base;
    class PainkillerTablets;
    class TetracyclineAntibiotics;

    class SRP_KitBase;

    // ------------------------------------------ VANILLA OVERRIDE
    class BandageDressing : Inventory_Base
    {
        canBeSplit = 1;
        varQuantityInit = 2;
        varQuantityMax = 8;
        inventorySlot[] +=
        {
            "SRP_Medical1",
                "SRP_Medical2",
                "SRP_Medical3"
        };
    };

    class Morphine : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_Medical1",
                "SRP_Medical2",
                "SRP_Medical3",
                "morphine",
                "epinephrine"
        };
    };

    class Epinephrine : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_Medical1",
                "SRP_Medical2",
                "SRP_Medical3"
        };
    };

    class AntiChemInjector : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_Medical1",
                "SRP_Medical2",
                "SRP_Medical3"
        };
    };

    class InjectionVial : Inventory_Base
    {
        canBeSplit = 1;
    };
    class SalineBag : Inventory_Base
    {
        itemSize[] = { 1,2 };
    };
    class DisinfectantSpray : Edible_Base
    {
        itemSize[] = { 1,2 };
        liquidContainerType = "32768";
    };
    class DisinfectantAlcohol : Edible_Base
    {
        liquidContainerType = "32768";
        varQuantityMax = 1000;
    };
    class IodineTincture : Edible_Base
    {
        liquidContainerType = "32768";
    };
    class BloodBagFull : Inventory_Base
    {
        inventorySlot[] +=
        {
            "SRP_BloodBag_OP1",
                "SRP_BloodBag_OP2",
                "SRP_BloodBag_OP3",
                "SRP_BloodBag_OP4",
                "SRP_BloodBag_OP5",
                "SRP_BloodBag_ON1",
                "SRP_BloodBag_ON2",
                "SRP_BloodBag_ON3",
                "SRP_BloodBag_ON4",
                "SRP_BloodBag_ON5",
                "SRP_BloodBag_AP1",
                "SRP_BloodBag_AP2",
                "SRP_BloodBag_AP3",
                "SRP_BloodBag_AP4",
                "SRP_BloodBag_AP5",
                "SRP_BloodBag_AN1",
                "SRP_BloodBag_AN2",
                "SRP_BloodBag_AN3",
                "SRP_BloodBag_AN4",
                "SRP_BloodBag_AN5",
                "SRP_BloodBag_BP1",
                "SRP_BloodBag_BP2",
                "SRP_BloodBag_BP3",
                "SRP_BloodBag_BP4",
                "SRP_BloodBag_BP5",
                "SRP_BloodBag_BN1",
                "SRP_BloodBag_BN2",
                "SRP_BloodBag_BN3",
                "SRP_BloodBag_BN4",
                "SRP_BloodBag_BN5",
                "SRP_BloodBag_ABP1",
                "SRP_BloodBag_ABP2",
                "SRP_BloodBag_ABP3",
                "SRP_BloodBag_ABP4",
                "SRP_BloodBag_ABP5",
                "SRP_BloodBag_ABN1",
                "SRP_BloodBag_ABN2",
                "SRP_BloodBag_ABN3",
                "SRP_BloodBag_ABN4",
                "SRP_BloodBag_ABN5",
        };
    };
    //------------------------------------------- CUSTOM STUFF
    class SRP_StimPackInjector_Base : Epinephrine
    {
        scope = 0;
        displayName = "Stim Pack Injector";
        descriptionShort = "Stim Pack Injector";
        model = "\dz\gear\medical\Epinephrine.p3d";
        debug_ItemCategory = 7;
        rotationFlags = 12;
        itemSize[] = { 1,2 };
        weight = 60;
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 50;
                    healthLevels[] =
                    {
                        {1,{"DZ\gear\medical\data\epipen.rvmat"}},
                        {0.69999999,{"DZ\gear\medical\data\epipen.rvmat"}},
                        {0.5,{"DZ\gear\medical\data\epipen_damage.rvmat"}},
                        {0.30000001,{"DZ\gear\medical\data\epipen_damage.rvmat"}},
                        {0,{"DZ\gear\medical\data\epipen_destruct.rvmat"}}
                    };
                };
            };
        };
        soundImpactType = "plastic";
    };
    class SRP_StimPackInjector_Espen : SRP_StimPackInjector_Base
    {
        scope = 2;
        displayName = "Stim Pack Injector - Espen Industries";
        descriptionShort = "Stim Pack Injector manufactured by Espen Pharmacuticals. 'Espen Indisutries, making you better one part at a time.' - Espen.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\epipen_espen_co.paa"
        };
    };
    class SRP_StimPackInjector_Stag : SRP_StimPackInjector_Base
    {
        scope = 2;
        displayName = "Stim Pack Injector - STAG Industries";
        descriptionShort = "Stim Pack Injector manufactured by STAG Medical Division. 'Your life in better hands.' - Konstantin.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\epipen_stag_co.paa"
        };
    };
    class SRP_StimPackInjector_LocknSons : SRP_StimPackInjector_Base
    {
        scope = 2;
        displayName = "Stim Pack Injector - Lock & Sons";
        descriptionShort = "Stim Pack Injector manufactured by Lock & Sons. You had no idea they had a medical division.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\epipen_locknsons_co.paa"
        };
    };
    class SRP_StimPackInjector_Crude : SRP_StimPackInjector_Base
    {
        scope = 2;
        displayName = "Stim Pack Injector - Crude";
        descriptionShort = "Stim Pack Injector manufactured by some alchemist or amateur doctor.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\epipen_crude_co.paa"
        };
    };

    class SRP_MedicalKit_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Medical Component Kit";
        descriptionShort = "A Medical Component Kit";
        attachments[] =
        {
          "Rags",
          "MedicalBandage",
          "Disinfectant"
        };
    };

    class SRP_BandageDressing_Healing : BandageDressing
    {
        scope = 2;
        displayName = "Healing Bandage";
        descriptionShort = "A bandage dressing that has been combined with healing salves.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\bandage_healing_co.paa"
        };
    };
    class SRP_BandageDressing_Shock : BandageDressing
    {
        scope = 2;
        displayName = "Shock Bandage";
        descriptionShort = "A bandage dressing that has been combined with healing salves.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\bandage_shock_co.paa"
        };
    };
    class SRP_BandageDressing_Antibiotic : BandageDressing
    {
        scope = 2;
        displayName = "Antibiotic Bandage";
        descriptionShort = "A bandage dressing that has been combined with healing salves.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\bandage_antibiotic_co.paa"
        };
    };

    class SRP_BloodPressureMonitor : Inventory_Base // BP_Monitor_pressure
    {
        scope = 2;
        displayName = "Blood Pressure Monitor";
        descriptionShort = "This medical equipmment is used to monitor blood pressure.";
        model = "Survivalists_Mods\gear\medical\bloodpressuremonitor.p3d";
        slopeTolerance = 0.30000001;
        weight = 1000;
        itemBehaviour = 0;
        physLayer = "item_large";
        allowOwnedCargoManipulation = 1;
        itemSize[] = { 4,9 };
        class Cargo
        {
            itemsCargoSize[] = { 4,4 };
            openable = 0;
            allowOwnedCargoManipulation = 1;
        };
    };

    class SRP_MedicalCurtains_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Medical Curtains Kit";
        descriptionShort = "A Medical Curtain Kit";
    };

    class SRP_MedicalCurtains : Inventory_Base // new
    {
        scope = 2;
        displayName = "Medical Curtains";
        descriptionShort = "This medical equipmment is used to provide some sort of privacy in a medical ward.";
        model = "Survivalists_Mods\gear\medical\medicalcurtains.p3d";
        slopeTolerance = 0.30000001;
        weight = 1000;
        itemBehaviour = 0;
        physLayer = "item_large";
        allowOwnedCargoManipulation = 1;
        itemSize[] = { 4,9 };
        class Cargo
        {
            itemsCargoSize[] = { 4,4 };
            openable = 0;
            allowOwnedCargoManipulation = 1;
        };
        class AnimationSources
        {
            class Lid { source = "user";initPhase = 0;animPeriod = 0.0099999998; };
            class Lid2 { source = "user";initPhase = 1;animPeriod = 0.0099999998; };
        };
    };

    class SRP_MedicalBed_Frame : Inventory_Base //BP_medical_bed
    {
        scope = 2;
        displayName = "Medical Bed Frame";
        descriptionShort = "A bed frame normally found in a medical facility.";
        model = "Survivalists_Mods\gear\medical\medicalbedframe.p3d";
        slopeTolerance = 0.30000001;
        weight = 1000;
        itemBehaviour = 0;
        physLayer = "item_large";
        allowOwnedCargoManipulation = 1;
        itemSize[] = { 10,15 };
        class Cargo
        {
            itemsCargoSize[] = { 6,3 };
        };
    };

    class SRP_MedicalBed_Mattress : Inventory_Base //new
    {
        scope = 2;
        displayName = "Medical Bed Mattress";
        descriptionShort = "A bed normally found in a medical facility.";
        model = "Survivalists_Mods\gear\medical\medicalbed.p3d";
        slopeTolerance = 0.30000001;
        weight = 1000;
        itemBehaviour = 0;
        physLayer = "item_large";
        allowOwnedCargoManipulation = 1;
        itemSize[] = { 10,15 };
        class Cargo
        {
            itemsCargoSize[] = { 3,2 };
        };
    };

    class SRP_MedicalBed_Wood : Inventory_Base //new
    {
        scope = 2;
        displayName = "Wooden Medical Bed";
        descriptionShort = "A wood medical bed normally found in a medical facility.";
        model = "Survivalists_Mods\gear\medical\medicalbed_wood.p3d";
        slopeTolerance = 0.30000001;
        weight = 1000;
        itemBehaviour = 0;
        physLayer = "item_large";
        allowOwnedCargoManipulation = 1;
        itemSize[] = { 10,15 };
        class Cargo
        {
            itemsCargoSize[] = { 2,3 };
        };
    };

    class SRP_MedicalBedSmall_Wood_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Small Wooden Bed Kit";
        descriptionShort = "A Small Wooden Bed Kit";
    };

    class SRP_MedicalBedSmall_Wood : Inventory_Base //new
    {
        scope = 2;
        displayName = "Wooden Bed";
        descriptionShort = "A wood bed normally found in a house.";
        model = "Survivalists_Mods\gear\medical\medicalbedsmall_wood.p3d";
        slopeTolerance = 0.30000001;
        weight = 1000;
        itemBehaviour = 0;
        physLayer = "item_large";
        allowOwnedCargoManipulation = 1;
        itemSize[] = { 10,15 };
        class Cargo
        {
            itemsCargoSize[] = { 2,3 };
        };
    };

    class SRP_DecontaminationShower_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Decontamination Shower Kit - Green";
        descriptionShort = "A Decontamination Shower Kit";
    };

    class SRP_DecontaminationShower : Inventory_Base // new
    {
        scope = 2;
        displayName = "Decontamination Shower";
        descriptionShort = "This medical equipmment is used to help decontaminate someone by flushing them with water.";
        model = "Survivalists_Mods\gear\medical\srp_decontaminationshower.p3d";
        slopeTolerance = 0.30000001;
        weight = 1000;
        itemBehaviour = 0;
        physLayer = "item_large";
        itemSize[] = { 4,9 };
        itemsCargoSize[] = { 0,0 };
        hiddenSelections[] =
        {
          "zbytek",
          "pole"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\srp_decontaminationshower_sign_green_co.paa",
          "Survivalists_Mods\gear\medical\data\srp_decontaminationshower_green_co.paa"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 250;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\medical\data\srp_decontaminationshower.rvmat", "Survivalists_Mods\gear\medical\data\srp_decontaminationshower_sign.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\medical\data\srp_decontaminationshower.rvmat", "Survivalists_Mods\gear\medical\data\srp_decontaminationshower_sign.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\medical\data\srp_decontaminationshower_damage.rvmat", "Survivalists_Mods\gear\medical\data\srp_decontaminationshower_sign_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\medical\data\srp_decontaminationshower_damage.rvmat", "Survivalists_Mods\gear\medical\data\srp_decontaminationshower_sign_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\medical\data\srp_decontaminationshower_destruct.rvmat", "Survivalists_Mods\gear\medical\data\srp_decontaminationshower_sign_destruct.rvmat"}}
                    };
                };
            };
        };
    };

    class SRP_DecontaminationShower_Red_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Decontamination Shower Kit - Red";
        descriptionShort = "A Decontamination Shower Kit";
    };

    class SRP_DecontaminationShower_Red : SRP_DecontaminationShower // new
    {
        scope = 2;
        hiddenSelections[] =
        {
          "zbytek",
          "pole"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\srp_decontaminationshower_sign_red_co.paa",
          "Survivalists_Mods\gear\medical\data\srp_decontaminationshower_red_co.paa"
        };
    };

    class SRP_DecontaminationShower_Yellow_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Decontamination Shower Kit - Yellow";
        descriptionShort = "A Decontamination Shower Kit";
    };

    class SRP_DecontaminationShower_Yellow : SRP_DecontaminationShower // new
    {
        scope = 2;
        hiddenSelections[] =
        {
          "zbytek",
          "pole"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\srp_decontaminationshower_sign_yellow_co.paa",
          "Survivalists_Mods\gear\medical\data\srp_decontaminationshower_yellow_co.paa"
        };
    };



    class SRP_Stethoscope_ColorBase : Inventory_Base
    {
        scope = 0;
        displayName = "Stethoscope";
        descriptionShort = "A useful tool for listening to a humans pulse.";
        model = "Survivalists_Mods\gear\medical\srp_stethoscope.p3d";
        rotationFlags = 17;
        itemSize[] = { 1,3 };
        weight = 280;
        soundImpactType = "textile";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\medical\data\srp_stethoscope_co.paa" };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 200;
                    healthLevels[] =
                    {
                        {1,{"Survivalists_Mods\gear\medical\data\srp_stethoscope_plastic.rvmat"}},
                        {0.69999999,{"Survivalists_Mods\gear\medical\data\srp_stethoscope_plastic.rvmat"}},
                        {0.5,{"Survivalists_Mods\gear\medical\data\srp_stethoscope_plastic_damage.rvmat"}},
                        {0.30000001,{"Survivalists_Mods\gear\medical\data\srp_stethoscope_plastic_damage.rvmat"}},
                        {0,{"Survivalists_Mods\gear\medical\data\srp_stethoscope_plastic_destruct.rvmat"}}
                    };
                };
            };
        };
        class AnimEvents
        {
            class SoundWeapon
            {
                class rope_untie
                {
                    soundSet = "rope_untie_SoundSet";
                    id = 202;
                };
                class rope_struggle
                {
                    soundSet = "rope_struggle_SoundSet";
                    id = 203;
                };
                class pickUpItem_Light
                {
                    soundSet = "pickUpCourierBag_Light_SoundSet";
                    id = 796;
                };
                class pickUpItem
                {
                    soundSet = "pickUpCourierBag_SoundSet";
                    id = 797;
                };
                class rope_tieup
                {
                    soundSet = "rope_tieup_SoundSet";
                    id = 13338;
                };
                class rope_tieup_end
                {
                    soundSet = "rope_tieup_end_SoundSet";
                    id = 13339;
                };
                class rope_tieup_back
                {
                    soundSet = "rope_tieup_back_SoundSet";
                    id = 13340;
                };
            };
        };
    };
    class SRP_Stethoscope_Basic : SRP_Stethoscope_ColorBase
    {
        scope = 2;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = { "Survivalists_Mods\gear\medical\data\srp_stethoscope_co.paa" };
    };

    // ---------------------------- CUSTOM MEDICINE
    class SRP_Dexamphetamine : PainkillerTablets  // BP_dexamphetamine
    {
        scope = 2;
        displayName = "Dexamphetamine";
        descriptionShort = "Is a potent central nervous system (CNS) stimulant and amphetamine enantiomer that is prescribed for the treatment of attention deficit hyperactivity disorder (ADHD) and narcolepsy. It is also used as an athletic performance and cognitive enhancer, and recreationally as an aphrodisiac and euphoriant. Dextroamphetamine was also used by military air, tank and special forces as a 'go-pill' during fatigue-inducing missions such as night-time bombing missions or extended combat operations.";
        model = "\dz\gear\medical\dexamphetamine.p3d";
    };

    class SRP_Analgine : PainkillerTablets  // BP_Analgine
    {
        scope = 2;
        displayName = "Analgin";
        descriptionShort = "NOT a narcotic analgesic - Analgin (has analgesic, antipyretic and weak anti-inflammatory action.)";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\medical\data\Analgine.paa"
        };
    };

    class SRP_Drotaverine : PainkillerTablets  // BP_Drotaverine
    {
        scope = 2;
        displayName = "Drotaverine";
        descriptionShort = "Reduces the intake of ionized active calcium in smooth muscle cells by inhibiting phosphodiesterase and the intracellular accumulation of cyclic adenosine monophosphate. Quickly and completely absorbed in the digestive tract";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\medical\data\Drotaverine.paa"
        };
    };

    class SRP_Macropen : TetracyclineAntibiotics  // BP_Macropen
    {
        scope = 2;
        displayName = "Macropen";
        descriptionShort = "An antibiotic of the macrolide group. Inhibits protein synthesis in bacterial cells. Reversibly binds to the 50S subunit of the bacterial ribosomal membrane. In low doses the drug has a bacteriostatic effect, in high doses it is bactericidal.";
        varQuantityInit = 16;
        varQuantityMin = 0;
        varQuantityMax = 16;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\medical\data\makropen.paa"
        };
    };

    class SRP_Amoxicillin : TetracyclineAntibiotics  // BP_Amoksiklav
    {
        scope = 2;
        displayName = "Amoxicillin";
        descriptionShort = "It is a combination of amoxicillin - semi-synthetic penicillin with a broad spectrum of antibacterial activity and clavulanic acid - an irreversible inhibitor β-lactamase. Clavulanic acid forms a stable inactivated complex with these enzymes and ensures the resistance of amoxicillin to the effects of β-lactamase produced by microorganisms.";
        model = "\dz\gear\medical\VitaminBottle.p3d";
        varQuantityInit = 14;
        varQuantityMin = 0;
        varQuantityMax = 14;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\medical\data\amoksiklav.paa"
        };
    };

    class SRP_Amosin : TetracyclineAntibiotics  // BP_Amosin
    {
        scope = 2;
        displayName = "Amosin";
        descriptionShort = "Amosin is an aminobenzyl penicillin, which has a bactericidal effect as a result of inhibiting the synthesis of bacterial cell walls.";
        model = "\dz\gear\medical\painkillers2.p3d";
        varQuantityInit = 14;
        varQuantityMin = 0;
        varQuantityMax = 14;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\medical\data\Amosin.paa"
        };
    };

    class SRP_Ciprolet : TetracyclineAntibiotics  // BP_Ciprolet
    {
        scope = 2;
        displayName = "Ciprolet";
        descriptionShort = "A broad-spectrum antibacterial drug from the group of fluoroquinolones. Bactericidal effect. The drug inhibits the enzyme DNA gyrase of bacteria, as a result of which DNA replication and the synthesis of bacterial cellular proteins are violated. Ciprofloxacin acts both on reproducing microorganisms and on those in the resting phase.";
        model = "\dz\gear\medical\painkillers2.p3d";
        varQuantityInit = 14;
        varQuantityMin = 0;
        varQuantityMax = 14;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\medical\data\Ciprolet.paa"
        };
    };

    class SRP_Toradol : VitaminBottle  // BP_Ketorolak
    {
        scope = 2;
        displayName = "Toradol";
        descriptionShort = "Nonsteroidal anti-inflammatory agent. It has a pronounced analgesic effect, also has anti-inflammatory and moderate antipyretic effect.";
        model = "\dz\gear\medical\painkillers2.p3d";
        varQuantityInit = 20;
        varQuantityMin = 0;
        varQuantityMax = 20;
        varQuantityDestroyOnMin = 1;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\medical\data\Ketorolak.paa"
        };
    };

    class SRP_MagnesiumSulfate : VitaminBottle  // BP_Magnezia
    {
        scope = 2;
        displayName = "Magnesii Sulfas MgSO4";
        descriptionShort = "It has a sedative, diuretic, arterodilating, anticonvulsant, antiarrhythmic, hypotensive, spasmolytic, in large doses - kurarepodobnoe (inhibitory effect on the neuromuscular transmission), tocolytic, hypnotic and narcotic effect, suppresses the respiratory center.";
        model = "\dz\gear\medical\VitaminBottle.p3d";
        varQuantityInit = 20;
        varQuantityMin = 0;
        varQuantityMax = 20;
        varQuantityDestroyOnMin = 1;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\medical\data\Mag.paa"
        };
    };

    class SRP_Promedol : Morphine  // BP_Promedol
    {
        scope = 2;
        displayName = "Promedol";
        descriptionShort = "Opioid analgesic is used for pronounced pain syndromes. According to the specifics of its action, it resembles morphine, but has a weaker and shorter time action. The drug has a strong analgesic effect, moderate anti-shock, hypnotic and antispasmodic.";
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\medical\data\Promedol.paa"
        };
    };

    class SRP_DisinfectantAlcohol_Zelenka : DisinfectantAlcohol  // BP_Zelenka
    {
        scope = 2;
        displayName = "Zelenka";
        descriptionShort = "Green liquid on alcohol to lubricate the skin for therapeutic purposes.";
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\medical\data\zelenka.paa"
        };
    };

    class SRP_DisinfectantAlcohol_Ion : DisinfectantAlcohol  // BP_Iod
    {
        scope = 2;
        displayName = "Iodium";
        descriptionShort = "Irritant, anti-inflammatory, antiseptic. Forms iodamines and destroys microorganisms, being absorbed, actively influences the metabolism, enhancing the processes of de-stimulation; helps to reduce cholesterol levels in the blood.";
        varQuantityInit = 100;
        varQuantityMin = 0;
        varQuantityMax = 100;
        hiddenSelections[] =
        {
            "zbytek"
        };
        hiddenSelectionsTextures[] =
        {
            "Survivalists_Mods\gear\medical\data\iod.paa"
        };
    };

    class SRP_GeigerCounter : Inventory_Base
    {
        scope = 2;
        displayName = "Geiger Counter";
        descriptionShort = "3.6 roentgen not great, not terrible. Used for measuring radiation.";
        model = "Survivalists_Mods\gear\medical\geigercounter.p3d";
        weight = 30;
        varTemperatureMax = 100;
        itemSize[] = { 2,3 };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = {
      "Survivalists_Mods\gear\medical\data\geigercounter_ca.paa"
        };
        hiddenSelectionsMaterials[] = {
            "Survivalists_Mods\gear\medical\data\geigercounter.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLabels[] = { 1,0.69999999,0.5,0.30000001,0 };
                    healthLevels[] =
                    {
                        {1,{"Survivalists_Mods\gear\medical\data\geigercounter.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\medical\data\geigercounter.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\medical\data\geigercounter_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\medical\data\geigercounter_damage.rvmat"}},
            {0,{"Survivalists_Mods\gear\medical\data\geigercounter_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class Melee
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class FragGrenade
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
            };
        };
    };

    class SRP_LabEquipment_Base : Inventory_Base
    {
        scope = 0;
        displayName = "Base Lab Equipment (Do not spawn)";
        descriptionShort = "Do not spawn me";
        weight = 30;
        varTemperatureMax = 100;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] = {
      "Survivalists_Mods\gear\medical\data\labequipment_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "Survivalists_Mods\gear\medical\data\labequipment.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 100;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\medical\data\labequipment.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\medical\data\labequipment.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\medical\data\labequipment_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\medical\data\labequipment_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\medical\data\labequipment_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class Melee
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class FragGrenade
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
            };
        };
    };

    class SRP_LabEquipment_Projector : SRP_LabEquipment_Base
    {
        scope = 2;
        displayName = "Lab Projector";
        itemBehaviour = 0;
        descriptionShort = "Project the results of your experiments.";
        model = "Survivalists_Mods\gear\medical\labequipment_projector.p3d";
        itemSize[] = { 5,6 };
    };

    class SRP_LabEquipment_Tuner : SRP_LabEquipment_Base
    {
        scope = 2;
        displayName = "Lab Tuner";
        descriptionShort = "Tune in for the best results.";
        model = "Survivalists_Mods\gear\medical\labequipment_tuner.p3d";
        itemSize[] = { 3,3 };
    };

    class SRP_LabEquipment_Oscilliscope : SRP_LabEquipment_Base
    {
        scope = 2;
        displayName = "Lab Oscilliscope";
        descriptionShort = "Measure the wavyness of your experiments.";
        model = "Survivalists_Mods\gear\medical\labequipment_oscilliscope.p3d";
        itemSize[] = { 3,3 };
    };

    class SRP_LabEquipment_GeigerCounter : SRP_LabEquipment_Base
    {
        scope = 2;
        displayName = "Lab Geiger Counter";
        descriptionShort = "An advanced tool for measuring radiation AND biohazards.";
        model = "Survivalists_Mods\gear\medical\labequipment_geigercounter1.p3d";
        itemSize[] = { 2,3 };
    };

    class SRP_ComputerTerminal_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Computer Terminal Kit";
        descriptionShort = "A Computer Terminal Kit";
    };

    class SRP_ComputerTerminal : Inventory_Base // new
    {
        scope = 2;
        displayName = "Computer Terminal";
        descriptionShort = "This equipmment is badly worn from time and the elements.";
        model = "Survivalists_Mods\gear\medical\labequipment_computerterminal.p3d";
        slopeTolerance = 0.30000001;
        weight = 1000;
        itemBehaviour = 0;
        physLayer = "item_large";
        allowOwnedCargoManipulation = 1;
        itemSize[] = { 15,15 };
        class Cargo
        {
            itemsCargoSize[] = { 4,4 };
            openable = 0;
            allowOwnedCargoManipulation = 1;
        };
        hiddenSelections[] =
        {
          "zbytek",
          "glass"
        };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\srp_computerterminal_co.paa",
          "Survivalists_Mods\gear\medical\data\srp_computerdetail_co.paa",
        };
        hiddenSelectionsMaterials[] =
        {
                "Survivalists_Mods\gear\medical\data\srp_computerterminal.rvmat",
                "Survivalists_Mods\gear\medical\data\srp_computerdetail.rvmat",
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\medical\data\srp_computerterminal.rvmat", "Survivalists_Mods\gear\medical\data\srp_computerdetail.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\medical\data\srp_computerterminal.rvmat", "Survivalists_Mods\gear\medical\data\srp_computerdetail.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\medical\data\srp_computerterminal_damage.rvmat", "Survivalists_Mods\gear\medical\data\srp_computerdetail_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\medical\data\srp_computerterminal_damage.rvmat", "Survivalists_Mods\gear\medical\data\srp_computerdetail_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\medical\data\srp_computerterminal_destruct.rvmat", "Survivalists_Mods\gear\medical\data\srp_computerdetail_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class Melee
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class FragGrenade
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
            };
        };
    };


    class SRP_ComputerTerminalSlim_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Slim Computer Terminal Kit";
        descriptionShort = "A Slim Computer Terminal Kit";
    };

    class SRP_ComputerTerminalSlim : Inventory_Base // new
    {
        scope = 2;
        displayName = "Computer Terminal";
        descriptionShort = "This equipmment is badly worn from time and the elements.";
        model = "Survivalists_Mods\gear\medical\labequipment_computerslim.p3d";
        slopeTolerance = 0.30000001;
        weight = 1000;
        itemBehaviour = 0;
        physLayer = "item_large";
        allowOwnedCargoManipulation = 1;
        itemSize[] = { 15,15 };
        class Cargo
        {
            itemsCargoSize[] = { 4,4 };
            openable = 0;
            allowOwnedCargoManipulation = 1;
        };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\srp_computerslim_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
                "Survivalists_Mods\gear\medical\data\srp_computerslim.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000000;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\medical\data\srp_computerslim.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\medical\data\srp_computerslim.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\medical\data\srp_computerslim_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\medical\data\srp_computerslim_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\medical\data\srp_computerslim_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class Melee
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class FragGrenade
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
            };
        };
    };

    class SRP_ComputerTerminalWide_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Wide Computer Terminal Kit";
        descriptionShort = "A Wide Computer Terminal Kit";
    };

    class SRP_ComputerTerminalWide : Inventory_Base // new
    {
        scope = 2;
        displayName = "Computer Terminal";
        descriptionShort = "This equipmment is badly worn from time and the elements.";
        model = "Survivalists_Mods\gear\medical\labequipment_computerwide.p3d";
        slopeTolerance = 0.30000001;
        weight = 1000;
        itemBehaviour = 0;
        physLayer = "item_large";
        allowOwnedCargoManipulation = 1;
        itemSize[] = { 15,15 };
        class Cargo
        {
            itemsCargoSize[] = { 4,4 };
            openable = 0;
            allowOwnedCargoManipulation = 1;
        };
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\srp_computerwide_co.paa"
        };
        hiddenSelectionsMaterials[] =
        {
                "Survivalists_Mods\gear\medical\data\srp_computerwide.rvmat"
        };
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1000000;
                    healthLevels[] =
                    {
                        {1.0,{"Survivalists_Mods\gear\medical\data\srp_computerwide.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\medical\data\srp_computerwide.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\medical\data\srp_computerwide_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\medical\data\srp_computerwide_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\medical\data\srp_computerwide_destruct.rvmat"}}
                    };
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class Melee
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
                class FragGrenade
                {
                    class Health { damage = 0; };
                    class Blood { damage = 0; };
                    class Shock { damage = 0; };
                };
            };
        };
    };


    class SRP_Mutation_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Pure Mutant Embryo";
        descriptionShort = "Pure mutant genetic material. Apply work to evolve into more specific mutagens.";
        model = "Dressupbox\mutation\mutations\egg\egg.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionTextures[] = { "Dressupbox\Mutation\Mutations\Egg\data\egg_co.paa" };
        attachments[] =
        {
          "TestTube1",
          "TestTube2",
          "TestTube3",
          "TestTube4",
          "TestTube5",
          "TestTube6"
        };
    };

    class SRP_Mutation_LongFall_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Mutated Long Fall Embryo";
        descriptionShort = "A mutated embryo evolved to create enhanced fibrous tissues in the legs.";
        model = "Dressupbox\mutation\mutations\egg\egg.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionTextures[] = { "Dressupbox\Mutation\Mutations\Egg\data\egg_co.paa" };
        attachments[] =
        {
          "TestTube1",
          "TestTube2"
        };
    };
    class SRP_Mutation_Brawler_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Mutated Brawler Embryo";
        descriptionShort = "A mutated embryo evolved to enhance upper body strength.";
        model = "Dressupbox\mutation\mutations\egg\egg.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionTextures[] = { "Dressupbox\Mutation\Mutations\Egg\data\egg_co.paa" };
        attachments[] =
        {
          "TestTube1",
          "TestTube2"
        };
    };
    class SRP_Mutation_BodyHeat_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Mutated Body Heat Embryo";
        descriptionShort = "A mutated embryo evolved to insulate the host from extreme temperatures.";
        model = "Dressupbox\mutation\mutations\egg\egg.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionTextures[] = { "Dressupbox\Mutation\Mutations\Egg\data\egg_co.paa" };
        attachments[] =
        {
          "TestTube1",
          "TestTube2"
        };
    };
    class SRP_Mutation_Chameleon_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Mutated Chameleon Embryo";
        descriptionShort = "A mutated embryo evolved to mask the host from the undead.";
        model = "Dressupbox\mutation\mutations\egg\egg.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionTextures[] = { "Dressupbox\Mutation\Mutations\Egg\data\egg_co.paa" };
        attachments[] =
        {
          "TestTube1",
          "TestTube2"
        };
    };
    class SRP_Mutation_Nocturnal_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Mutated Nocturnal Embryo";
        descriptionShort = "A mutated embryo evolved to increase light sensitivity during night time.";
        model = "Dressupbox\mutation\mutations\egg\egg.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionTextures[] = { "Dressupbox\Mutation\Mutations\Egg\data\egg_co.paa" };
        attachments[] =
        {
          "TestTube1",
          "TestTube2"
        };
    };
    class SRP_Mutation_Aquatic_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Mutated Aquatic Embryo";
        descriptionShort = "A mutated embryo evolved to give the host pseudo gills and webbed feet.";
        model = "Dressupbox\mutation\mutations\egg\egg.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionTextures[] = { "Dressupbox\Mutation\Mutations\Egg\data\egg_co.paa" };
        attachments[] =
        {
          "TestTube1",
          "TestTube2"
        };
    };
    class SRP_Mutation_Armor_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Mutated Juggernaut Embryo";
        descriptionShort = "A mutated embryo evolved to give the host stronger resolve.";
        model = "Dressupbox\mutation\mutations\egg\egg.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionTextures[] = { "Dressupbox\Mutation\Mutations\Egg\data\egg_co.paa" };
        attachments[] =
        {
          "TestTube1",
          "TestTube2"
        };
    };
    class SRP_Mutation_IronStomach_Kit : SRP_KitBase //new
    {
        scope = 2;
        displayName = "Mutated Iron Gut Embryo";
        descriptionShort = "A mutated embryo evolved to digest any material.";
        model = "Dressupbox\mutation\mutations\egg\egg.p3d";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionTextures[] = { "Dressupbox\Mutation\Mutations\Egg\data\egg_co.paa" };
        attachments[] =
        {
          "TestTube1",
          "TestTube2"
        };
    };

    class SRP_PoisonInjector_Base : Epinephrine
    {
        scope = 0;
        displayName = "Poison Injector";
        descriptionShort = "Poison Injector";
        model = "\dz\gear\medical\Epinephrine.p3d";
        debug_ItemCategory = 7;
        rotationFlags = 12;
        itemSize[] = { 1,2 };
        weight = 60;
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\epipen_poison_co.paa"
        };
        soundImpactType = "plastic";
    };
    class SRP_PoisonInjector_FlowerPoison : SRP_PoisonInjector_Base
    {
        scope = 2;
        displayName = "Bioflower Poison Injector";
        descriptionShort = "An injector containing a small amount of concentrated bioflower poison.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\epipen_poison_co.paa"
        };
    };
    class SRP_PoisonInjector_EnhancedFlowerPoison : SRP_PoisonInjector_Base
    {
        scope = 2;
        displayName = "Enhanced Bioflower Poison Injector";
        descriptionShort = "An injector containing a large amount of concentrated bioflower poison.";
        hiddenSelections[] = { "zbytek" };
        hiddenSelectionsTextures[] =
        {
          "Survivalists_Mods\gear\medical\data\epipen_poison_co.paa"
        };
    };
};