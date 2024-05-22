class SRP_ActionKnockOnDoor: ActionInteractBase
{
	void SRP_ActionKnockOnDoor()
	{
		m_CommandUID 	= DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask 	= DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_Text 			= "Knock on Door";
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem 	= new CCINone();
		m_ConditionTarget 	= new CCTCursor();
	}

	protected bool CheckIfDoorIsLocked()
	{
		return true;
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		if (!target)
			return false;

		if (!IsBuilding(target))
			return false;

		Building building;
		if (Class.CastTo(building, target.GetObject()))
		{
			int doorIndex = building.GetDoorIndex(target.GetComponentIndex());
			if (doorIndex != -1)
			{
				if (!IsInReach(player, target, UAMaxDistances.DEFAULT))
					return false;

				return building.CanDoorBeOpened(doorIndex, CheckIfDoorIsLocked());

			}
		}

		return false;
	}

	override void OnStartServer(ActionData action_data)
	{
        Param3<bool, vector, int> playSound = new Param3<bool, vector, int>(true, action_data.m_Target.GetObject().GetPosition(), GetSoundSet().Hash());
		GetGame().RPCSingleParam( null, ERPCs.RPC_SOUND_HELICRASH, playSound, true );
	}

    string GetSoundSet()
    {
        return DoorKnockSounds().GetRandomElement();
    }

    // if you add more make sure you register the sounds in playerbase
    TStringArray DoorKnockSounds()
    {
        return {
            "SRP_Door_DoorKnock1_SoundSet1",
            "SRP_Door_DoorKnock2_SoundSet1",
            "SRP_Door_DoorKnock3_SoundSet1",
        };
    }
};