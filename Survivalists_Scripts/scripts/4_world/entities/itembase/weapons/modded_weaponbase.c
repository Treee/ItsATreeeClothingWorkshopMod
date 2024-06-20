modded class Weapon_Base
{
    protected const float MIN_GUN_JAM_CHANCE = 0.1;
    protected float m_MaintenanceBuff_GunJam = 1; // 50% reduced chance to jam natively
    protected bool m_HasMaintainedGun = false;
    //========================================================== OVERRIDE
    override float GetChanceToJam()
    {
        return super.GetChanceToJam() * GetMaintenanceBuff_GunJam();
    }
    override void OnItemLocationChanged(EntityAI old_owner, EntityAI new_owner)
    {
        super.OnItemLocationChanged(old_owner, new_owner);
        // Print("weaponbase OnItemLocationChanged: " + GetType() + " : " + old_owner + " new: " + new_owner);
        if (new_owner && !CanAssignToQuickbar())
        {
            PlayerBase rootPlayer;
            if (Class.CastTo(rootPlayer, new_owner.GetHierarchyRootPlayer()))
                rootPlayer.RemoveQuickBarEntityShortcut(this);
        }
    }
    override bool CanAssignToQuickbar()
    {
        if (super.CanAssignToQuickbar()) // if vanilla says we can add to quickbar, run our logic
        {
            // PrintFormat("CanAssignToQuickbar Checking slots for %1", GetType());
            PlayerBase playerParent;
            // main shoulder slots on player
            if (Class.CastTo(playerParent, GetHierarchyParent()))
                return true;
            // no guns in cargo can go on quickbar
            if (GetInventory() && GetInventory().IsInCargo())
                return false;

            EntityAI itemParent;
            // attached to some item
            if (Class.CastTo(itemParent, GetHierarchyParent()))
            {
                // item attached to player
                if (Class.CastTo(playerParent, itemParent.GetHierarchyParent()))
                    return true;
                // item in cargo
                if (itemParent.GetInventory() && itemParent.GetInventory().IsInCargo())
                    return false;
            }
            return true;
        }
        return false;
    }
    //========================================================== CUSTOM OVERRIDE
    override bool IsSmeltable()
    {
        return true;
    }
    override TStringArray GetSmeltableOptions()
    {
        return {"SRP_Mining_RawOre_Iron"};
    }
    override int GetSmeltableYield()
    {
        return Math.RandomIntInclusive(0, 3);
    }
    //========================================================== CUSTOM
    void SetMaintenanceBuff_GunJam(float newValue)
    {
        if (!m_HasMaintainedGun)
            m_MaintenanceBuff_GunJam = Math.Max(MIN_GUN_JAM_CHANCE, newValue);

        m_HasMaintainedGun = true;
    }
    float GetMaintenanceBuff_GunJam()
    {
        return m_MaintenanceBuff_GunJam;
    }
};