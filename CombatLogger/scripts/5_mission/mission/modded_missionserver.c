modded class MissionServer
{
  override void InvokeOnDisconnect( PlayerBase player )
  {
    if (player)
    {
      player.m_AdminLog.LogPrint(string.Format("%1 (%2) Logged out at %3", player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), player.GetPosition()));
    }
    super.InvokeOnDisconnect(player);
  }
};