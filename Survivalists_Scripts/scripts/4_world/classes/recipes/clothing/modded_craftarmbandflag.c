modded class CraftArmbandFlag
{
    override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
        if (ingredients[0])
        {
            string flagColor = ingredients[0].ConfigGetString("color");
            string path_base = string.Format("CfgVehicles Armband_%1", flagColor);
            if (!GetGame().ConfigIsExisting(path_base)) // armband doesnt exist
            {
                GetGame().CreateObjectEx("Armband_White", player.GetPosition(), ECE_SETUP|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY);
                GetGame().CreateObjectEx("Armband_White", player.GetPosition(), ECE_SETUP|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY);
                GetGame().CreateObjectEx("Armband_White", player.GetPosition(), ECE_SETUP|ECE_NOLIFETIME|ECE_DYNAMIC_PERSISTENCY);
            }
            else
            {
                super.Do(ingredients, player, results, specialty_weight);
            }
        }
	}
};