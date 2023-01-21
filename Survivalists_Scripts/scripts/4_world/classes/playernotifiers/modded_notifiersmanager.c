// enum eNotifiers
// {
// 	NTF_HEALTHY,
// 	NTF_BLEEDISH,
// 	NTF_HUNGRY,
// 	NTF_THIRSTY,
// 	NTF_STUFFED,
// 	NTF_SICK,
// 	NTF_WETNESS,
// 	NTF_WARMTH,
// 	NTF_FEVERISH,
// 	NTF_BLOOD,
// 	NTF_LIVES,
// 	NTF_STAMINA,
// 	//NTF_AGENT_INFECTION,
// 	NTF_PILLS,
// 	NTF_HEARTBEAT,
// 	NTF_FRACTURE,
// 	//----------------------------
// 	NTF_COUNT,// !!! LAST ITEM !!!

// }

enum SRP_eNotifiers: eNotifiers
{
  SRP_NTF_TIREDNESS,
  SRP_NTF_ALCOHOLISM,
  SRP_NTF_SANITY,
  SRP_NTF_DRUGDEPENDENCY,
  SRP_NTF_COUNT
}

modded class NotifiersManager
{
  override void Init()
  {
    super.Init();
    // m_Notifiers.Insert(new SRP_AlcoholismNotfr(this));
    // m_Notifiers.Insert(new SRP_DrugDependencyNotfr(this));
    // m_Notifiers.Insert(new SRP_SanityNotfr(this));
    m_Notifiers.Insert(new SRP_TirednessNotfr(this));
  }
};