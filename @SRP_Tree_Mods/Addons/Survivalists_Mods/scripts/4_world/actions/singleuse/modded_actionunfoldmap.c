modded class ActionUnfoldMapCB
{
	override void PerformMapChange()
	{
		if (m_ActionData.m_Player.IsSwimming() || m_ActionData.m_Player.IsFalling() || m_ActionData.m_Player.IsClimbingLadder() || m_ActionData.m_Player.IsUnconscious() || m_ActionData.m_Player.IsRestrained())
    {
      return;
    }
    if ( m_CancelCondition ) { return; }

		ItemMap chernomap = ItemMap.Cast(m_ActionData.m_Player.GetItemInHands());
		if (chernomap && !m_ActionData.m_Player.IsMapOpen())
		{
			chernomap.SetMapStateOpen(true,m_ActionData.m_Player);
      m_MapFolding = false;
		}
	}
};
