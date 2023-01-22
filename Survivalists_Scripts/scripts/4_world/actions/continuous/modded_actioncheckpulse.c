modded class ActionCheckPulse
{
  override void OnExecuteServer( ActionData action_data )
	{
    super.OnExecuteServer(action_data);
		PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
		if(ntarget)
		{
      string playerStats = "";
      string s = ntarget.GetBleedingManagerServer().GetBleedingSourcesString();
      if (s != "")      
        playerStats += string.Format("Blood is coming from the %1.", s);

      s = GetStatString(action_data.m_Player.GetStatLevelEnergy(),"Hungry");
      if (s != "")
        playerStats += string.Format("%1.", s);

      s = GetStatString(action_data.m_Player.GetStatLevelWater(),"Thirsty");
      if (s != "")
        playerStats += string.Format("%1.", s);

      if (s != "")      
        SendMessageToClient( action_data.m_Player, playerStats );
		}
	}

  string GetStatString(int level, string stat)
  {
    string value = "";
    if (level < 2)
    {
      value = string.Format("They do not look %1", stat);
    }
    else if (level == 2)
    {
      value = string.Format("They look a bit %1", stat);
    }
    else if (level == 3)
    {
      value = string.Format("They look %1", stat);
    }
    else if(level == 4)
    {
      value = string.Format("They look very %1", stat);
    }
    return value;
  }  
};
