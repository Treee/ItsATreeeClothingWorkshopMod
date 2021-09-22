class SRP_BioHazardMdfr: ModifierBase
{	
  // these are the radius of the zone extending from the center
  vector BIOHAZARD_ZONE_CENTER = "0 0 0";

  int BIOHAZARD_DISTANCE_TO_CENTER = 0; // how many meters ofzone to calculate;
  int BIOHAZARD_DISTANCE_MILD_ZONE = 0 ;// how many meters of "mild conditions" around the zone;
  int BIOHAZARD_DISTANCE_SEVERE_ZONE = 0;// how far does the severe zone extend from the center
  int BIOHAZARD_DISTANCE_CRITICAL_ZONE = 0;// how far does the critical zone extend from the center

  int m_lastBleedTime = 0;
  int m_lastMessageTime = 999999; //force the biozone message to display the first time we enter
  int m_messageRepeatInterval = 0;

	override void Init()
	{
		m_TrackActivatedTime = true;
		m_ID 					= SRP_eModifiers.MDF_BIOHAZARD;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
    Print("Registering::SRP_BioHazardMdfr Success");
	}

	override bool ActivateCondition(PlayerBase player)
	{    
    // Print("BiohazardMdfr: ActivateCondition - Sleepyness count: " + player.GetSingleAgentCount(SRP_Medical_Agents.BIOHAZARD_AGENT));
    // activate this condition when we get close to the bio zone  
    SRPConfig config = GetDayZGame().GetSRPConfigGlobal(); 
    bool isInZone = false;
    if (config) {
      if (config.g_SRPIsBioHazardLocationsActive) {
        if (config.g_SRPBiohazardZoneLocations != NULL) {
          foreach (BioHazardZoneLocation loc : config.g_SRPBiohazardZoneLocations){
            if (loc.isPlayerInZone(player.GetPosition())){
              BIOHAZARD_ZONE_CENTER = loc.center;
              BIOHAZARD_DISTANCE_CRITICAL_ZONE = loc.totalRadius;
              BIOHAZARD_DISTANCE_CRITICAL_ZONE = loc.criticalRadius;
              BIOHAZARD_DISTANCE_SEVERE_ZONE = loc.severeRadius;
              BIOHAZARD_DISTANCE_MILD_ZONE = loc.mildRadius;
              m_messageRepeatInterval = loc.messageRepeatInterval;
              isInZone = true;
            }
          }
        }
      }
    }
    return isInZone;
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
    SRPConfig config = GetDayZGame().GetSRPConfigGlobal();
    bool isInZone = false;
    foreach (BioHazardZoneLocation loc : config.g_SRPBiohazardZoneLocations){
      isInZone = isInZone || loc.isPlayerInZone(player.GetPosition());      
    }
    return !isInZone;
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
    int currentBiohazardAgentCount = player.GetSingleAgentCount(SRP_Medical_Agents.BIOHAZARD_AGENT);
    float distanceFromCenter = vector.Distance(player.GetPosition(), BIOHAZARD_ZONE_CENTER);
    // Print("BiohazardMdfr: OnTick - bio count: " + currentBiohazardAgentCount + " : Distance from center: " + distanceFromCenter);    
    float damageMultiplier = GetProtectionMitigationMultiplier(player);
    if (damageMultiplier == 0) {
      return; // full protection means no damage
    } else {
      damageMultiplier = damageMultiplier * 0.1;
      // these effects stack cumulatively
      // player.SendMessageToClient(player, "BiohazardMdfr: OnTick - : Distance from center: " + distanceFromCenter + " : damage multiplier " + damageMultiplier);

      // within critical zone less than 300m from center
      if (distanceFromCenter <= BIOHAZARD_DISTANCE_CRITICAL_ZONE)
      { // decrease hp
        // Print("Critical");
        player.AddHealth("GlobalHealth", "Health", (-1.25 * deltaT) * damageMultiplier );
      } //within severe zone less than 600m from center
      if (distanceFromCenter <= BIOHAZARD_DISTANCE_SEVERE_ZONE) {
        // Print("Severe");
        // decrease blood
        player.AddHealth("", "Blood", ((-15 * deltaT) * damageMultiplier));
        player.InsertAgent(SRP_Medical_Agents.SLEEP_AGENT);
      } //within mild zone less than 700m from center
      if (distanceFromCenter <= BIOHAZARD_DISTANCE_MILD_ZONE) {
        // Print("Mild");
        //Cut them once every 3 minutes
        if (m_lastBleedTime > 120) {
          player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection(SRP_DamageZones_LightBleeding.GetRandomElement());
          m_lastBleedTime = 0;
        } else {
          m_lastBleedTime += deltaT;
        }
      } //within somewhat safe approach zone less than 800m from center
      if (distanceFromCenter <= BIOHAZARD_DISTANCE_TO_CENTER) {
        // Print("Approaching");
        // decrease food and water
        player.GetStatWater().Add((-2.5 * deltaT) * damageMultiplier);
        player.GetStatEnergy().Add((-2.5 * deltaT) * damageMultiplier);
        // every 2 minutes display biozone message
        if (m_lastMessageTime > 120){
          player.SendMessageToClient(player, "You are within the BIOHAZARD zone.");
          m_lastMessageTime = 0;
        }
        m_lastMessageTime += deltaT;
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