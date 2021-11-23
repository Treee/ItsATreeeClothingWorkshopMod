modded class ActionUseBBPObjectSingle: ActionSingleUseBase
{
	override string GetText()
	{
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if ( player )
		{
			ActionManagerBase actmgr = player.GetActionManager();
			Object targetObject = actmgr.FindActionTarget().GetObject();
			BBP_Chair_Base bbpchair = BBP_Chair_Base.Cast( targetObject );
			//BBP_Bed bbpbed = BBP_Bed.Cast( targetObject );
			
			if ( bbpchair )
			{
				return "Sit";
			}
			/*
			if ( bbpbed )
			{
				return "Sleep";
			}*/
		}
		
		return "Use Single";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		BBP_Chair_Base bbpchair = BBP_Chair_Base.Cast( targetObject );
		//BBP_Bed bbpbed = BBP_Bed.Cast( targetObject );
		if ( targetObject )
		{
			if ( bbpchair )
			{
				if ( bbpchair.HasProperDistanceBBP( "center", player ) )
				{
					return true;
				}
			}
			/*if ( bbpbed )
			{
				if ( bbpbed.HasProperDistanceBBP( "center", player ) )
				{
					return true;
				}
			}*/
		}
		return false;
	}
	protected void SetAnimation( ActionTarget target )
	{
		Object targetObject = target.GetObject();
		BBP_Chair_Base bbpchair = BBP_Chair_Base.Cast( targetObject );
		BBP_Bed bbpbed = BBP_Bed.Cast( targetObject );
		
		switch( targetObject )
		{
			case bbpchair:
				m_CommandUID = DayZPlayerConstants.CMD_GESTUREFB_SITA;
				break;
			//case bbpbed:
			//	m_CommandUID = DayZPlayerConstants.CMD_GESTUREFB_LYINGDOWN;
			//	break;
			default:
				m_CommandUID = DayZPlayerConstants.CMD_GESTUREFB_SHRUG;
				break;
		}
	}
}