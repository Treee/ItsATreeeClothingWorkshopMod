modded class SecurityConfig 
{
  override void SpawnCarrierLoot()
  {
    EntityAI entity;	   		
    // Grenade Slots
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13222.894531 15.0 15524.569336", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13222.740234 15.0 15524.700195", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13219.562500 15.0 15514.354492", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13222.907227 15.0 15524.763672", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13223.058594 15.0 15524.690430", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13223.287109 15.0 15526.123047", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13223.456055 15.0 15526.084961", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13223.111328 15.0 15526.041992", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13223.434570 15.0 15525.916016", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13218.921875 15.0 15511.791016", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13218.931641 15.0 15511.903320", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13221.884766 15.0 15513.283203", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13218.377930 15.0 15522.963867", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13219.453125 15.0 15519.849609", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13224.044922 15.0 15521.475586", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableGranades().GetRandomElement(), "13224.100586 15.0 15521.363281", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    
    // Weapon Slots	   
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableWeapons().GetRandomElement(), "13218.728516 15.0 15515.910156", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableWeapons().GetRandomElement(), "13219.254883 15.0 15514.738281", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableWeapons().GetRandomElement(), "13220.274414 15.0 15519.490234", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableWeapons().GetRandomElement(), "13222.842773 15.0 15515.856445", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableWeapons().GetRandomElement(), "13220.471680 15.0 15522.504883", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableWeapons().GetRandomElement(), "13224.087891 15.0 15519.137695", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableAmmo().GetRandomElement(), "13220.644531 15.0 15518.200195", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableAmmo().GetRandomElement(), "13221.211914 15.0 15511.539063", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    
    // Optics
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableOptics().GetRandomElement(), "13219.452148 15.0 15518.870117", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));      			
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableOptics().GetRandomElement(), "13219.369141 15.0 15515.501953", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableOptics().GetRandomElement(), "13219.269141 15.0 15515.401953", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableOptics().GetRandomElement(), "13218.232031 15.0 15515.126367", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));

    // MAGS
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableMags().GetRandomElement(), "13222.397461 15.0 15515.195313", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));		
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableMags().GetRandomElement(), "13218.332031 15.0 15515.026367", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableMags().GetRandomElement(), "13221.669922 15.0 15522.061523", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableMags().GetRandomElement(), "13222.872070 15.0 15521.693359", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
      
    // AMMO
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableAmmo().GetRandomElement(), "13219.957031 15.0 15518.566406", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800)) ;     											
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableAmmo().GetRandomElement(), "13221.388672 15.0 15512.016602", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableAmmo().GetRandomElement(), "13218.147461 15.0 15515.163086", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));      										   
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableAmmo().GetRandomElement(), "13223.338867 15.0 15521.563477", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));		
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableAmmo().GetRandomElement(), "13218.047461 15.0 15515.063086", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));      										   
    Class.CastTo(entity, GetGame().CreateObjectEx(GetSpawnableAmmo().GetRandomElement(), "13223.238867 15.0 15521.463477", ECE_CREATEPHYSICS|ECE_KEEPHEIGHT|ECE_SETUP|0x800));
  }

  TStringArray GetSpawnableGranades()
  {
    return {
      "M67Grenade", 
      "RGD5Grenade", 
      "FlashGrenade",
      "M18SmokeGrenade_Red",
      "M18SmokeGrenade_Green",
      "M18SmokeGrenade_Yellow",
      "M18SmokeGrenade_Purple",
      "M18SmokeGrenade_White",
      "RDG2SmokeGrenade_Black",
      "RDG2SmokeGrenade_White",
      "ClaymoreMine"
    };
  }

  TStringArray GetSpawnableWeapons()
  {
    return {
     "ttscarl",
     "ttrpd",
     "FAL",     
    };
  }

  TStringArray GetSpawnableOptics()
  {
    return {
     "StarlightOptic",
     "ACOGOptic_6x",
     "NailBox",
     "DUB_Mutantsyringe_Admin2",
     "DUB_Mutantsyringe_Admin4",
     "SRP_ReadableBook_AlchemyHints",
     "SRP_Mining_RawOre_Zinc",
     "SRP_Mining_RawOre_Coal",
     "SRP_Mining_RawOre_Silver",
     "SRP_ForgeIngot_Silver",
     "SRP_ForgeIngot_Zinc",
     "SRP_ForgeIngot_Brass",
     "DUB_Larpsword",
     "Winebottle_two",
     "SRP_PistolSuppressor_Golden",
		 "ferguson",
		 "tantosword",
		 "ttl35",
		 "DUB_Rapier",
		 "DUB_Compressor",
		 "SRP_BrownBottle",
		 "DUB_BlunderPistol"
    };
  }

  TStringArray GetSpawnableMags()
  {
    return {
     "ttrpdmag",
     "Mag_STANAG_60Rnd",
     "Mag_STANAG_30Rnd",
    };
  }

  TStringArray GetSpawnableAmmo()
  {
    return {
      "AmmoBox_556x45_20Rnd",
      "AmmoBox_556x45Tracer_20Rnd",
      "AmmoBox_357_20Rnd",
      "AmmoBox_545x39_20Rnd",
      "AmmoBox_545x39Tracer_20Rnd",
      "AmmoBox_12gaFlash_10Rnd"
    };
  }
}
