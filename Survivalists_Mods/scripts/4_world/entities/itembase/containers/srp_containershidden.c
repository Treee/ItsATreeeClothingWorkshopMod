class SRP_HiddenStash_Base extends Inventory_Base
{
	protected bool m_IsOpened;
	
	void SRP_HiddenStash_Base()
	{
    // start not opened
		m_IsOpened = false;
		
		RegisterNetSyncVariableBool("m_IsOpened");
	}
  override void OnVariablesSynchronized()
	{
    if (IsOpen())
    {
      Open();
    }
    else 
    {
      Close();
    }
  };
	
	override void Open()
	{
		m_IsOpened = true;
    SetSynchDirty();
	}
	
	override void Close()
	{
		m_IsOpened = false;
    SetSynchDirty();
	}
		  
  override bool IsOpen()
	{
    return m_IsOpened;
	}
  
  override string GetDisplayName()
	{
    string itemName = super.GetDisplayName();
    if (IsOpen())
    {
      itemName = itemName + " Opened";
    }
		return itemName;
	}

	override bool CanPutInCargo( EntityAI parent )
	{
		if ( !super.CanPutInCargo( parent ))
			return false;

    // if there are items inside and the stash is open
		if ( GetNumberOfItems() > 0 && IsOpen() )
			return true;
    // if the stash is closed
    if ( !IsOpen() )
			return true;

		return false;
	}

  override bool CanReceiveItemIntoCargo( EntityAI item )
	{
		if ( IsOpen() )
			return super.CanReceiveItemIntoCargo( item );
		
		return false;
	}

	override bool CanReleaseCargo( EntityAI attachment )
	{
		return IsOpen();
	}

  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionOpen);
		AddAction(ActionClose);
	}
};

class SRP_HiddenStash_FoodCan extends SRP_HiddenStash_Base{};
class SRP_HiddenStash_Guts extends SRP_HiddenStash_Base{};
class SRP_HiddenStash_Teddy extends SRP_HiddenStash_Base{};


class SRP_SealPress_ColorBase extends Inventory_Base
{
  override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSRPSealLetter);
	}
};


class SRP_UnSealedLetter extends Inventory_Base
{
  override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if (attachment && (attachment.IsKindOf("Paper") || attachment.IsKindOf("WrittenNote")) )
			return super.CanReceiveAttachment( attachment, slotId );

		return false;
	}
};


class SRP_SealedLetter_ColorBase extends Inventory_Base
{ 
  override string GetDisplayName()
	{
    string itemName = super.GetDisplayName();
    if (!IsRuined())
    {
      itemName = itemName + " - Sealed";
    }
    else
    {
      itemName = itemName + " - Opened";
    }
		return itemName;
	}

	override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if (attachment && (attachment.IsKindOf("Paper") || attachment.IsKindOf("WrittenNote") || attachment.GetType() == "WrittenNote") )
			return super.CanReceiveAttachment( attachment, slotId );
		
		return false;
	}

  override bool CanDisplayAttachmentSlot( string slot_name )
	{
		return IsRuined();
	}

};
class SRP_SealedLetter_Black extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Blue extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Brown extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Green extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Pink extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Red extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_White extends SRP_SealedLetter_ColorBase{};
class SRP_SealedLetter_Yellow extends SRP_SealedLetter_ColorBase{};
