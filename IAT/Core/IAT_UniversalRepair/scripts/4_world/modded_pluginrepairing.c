modded class PluginRepairing
{
	override bool CanRepair( ItemBase repair_kit, Object item, string damage_zone = "" )
	{    
    // short circuit vanilla behavior
    if (super.CanRepair(repair_kit, item, damage_zone))
      return true;
    
		int state = item.GetHealthLevel(damage_zone);
		if ( state != GameConstants.STATE_RUINED && (item.CanBeRepairedToPristine() && state >= GameConstants.STATE_WORN) || (!item.CanBeRepairedToPristine() && state >= GameConstants.STATE_DAMAGED ) )
		{
      // pull the list of ints from config 
      array<int> repair_kit_types = new array<int>;
			repair_kit.ConfigGetIntArray( "repairKitType", repair_kit_types );	
			
			array<int> repairable_with_types = new array<int>;
			item.ConfigGetIntArray( "repairableWithKits", repairable_with_types );	
			
			for ( int i = 0; i < repairable_with_types.Count(); i++ )
			{
				int repairable_with_type = repairable_with_types.Get(i);
        // try to find this repair kit type from the list
        int repair_kit_types_index = repair_kit_types.Find(repairable_with_type);
        // if we did find a valid repair kit
        if (repair_kit_types_index > -1)
        {
          // check the repair given the found index for the repair kit
          if ( IsRepairValid( repair_kit_types.Get(repair_kit_types_index), repairable_with_type ) )
          {
            return true;
          }
        }
			}
		}
		return false;		
	}
};