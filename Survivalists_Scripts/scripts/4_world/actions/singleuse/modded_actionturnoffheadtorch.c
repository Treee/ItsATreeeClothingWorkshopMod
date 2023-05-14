




modded class ActionTurnOffWhileInHands
{
    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    if (super.ActionCondition(player, target, item))
      return true;
    
    Print("turn on condition start");
		ItemBase lightSource;
    if (!Class.CastTo(lightSource, target.GetObject()))
      return false;
    Print(string.Format("target: %1, em?: %2 canswitch?: %3, canWork?: %4", lightSource.GetType(), lightSource.HasEnergyManager(), lightSource.GetCompEM().CanSwitchOn(), lightSource.GetCompEM().CanWork()));
    
    return false;
  }
};


modded class ActionTurnOnWhileInHands
{
  override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
    Print("turn on");
    if (super.ActionCondition(player, target, item))
      return true;
    
    Print("turn on condition start");
		ItemBase lightSource;
    if (!Class.CastTo(lightSource, target.GetObject()))
      return false;
    Print(string.Format("target: %1, em?: %2 canswitch?: %3, canWork?: %4", lightSource.GetType(), lightSource.HasEnergyManager(), lightSource.GetCompEM().CanSwitchOn(), lightSource.GetCompEM().CanWork()));
    
    return false;
  }
};





// modded class ActionTurnOffHeadtorch
// {
//   override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
// 	{
//     if (super.ActionCondition(player, target, item))
//       return true;

// 		ItemBase lightSource;
//     if (!Class.CastTo(lightSource, target.GetObject()))
//       return false;

//     if ( lightSource.HasEnergyManager() && lightSource.GetCompEM().CanSwitchOff() )
//       return true;
// 		return false;
// 	}

// 	override void Start( ActionData action_data )
// 	{
// 		super.Start( action_data );
    
//     Headtorch_ColorBase headtorch;
//     if (Class.CastTo(headtorch, action_data.m_Target.GetObject()))
//       return; //short circuit the super stuff		ItemBase lightSource;
		
//     ItemBase lightSource;
//     if (Class.CastTo(lightSource, action_data.m_Target.GetObject()))
//     {
//       if ( lightSource.HasEnergyManager() )
//       {
//         if ( lightSource.GetCompEM().IsSwitchedOn() )
//         {
//           lightSource.GetCompEM().SwitchOff();
//         }
//       }
//     }
// 	}
// };

// modded class ActionTurnOnHeadtorch
// {
//   override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
// 	{
//     if (super.ActionCondition(player, target, item))
//       return true;
    
//     Print("turn on condition start");
// 		ItemBase lightSource;
//     if (!Class.CastTo(lightSource, target.GetObject()))
//       return false;
//     Print(string.Format("target: %1, em?: %2 canswitch?: %3, canWork?: %4", lightSource.GetType(), lightSource.HasEnergyManager(), lightSource.GetCompEM().CanSwitchOn(), lightSource.GetCompEM().CanWork()));
// 		if ( lightSource.HasEnergyManager() && lightSource.GetCompEM().CanSwitchOn() && lightSource.GetCompEM().CanWork() )
//       return true;
// 		return false;
// 	}

// 	override void Start( ActionData action_data )
// 	{
// 		super.Start( action_data );
		
// 		Headtorch_ColorBase headtorch;
//     if (Class.CastTo(headtorch, action_data.m_Target.GetObject()))
//       return; //short circuit the super stuff
		
//     ItemBase lightSource;
//     if (Class.CastTo(lightSource, action_data.m_Target.GetObject()))
//     {
//       if ( lightSource.HasEnergyManager() )
//       {
//         if ( lightSource.GetCompEM().CanWork() )
//         {
//           lightSource.GetCompEM().SwitchOn();
//         }
//       }
//     }
// 	}
// };