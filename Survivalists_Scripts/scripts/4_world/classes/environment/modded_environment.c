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
            if (!m_Player.IsPlayerMutant() || isBoosted)
            {
                m_Player.GetStatWater().Add(-0.5 * pDelta);
                m_Player.GetStatEnergy().Add(-0.5 * pDelta);
                m_Player.AddHealth("","Blood", -0.7 * pDelta );
            }
        }
    }
};
