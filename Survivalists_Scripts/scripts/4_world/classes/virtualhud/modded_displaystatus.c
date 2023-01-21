// enum eDisplayElements
// {
// 	DELM_BADGE_STUFFED,
// 	DELM_BADGE_WET,
// 	DELM_BADGE_SICK,
// 	DELM_BADGE_POISONED,
// 	DELM_BADGE_FRACTURE,
// 	DELM_BADGE_BLEEDING,
// 	DELM_BADGE_PILLS,
// 	DELM_BADGE_HEARTBEAT,
// 	//------------------
// 	DELM_TDCY_HEALTH,
// 	DELM_TDCY_BLOOD,
// 	DELM_TDCY_TEMPERATURE,
// 	DELM_TDCY_ENERGY,
// 	DELM_TDCY_WATER,
// 	DELM_TDCY_BACTERIA,
// 	//------------------
// 	DELM_STANCE,
// 	COUNT
// }

enum SRP_eDisplayElements: eDisplayElements
{
  SRP_DELM_TDCY_TIREDNESS,
  SRP_ELEMENT_COUNT
  SRP_DELM_TDCY_ALCOHOLISM,
  SRP_DELM_TDCY_SANITY,
  SRP_DELM_TDCY_DRUGDEPENDENCY,
};

const int	SRP_NTFKEY_TIREDNESS = 17;
const int	SRP_NTFKEY_ALCOHOLISM = 18;
const int	SRP_NTFKEY_SANITY = 19;
const int	SRP_NTFKEY_DRUGDEPENDENCY = 20;

modded class VirtualHud
{
  // is this even used?
  // const int NUMBER_OF_MASKS = 3;//how many INT numbers we need to accommodate all elements
	const int NUMBER_OF_ELEMENTS = SRP_eDisplayElements.SRP_ELEMENT_COUNT;
  void VirtualHud(PlayerBase player)
  {
    // by this time there are already 43/64 bits worth of registered elements
    // we are adding 24 more bits for 67 total
    RegisterElement(new SRP_TendencyTiredness(m_Player));// size 6
    // RegisterElement(new SRP_TendencyAlcoholism(m_Player));// size 6
    // RegisterElement(new SRP_TendencySanity(m_Player));// size 6
    // RegisterElement(new SRP_TendencyDrugDependency(m_Player));// size 6


    // PrintElements();
  }
};