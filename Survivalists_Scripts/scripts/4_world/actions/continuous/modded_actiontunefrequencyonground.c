modded class ActionTuneFrequencyOnGround
{
	override void OnActionInfoUpdate( PlayerBase player, ActionTarget target, ItemBase item )
	{
    StaticTransmitter transmitter;
    if (Class.CastTo(transmitter, target.GetObject()))
    {      
		  m_Text = string.Format("#tune_frequency | %1 MHz", transmitter.GetTunedFrequency().ToString());
    }
	}
		
	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{
    StaticTransmitter transmitter;
    if (Class.CastTo(transmitter, target.GetObject()))
    {      
		  string selection = transmitter.GetActionComponentName( target.GetComponentIndex() );
      if ( transmitter.GetCompEM().IsWorking() && selection == "control_panel" )
      {
        return true;
      }
    }				
		return false;
	}
		
	override void OnExecuteServer( ActionData action_data )
	{
    SRP_PersonalRadio_Terminal transmitter;
    if (Class.CastTo(transmitter, action_data.m_Target.GetObject()))
    {
		  transmitter.SetNextFrequency( action_data.m_Player );
    }
    else
    {
      super.OnExecuteServer(action_data);
    }
	}
};
