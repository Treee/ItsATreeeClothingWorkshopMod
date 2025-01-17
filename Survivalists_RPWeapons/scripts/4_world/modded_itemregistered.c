modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded( pType, pBehavior );

        //==================================================== ATTACHMENTS
        pType.AddItemInHandsProfileIK("TT_Grip_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,				"dz/anims/anm/player/ik/gear/electronic_repair_kit.anm");
        pType.AddItemInHandsProfileIK("TT_Buttstock_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,				"dz/anims/anm/player/ik/gear/electronic_repair_kit.anm");
        pType.AddItemInHandsProfileIK("TT_GunBarrel_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,				"dz/anims/anm/player/ik/gear/electronic_repair_kit.anm");
        pType.AddItemInHandsProfileIK("TT_RifledBarrel_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,				"dz/anims/anm/player/ik/gear/electronic_repair_kit.anm");
        pType.AddItemInHandsProfileIK("TT_MainReceiver_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,				"dz/anims/anm/player/ik/gear/electronic_repair_kit.anm");
        pType.AddItemInHandsProfileIK("ESP_RIS_Adapter", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,				"dz/anims/anm/player/ik/gear/electronic_repair_kit.anm");
        pType.AddItemInHandsProfileIK("TT_Trigger_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");
        pType.AddItemInHandsProfileIK("TT_Hammer_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bait_worm.anm");
        pType.AddItemInHandsProfileIK("ESP_Holographic", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
        pType.AddItemInHandsProfileIK("ESP_Scope3X", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
        pType.AddItemInHandsProfileIK("ESP_Scope4X", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
        pType.AddItemInHandsProfileIK("ESP_Aimpoint", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
        pType.AddItemInHandsProfileIK("ESP_XPS3", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
        pType.AddItemInHandsProfileIK("ESP_Pistol_Reddot", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");

        //==================================================== EXPLOSIVES
        pType.AddItemInHandsProfileIK("SRP_Dynamite_Stick", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");
        pType.AddItemInHandsProfileIK("SRP_Dynamite_Stick_Kit", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");
        pType.AddItemInHandsProfileIK("SRP_Dynamite_Stack", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");
        pType.AddItemInHandsProfileIK("SRP_PipeBomb_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");
        //==================================================== BLADE WEAPONS
        pType.AddItemInHandsProfileIK("SRP_KarambitKnife", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_knife.asi", pBehavior, "dz/anims/anm/player/ik/gear/kitchenknife.anm");
        // pType.AddItemInHandsProfileIK("SRP_WarCleaver1", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior, "dz/anims/anm/player/ik/gear/hammer_ik.anm");
        // pType.AddItemInHandsProfileIK("SRP_WarCleaver", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,"dz/anims/anm/player/ik/gear/Hatchet.anm");
        pType.AddItemInHandsProfileIK("SRP_WarCleaver1", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");

        pType.AddItemInHandsProfileIK("SRP_KatanaSlim_Sheath_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_MasterSword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_NVWNightsSword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_GreatRuneSword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_MasterSword_Sheath_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_GladiusSword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_GladiusSwordSheath_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("tnails_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,"dz/anims/anm/player/ik/gear/machete.anm");
        pType.AddItemInHandsProfileIK("tbladed_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,"dz/anims/anm/player/ik/gear/machete.anm");
        pType.AddItemInHandsProfileIK("tantosword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("PipeAxe_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,"dz/anims/anm/player/ik/gear/Hatchet.anm");
        pType.AddItemInHandsProfileIK("SRP_VikingHandAxe_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,"dz/anims/anm/player/ik/gear/Hatchet.anm");
        pType.AddItemInHandsProfileIK("SRP_LeafSword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_RunicSword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_RunicSwordSheath_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_TidalSword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_TurkishSword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_DeerSword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_Norguldar_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");
        pType.AddItemInHandsProfileIK("SRP_NorguldarSwordSheath_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,	"dz/anims/anm/player/ik/gear/crowbar.anm");

    };

    override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterTwoHanded( pType, pBehavior );
        //==================================================== CRAFTING
        pType.AddItemInHandsProfileIK("TT_GunKit_ColorBase", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
        //==================================================== BLADE WEAPONS
        pType.AddItemInHandsProfileIK("SRP_KatanaBamboo", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
        pType.AddItemInHandsProfileIK("SRP_KatanaSlim_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
        pType.AddItemInHandsProfileIK("SRP_BerserkSword", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
        pType.AddItemInHandsProfileIK("SRP_WolfGreatsword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
        pType.AddItemInHandsProfileIK("SRP_WitcherSword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
        pType.AddItemInHandsProfileIK("SRP_LotR_SwordAnduril_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
        pType.AddItemInHandsProfileIK("SRP_CrystalMace", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/baseballbat.anm");
        pType.AddItemInHandsProfileIK("SRP_BeanBasher", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/baseballbat.anm");
        pType.AddItemInHandsProfileIK("SRP_FireyGreatsword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
        pType.AddItemInHandsProfileIK("ttcelticaxe_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_fireaxe.asi", pBehavior,"dz/anims/anm/player/ik/two_handed/FirefighterAxe.anm");
        pType.AddItemInHandsProfileIK("SRP_Spear_Pike_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_spear.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/advanced_spear.anm");
        pType.AddItemInHandsProfileIK("SRP_BrokenPinesClaymore_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
        pType.AddItemInHandsProfileIK("SRP_CrossGreatsword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
        pType.AddItemInHandsProfileIK("SRP_HolyGreatsword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
        pType.AddItemInHandsProfileIK("SRP_JawGreatsword_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");
        pType.AddItemInHandsProfileIK("SRP_CogBat_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sword.asi", pBehavior,	"dz/anims/anm/player/ik/two_handed/medieval_sword.anm");

        //==================================================== BLUNT WEAPONS
        pType.AddItemInHandsProfileIK("ttbaseballbat_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_bat.asi", pBehavior,"dz/anims/anm/player/ik/two_handed/baseballbat.anm");
        pType.AddItemInHandsProfileIK("SRP_WarHammer_Basic_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sledgehammer.asi", pBehavior,"dz/anims/anm/player/ik/two_handed/sledge_hammer.anm");
        pType.AddItemInHandsProfileIK("SRP_Staff_Wooden_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_spear.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/advanced_spear.anm");
        pType.AddItemInHandsProfileIK("SRP_Staff_Skull_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_sledgehammer.asi", pBehavior,"dz/anims/anm/player/ik/two_handed/sledge_hammer.anm");
        pType.AddItemInHandsProfileIK("SRP_Staff_Sun_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_spear.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/advanced_spear.anm");
        pType.AddItemInHandsProfileIK("SRP_Staff_Copper_Basic", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_spear.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/advanced_spear.anm");
        pType.AddItemInHandsProfileIK("SRP_Staff_Spear_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_spear.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/advanced_spear.anm");
        pType.AddItemInHandsProfileIK("SRP_Staff_Moon_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_spear.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/advanced_spear.anm");

        //==================================================== SHIELDS
        // pType.AddItemInHandsProfileIK("SRP_BloodRootShield_ColorBase", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
        // pType.AddItemInHandsProfileIK("SRP_WoodenShieldRound_ColorBase", "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi", pBehavior, "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
        // pType.AddItemInHandsProfileIK("SRP_BloodRootShield_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/metal_sheet.anm");
        // pType.AddItemInHandsProfileIK("SRP_WoodenShieldRound_ColorBase", "dz/anims/workspaces/player/player_main/player_main_heavy.asi", pBehavior, "dz/anims/anm/player/ik/heavy/metal_sheet.anm");
    }
};