// influenza, chemical agents already 1:1 transferability
modded class SalmonellaAgent
{
  override void Init()
  {
    super.Init();
    m_TransferabilityIn		= 0.4; // default 0.1
    m_TransferabilityOut	= 0.3; // default 0.1
  }
};

modded class FoodPoisonAgent
{
  override void Init()
  {
    super.Init();
    m_TransferabilityIn		= 1; // default 1
    m_TransferabilityOut	= 0.2; // default 0
  }
};

modded class CholeraAgent
{
  override void Init()
  {
    super.Init();
    m_TransferabilityIn		= 0.5; // default 0.1
    m_TransferabilityOut	= 0.3; // default 0.1
  }
};
