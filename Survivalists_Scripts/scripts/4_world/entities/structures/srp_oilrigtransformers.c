class SRP_OilRigTransformer extends House
{
  ParticleSource m_Particle1;
  ParticleSource m_Particle2;
  ParticleSource m_Particle3;

  EffectSound m_ActiveSound;
  protected int m_SoundEffectInterval = 60 * 1000;
  protected int m_Energy = -1;
  
  void SRP_OilRigTransformer()
  {
    RegisterNetSyncVariableInt("m_Energy");
  }
  void ~SRP_OilRigTransformer()
  {
    StopParticles();
    StopSounds();
  }
  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
    if (NeedsRepairs())
      PlayElectricalSoundEffect();
    else
      StopSounds();
  };
  override void EEInit() 
  {
		super.EEInit();
    GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitElectricalPumps, 5000, false);
	}
  void InitElectricalPumps()
  {
    SRPConfig config;
    if (Class.CastTo(config, GetDayZGame().GetSRPConfigGlobal()))
    {
      SRP_OilRigGasInfo oilRigInfo;
      if (Class.CastTo(oilRigInfo, config.g_OilRigGasManager.GetOilRigInfoByPosition(GetPosition())))
      {
        m_Energy = oilRigInfo.GetOilRigEnergy();
        // Print(string.Format("%1 starting with %2 energy.", oilRigInfo.GetRigName(), m_Energy));
      }
    }
    if (!GetGame().IsDedicatedServer())
		{
      // Print("Oil Rig: " + GetPosition());
      StartAllParticles();
      PlayElectricalSoundEffect();
    }
  }
  bool NeedsRepairs()
  {
    if (m_Energy == -1)
      return false;
    return m_Energy < 1000;
  }
  bool IsMaxEnergy()
  {
    return m_Energy == 2000;
  }
  void DoRepairEvent(int amountToRepair)
  {
    SRPConfig config;
    if (Class.CastTo(config, GetDayZGame().GetSRPConfigGlobal()))
    {
      SRP_OilRigGasInfo oilRigInfo;
      if (Class.CastTo(oilRigInfo, config.g_OilRigGasManager.GetOilRigInfoByPosition(GetPosition())))
      {
        oilRigInfo.ModifyOilRigEnergy(amountToRepair);
        m_Energy += amountToRepair;
        // Print("Repair Event: " + m_Energy + " delta: " + amountToRepair);
        if (amountToRepair < 0)
          GetGame().CreateObjectEx("SRP_DrugExplosion", oilRigInfo.GetRigPosition(), ECE_NOSURFACEALIGN|ECE_KEEPHEIGHT);	

        SetSynchDirty();
      }
    }
  }
  vector GetRandomParticlePosition()
  {
    vector minMax[2];
    GetCollisionBox(minMax);

    string randomDirection = string.Format("%1 %2 %3", Math.RandomFloatInclusive(minMax[0][0],minMax[1][0]), Math.RandomFloatInclusive(minMax[0][1],minMax[1][1]), Math.RandomFloatInclusive(minMax[0][2],minMax[1][2]));
    // Print("random position " + randomDirection.ToVector());
    return randomDirection.ToVector();
  }
  void StopParticles()
  {
    if (m_Particle1)
      m_Particle1.StopParticle();
    if (m_Particle2)
      m_Particle2.StopParticle();
    if (m_Particle3)
      m_Particle3.StopParticle();
  }
  void StopSounds()
  {
    StopSoundSet( m_ActiveSound );
  }
  void StartAllParticles()
  {
    PlayElectricalSparksEffect1();
    PlayElectricalSparksEffect2();
    PlayElectricalSparksEffect3();
  }
  void PlayElectricalSparksEffect1()
  {
    if (!GetGame().IsDedicatedServer())
		{
      if (m_Particle1)
        m_Particle1.StopParticle();
      if (NeedsRepairs())
      {
        m_Particle1 = ParticleManager.GetInstance().PlayOnObject(ParticleList.FIREWORKS_EXPLOSION_YELLOW, this, GetRandomParticlePosition());
        m_Particle1.ScaleParticleParam(EmitorParam.SIZE, Math.RandomFloatInclusive(0.1, 0.5));
        m_Particle1.ScaleParticleParam(EmitorParam.LIFETIME, Math.RandomFloatInclusive(1, 3));
        m_Particle1.ScaleParticleParam(EmitorParam.VELOCITY, Math.RandomFloatInclusive(0.1, 0.5));
      }        
      float time = Math.RandomIntInclusive(7, 15) * 1000;
      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(PlayElectricalSparksEffect1, time, false);
    }
  }
  void PlayElectricalSparksEffect2()
  {
    if (!GetGame().IsDedicatedServer())
		{
      if (m_Particle2)
        m_Particle2.StopParticle();
      if (NeedsRepairs())
      {
        m_Particle2 = ParticleManager.GetInstance().PlayOnObject(ParticleList.EASTER_EGG_ACTIVATE, this, GetRandomParticlePosition());
        m_Particle2.ScaleParticleParam(EmitorParam.SIZE, Math.RandomFloatInclusive(1.8, 2.5));
        m_Particle2.ScaleParticleParam(EmitorParam.LIFETIME, Math.RandomFloatInclusive(5, 13));
      }        
      float time = Math.RandomIntInclusive(5, 7) * 1000;
      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(PlayElectricalSparksEffect2, time, false);
    }
  }
  void PlayElectricalSparksEffect3()
  {
    if (!GetGame().IsDedicatedServer())
		{
      if (m_Particle3)
        m_Particle3.StopParticle();
      if (NeedsRepairs())
      {
        m_Particle3 = ParticleManager.GetInstance().PlayOnObject(ParticleList.FIREWORKS_EXPLOSION_BLUE, this, GetRandomParticlePosition());
        m_Particle3.ScaleParticleParam(EmitorParam.SIZE, Math.RandomFloatInclusive(0.1, 0.5));
        m_Particle3.ScaleParticleParam(EmitorParam.LIFETIME, Math.RandomFloatInclusive(1, 3));
        m_Particle3.ScaleParticleParam(EmitorParam.VELOCITY, Math.RandomFloatInclusive(0.1, 0.5));
      }        
      float time = Math.RandomIntInclusive(11, 17) * 1000;
      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(PlayElectricalSparksEffect3, time, false);
    }
  }
  void PlayElectricalSoundEffect()
  {
    if (!GetGame().IsDedicatedServer())
		{
      StopSounds();

      if (NeedsRepairs())
        PlaySoundSet(m_ActiveSound, GetRandomElectricalSounds().GetRandomElement(), 1, 1);

      float time = 60 * 1000; // 60 seconds * 1000 miliseconds
      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(PlayElectricalSoundEffect, m_SoundEffectInterval, false);
		}
  }
  TStringArray GetRandomElectricalSounds()
  {
    return {
      "Survivalists_Mods_Ambience_ElectricalSounds1_SoundSet",
      "Survivalists_Mods_Ambience_ElectricalSounds2_SoundSet",
      "Survivalists_Mods_Ambience_ElectricalSounds3_SoundSet",
      "Survivalists_Mods_Ambience_ElectricalSounds4_SoundSet",
    };
  }
};

class StaticObj_Power_Transformer_Small extends SRP_OilRigTransformer{};
class StaticObj_Power_TransformerStation_Big extends SRP_OilRigTransformer{};
