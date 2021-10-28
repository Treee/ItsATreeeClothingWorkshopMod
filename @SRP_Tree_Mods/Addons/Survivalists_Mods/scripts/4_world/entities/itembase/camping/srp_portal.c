class SRP_PortalBase extends Inventory_Base
{
  override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
    
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }

  override string GetInvulnerabilityTypeString()
	{
		return "disableBaseDamage";
	}

  void TeleportPlayer(PlayerBase player, string destination)
  {    
    vector player_pos = player.GetPosition();    
    vector closest_safe_pos = GetTemplateIslandSpawnPoints().GetRandomElement();
    if (destination == "home")
    {
      closest_safe_pos = GetReturnLocations().GetRandomElement();
    }

    closest_safe_pos[1] = GetGame().SurfaceY(closest_safe_pos[0], closest_safe_pos[2]);
    player.SetPosition( closest_safe_pos );//...so lets teleport them somewhere safe
    GetGame().RPCSingleParam(player, ERPCs.RPC_WARNING_TELEPORT, null, true, player.GetIdentity());   
  }

  array<vector> GetReturnLocations()
  {
    return {
      "3880.34 14.088 9838.07", "6046.6 5.89249 14896.4", "9959 21.7825 11047.3", "7962.3 4.1465 8652.18",
      "5671.55 4.9425 9272.67", "3172.19 22.1825 6285.98", "4351.97 9.52215 3195.02", "5478.49 6.6125 997.507",
      "7041.67 44.1828 1810.15", "7463.39 33.9114 3626.54", "10238.3 43.6443 5142.85", "9242.34 11.2332 7138.88"
    };
  }

  array<vector> GetTemplateIslandSpawnPoints()
  {
    return {
      "200.076 17.5203 373.244", "200.91 17.635 376.625", "203.894 17.5517 375.947", "202.913 17.4622 372.84",
      "252.281 4.30492 294.168", "254.848 4.28106 296.109", "256.666 4.20943 293.871", "254.403 4.22075 292.073",
      "190.275 17.811 540.368", "188.421 17.8533 542.666", "190.754 18.1094 544.874", "192.119 18.0294 541.975",
      "162.237 28.9325 590.383", "164.603 28.9325 592.812", "166.452 28.9325 590.449", "164.535 28.9325 588.607",
      "243.111 15.936 739.746", "244.601 15.8899 736.634", "242.338 15.8022 735.013", "241.035 15.8924 737.743",
      "207.232 15.9464 812.859", "206.816 15.9706 808.727", "204.222 15.9447 809.584", "204.492 15.9409 812.593",
      "398.069 17.1929 942.151", "395.038 17.2981 941.83", "395.02 17.1275 945.074" , "397.974 17.0343 945.102",
      "586.012 32.1653 956.103", "587.302 32.4145 953.148", "584.793 31.9727 951.742" , "583.586 31.8147 954.203",
      "617.152 24.6125 832.506", "617.265 24.6157 829.633", "614.54 24.6125 829.166" , "614.237 24.6125 832.308",
      "611.369 16.0642 707.34", "608.559 15.9447 705.684", "607.012 15.958 708.085" , "609.77 16.1245 710.042",
      "451.162 16.3919 678.352", "454.521 16.1459 678.228", "454.678 16.4238 675.511" , "451.426 16.6131 675.413"
    };
  }

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTeleportToEvent);		
	}
};

class SRP_PortalBone extends SRP_PortalBase{};
class SRP_PortalArch extends SRP_PortalBase{};
class SRP_PortalDruid extends SRP_PortalBase{};
class SRP_PortalReturn extends SRP_PortalBase
{
  Particle groundParticle;

  void SRP_PortalReturn()
  {
    StartParticleEffects();
  }

  void ~SRP_PortalReturn()
  {
    StopParticleEffects();
  }

  void StartParticleEffects()
  {
    if ( !GetGame().IsMultiplayer() || GetGame().IsClient() ) //add this as server no like particles 
    {
      groundParticle = Particle.PlayOnObject(ParticleList.Fog_40m_A64_WHITE_L, this, "0 5 0", vector.Zero , false);
      
      //effects i could find 
      // groundParticle.ScaleParticleParam(EmitorParam.VELOCITY, 0.1);
      // groundParticle.ScaleParticleParam(EmitorParam.VELOCITY_RND, 1);
      groundParticle.ScaleParticleParam(EmitorParam.SIZE, 2);
      // groundParticle.ScaleParticleParam(EmitorParam.BIRTH_RATE, 1);
      // groundParticle.ScaleParticleParam(EmitorParam.AIR_RESISTANCE, 0.5);
      // groundParticle.ScaleParticleParam(EmitorParam.AIR_RESISTANCE_RND, 0.5);
      // groundParticle.ScaleParticleParam(EmitorParam.LIFETIME, 1.5);
      // groundParticle.ScaleParticleParam(EmitorParam.LIFETIME_RND, 0.5);
      // groundParticle.SetWiggle( 10, 0.5 );
    };
  }

  void StopParticleEffects()
  {
    if (groundParticle)
    {
      groundParticle.Stop();
    }
  }

  override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionTeleportToEvent);	
    AddAction(ActionTeleportAwayFromEvent);
	}
};

class SRP_AltarBase extends Inventory_Base
{
  Particle groundParticle;
  int m_particleEffect;
  vector m_Position;
  float m_ParticleSize;
  float m_BirthRate;
  float m_Lifetime;
  float m_LifetimeRandom;

  void SRP_AltarBase()
  {
    m_ParticleSize = 2.0;
    m_Position = Vector(0, 0, 0);
    m_particleEffect = ParticleList.GRENADE_M18_RED_LOOP;
    m_BirthRate = 1.0; // try not to have birthrate above 1
    m_Lifetime = 1.5;
    m_LifetimeRandom = m_Lifetime - m_BirthRate;
    // StartParticleEffects();
  }

  void ~SRP_AltarBase()
  {
    // StopParticleEffects();
  }

  override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
    
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }

  override string GetInvulnerabilityTypeString()
	{
		return "disableBaseDamage";
	}

  void StartParticleEffects()
  {
    if ( !GetGame().IsMultiplayer() || GetGame().IsClient() ) //add this as server no like particles 
    {       
      // groundParticle = Particle.PlayOnObject(ParticleList.Fog_40m_A64_WHITE_L, this, "0 5 0", vector.Zero , false);
      groundParticle = Particle.PlayOnObject(m_particleEffect, this, m_Position, vector.Zero , false);
      
      //effects i could find 
      // groundParticle.ScaleParticleParam(EmitorParam.VELOCITY, 0.1);
      // groundParticle.ScaleParticleParam(EmitorParam.VELOCITY_RND, 1);
      groundParticle.ScaleParticleParam(EmitorParam.SIZE, m_ParticleSize);
      groundParticle.ScaleParticleParam(EmitorParam.BIRTH_RATE, m_BirthRate);
      groundParticle.ScaleParticleParam(EmitorParam.AIR_RESISTANCE, 0.5);
      groundParticle.ScaleParticleParam(EmitorParam.AIR_RESISTANCE_RND, 0.5);
      groundParticle.ScaleParticleParam(EmitorParam.LIFETIME, m_Lifetime);
      groundParticle.ScaleParticleParam(EmitorParam.LIFETIME_RND, m_LifetimeRandom);
      // groundParticle.SetWiggle( 10, 0.5 );
    };
  }

  void StopParticleEffects()
  {
    if (groundParticle)
    {
      groundParticle.Stop();
    }
  }
};

class SRP_AltarBone extends SRP_AltarBase
{
  void SRP_AltarBone()
  {
    m_ParticleSize = 5.0;
    m_Position = Vector(0, 0, 0);
    m_particleEffect = ParticleList.Fog_40m_A32_WHITE_WS;
    m_BirthRate = 8.0; // try not to have birthrate above 1
    m_Lifetime = 4.5;
    m_LifetimeRandom = m_Lifetime - m_BirthRate;
    StartParticleEffects();
  }
};
class SRP_AltarWraith extends SRP_AltarBase
{
  void SRP_AltarWraith()
  {
    m_ParticleSize = 5.0;
    m_Position = Vector(0, 0, 0);
    m_particleEffect = ParticleList.Fog_40m_A64_YELLOW_WS;
    m_BirthRate = 10.5; // try not to have birthrate above 1
    m_Lifetime = 4.0;
    m_LifetimeRandom = m_Lifetime - m_BirthRate;
    StartParticleEffects();
  }
};
class SRP_AltarDog extends SRP_AltarBase
{
  void SRP_AltarDog()
  {
    m_ParticleSize = 3.0;
    m_Position = Vector(0, 0, 0);
    m_particleEffect = ParticleList.Fog_40m_A64_YELLOW_WS;
    m_BirthRate = 10.0; // try not to have birthrate above 1
    m_Lifetime = 3.5;
    m_LifetimeRandom = m_Lifetime - m_BirthRate;
    StartParticleEffects();
  }
};
class SRP_AltarWendigo extends SRP_AltarBase
{
  void SRP_AltarWendigo()
  {
    m_ParticleSize = 4.0;
    m_Position = Vector(0, 0, 0);
    m_particleEffect = ParticleList.Fog_40m_A16_TOXIC_L;
    m_BirthRate = 7.0; // try not to have birthrate above 1
    m_Lifetime = 5.5;
    m_LifetimeRandom = m_Lifetime - m_BirthRate;
    StartParticleEffects();
  }
};
class SRP_AltarBigBoss extends SRP_AltarBase
{
  void SRP_AltarBigBoss()
  {
    m_ParticleSize = 6.0;
    m_Position = Vector(0, 0, 0);
    m_particleEffect = ParticleList.Fog_40m_A64_WHITE;
    m_BirthRate = 10.0; // try not to have birthrate above 1
    m_Lifetime = 3.5;
    m_LifetimeRandom = m_Lifetime - m_BirthRate;
    StartParticleEffects();
  }
};
