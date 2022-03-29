class SRP_MinerHelmet extends Headtorch_ColorBase
{
  void SRP_MinerHelmet() 
  {
    // these id's correspond with the selections on the miner helmet. first item starts at index 0.
    REFLECTOR_ID = 3;
    GLASS_ID = 4;
  }
};


class SRP_Goggles_Head extends Clothing
{
	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionPutGogglesOnFace);
	}
};

class SRP_Goggles_Face extends Clothing
{
	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionPutGogglesOnHead);
	}
};

class BaseballCap_MilitaryPatrolTan extends BaseballCap_ColorBase 
{
  	// !Called on CHILD when it's attached to parent.
	override void OnWasAttached( EntityAI parent, int slot_id ) 
  {
    EntityAI slotItem = FindAttachmentBySlotName("SRP_Comtacs");      
    if (slotItem)
    {
      PlayerBase player;
      // Print("BaseballCap_MilitaryPatrolTan::OnWasAttached: " + parent + " slot_id: " + slot_id + " heirarchy: " + player);
      if (Class.CastTo(player, parent.GetHierarchyRoot()))
      {
        player.SendMessageToClient( player, "Ear Protection On" );
        GetGame().GetSoundScene().SetSoundVolume(0.3,1);        
      }
    }
  }		
	// !Called on CHILD when it's detached from parent.
	override void OnWasDetached( EntityAI parent, int slot_id ) 
  { 
    EntityAI slotItem = FindAttachmentBySlotName("SRP_Comtacs");      
    if (slotItem)
    {
      PlayerBase player;
      // Print("SRP_Comtacs_ColorBase::OnWasDetached: " + parent + " slot_id: " + slot_id + " heirarchy: " + player);
      if (Class.CastTo(player, parent.GetHierarchyRoot()))
      {
        player.SendMessageToClient( player, "Ear Protection Off" );
        GetGame().GetSoundScene().SetSoundVolume(1,1);
      }
    }
  }

  override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionFlipCapBackward);
	}
};

class BaseballCap_MilitaryPatrolTan_Backwards extends BaseballCap_ColorBase
{
  override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionFlipCapForward);
	}
};


class SRP_SlimHelmetFull: Mich2001Helmet{};

class SRP_SlimHelmetFull_Kain extends SRP_SlimHelmetFull{};


class SRP_Comtacs_ColorBase extends BalaclavaMask_ColorBase
{
	// !Called on CHILD when it's attached to parent.
	override void OnWasAttached( EntityAI parent, int slot_id ) 
  {
    PlayerBase player;
    // Print("SRP_Comtacs_ColorBase::OnWasAttached: " + parent + " slot_id: " + slot_id + " heirarchy: " + player);
    if (Class.CastTo(player, parent.GetHierarchyRoot()))
    {
      player.SendMessageToClient( player, "Ear Protection On" );
      GetGame().GetSoundScene().SetSoundVolume(0.3,1);
    }
  }		
	// !Called on CHILD when it's detached from parent.
	override void OnWasDetached( EntityAI parent, int slot_id ) 
  { 
    PlayerBase player;
    // Print("SRP_Comtacs_ColorBase::OnWasDetached: " + parent + " slot_id: " + slot_id + " heirarchy: " + player);
    if (Class.CastTo(player, parent.GetHierarchyRoot()))
    {
      player.SendMessageToClient( player, "Ear Protection Off" );
      GetGame().GetSoundScene().SetSoundVolume(1,1);
    }
  }
};

class SRP_EarProtection_ColorBase extends SRP_Comtacs_ColorBase {};
