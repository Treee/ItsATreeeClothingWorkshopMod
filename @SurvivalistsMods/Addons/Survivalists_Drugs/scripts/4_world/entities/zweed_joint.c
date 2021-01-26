class ZWeed_Joint extends Edible_Base {
	Particle 				m_SmokeParticle;
	vector 					m_ParticleLocalPos = Vector(0.1, 1.52, 0.25);
		
	
	void ZWeed_Joint()
	{	
		init();	
	}

	void init()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // client side
    {
      m_SmokeParticle = Particle.PlayOnObject(ParticleList.CAMP_NORMAL_SMOKE, this, m_ParticleLocalPos, Vector(0,0,0), true);
      m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 0.01);
      m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY, 0.03);
    }			
	}

	void ~ZWeed_Joint()
	{
		StopAllParticles();
	}

	void StopAllParticles()
	{
		if (m_SmokeParticle)
		{
			m_SmokeParticle.Stop();
		}
	}

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSmoke);
	}	
};