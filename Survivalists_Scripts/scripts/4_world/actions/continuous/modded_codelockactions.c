modded class ActionDestroyCodeLockOnTent
{
  override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
  {
    if (super.ActionCondition(player, target, item))
    {
      // special hacksaws granted by admins
      if (item.CanBypassRaidConditions())
        return true;

      Mission mission = GetGame().GetMission();
      if (!mission.m_ActiveRefresherLocations)
        return false;

      TVectorArray flagPositions = {};
      foreach(vector position : mission.m_ActiveRefresherLocations)
      {
        float distance = vector.Distance(player.GetPosition(), position);
        if (distance < 50)
        {
          flagPositions.Insert(position);
        }
      }
      if (flagPositions.Count() > 0)
      {
        array<Object> objectsInVicinity = new array<Object>();
        array<CargoBase> proxyCargos 		= new array<CargoBase>();
        foreach(vector flagPosition : flagPositions)
        {
		      GetGame().GetObjectsAtPosition3D(flagPosition, 1.0, objectsInVicinity, proxyCargos);
          foreach(Object flagRadiusObject : objectsInVicinity)
          {
            if (flagRadiusObject.IsInherited(SRP_TerritoryFlag_Crafting))
            {
              SRP_TerritoryFlag_Crafting territoryFlag;
              if (Class.CastTo(territoryFlag, flagRadiusObject))
              {
                return territoryFlag.IsRaidable();
              }
            }
          }
        }
      }
    }
    return false;
  }
};
modded class ActionDestroyCodeLockOnFence
{
    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        // Print("============================================================== ActionDestroyCodeLockOnFence");
        if (super.ActionCondition(player, target, item))
        {
            // Print("============================================================== super passed");
            // special hacksaws granted by admins
            if (item.CanBypassRaidConditions())
                return true;

            // server pass through
            if (GetGame().IsDedicatedServer())
				return true;

            // Print("============================================================== not special hacksaw");
            Mission mission = GetGame().GetMission();
            if (!mission.m_ActiveRefresherLocations)
                return false;

            // Print("============================================================== refresher locations found");
            TVectorArray flagPositions = {};
            foreach(vector position : mission.m_ActiveRefresherLocations)
            {
                float distance = vector.Distance(player.GetPosition(), position);
                // Print("distance from player: " + distance);
                if (distance < 80)
                {
                    flagPositions.Insert(position);
                    // Print("==================================adding location");
                }
            }
            if (flagPositions.Count() > 0)
            {
                // Print("============================================================== has flag positions");
                array<Object> objectsInVicinity = new array<Object>();
                array<CargoBase> proxyCargos 		= new array<CargoBase>();
                foreach(vector flagPosition : flagPositions)
                {
                    // Print("============================================================== checking flag positions");
                    GetGame().GetObjectsAtPosition3D(flagPosition, 1.0, objectsInVicinity, proxyCargos);
                    foreach(Object flagRadiusObject : objectsInVicinity)
                    {
                        // Print("============================================================== checking object");
                        if (flagRadiusObject.IsInherited(SRP_TerritoryFlag_Crafting))
                        {
                            // Print("============================================================== inherited from territory flag");
                            SRP_TerritoryFlag_Crafting territoryFlag;
                            if (Class.CastTo(territoryFlag, flagRadiusObject))
                            {
                                // Print("============================================================== is raidable");
                                return territoryFlag.IsRaidable();
                            }
                        }
                    }
                }
            }
        }
        return false;
    }
};
