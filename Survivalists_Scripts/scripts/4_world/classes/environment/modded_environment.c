modded class Environment
{
  bool m_HasRadioactiveFuel;
  bool m_HasComfortHeatSource;

  protected ref SRP_BioFlowerManager m_BioFlowerManager;

  override void Init(PlayerBase pPlayer)
	{
    super.Init(pPlayer);

    SRPConfig config;
    if (Class.CastTo(config, GetDayZGame().GetSRPConfigGlobal()))
      m_BioFlowerManager = config.g_BioFlowerManager;    
  }

  override protected void ProcessTemperatureSources()
	{
    super.ProcessTemperatureSources();
    
    m_HasRadioactiveFuel = false;
    m_HasComfortHeatSource = false;
    // get temperature from the source (based on distance), save it for min/max filtering
		for (int i = 0; i < m_UTemperatureSources.Count(); i++)
		{
      if (m_UTemperatureSources[i] && m_UTemperatureSources[i].IsRadioactiveSource())
      {
        m_HasRadioactiveFuel = true;
      }
      if (m_UTemperatureSources[i] && m_UTemperatureSources[i].IsComfortHeatSource())
      {
        m_HasComfortHeatSource = true;
      }
		}
	}

  override void Update(float pDelta)
	{
    super.Update(pDelta);
    if (m_Player)
    {
      // Print("[Environment] After super " + m_HasComfortHeatSource);
      m_Player.SetIsNearComfortHeatSource(m_HasComfortHeatSource);
    }

		if (m_Player && m_HasRadioactiveFuel)
		{
      // Print("[Environment] is radioactive fueld");
      bool isBoosted = false;
      EntityAI attachment;
      if (Class.CastTo(attachment, m_Player.GetInventory().FindAttachment(InventorySlots.ARMBAND)))
      {
        if (attachment.GetType() == "Skylar_BioZone_Protection" || attachment.GetType() == "Sneakers_Skylar_Biozone")
        {
          isBoosted = true;
        }
      }
      if (Class.CastTo(attachment, m_Player.GetInventory().FindAttachment(InventorySlots.FEET)))
      {
        if (attachment.GetType() == "Sneakers_Skylar_Biozone")
        {
          isBoosted = true;
        }
      }
      if (m_Player.IsPlayerMutant() || isBoosted)
      {
        float multiplier = 0.2;
        SRP_BioFlowerInfo flower;
        if (Class.CastTo(flower, m_BioFlowerManager.GetBioFlowerInfoByPosition(m_Player.GetPosition())))
        {
          if (flower && flower.GetFlowerEnergy() > 0)
          {
            multiplier += (( flower.GetFlowerEnergy() / 50 ) + 0.1);
          }
        }          
        m_Player.GetStatEnergy().Add(pDelta * (PlayerConstants.DIGESTION_SPEED + multiplier));
        m_Player.GetStatWater().Add(pDelta * (PlayerConstants.DIGESTION_SPEED + multiplier));
        // Print("Adding food in environment: " + multiplier);
      }
      else
      {
        m_Player.GetStatWater().Add(-0.5 * pDelta);
        m_Player.GetStatEnergy().Add(-0.5 * pDelta);
        m_Player.AddHealth("","Blood", -0.7 * pDelta );
      }
    }
  }
};
