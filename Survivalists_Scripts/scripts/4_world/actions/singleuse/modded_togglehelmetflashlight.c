modded class ActionTurnOffHelmetFlashlight
{
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (super.ActionCondition(player, target, item))
      return true;

		Switchable_Base light;
		HelmetBase helmet;
		if (!Class.CastTo(helmet, target.GetObject()))
			return false;
		if (!Class.CastTo(light, helmet.FindAttachmentBySlotName("helmetFlashlight")))
			return false;
		
		if ( light.HasEnergyManager() && light.GetCompEM().CanSwitchOff() ) //TODO review conditions for turning off
			return true;
		
		return false;
	}

	override void Start( ActionData action_data )
	{
		super.Start( action_data );
		
		Mich2001Helmet michhelmet;
    if (Class.CastTo(michhelmet, action_data.m_Target.GetObject()))
      return; // short circuit super stuff
		
		Switchable_Base light;
		HelmetBase helmet;
		if (Class.CastTo(helmet, action_data.m_Target.GetObject()))
    {
  		if (Class.CastTo(light, helmet.FindAttachmentBySlotName("helmetFlashlight")))
      {
        if ( light.HasEnergyManager() )
        {
          if ( light.GetCompEM().IsSwitchedOn() )
          {
            light.GetCompEM().SwitchOff();
          }
        }
      }
    }
	}
};

modded class ActionTurnOnHelmetFlashlight
{
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (super.ActionCondition(player, target, item))
      return true;

		Switchable_Base light;
		HelmetBase helmet;
		if (!Class.CastTo(helmet, target.GetObject()))
			return false;
		if (!Class.CastTo(light, helmet.FindAttachmentBySlotName("helmetFlashlight")))
			return false;
		
		if ( light.HasEnergyManager() && light.GetCompEM().CanSwitchOn() && light.GetCompEM().CanWork() ) //TODO review conditions for turning off
			return true;
		
		return false;
	}

	override void Start( ActionData action_data )
	{
		super.Start( action_data );
		
		Mich2001Helmet michhelmet;
    if (Class.CastTo(michhelmet, action_data.m_Target.GetObject()))
      return; // short circuit super stuff
		
		Switchable_Base light;
		HelmetBase helmet;
		if (Class.CastTo(helmet, action_data.m_Target.GetObject()))
    {
  		if (Class.CastTo(light, helmet.FindAttachmentBySlotName("helmetFlashlight")))
      {
        if ( light.HasEnergyManager() )
        {
          if ( light.GetCompEM().CanWork() )
          {
            light.GetCompEM().SwitchOn();
          }
        }
      }
    }
	}
};