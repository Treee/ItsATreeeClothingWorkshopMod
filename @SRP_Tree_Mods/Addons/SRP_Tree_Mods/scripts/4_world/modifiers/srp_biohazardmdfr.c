class SRP_BioHazardMdfr: ModifierBase
{	
  static const int BIOHAZARD_DISTANCE_TOTAL_SIZE = 800; // how many meters ofzone to calculate;
  static const int BIOHAZARD_DISTANCE_MILD_ZONE = 700 ;// how many meters of "mild conditions" around the zone;
  static const int BIOHAZARD_DISTANCE_SEVERE_ZONE = 600;// how far does the severe zone extend from the center
  static const int BIOHAZARD_DISTANCE_CRITICAL_ZONE = 300;// how far does the critical zone extend from the center

  static const vector BIOHAZARD_ZONE_CENTER = "4600 0 7200";

  int m_lastBleedTime = 0;

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_ID 					= SRP_eModifiers.MDF_BIOHAZARD;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
    Print("SRP_BioHazardMdfr Registering Player Status Module Success");
	}

	override bool ActivateCondition(PlayerBase player)
	{    
    // Print("BiohazardMdfr: ActivateCondition - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.BIOHAZARD_AGENT));
    // activate this condition when we get close to the bio zone  
    return vector.Distance(player.GetPosition(), BIOHAZARD_ZONE_CENTER) <= BIOHAZARD_DISTANCE_TOTAL_SIZE;
	}
	
	override string GetDebugText()
	{
		return (GetAttachedTime()).ToString();
	}	
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("BiohazardMdfr: OnDeactivate End - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.BIOHAZARD_AGENT));
    // reset last bleed time
    m_lastBleedTime = 0;
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
    // Print("BiohazardMdfr: DeactivateCondition - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.BIOHAZARD_AGENT));
    return false;
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
    int currentBiohazardAgentCount = player.GetSingleAgentCount(SRP_Medical_Agents.BIOHAZARD_AGENT);
    float distanceFromCenter = vector.Distance(player.GetPosition(), BIOHAZARD_ZONE_CENTER);
    Print("BiohazardMdfr: OnTick - bio count: " + currentBiohazardAgentCount + " : Distance from center: " + distanceFromCenter);
    
    float damageMultiplier = GetProtectionMitigationMultiplier(player);
    if (damageMultiplier == 0) {
      return; // full protection means no damage
    } else {
      damageMultiplier = damageMultiplier * 0.1;
      // these effects stack cumulatively
      // within critical zone less than 300m from center
      if (distanceFromCenter <= BIOHAZARD_DISTANCE_CRITICAL_ZONE)
      { // decrease hp
        player.AddHealth("GlobalHealth", "Health", (-PlayerConstants.LOW_ENERGY_DAMAGE_PER_SEC * deltaT) * damageMultiplier );
      } //within severe zone less than 600m from center
      if (distanceFromCenter <= BIOHAZARD_DISTANCE_SEVERE_ZONE) {
        // decrease blood
        player.AddHealth("", "Blood", ((-1.5 * deltaT) * damageMultiplier));
      } //within mild zone less than 700m from center
      if (distanceFromCenter <= BIOHAZARD_DISTANCE_MILD_ZONE) {
        //Cut them once every 3 minutes
        if (m_lastBleedTime > 180) {
          player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection(SRP_DamageZones_LightBleeding.GetRandomElement());
          m_lastBleedTime = 0;
        } else {
          m_lastBleedTime += deltaT;
        }
      } //within somewhat safe approach zone less than 800m from center
      if (distanceFromCenter <= BIOHAZARD_DISTANCE_TOTAL_SIZE) {
        // decrease food and water
        player.GetStatWater().Add((-1.5 * deltaT) * damageMultiplier);
        player.GetStatEnergy().Add((-1.5 * deltaT) * damageMultiplier);
      }
    }
  }

  float GetProtectionMitigationMultiplier(PlayerBase player) {

    float totalProtectionValue = GetLevelOfProtectionTotal(player);
    // 6 is the default max for now, gasmask, gloves, body, legs, feet, headgear
    float totalProtectionMultiplier = 6 - totalProtectionValue;
    // cap the multiplier at 0 for now. experiment with adding health based on more protection later
    if (totalProtectionMultiplier < 0) {
      totalProtectionMultiplier = 0;
    }
    return totalProtectionMultiplier;
  }

  float GetLevelOfProtectionTotal(PlayerBase player) {
    float shoulder_protection = GetLevelOfProtectionForSlot(player, InventorySlots.SHOULDER);
		float headgear_protection = GetLevelOfProtectionForSlot(player, InventorySlots.HEADGEAR);
		float mask_protection = GetLevelOfProtectionForSlot(player, InventorySlots.MASK);
		float eyewear_protection = GetLevelOfProtectionForSlot(player, InventorySlots.EYEWEAR);
		float gloves_protection = GetLevelOfProtectionForSlot(player, InventorySlots.GLOVES);
		float armband_protection = GetLevelOfProtectionForSlot(player, InventorySlots.ARMBAND);
		float body_protection = GetLevelOfProtectionForSlot(player, InventorySlots.BODY);
		float vest_protection = GetLevelOfProtectionForSlot(player, InventorySlots.VEST);
		float back_protection = GetLevelOfProtectionForSlot(player, InventorySlots.BACK);
		float hips_protection = GetLevelOfProtectionForSlot(player, InventorySlots.HIPS);
		float legs_protection = GetLevelOfProtectionForSlot(player, InventorySlots.LEGS);
		float feet_protection = GetLevelOfProtectionForSlot(player, InventorySlots.FEET);
    float total_protection = shoulder_protection + headgear_protection + mask_protection + eyewear_protection + gloves_protection + armband_protection + body_protection + vest_protection + back_protection + hips_protection + legs_protection + feet_protection;
    return total_protection;
  }

  int GetLevelOfProtectionForSlot(PlayerBase player, int slot) {
		EntityAI attachment = player.GetInventory().FindAttachment(slot);
		if(!attachment) return 0;
		string subclass_path = "CfgVehicles " + attachment.GetType() + " Protection ";
		
    float value = GetGame().ConfigGetFloat (subclass_path + "biological");
		return value;
  }

};