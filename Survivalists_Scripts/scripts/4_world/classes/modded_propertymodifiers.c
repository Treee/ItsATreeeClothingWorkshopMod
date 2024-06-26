modded class PropertyModifiers
{
    override void UpdateModifiers()
	{
        super.UpdateModifiers();
        if (m_OwnerItem && m_OwnerItem.IsGunClean())
        {
            m_SwayModifiers[0] = m_SwayModifiers[0] * 0.05;
            m_SwayModifiers[1] = m_SwayModifiers[1] * 0.05;
            m_SwayModifiers[2] = m_SwayModifiers[2] * 0.05;

            m_RecoilModifiers[0] = m_RecoilModifiers[0] * 0.95;
			m_RecoilModifiers[1] = m_RecoilModifiers[1] * 0.95;
			m_RecoilModifiers[2] = m_RecoilModifiers[2] * 0.95;
        }
	}
};