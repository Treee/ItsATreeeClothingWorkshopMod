modded class PluginTransmissionAgents
{
    //  the calling method only checks for a mask. we just need to hook into here and modify "protection" based on helmet values
    override protected float InjectAgentWithPlayerDose(EntityAI target, int agent, float protection, float dose_size, int inject_type)//target,array_of_agents,protection_lvl
	{
        float helmet_protection = GetProtectionLevel(DEF_CHEMICAL,InventorySlots.HEADGEAR, Man.Cast( target ));
        protection = protection + helmet_protection;
        return super.InjectAgentWithPlayerDose(target, agent, protection, dose_size, inject_type);
	}

};