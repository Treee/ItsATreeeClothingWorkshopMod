class land_srp_smokesignal_base extends House
{
    Particle m_ParticleEfx;

	void land_srp_smokesignal_base()
	{
		if ( !GetGame().IsDedicatedServer() )
		{
			m_ParticleEfx = ParticleManager.GetInstance().PlayOnObject(GetSmokeParticle(), this, GetPosition());
		}
	}
    override void EEDelete(EntityAI parent)
	{
		if ( !GetGame().IsDedicatedServer() )
		{
			if ( m_ParticleEfx )
				m_ParticleEfx.Stop();
		}
	}

    int GetSmokeParticle()
    {
        return ParticleList.SMOKING_HELI_WRECK;
    }
};

class land_srp_smokesignal_green extends land_srp_smokesignal_base
{
	override int GetSmokeParticle()
    {
        return ParticleList.GRENADE_M18_GREEN_LOOP;
    }
};
class land_srp_smokesignal_purple extends land_srp_smokesignal_base
{
	override int GetSmokeParticle()
    {
        return ParticleList.GRENADE_M18_PURPLE_LOOP;
    }
};
class land_srp_smokesignal_red extends land_srp_smokesignal_base
{
	override int GetSmokeParticle()
    {
        return ParticleList.GRENADE_M18_RED_LOOP;
    }
};
class land_srp_smokesignal_white extends land_srp_smokesignal_base
{
	override int GetSmokeParticle()
    {
        return ParticleList.GRENADE_M18_WHITE_LOOP;
    }
};
class land_srp_smokesignal_yellow extends land_srp_smokesignal_base
{
	override int GetSmokeParticle()
    {
        return ParticleList.GRENADE_M18_YELLOW_LOOP;
    }
};
class land_srp_smokesignal_black extends land_srp_smokesignal_base
{
	override int GetSmokeParticle()
    {
        return ParticleList.GRENADE_M18_BLACK_LOOP;
    }
};
class land_srp_smokesignal_crash extends land_srp_smokesignal_base
{
	override int GetSmokeParticle()
    {
        return ParticleList.SMOKING_HELI_WRECK;
    }
};