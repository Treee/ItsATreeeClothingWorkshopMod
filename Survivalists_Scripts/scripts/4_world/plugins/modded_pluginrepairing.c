modded class PluginRepairing extends PluginBase
{
    override void CalculateHealth(PlayerBase player, ItemBase kit, Object item, float specialty_weight, string damage_zone = "", bool use_kit_qty = true)
	{
        // weapon repair kits
        if (kit && kit.ConfigGetInt("repairKitType") == 1)
        {
            EntityAI entity;
            if (Class.CastTo(entity, item))
                entity.SetAllowDamage(true);

            float repairPercentage = GetWeaponRepairPercentage(kit.GetType());

            float current_health = item.GetHealth(damage_zone, "Health");
            float max_health = item.GetMaxHealth(damage_zone, "Health");
            float target_health = current_health + (max_health * repairPercentage);
            // clamp to 0 and max health
            float target_health_clamped = Math.Clamp(target_health, 0, max_health);
            // clamp to 0 and worn health
            if (!CanRepairToPristine(player) && !CanBeRepairedToPristine(item))
                target_health_clamped = Math.Clamp(target_health, 0, max_health * GameConstants.STATE_WORN);

            DepleteRepairKit(kit, item, use_kit_qty);

            if (current_health < target_health_clamped)
                item.SetHealth(damage_zone, "Health", target_health_clamped);
        }
        else
            super.CalculateHealth(player, kit, item, specialty_weight, damage_zone, use_kit_qty);

        // do invuln check
		if (entity != null)
			entity.ProcessInvulnerabilityCheck(entity.GetInvulnerabilityTypeString());

	}
    void DepleteRepairKit(ItemBase kit, Object item, bool use_kit_qty)
    {
        if (kit && kit.ConfigGetInt("repairKitType"))
		{
            float kit_repair_cost_adjusted; //used with specialty_weight, disconnected
            float new_quantity;

			bool kit_has_quantity = kit.HasQuantity();
			float cur_kit_quantity = kit.GetQuantity();
			float kit_repair_cost_per_level = GetKitRepairCost(kit, item);

            // // repair kits consume half quantity
            // if (kit.GetType() == "SRP_WeaponRepairKit")
            //     kit_repair_cost_per_level = kit_repair_cost_per_level * 0.5;

			if (cur_kit_quantity > kit_repair_cost_per_level)
			{
				kit_repair_cost_adjusted = kit_repair_cost_per_level; //TODO: removed speciality weight for now, it should affect speed only (?).
				//kit_repair_cost_adjusted = player.GetSoftSkillsManager().SubtractSpecialtyBonus(kit_repair_cost_per_level, specialty_weight);
				kit_repair_cost_adjusted = Math.Clamp(kit_repair_cost_adjusted, 0, 100);
				if (use_kit_qty)
				{
					new_quantity = kit.GetQuantity() - kit_repair_cost_adjusted;
					kit.SetQuantity(new_quantity);
				}
			}
			else if (!kit_has_quantity) //"kit" without quantity (hammers and such) for your every day repairing needs
			{
			}
			else
			{
				if (use_kit_qty)
				{
					kit.SetQuantity(0);
				}
			}
		}
    }
    float GetWeaponRepairPercentage(string kitName)
    {
        if (kitName == "SRP_WeaponRepairKit")
            return 0.3;
        return 0.05;
    }

};