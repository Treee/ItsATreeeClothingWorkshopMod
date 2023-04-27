class SRP_OilRigTransformer extends House
{
  ParticleSource m_Particle1;
  ParticleSource m_Particle2;
  ParticleSource m_Particle3;

  EffectSound m_ActiveSound;
  protected int m_ParticleEffectInterval = 10 * 1000;
  protected int m_SoundEffectInterval = 60 * 1000;
  
  void SRP_OilRigTransformer()
  {
    if (!GetGame().IsDedicatedServer())
		{
      PlayElectricalSparksEffect1();
      PlayElectricalSparksEffect2();
      PlayElectricalSparksEffect3();
      PlayElectricalSoundEffect();
    }
  }

  void ~SRP_OilRigTransformer()
  {
    StopParticles();
    StopSounds();
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
  void PlayElectricalSparksEffect1()
  {
    if (!GetGame().IsDedicatedServer())
		{
      if (m_Particle1)
        m_Particle1.StopParticle();

      m_Particle1 = ParticleManager.GetInstance().PlayOnObject(GetRandomParticle().GetRandomElement(), this, GetRandomParticlePosition());
      m_Particle1.ScaleParticleParam(EmitorParam.SIZE, Math.RandomFloatInclusive(0.8, 2.0));
      m_Particle1.ScaleParticleParam(EmitorParam.LIFETIME, Math.RandomFloatInclusive(1, 3));

      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(PlayElectricalSparksEffect1, Math.RandomIntInclusive(3, 5), false);
    }
  }
  void PlayElectricalSparksEffect2()
  {
    if (!GetGame().IsDedicatedServer())
		{
      if (m_Particle2)
        m_Particle2.StopParticle();

      m_Particle2 = ParticleManager.GetInstance().PlayOnObject(GetRandomParticle().GetRandomElement(), this, GetRandomParticlePosition());
      m_Particle2.ScaleParticleParam(EmitorParam.SIZE, Math.RandomFloatInclusive(0.8, 2.0));
      m_Particle2.ScaleParticleParam(EmitorParam.LIFETIME, Math.RandomFloatInclusive(1, 3));
      
      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(PlayElectricalSparksEffect2, Math.RandomIntInclusive(5,7), false);
    }
  }
  void PlayElectricalSparksEffect3()
  {
    if (!GetGame().IsDedicatedServer())
		{
      if (m_Particle3)
        m_Particle3.StopParticle();

      m_Particle3 = ParticleManager.GetInstance().PlayOnObject(GetRandomParticle().GetRandomElement(), this, GetRandomParticlePosition());
      m_Particle3.ScaleParticleParam(EmitorParam.SIZE, Math.RandomFloatInclusive(0.8, 2.0));
      m_Particle3.ScaleParticleParam(EmitorParam.LIFETIME, Math.RandomFloatInclusive(1, 3));
      
      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(PlayElectricalSparksEffect3, Math.RandomIntInclusive(7,11), false);
    }
  }
  void PlayElectricalSoundEffect()
  {
    if (!GetGame().IsDedicatedServer())
		{
      // Print("Electrical sounds!!");
      PlaySoundSet(m_ActiveSound, GetRandomElectricalSounds().GetRandomElement(), 1, 1);
      float time = 60 * 1000; // 60 seconds * 1000 miliseconds
      GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(PlayElectricalSoundEffect, m_SoundEffectInterval, false);
		}
  }
  TIntArray GetRandomParticle()
  {
    return {
      ParticleList.BARBED_WIRE_SPARKS,
      ParticleList.EASTER_EGG_ACTIVATE,
      ParticleList.FIREWORKS_EXPLOSION_BLUE,
      ParticleList.FIREWORKS_EXPLOSION_YELLOW,
    };
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
