modded class SmokeGrenadeBase
{
  override protected void PlaySmokeParticle()
	{
    super.PlaySmokeParticle();
    if (m_ParticleSmoke)
    {
      m_ParticleSmoke.ScaleParticleParam(EmitorParam.SIZE, Math.RandomFloatInclusive(2.5, 5.0));
    }
	}
};