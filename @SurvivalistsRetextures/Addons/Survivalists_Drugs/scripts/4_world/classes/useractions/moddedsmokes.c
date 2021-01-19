modded class ActionSmoke: ActionContinuousBase
{
	override void OnFinishProgressServer( ActionData action_data )
	{	
    action_data.m_MainItem.AddQuantity(-1);
	}
};