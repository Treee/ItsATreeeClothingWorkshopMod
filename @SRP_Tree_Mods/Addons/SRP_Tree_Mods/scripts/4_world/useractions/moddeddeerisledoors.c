// override this class to remove the print statements. No need for this.
modded class ActionOpenSecurityDoor
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target || !player) return false;
		if( !IsBuilding(target) ) return false;

		Jmc_Security_Door door;
		Jmc_Keycard card;
		EntityAI handsItem = player.GetItemInHands();
		// Print("Item in hands: " + handsItem);
		if( Class.CastTo(door, target.GetObject()) && Class.CastTo(card, handsItem))
		{
			Print("Item Cast ok. Health: " + card.GetHealth("", "") + " Destroyed: " + card.IsDamageDestroyed());
			if(card.IsDamageDestroyed())
				return false;
			Print("KeyCard OK");
			if (GetGame().IsServer() && GetGame().IsMultiplayer())
				return true;
			string name = door.GetActionComponentName(target.GetComponentIndex());
			name.ToLower();
			if (name == "component05" || name == "component06")
				return ( !door.IsSecDoorOpen() && door.CanChangeDoorState());
		}
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
		Jmc_Security_Door door;
		Jmc_Keycard card;
		EntityAI handsItem = action_data.m_Player.GetItemInHands();
		// Print("Item in hands: " + handsItem);
		if( Class.CastTo(door, action_data.m_Target.GetObject()) && Class.CastTo(card, handsItem))
		{
			card.AddHealth("", "", 0 - GetSecurityConfig().key_card_damage_on_use);
			door.StartOpenDoors();
		}
	}
};