modded class PluginAdminLog
{
	protected int m_RecipeLogFilter = 0;

  void PluginAdminLog()
	{
		m_RecipeLogFilter = GetGame().ServerConfigGetInt("adminLogRecipeCrafts");  //  1 - log recipes crafted / 0 - no logs
	}
	void OnSRPRecipeCraft( Man player, ItemBase item ) // ItemBase.c
	{
		if ( m_RecipeLogFilter == 1 )
		{		
			m_Source = PlayerBase.Cast( player ); 
			m_PlayerPrefix = this.GetPlayerPrefix( m_Source , m_Source.GetIdentity() );		
			m_DisplayName = item.GetDisplayName();
			
			if ( m_DisplayName == "" )
			{
				LogPrint(string.Format("%1 crafted unknown object", m_PlayerPrefix));
			} 
			else
			{
				LogPrint(string.Format("%1 crafted %2 || Class Name %3", m_PlayerPrefix, m_DisplayName, item.GetType()));
			}
		}
	}

  override void PlayerKilled( PlayerBase player, Object source ) 
  {
    super.PlayerKilled(player, source);
    if (GetGame().IsDedicatedServer())
    {
      if (player && source)
      {
        if( player == source )	// deaths not caused by another object (starvation, dehydration)
        {
          float tox = player.GetStatToxicity().Get();
          float tempComfort = player.GetStatHeatComfort().Get();
          float tremor = player.GetStatTremor().Get();
          int wetness = player.GetStatWet().Get();
          float diet = player.GetStatDiet().Get();
          int bloodtype = player.GetStatBloodType().Get();
          string blood_type_name, blood_name;
          bool positive;
          blood_type_name = BloodTypes.GetBloodTypeName( bloodtype, blood_name, positive );
          float heatbuffer = player.GetStatHeatBuffer().Get();
          LogPrint(string.Format("Player EXTRA STATS || Tox:%1 HeatComfort:%2 Tremor:%3 Wetness:%4 Diet:%5 BloodType:%6 %7 Heatbuffer:%8", tox, tempComfort, tremor, wetness,diet,blood_type_name,positive,heatbuffer));
          LogPrint(player.GetSymptomManager().LogSymptomsOnPlayer())
        }
      }
    }
  }
};