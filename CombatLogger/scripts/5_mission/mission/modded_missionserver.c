modded class MissionServer
{
  override void InvokeOnDisconnect( PlayerBase player )
  {
    if (player && player.m_AdminLog)
    {
      player.m_AdminLog.LogPrint(string.Format("[COMBAT LOGGER] - SteamdID: (%1) ID: (%2) Name: (%3) Logged out at (%4)", player.GetIdentity().GetPlainId(),player.GetIdentity().GetId(), player.GetIdentity().GetName(), player.GetPosition()));
    }
    super.InvokeOnDisconnect(player);
  }
};