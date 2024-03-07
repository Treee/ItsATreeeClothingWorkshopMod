class SRP_DrugExplosion: Grenade_Base
{
	void SRP_DrugExplosion()
	{
		m_Pinned = false;
		SetAmmoType("DrugExplosion_Ammo");
		SetFuseDelay(0);
		SetParticleExplosion(ParticleList.IMPACT_MEATBONES_ENTER);
		SetParticleExplosion(ParticleList.EXPLOSION_LANDMINE);
	}
};


class SRP_PipeBomb_ColorBase extends Grenade_Base
{
	void SRP_PipeBomb_ColorBase()
	{
		SetAmmoType("M67Grenade_Ammo");
		SetFuseDelay(4);
		SetParticleExplosion(ParticleList.M67);
	}

	void ~SRP_PipeBomb_ColorBase() {}
};