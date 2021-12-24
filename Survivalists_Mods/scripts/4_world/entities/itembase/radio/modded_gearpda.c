modded class ActionOpenPDA
{
  //consume more energy since the base is 0.1.... which lends to 2000 open/closes. we want more around 50
  override void OnExecuteClient( ActionData action_data )
	{	
    super.OnExecuteClient(action_data);
    action_data.m_MainItem.GetCompEM().ConsumeEnergy(0.4);
	}

	override void OnExecuteServer( ActionData action_data )
	{
    super.OnExecuteServer(action_data);
    action_data.m_MainItem.GetCompEM().ConsumeEnergy(0.4);
	}
};