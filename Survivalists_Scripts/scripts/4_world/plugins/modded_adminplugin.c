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
};