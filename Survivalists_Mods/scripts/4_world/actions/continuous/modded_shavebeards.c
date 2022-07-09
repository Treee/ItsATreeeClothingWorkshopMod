modded class ActionShave
{
	override void OnFinishProgressServer( ActionData action_data )
	{	
    if (action_data.m_Player)
    {
      ItemBase newItem;
      if (action_data.m_Player.GetLifeSpanState() == 1)
      {
        newItem = ItemBase.Cast(GetGame().CreateObjectEx("SRP_FacialHairGoatee_Brown", action_data.m_Player.GetPosition(), false));
      }
      else if (action_data.m_Player.GetLifeSpanState() == 2)
      {
        newItem = ItemBase.Cast(GetGame().CreateObjectEx("SRP_FacialHairChops_Brown", action_data.m_Player.GetPosition(), false));
      }
      else if (action_data.m_Player.GetLifeSpanState() == 3)
      {
        newItem = ItemBase.Cast(GetGame().CreateObjectEx("SRP_FacialHairBeard_Brown", action_data.m_Player.GetPosition(), false));
      }
    }
    super.OnFinishProgressServer(action_data);
	}
};

modded class ActionShaveTarget
{
	override void OnFinishProgressServer( ActionData action_data )
	{	
    PlayerBase man;
		if ( action_data.m_Target && Class.CastTo(man, action_data.m_Target.GetObject()) )
		{
      ItemBase newItem;
      if (man.GetLifeSpanState() == 1)
      {
        newItem = ItemBase.Cast(GetGame().CreateObjectEx("SRP_FacialHairGoatee_Brown", man.GetPosition(), false));
      }
      else if (man.GetLifeSpanState() == 2)
      {
        newItem = ItemBase.Cast(GetGame().CreateObjectEx("SRP_FacialHairChops_Brown", man.GetPosition(), false));
      }
      else if (man.GetLifeSpanState() == 3)
      {
        newItem = ItemBase.Cast(GetGame().CreateObjectEx("SRP_FacialHairBeard_Brown", man.GetPosition(), false));
      }
    }
    super.OnFinishProgressServer(action_data);
	}
};