class IAT_DestroyableObject_Base extends ItemBase
{
    override void EEKilled(Object killer)
    {
        super.EEKilled(killer);
        GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( ReplaceThenDelete, 200, false);
    }
    void ReplaceThenDelete()
    {
        EntityAI dead_entity = EntityAI.Cast( GetGame().CreateObjectEx( GetDeadItemName(), GetPosition(), ECE_OBJECT_SWAP ) );
        dead_entity.SetOrientation(GetOrientation());
        if ( KeepHealthOnReplace() )
        dead_entity.SetHealth(GetHealth());
        this.Delete();
    }
    override string GetDeadItemName()
    {
        return string.Format("%1_Destroyed", GetType());
    }
    override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
    {
        return true;
    }
    override bool IsHealthVisible()
    {
        return true;
    }
    override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    override bool CanPutIntoHands (EntityAI parent)
    {
        return false;
    }
};
class IAT_DestroyedObject_Base extends ItemBase
{
    // make sure ppl cant destroy it again haha
    override bool EEOnDamageCalculated(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		return false;
	}
    override bool IsHealthVisible()
	{
		return false;
	}
    override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
    override bool CanPutIntoHands (EntityAI parent)
    {
        return false;
    }
};

class IAT_DeleteObjectOnRuined_FrontDoor_Wall extends IAT_DestroyableObject_Base{};
class IAT_DeleteObjectOnRuined_FrontDoor_Wall_Destroyed extends IAT_DestroyedObject_Base{};
