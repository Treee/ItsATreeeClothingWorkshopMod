class SRP_Dynamite_Stick extends Grenade_Base
{
  static protected vector	m_SmokeOrigin = "0 0.195 -0.02";
  
	protected Particle m_ParticleSmoke;

	ref NoiseParams m_NoisePar;

  protected void PlaySmokeParticle()
	{
    if ( !GetGame().IsDedicatedServer() )
		{
      m_ParticleSmoke = ParticleManager.GetInstance().PlayOnObject(ParticleList.ROADFLARE_BURNING_SMOKE, this, m_SmokeOrigin, vector.Zero, true);
      m_ParticleSmoke.SetWiggle( 2, 0.3);
      m_ParticleSmoke.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 3);
    }
	}

  override void Unpin()
	{
		super.Unpin();
		
		Activate();
	}
  
	override void OnActivateStarted()
	{	
		if ( GetGame().IsServer() )
		{
			m_NoisePar = new NoiseParams();
			m_NoisePar.LoadFromPath("cfgVehicles " + GetType() + " NoiseSmokeGrenade");
			NoiseSystem noise = GetGame().GetNoiseSystem();
			if ( noise )
			{
				noise.AddNoisePos( this, GetPosition(), m_NoisePar );
			}
		}
	}

  override void OnExplode()
  {
    if ( !GetGame().IsDedicatedServer() )
		{
      DestroyParticle(m_ParticleSmoke);
    }
    super.OnExplode();
  }

  override void SetActions()
	{
		super.SetActions();

		RemoveAction(ActionPin);
	}

  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
    if (!IsPinned())
    {
      DestroyParticle(m_ParticleSmoke);
      PlaySmokeParticle();
    }
	}

  void SRP_Dynamite_Stick() 
  { 
		SetAmmoType("LandFuelFeed_Ammo");
		SetPinnable(false);
    SetFuseDelay(DEFAULT_FUSE_DELAY);
		SetGrenadeType(EGrenadeType.FRAGMENTATION);
    SetParticleExplosion(ParticleList.EXPLOSION_LANDMINE);
  };

  void ~SRP_Dynamite_Stick() {};
	
}

class SRP_Dynamite_Stack extends Grenade_Base
{
  static protected vector	m_SmokeOrigin = "0 0.195 -0.02";
  
	protected Particle m_ParticleSmoke;

	ref NoiseParams m_NoisePar;

  protected void PlaySmokeParticle()
	{
    if ( !GetGame().IsDedicatedServer() )
		{
      m_ParticleSmoke = ParticleManager.GetInstance().PlayOnObject(ParticleList.ROADFLARE_BURNING_SMOKE, this, m_SmokeOrigin, vector.Zero, true);
      m_ParticleSmoke.SetWiggle( 2, 0.3);
      m_ParticleSmoke.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 5);
    }
	}
	
  override void Unpin()
	{
		super.Unpin();
		
		Activate();
	}

	override void OnActivateStarted()
	{	
		if ( GetGame().IsServer() )
		{
			m_NoisePar = new NoiseParams();
			m_NoisePar.LoadFromPath("cfgVehicles " + GetType() + " NoiseSmokeGrenade");
			NoiseSystem noise = GetGame().GetNoiseSystem();
			if ( noise )
			{
				noise.AddNoisePos( this, GetPosition(), m_NoisePar );
			}
		}
	}

  override void OnExplode()
  {
    if ( !GetGame().IsDedicatedServer() )
		{
      DestroyParticle(m_ParticleSmoke);
    }
    super.OnExplode();
  }

  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
    if (!IsPinned())
    {
      DestroyParticle(m_ParticleSmoke);
      PlaySmokeParticle();
    }
	}

  override void SetActions()
	{
		super.SetActions();

		RemoveAction(ActionPin);
	}

  void SRP_Dynamite_Stack() 
  { 
		SetAmmoType("LandFuelFeed_Ammo");
    SetPinnable(false);
    SetFuseDelay(DEFAULT_FUSE_DELAY);
		SetGrenadeType(EGrenadeType.FRAGMENTATION);
    SetParticleExplosion(ParticleList.EXPLOSION_LANDMINE);
  };

  void ~SRP_Dynamite_Stack() {};
	
}