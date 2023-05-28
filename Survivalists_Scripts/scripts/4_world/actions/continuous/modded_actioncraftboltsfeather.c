modded class ActionCraftBoltsFeather
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (IsFeatherType(item.ClassName()))
		{
      if (item.GetQuantity() < 3)
        return false;
			//feather in hands
			if (target.GetObject())
				return (target.GetObject().ClassName() == "Ammo_ImprovisedBolt_1");
		}
		else if (target.GetObject())
		{
      ItemBase feather;
      if (Class.CastTo(feather, target.GetObject()))
        if (feather.GetQuantity() < 3)
          return false;

			// bolt in hands
			return IsFeatherType(target.GetObject().ClassName());
		}
		return false;
	}

	override void OnFinishProgressServer(ActionData action_data)
	{
    super.OnFinishProgressServer(action_data);
    ItemBase feather;
		if (m_IsFeatherInHands)
		{
			//feather in hands
			feather = action_data.m_MainItem;
		  feather.AddQuantity(-1);	// 1 minus total since base game already removes 1		
		}
    else
    {
      if (Class.CastTo(feather, action_data.m_Target.GetObject()))
        feather.AddQuantity(-1);
    }
	}
};
