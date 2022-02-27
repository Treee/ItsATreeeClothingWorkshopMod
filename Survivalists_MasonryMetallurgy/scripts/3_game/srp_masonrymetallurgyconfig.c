class SRPMMConfig
{
	ref array<string> m_SaltWaterJunkItems; // = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot"};
  ref array<string> m_SaltWaterFish;
	
  ref array<string> m_FreshWaterJunkItems; // = {"Wellies_Black","Wellies_Brown","Wellies_Green","Wellies_Grey","Pot"};
  ref array<string> m_FreshWaterFish;

  ref map<string, float> m_FishingHotspots; // location, radius
  ref map<string, float> m_FishingRodLuck;  // name, value
  
}