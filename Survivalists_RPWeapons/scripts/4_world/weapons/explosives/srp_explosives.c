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
    
    if (GetGame().IsDedicatedServer())
    {
      float chance = Math.RandomFloatInclusive(0,1);
      if (chance > 0.65)
      {
        array<string> chunks = GetMiningStoneChunks();
        foreach(string chunk : chunks)
        {
          Object newObject = GetGame().CreateObjectEx(chunk, GetPosition(), ECE_SETUP|ECE_NOSURFACEALIGN|ECE_KEEPHEIGHT|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY);
        }
      }
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
	
  //values between 0-1
  array<string> GetMiningStoneChunks()
  {
    SRPMMConfig config;
    MiningOreConfig miningConfig;
    array<string> stoneChunks = new array<string>;
    if ( Class.CastTo(config, GetDayZGame().GetSRPMMConfig()) && Class.CastTo(miningConfig, config.IsInMiningQuarry(GetPosition())) )
    {
      float chance = Math.RandomFloatInclusive(0,1);
      // Print("chance: " + chance);
      if (chance >= Math.RandomFloatInclusive(0.5,0.75))
      {
        stoneChunks.Insert("SRP_Mining_StoneChunk_Platinum");
        chance = Math.RandomFloatInclusive(0,1);
        // Print("plat chance: " + chance);
      }
      if (chance >= Math.RandomFloatInclusive(0.5,0.75))
      {
        stoneChunks.Insert("SRP_Mining_StoneChunk_Gold");      
        chance = Math.RandomFloatInclusive(0,1);
        // Print("gold chance: " + chance);
      }
      if (chance >= Math.RandomFloatInclusive(0.5,0.75))
      {
        stoneChunks.Insert("SRP_Mining_StoneChunk_Iron");
        chance = Math.RandomFloatInclusive(0,1);
        // Print("iron chance: " + chance);
      }
      if (chance >= Math.RandomFloatInclusive(0.5,0.75))
      {
        stoneChunks.Insert("SRP_Mining_StoneChunk_Copper");
        chance = Math.RandomFloatInclusive(0,1);
        // Print("copper chance: " + chance);
      }
      if (chance >= Math.RandomFloatInclusive(0.5,0.75))
      {
        stoneChunks.Insert("SRP_Mining_StoneChunk_Tin");      
        chance = Math.RandomFloatInclusive(0,1);
        // Print("tin chance: " + chance);    
      }
    }
    return stoneChunks;
  }
}