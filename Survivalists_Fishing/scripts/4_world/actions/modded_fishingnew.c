modded class CCTWaterSurface
{
	override bool Can( PlayerBase player, ActionTarget target )
	{
		if ( !target || ( target && target.GetObject() ) )
			return false;
		
		// See if we are looking at something			
		vector hit_pos = target.GetCursorHitPos();
		if (hit_pos == vector.Zero)
			return false;
		
		// See if the surface at the cursor position is water (surfType.Contains("water"))
		// Small Y offset, as it will prioritize water when surfaces are really close together
		string surfType;
		g_Game.SurfaceGetType3D(hit_pos[0], hit_pos[1] + 0.1, hit_pos[2], surfType);
		
		// See if the player is looking at the sea
		bool isSeaCheck = false;
		if ( m_SurfaceType == UAWaterType.ALL )
			isSeaCheck = ( hit_pos[1] <= ( g_Game.SurfaceGetSeaLevel() + 0.001 ) );
		
		// Sometimes SurfaceGetType3D ignores the Y, this makes it so the proper distance is calculated
		hit_pos[1] = g_Game.SurfaceY(hit_pos[0],hit_pos[2]);

    // Print("Distance: " + vector.DistanceSq(hit_pos, player.GetPosition()) + " ISSea: " + isSeaCheck + " surfaceType: " + surfType + " 2nd surface: " + m_SurfaceType + " max distance: " + m_MaximalActionDistanceSq);
		
		// Combine the tests and check the distance
		return ( vector.DistanceSq(hit_pos, player.GetPosition()) <= m_MaximalActionDistanceSq && (isSeaCheck || surfType.Contains(m_SurfaceType)) );
	}
};


modded class FishingActionData
{
	const float FISHING_SUCCESS 		= 0.2;
	const float FISHING_BAIT_LOSS 		= 0.1; // default 0.02
	const float FISHING_HOOK_LOSS 		= 0.02; // default 0.015;
	const float FISHING_DAMAGE 			= 7.0; // default 5.0
	const float FISHING_GARBAGE_CHANCE 	= 0.2;

  bool m_IsSurfaceDeepSea = false;
}

// this stuff is called after a single unit of action
modded class ActionFishingNewCB
{	
  override void CreateActionComponent()
	{
		EnableStateChangeCallback();
		m_ActionData.m_ActionComponent = new CAContinuousRepeatFishing(1.0);
	}

	override void HandleFishingResultSuccess()
	{
    // if server side
		if (!GetGame().IsMultiplayer() || GetGame().IsServer())
		{
			ItemBase fish;
      // if bait exists, set it in the fishing data
			if (!m_ActionDataFishing.m_Bait)
				m_ActionDataFishing.InitBait(ItemBase.Cast(m_ActionDataFishing.m_MainItem.FindAttachmentBySlotName("Hook")));
			
      // if the hook is not empty
			if (!m_ActionDataFishing.IsBaitEmptyHook())
			{
        // reduce bait hp
				m_ActionDataFishing.m_Bait.AddHealth(-m_ActionDataFishing.FISHING_DAMAGE);
        // turn bait into hook
				MiscGameplayFunctions.TurnItemIntoItem(m_ActionDataFishing.m_Bait,m_ActionDataFishing.m_Bait.ConfigGetString("hookType"),m_ActionDataFishing.m_Player);
			}
			else
			{
        // damage the hook
				m_ActionDataFishing.m_Bait.AddHealth(-m_ActionDataFishing.FISHING_DAMAGE);
        ItemBase lure = ItemBase.Cast(m_ActionDataFishing.m_MainItem.FindAttachmentBySlotName("SRP_FishingLure"));
        if (lure)
        {
          lure.AddHealth(-m_ActionDataFishing.FISHING_DAMAGE);
        }
			}
			
			float rnd = Math.RandomFloatInclusive(0.0,1.0);
      // Print("Rolled " + rnd);
      // if we roll 20 or higher
			if (rnd > m_ActionDataFishing.FISHING_GARBAGE_CHANCE)
			{
        bool hasLure = (ItemBase.Cast(m_ActionDataFishing.m_MainItem.FindAttachmentBySlotName("SRP_FishingLure")) != NULL);
			  rnd = Math.RandomFloatInclusive(0.0,1.0);
        string fishClassName;
        // if the surface is sea
				if (m_ActionDataFishing.m_IsSurfaceSea)
        {
          // give salt water fish
          fishClassName = GetSaltWaterFish(rnd, m_ActionDataFishing.m_MainItem.GetType(), hasLure, m_ActionDataFishing.m_IsSurfaceDeepSea);
        }
				else
        {
          // fresh water fish
          fishClassName = GetFreshWaterFish(rnd, m_ActionDataFishing.m_MainItem.GetType(), hasLure);
        }
        if (fishClassName != "")
        {
          // Print("Fish spawned: " + fishClassName);
          fish = ItemBase.Cast(GetGame().CreateObjectEx(fishClassName,m_ActionDataFishing.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
        }
			} // we rolled a 20 or lower
			else
			{
        string junk_type;
        // synced random on client and server
			  rnd = Math.RandomFloatInclusive(0.0,1.0);
        // Print("Junk Randon: " + rnd);
        // if the surface is sea
				if (m_ActionDataFishing.m_IsSurfaceSea )
				{
					junk_type = GetSaltWaterJunk(rnd, m_ActionDataFishing.m_MainItem.GetType());          
				}
        else
        {
          // fresh water junk
					junk_type = GetFreshWaterJunk(rnd, m_ActionDataFishing.m_MainItem.GetType());
        }
        if (junk_type != "")
        {
          // Print("Junk Type: " + junk_type);
          fish = ItemBase.Cast(GetGame().CreateObjectEx(junk_type,m_ActionDataFishing.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE));
          fish.SetHealth("","Health",fish.GetMaxHealth("","Health") * 0.05);
        }
			}
			
      // if we caught something
			if (fish)
			{
				// Print("---Caught something: " + fish + "---");
				fish.SetWet(0.3);
        // if the fish has a quantity
				if (fish.HasQuantity())
				{
          // randomize it a bit
					float coef = Math.RandomFloatInclusive(0.01, 1.0);
					float item_quantity = fish.GetQuantityMax() * coef;
					item_quantity = Math.Round(item_quantity);
					fish.SetQuantity( item_quantity );
				}
			}
			// damage the rod
			m_ActionDataFishing.m_MainItem.AddHealth(-m_ActionDataFishing.FISHING_DAMAGE);
		}
	}

  string GetSaltWaterFish(float chance, string rodName, bool hasLure, bool isDeepSea = false)
  {
    string fishType = ""; // default
    if (GetDayZGame().GetSRPFishingConfig())
    {
      if (GetDayZGame().GetSRPFishingConfig())
      {
        fishType = GetDayZGame().GetSRPFishingConfig().GetRandomSaltWaterFish(chance, rodName, hasLure, isDeepSea);
      }
    }
    if (fishType == "")
    {
      fishType = "Mackerel";
    }
    return fishType;
  }

  string GetSaltWaterJunk(float chance, string rodName)
  {
    string junkType = m_JunkTypes.Get(Math.RandomInt(0,m_JunkTypes.Count())); // default
    if (GetDayZGame().GetSRPFishingConfig())
    {
      junkType = GetDayZGame().GetSRPFishingConfig().GetRandomSaltWaterJunk(chance, rodName);
    }
    return junkType;
  }

  string GetFreshWaterFish(float chance, string rodName, bool hasLure)
  {
    string fishType = ""; // default
    if (GetDayZGame().GetSRPFishingConfig())
    {
      if (GetDayZGame().GetSRPFishingConfig())
      {
        fishType = GetDayZGame().GetSRPFishingConfig().GetRandomFreshWaterFish(chance, rodName, hasLure);
      }
    }
    if (fishType == "")
    {
      fishType = "Carp";
    }
    return fishType;
  }
  
  string GetFreshWaterJunk(float chance, string rodName)
  {
    string junkType = m_JunkTypes.Get(Math.RandomInt(0,m_JunkTypes.Count())); // default
    if (GetDayZGame().GetSRPFishingConfig())
    {
      junkType = GetDayZGame().GetSRPFishingConfig().GetRandomFreshWaterJunk(chance, rodName);
    }
    return junkType;
  }
};

// this is setting up the line, bait and rod stuff
modded class ActionFishingNew
{
  override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTWaterSurface(50, UAWaterType.ALL);
	}
  
	override bool SetupAction(PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL)
	{
		if ( super.SetupAction( player, target, item, action_data, extra_data))
		{
			vector hit_pos = action_data.m_Target.GetCursorHitPos();
			if (GetGame().SurfaceIsSea(hit_pos[0],hit_pos[2]))
			{
        hit_pos[1] = GetGame().SurfaceY(hit_pos[0],hit_pos[2]);

				FishingActionData.Cast(action_data).m_IsSurfaceSea = true;
				FishingActionData.Cast(action_data).m_IsSurfaceDeepSea = (vector.DistanceSq(hit_pos, player.GetPosition()) > 1000);
        // Print("Distance: " + vector.DistanceSq(hit_pos, player.GetPosition()))
			}
			FishingRod_Base_New rod = FishingRod_Base_New.Cast(action_data.m_MainItem);
			if (rod)
			{
        // get the fishing effectivity bonus
        float rodluck_modifier = 0.0;
        if (GetDayZGame().GetSRPFishingConfig())
        {
          rodluck_modifier = GetDayZGame().GetSRPFishingConfig().GetRodLuckModifier(rod.GetType());      
        }
				FishingActionData.Cast(action_data).m_RodQualityModifier = (rod.GetFishingEffectivityBonus() + rodluck_modifier);
        // initialize the bait
				FishingActionData.Cast(action_data).InitBait(ItemBase.Cast(action_data.m_MainItem.FindAttachmentBySlotName("Hook")));
			}
			return true;
		}
		return false;
	}
	
  // handles the state change to initiate a fishing result (success or failure)
	override int EvaluateFishingResult(ActionData action_data)
	{
    // instant win (debug)
		if (action_data.m_Player.IsQuickFishing())
			return 1;
		
		FishingActionData fad = FishingActionData.Cast(action_data);
    // synced random on client and server
		float rnd = fad.m_Player.GetRandomGeneratorSyncManager().GetRandom01(RandomGeneratorSyncUsage.RGSGeneric);    
		// no modifier during day (9am-6pm);
    float daytime_modifier = 0;    
		float hook_modifier = 0.5;
		
		float hourOfDay = GetGame().GetDayTime();
    // dusk/dawn
    if ((hourOfDay > 18 && hourOfDay < 22) || (hourOfDay > 5 && hourOfDay < 9))
    {
      daytime_modifier = 0.5;
    } // nightime
    else if (hourOfDay > 21 && hourOfDay < 6)
    {
      daytime_modifier = 0.8;
    }
    // Print("Daytime value: " + hourOfDay + " modifier: " + daytime_modifier);

		//fishing with an empty hook
		if (fad.IsBaitEmptyHook())
		{
      // severely reduce success
			hook_modifier = 0.05;
		}

    float hotspot_modifier = 0.0;

    if (GetDayZGame().GetSRPFishingConfig())
    {
      hotspot_modifier = GetDayZGame().GetSRPFishingConfig().GetHotSpotModifier(fad.m_Player.GetPosition());
    }
		// modifiers decrease the chance threshold so getting a fish or item is "easier"		
		float chance = 1 - (((fad.FISHING_SUCCESS + hotspot_modifier) * daytime_modifier) + (fad.m_RodQualityModifier)) * hook_modifier;		
    // Print("Fishing success: " + fad.FISHING_SUCCESS + " hotspot mod: " + hotspot_modifier + " daytime mod: " + daytime_modifier + " fad.RodQualityMod: " + fad.m_RodQualityModifier + " hookmod: " + hook_modifier + " Random number: " + rnd + " chance needed: " + chance);
		// Print("random " + rnd +" Bait Loss: " + fad.FISHING_BAIT_LOSS + " is not empty hook " + !fad.IsBaitEmptyHook());
    if (rnd > chance)
		{
			return 1;
    }
		else if (rnd < fad.FISHING_BAIT_LOSS && !fad.IsBaitEmptyHook()) // restricts the loss of an empty hook (low chance is enough)
		{
			return 0;
		}
		return -1;
	}

  protected float TranslateToNewRange(float input, float newMin, float newMax, float oldMin = 0, float oldMax = 1)
  {
    return ( (input - oldMin)/(oldMax-oldMin) ) * (newMax - newMin) + newMin;
  }
};