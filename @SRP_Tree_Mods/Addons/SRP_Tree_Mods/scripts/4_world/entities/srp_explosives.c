class SRP_Dynamite_Stick extends ItemBase
{
	protected ref Timer	m_DeleteTimer;
  protected Particle m_ParFinalFire;
	protected Particle m_ParJustSmoke;
  protected Particle m_ParticleExplosion;

	protected int	PARTICLE_FINAL_EXPLOSION = ParticleList.GRENADE_RDG2_BLACK_LOOP;
	static protected int PARTICLE_FINAL_FIRE = ParticleList.ROADFLARE_BURNING_ENDING;
	static protected int PARTICLE_FINAL_SMOKE = ParticleList.ROADFLARE_BURNING_SMOKE;

	protected EffectSound m_BurningSound;
	protected EffectSound m_IgniteSound;

  static protected const string	BURNING_SOUND = "roadflareLoop_SoundSet";	
	static protected const string	IGNITE_SOUND = "roadflareTurnOn_SoundSet";
	
  static protected vector	m_FlameLocalPos = "0 0.2 -0.02";
	protected vector m_ParticlePosition;

  bool IsExploded = false;

  void SRP_Dynamite_Stick() { };

  void ~SRP_Dynamite_Stick() {};

  override void EEDelete(EntityAI parent)
	{
		super.EEDelete(parent);
		
		if ( GetGame() )
		{
			if ( m_BurningSound )
			{
				StopSoundSet( m_BurningSound );
			}
		}
		DestroyAllParticles();
    DestroyParticle(m_ParticleExplosion);
	}

  override void EEKilled(Object killer)
	{
		super.EEKilled(killer);
		//! should be called only here to avoid multiple explosion calculations, call SetHealth("","",0.0) instead
    Explode(EGrenadeType.FRAGMENTATION, "M67Grenade_Ammo");
	}

  override void OnWorkStart()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer())
		{
			PlaySoundSetLoop( m_BurningSound, BURNING_SOUND, 0.5, 0 );
			PlaySoundSet( m_IgniteSound, IGNITE_SOUND, 0, 0 );
		}
	}

  // Every second of the explopsive burning
	override void OnWork(float consumed_energy)
	{
		UpdateActiveParticles();
	}

  override void OnWorkStop()
	{
		if ( GetGame().IsMissionMainMenu() ) // This is singleplayer main menu so no synchronization here!
		{
			UpdateActiveParticles();
		}
		else
		{
      IsExploded = true;
			if ( GetGame().IsServer() )
			{ 
				SetHealth("","",0);
        SetTakeable(false);
        m_DeleteTimer.Run(10, this, "DeleteSave");
			}
			UpdateActiveParticles();
      DestroyAllParticles();
		}		
		
		if ( m_BurningSound )
			StopSoundSet( m_BurningSound );		
	}  
  
  void UpdateActiveParticles()
	{
		if ( GetGame().IsServer()  &&  GetGame().IsMultiplayer() )
			return;
		
    if (!m_ParFinalFire)
    {
      DestroyAllParticles();
      m_ParFinalFire = Particle.PlayOnObject( PARTICLE_FINAL_FIRE, this, m_FlameLocalPos, vector.Zero, true);
      m_ParFinalFire.SetWiggle( 4, 0.3);
    }
    if (!m_ParJustSmoke)
    {
      DestroyAllParticles();
      m_ParJustSmoke = Particle.PlayOnObject( PARTICLE_FINAL_SMOKE, this, m_FlameLocalPos, vector.Zero, true);
      m_ParJustSmoke.SetWiggle( 2, 0.3);
    }		
    if (!m_ParticleExplosion && IsExploded) 
    {
      DestroyParticle(m_ParticleExplosion);
      m_ParticleExplosion = Particle.PlayOnObject(PARTICLE_FINAL_EXPLOSION, this, m_FlameLocalPos, vector.Zero, true);
      m_ParticleExplosion.SetWiggle( 2, 0.3);
      m_ParticleExplosion.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 7.5);
      m_ParticleExplosion.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY, 0.1);
      m_ParticleExplosion.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY_RND, 0.1);
    }
	}

  override bool CanPutInCargo( EntityAI parent )
	{
		return !GetCompEM().IsWorking();;
	}

  override bool CanIgniteItem(EntityAI ignite_target = NULL)
	{
		return GetCompEM().IsWorking();
	}

  bool CanExplodeInFire()
	{
		return true;
	}

  void DestroyParticle( Particle p )
	{
		if (p)
		{
			p.SetWiggle(0,0);
			p.Stop();
		}
	}
	
	// Destroys all particles
	void DestroyAllParticles()
	{
		DestroyParticle(m_ParFinalFire);
		DestroyParticle(m_ParJustSmoke);
	}

  override void SetActions()
	{
    super.SetActions();
    AddAction(ActionTurnOnWhileInHands); // only alow the player to light the fuse
	}
	
}

class SRP_Dynamite_Stack extends ItemBase
{
	protected ref Timer	m_DeleteTimer;
  protected Particle m_ParFinalFire;
	protected Particle m_ParJustSmoke;
  protected Particle m_ParticleExplosion;

	protected int	PARTICLE_FINAL_EXPLOSION = ParticleList.GRENADE_RDG2_BLACK_LOOP;
	static protected int PARTICLE_FINAL_FIRE = ParticleList.ROADFLARE_BURNING_ENDING;
	static protected int PARTICLE_FINAL_SMOKE = ParticleList.ROADFLARE_BURNING_SMOKE;

	protected EffectSound m_BurningSound;
	protected EffectSound m_IgniteSound;

  static protected const string	BURNING_SOUND = "roadflareLoop_SoundSet";	
	static protected const string	IGNITE_SOUND = "roadflareTurnOn_SoundSet";
	
  static protected vector	m_FlameLocalPos = "0 0.2 -0.02";
	protected vector m_ParticlePosition;

  bool IsExploded = false;

  void SRP_Dynamite_Stack() { };

  void ~SRP_Dynamite_Stack() {};

  override void EEDelete(EntityAI parent)
	{
		super.EEDelete(parent);
		
		if ( GetGame() )
		{
			if ( m_BurningSound )
			{
				StopSoundSet( m_BurningSound );
			}
		}
		DestroyAllParticles();
    DestroyParticle(m_ParticleExplosion);
	}

  override void EEKilled(Object killer)
	{
		super.EEKilled(killer);
		//! should be called only here to avoid multiple explosion calculations, call SetHealth("","",0.0) instead
    Explode(DT_EXPLOSION, "LandFuelFeed_Ammo");
	}

  override void OnWorkStart()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer())
		{
			PlaySoundSetLoop( m_BurningSound, BURNING_SOUND, 0.5, 0 );
			PlaySoundSet( m_IgniteSound, IGNITE_SOUND, 0, 0 );
		}
	}

  // Every second of the explopsive burning
	override void OnWork(float consumed_energy)
	{
		UpdateActiveParticles();
	}

  override void OnWorkStop()
	{
		if ( GetGame().IsMissionMainMenu() ) // This is singleplayer main menu so no synchronization here!
		{
			UpdateActiveParticles();
		}
		else
		{
      IsExploded = true;
			if ( GetGame().IsServer() )
			{ 
				SetHealth("","",0);
        SetTakeable(false);
        m_DeleteTimer.Run(10, this, "DeleteSave");
			}
			UpdateActiveParticles();
      DestroyAllParticles();
		}		
		
		if ( m_BurningSound )
			StopSoundSet( m_BurningSound );		
	}  
  
  void UpdateActiveParticles()
	{
		if ( GetGame().IsServer()  &&  GetGame().IsMultiplayer() )
			return;
		
    if (!m_ParFinalFire)
    {
      DestroyAllParticles();
      m_ParFinalFire = Particle.PlayOnObject( PARTICLE_FINAL_FIRE, this, m_FlameLocalPos, vector.Zero, true);
      m_ParFinalFire.SetWiggle( 4, 0.3);
    }
    if (!m_ParJustSmoke)
    {
      DestroyAllParticles();
      m_ParJustSmoke = Particle.PlayOnObject( PARTICLE_FINAL_SMOKE, this, m_FlameLocalPos, vector.Zero, true);
      m_ParJustSmoke.SetWiggle( 2, 0.3);
    }		
    if (!m_ParticleExplosion && IsExploded) 
    {
      DestroyParticle(m_ParticleExplosion);
      m_ParticleExplosion = Particle.PlayOnObject(PARTICLE_FINAL_EXPLOSION, this, m_FlameLocalPos, vector.Zero, true);
      m_ParticleExplosion.SetWiggle( 2, 0.3);
      m_ParticleExplosion.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 7.5);
      m_ParticleExplosion.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY, 0.1);
      m_ParticleExplosion.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY_RND, 0.1);
    }
	}

  override bool CanPutInCargo( EntityAI parent )
	{
		return !GetCompEM().IsWorking();;
	}

  override bool CanIgniteItem(EntityAI ignite_target = NULL)
	{
		return GetCompEM().IsWorking();
	}

  bool CanExplodeInFire()
	{
		return true;
	}

  void DestroyParticle( Particle p )
	{
		if (p)
		{
			p.SetWiggle(0,0);
			p.Stop();
		}
	}
	
	// Destroys all particles
	void DestroyAllParticles()
	{
		DestroyParticle(m_ParFinalFire);
		DestroyParticle(m_ParJustSmoke);
	}

  override void SetActions()
	{
    super.SetActions();
    AddAction(ActionTurnOnWhileInHands); // only alow the player to light the fuse
	}
	
}