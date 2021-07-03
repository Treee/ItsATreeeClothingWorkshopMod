modded class ActionSawPlanksCB
{	
	float GetDefaultTime()
	{
		string item_type = m_ActionData.m_MainItem.GetType();
		
		switch(item_type)
		{
			case "Hacksaw": 
				return TIME_SAW_HACKSAW;
			break;
		
			case "HandSaw": 
				return TIME_SAW_HANDSAW;
			break;
			
			case "Crowbar": 
				return TIME_SAW_HANDSAW;
			break;
		
			default: // axes
				return TIME_AXES;
			break
		}
		Print("ActionSawPlanksCB | Item detection error, assigning negative time");
		return -1;
	}
};

modded class ActionSkinning
{
  override void OnFinishProgressServer(ActionData action_data)
  {
    super.OnFinishProgressServer(action_data);
    if (action_data.m_Target) 
    {
      EntityAI body;
      Class.CastTo(body, action_data.m_Target.GetObject());
      
      if (body.IsKindOf("SurvivorBase") && Math.RandomIntInclusive(0, 100) > 70)
      {
        ItemBase added_item;
        vector pos_rnd = body.GetPosition() + Vector(Math.RandomFloat01() - 0.5, 0, Math.RandomFloat01() - 0.5);
        Class.CastTo(added_item, GetGame().CreateObject("brain_Mung", pos_rnd, false));
        added_item.PlaceOnSurface();
      }
    }
  }
}