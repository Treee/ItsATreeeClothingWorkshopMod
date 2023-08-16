modded class ActionOpenSecurityDoor
{
	override void OnStartServer( ActionData action_data )
	{
    super.OnStartServer(action_data);

    PluginAdminLog m_AdminLog;
    if (Class.CastTo(m_AdminLog, GetPlugin(PluginAdminLog)))
    {
      PlayerBase player;
      if (Class.CastTo(player, action_data.m_Player))
      {
        ItemBase card;
        if (Class.CastTo(card, player.GetItemInHands()))
        {
          m_AdminLog.DirectAdminLogPrint("||BUNKER DOOR STATE CHANGE||");
          m_AdminLog.OnPlacementComplete( player, card);
        }
      }
    }
  }
};

modded class ActionOpenCarrierSecurityDoor
{
  override void OnStartServer( ActionData action_data )
	{
    super.OnStartServer(action_data);
    PluginAdminLog m_AdminLog;
    if (Class.CastTo(m_AdminLog, GetPlugin(PluginAdminLog)))
    {
      PlayerBase player;
      if (Class.CastTo(player, action_data.m_Player))
      {
        ItemBase card;
        if (Class.CastTo(card, player.GetItemInHands()))
        {
          m_AdminLog.DirectAdminLogPrint("||CARRIER DOOR STATE CHANGE||");
          m_AdminLog.OnPlacementComplete( player, card);
        }
      }
    }
	}
};