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