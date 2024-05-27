class Ammo_40mm_Flashbang: Ammo_40mm_Base
{
    override bool ShootsExplosiveAmmo()
	{
		return true;
	}

	override void EEKilled(Object killer)
	{
		super.EEKilled(killer);
		GetGame().CreateObject("DUB_Flash", GetPosition());
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( DeleteSafe, 1000, false);
	}

	override void OnDamageDestroyed(int oldLevel)
	{
		super.OnDamageDestroyed(oldLevel);
		#ifndef SERVER
		ClearFlags(EntityFlags.VISIBLE, false);
		#endif
	}
};