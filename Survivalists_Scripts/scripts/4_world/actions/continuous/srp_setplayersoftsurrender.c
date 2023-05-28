modded class UAMaxDistances
{
	const float SOFT_SURRENDER = 1.0;
};

modded class ActionSearchPlayerAtWall
{
  override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    m_Text = "#SA_search";
    PlayerBase target_player;
    if (Class.CastTo(target_player, target.GetObject()))
    {
      if (target_player.IsSurrendered())
        m_Text = "#SA_search - Inspect";
    }
	}

  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (!super.ActionCondition(player, target, item))
      return false;

    PlayerBase target_player;
    if (Class.CastTo(target_player, target.GetObject()))      
      return !target_player.IsRestrained();

		return false;	
	}


	override void OnFinishProgressServer( ActionData action_data )
	{	
		PlayerBase target;
		if (Class.CastTo(target, action_data.m_Target.GetObject()))
    {
      if (target.IsSurrendered())
      {
        target.SetIsSoftSurrendered(true);
        target.AutoCloseSoftSurrender();
      }
    }		
    super.OnFinishProgressServer(action_data);
	}
};